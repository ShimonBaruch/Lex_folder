%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "symbol_table.h"

extern SymbolTable* table;
extern int yylineno; // לשימוש בדיבאג


typedef struct node {
    char *token;
    struct node *left;
    struct node *right;
} node;

node* create_string_node(char *str);

node* mknode(char *token, node *left, node *right);
void Printtree(node *tree);
void printTabs(int n);
int yylex();
extern int yylineno;
extern char *yytext;
void yyerror(char *e);
int printlevel = 0;
extern int yydebug;

void debug_print(const char* msg) {
    printf("Debug (line %d): %s\n", yylineno, msg);
}
%}



%union {
    struct node *node;
    char *string;
}

%token <string> COMMENT WHILE DO IF ELSE FOR 
%token <string> RETURN ARGS
%token <string> BOOL STRING CHARPTR CHAR INT DOUBLE FLOAT DOUBPTR INTPTR 
%token <string> AND ADDRESS EQL ASSINGMENT ASS OR LENGTH GREATEREQL GREATER LESSEQL LESS NOTEQL NOT
%token <string> DIVISION PLUS MINUS MULTI VARIABLE
%token <string> STRING_LTL REAL_LTL CHAR_LTL NULLL
%token <string> MAIN IDENTIFIER ';' ',' '(' ')' '[' ']' '{' '}'
%token <string> VOID PUBLIC PRIVATE STATIC 
%token <string> INT_LTL DECIMAL_LTL HEX_LTL FLOAT_LTL BOOLTRUE BOOLFALSE REAL FLOATPTR FUNCTION COLON  DEREFRENCE 

%left PLUS MINUS RETURN
%left MULTI DIVISION
%left EQL NOTEQL LESS LESSEQL GREATEREQL GREATER OR AND
%left ';' 
%right NOT '}'

%nonassoc IDENTIFIER 
%nonassoc '('
%nonassoc IF
%nonassoc ELSE

%type <node> address_expr address_exprs statements statement_block derefrence_expr expression_list function_call 
%type <node> expr lhs assignment_statement code_block 
%type <node> statement type_function type_id var_id declare paren_expression
%type <node> function_body parameter_list parameter_type function multi_function
%type <node> main program project declarations return_value
%type <node> cmmnt function_access_level params_list arguments array_var string_exp multi_string_exp static_function
%%
project: cmmnt program { Printtree($2); 
	debug_print("Completed project parsing");
	printf("syntax valid\n"); };


program: multi_function main { $$=mknode("CODE",$1,$2); };

main: PUBLIC type_function MAIN '(' ')' ':' STATIC '{' function_body '}' 
{ 
    debug_print("Entered main function");
    Symbol *current_symbol = table->currentScope->symbols;  // קבלת המשתנים מהסקופ הנוכחי
    while (current_symbol != NULL) {
    	printf("Variable: %s, Type: %s\n", current_symbol->name, current_symbol->type);
    	current_symbol = current_symbol->next;  // מעבר למשתנה הבא
    }
    enter_scope(table);  // יצירת סקופ חדש
    $$ = mknode("public", mknode("Main", $7, NULL), mknode("BODY", NULL, $9));

    exit_scope(table);  // יציאה מסקופ
} 

| { $$=NULL; };

multi_function: function multi_function { $$=mknode("",$1,$2); }
| { $$=NULL; };

// פונקציה לעיבוד פונקציה והוספת פרמטרים לטבלת הסמלים
function: function_access_level type_function IDENTIFIER '(' parameter_list ')' static_function '{' function_body '}' 
{  
    if(find_symbol(table, $3) != NULL) {
        yyerror("Duplicate function name in the same scope");
    } else {
        add_symbol(table, $3, $2->token); // הוספת הפונקציה עצמה לטבלת הסמלים
    }
    enter_scope(table);  // יצירת סקופ חדש
    

    // הוספת כל פרמטר מהפונקציה לטבלת הסמלים
    node *params = $5;
    while (params != NULL) {
        if (params->left != NULL) {
            //add_symbol(table, params->left->token, params->token); // הוספת הפרמטר לטבלה
        }
        params = params->right;
    }

    // הצגת כל הפרמטרים והמשתנים בסקופ הנוכחי
    /* Symbol *current_symbol = table->currentScope->symbols;
     while (current_symbol != NULL) {
        printf("Variable: %s, Type: %s\n", current_symbol->name, current_symbol->type);
        current_symbol = current_symbol->next;
    }
    */
    
    $$ = mknode("function", mknode($3, mknode("\n", $7, NULL), mknode("\n", $1, mknode("\n", $5, mknode("return", $2, NULL)))), mknode("", $9, NULL)); 

    exit_scope(table); // יציאה מסקופ 
};


function_access_level: PRIVATE { $$ = mknode("private", NULL, NULL); }
| PUBLIC { $$ = mknode("public", NULL, NULL); };

static_function: ':' STATIC { $$ = mknode("Static", NULL, NULL); }
| { $$ = mknode("Non-static", NULL, NULL); };

type_function: BOOL { $$=mknode("boolean", NULL, NULL); }
| STRING { $$=mknode("string", NULL, NULL); }
| CHAR { $$=mknode("char", NULL, NULL); }
| INT { $$=mknode("int", NULL, NULL); }
| DOUBLE { $$=mknode("double", NULL, NULL); }
| FLOAT { $$ = mknode("float", NULL, NULL); }
| INTPTR { $$=mknode("int*", NULL, NULL); }
| CHARPTR { $$=mknode("char*", NULL, NULL); }
| FLOATPTR { $$=mknode("float*", NULL, NULL); }
| DOUBPTR { $$ = mknode("double*", NULL, NULL); }
| VOID { $$ = mknode("void", NULL, NULL); };

type_id: BOOL { $$=mknode("boolean", NULL, NULL); }
| STRING { $$=mknode("string", NULL, NULL); }
| CHAR { $$=mknode("char", NULL, NULL); }
| INT 
{ 	handler(NULL, "int");
	printf("$1 = %s \n", $1);
	$$=mknode("int", NULL, NULL); }
| DOUBLE 
{	
	handler(NULL, "double");
	$$=mknode("double", NULL, NULL); }
| FLOAT 
{ 	handler(NULL, "float");
	$$ = mknode("float", NULL, NULL); }
| INTPTR { $$=mknode("int*", NULL, NULL); }
| CHARPTR { $$=mknode("char*", NULL, NULL); }
| FLOATPTR { $$=mknode("float*", NULL, NULL); }
| DOUBPTR { $$ = mknode("double*", NULL, NULL); };


parameter_list: ARGS parameter_type 
{
	/*if (count_formal_args($2) != count_actual_args($$)) {
		yyerror("Incorrect number of arguments!");
	}*/
	$$=mknode("ARGS", $2, NULL); 
}
	
| { $$=NULL; };
//list of parameter for function or not
parameter_type: type_id ':' arguments params_list 
{ $$=mknode($1->token,$1,mknode("",$3,mknode(")",NULL,$4))); }
| { $$=NULL; };

//list of parameter
params_list: params_list type_id ':' arguments 
{ $$=mknode("(",$2,mknode("",$4,mknode(")",NULL,$1))); }
| IDENTIFIER { $$ = NULL; }
| { $$ = NULL; };

arguments: IDENTIFIER ',' arguments 
{ 	handler($1, NULL);
	$$ = mknode($1, mknode(",", NULL, NULL), $3); }
| IDENTIFIER ';' 
{	handler($1, NULL);
	$$ = mknode($1, NULL, NULL); }
| IDENTIFIER 
{	handler($1, NULL);
	$$ = mknode($1, NULL,NULL); }
| { $$ = NULL; };

function_body: cmmnt declarations multi_function statements return_value
{ $$ = mknode("(", mknode("BODY", $2, NULL), mknode("\n", $3, mknode("  ", $4, mknode("  ", $5, mknode(")", NULL, NULL))))); }
| { $$ = NULL; };

cmmnt: COMMENT cmmnt { $$ = mknode("COMMENT", mknode($1, NULL, NULL), $2); }
| { $$ = NULL; };

declarations: declarations declare { $$=mknode("",$1,$2); } 
| { $$=NULL; };

//declaration of varibals/ 
declare: VARIABLE type_id ':' var_id ';' 
{
    if(find_symbol(table, $4->token) != NULL) {
        yyerror("Duplicate variable name in the same scope");
    } else {
        /* add_symbol(table, $4->token, $2->token); */ // הוספת משתנה לטבלת הסמלים
    }
    $$ = mknode("var", $2, mknode("", $4, NULL)); 
};
| STRING array_var { $$ = mknode($1, $2, NULL); };

var_id: IDENTIFIER ',' var_id { $$=mknode($1, mknode(" ", $3, NULL),NULL); }
| IDENTIFIER ASSINGMENT expr ',' var_id { $$=mknode($1, $3, NULL); }
| IDENTIFIER ASS expr ',' var_id { $$ = mknode($1, $3, NULL); }
| IDENTIFIER ASS expr { $$ = mknode("", mknode($1, NULL, NULL), NULL); }
| IDENTIFIER ASSINGMENT expr { $$ = mknode($1, $3, NULL); }
| IDENTIFIER { $$ = NULL; };

array_var: multi_string_exp IDENTIFIER '[' INT_LTL ']' ASS STRING ';' { $$ = mknode("", $1, mknode($2, mknode("[", mknode($4, NULL, NULL), mknode("]", NULL, NULL)), mknode($7, NULL, NULL))); }
| multi_string_exp IDENTIFIER '[' INT_LTL ']' ';' { $$ = mknode("", $1, mknode($2, mknode("[", mknode($4, NULL, NULL), mknode("]", NULL, NULL)),mknode("]", NULL, NULL))); };

multi_string_exp: multi_string_exp string_exp { $$ = mknode("", $1, $2); }
| { $$ = NULL; };

string_exp: IDENTIFIER '[' expr ']' ASS expr ',' { $$ = mknode($1, mknode($2, $3, mknode($4, NULL, NULL)), mknode($5, $6, NULL)); }
| IDENTIFIER '[' expr ']' ',' { $$ = mknode($1, mknode("[", $3, mknode("]", NULL, NULL)), NULL); };

statements: statement statements { $$=mknode("",$1,$2); } 
| { $$=NULL; };

statement_block: statement { $$=mknode("",$1,NULL); } 
| statement_block statement { $$=mknode("",$1,$2); } 
| RETURN expr ';' { $$=mknode("return",$2,NULL); };

statement: '(' function_body ')' { $$ = mknode("", $2, NULL); }
| IF '(' expr ')' '{' statement_block '}' 
{
   	enter_scope(table);  // יצירת סקופ חדש
	$$ = mknode("DO", mknode("(", $3, NULL), mknode("BLOCK", $6, NULL));
 
	exit_scope(table);
}	
	
| IF '(' expr ')' statement_block ELSE statement_block 
    	{
    	enter_scope(table);  // יצירת סקופ חדש
	$$ = mknode("IF-ELSE", mknode("(", $3, NULL), mknode("BLOCK", $5, mknode("BLOCK", $7, NULL)));
	
	exit_scope(table);
	
}

| IF '(' expr ')' statement_block ELSE '{' statement_block '}' 
{ 
  	enter_scope(table);  // יצירת סקופ חדש
	$$ = mknode("IF-ELSE", mknode("(", $3, NULL), mknode("BLOCK", $5, mknode("BLOCK", $9, NULL))); 
	exit_scope(table);
	
}

| IF '(' expr ')' '{' statement_block '}' ELSE '{' statement_block '}' 
{ 
  	enter_scope(table);  // יצירת סקופ חדש
	$$=mknode("IF-ELSE", mknode("", $3, mknode("",NULL,NULL)), mknode("{",$6,mknode("}", mknode("{", $10,mknode("}", NULL,NULL)),NULL))); 
	exit_scope(table);
}

| IF '(' expr ')' statement_block 
{ 
  	enter_scope(table);  // יצירת סקופ חדש
	$$=mknode("IF", mknode("(", $3, mknode(")",NULL,NULL)),$5);
	exit_scope(table);
}
	
| IF '(' expr ')' '{' statement_block '}' ELSE statement_block ';' 
{ 
   	enter_scope(table);  // יצירת סקופ חדש
	$$=mknode("IF_ELSE", mknode("(", $3, mknode(")",NULL,NULL)), mknode("",$6, mknode("", $9,NULL))); 
	exit_scope(table);
}
	
| WHILE cmmnt '(' expr ')' statement_block ';' 
{
   	enter_scope(table);  // יצירת סקופ חדש
	$$=mknode("WHILE", mknode("(", $4, mknode(")",NULL,NULL)),$6); 
	exit_scope(table);
	printf("exit scope:\n");
}

| WHILE '(' expr ')' '{' statement_block '}' 
{
   	enter_scope(table);  // יצירת סקופ חדש
	$$ = mknode("WHILE", mknode("(", $3, mknode(")", NULL, NULL)), mknode("BLOCK", $6, NULL)); 
	exit_scope(table);
}

| DO '{' statement_block '}' WHILE '(' expr ')' ';' 
{ 
   	enter_scope(table);  // יצירת סקופ חדש
	$$ = mknode(create_string_node("DO"), mknode(create_string_node("("), $3, NULL), mknode(create_string_node("BLOCK"), $6, NULL));

	exit_scope(table);
}
	
| FOR cmmnt '(' assignment_statement ';' expr ';' assignment_statement ')' statement_block { $$= mknode("for", mknode("(", mknode("",$4,$6), mknode("",$8, mknode(")",NULL,NULL))),$10); }
| FOR cmmnt '(' assignment_statement ';' expr ';' assignment_statement ')' '{' function_body '}' { $$= mknode("for", mknode("(", mknode("",$4,$6), mknode("",$8, mknode(")",NULL,NULL))),$11); }
| expr ';' cmmnt { $$=$1; }
| code_block { $$=$1; }
| assignment_statement { $$ = mknode("ASSIGN", $1, NULL); };

assignment_statement: lhs ASS expr ';' { $$ = mknode("", $1, $3); }
| lhs ASS STRING_LTL ';' { $$ = mknode("\n", $1, mknode($3, NULL, NULL)); };

code_block: '{' cmmnt declarations statements return_value '}' cmmnt { $$=mknode("{",$3,mknode("", $4, mknode("",$5,mknode("}",NULL,NULL)))); }
| { $$ = NULL; };

return_value: RETURN expr ';' cmmnt { $$=mknode("return",$2,NULL); } 
| { $$=NULL; };

lhs: IDENTIFIER '[' expr ']' { $$=mknode($1, mknode("[",$3,mknode("]",NULL,NULL)), NULL); } 
| IDENTIFIER { $$=mknode($1,NULL,NULL); }
| derefrence_expr { $$=$1; } ;

derefrence_expr: DEREFRENCE IDENTIFIER { $$=mknode("^",mknode($2,NULL,NULL),NULL); }
| DEREFRENCE '(' expr ')' { $$=mknode("^",mknode("(",$3,NULL),mknode(")",NULL,NULL)); }
| DEREFRENCE IDENTIFIER '[' expr ']' { $$=mknode($1, mknode($2,NULL,NULL), mknode("[",$4,mknode("]",NULL,NULL))); };

function_call: IDENTIFIER paren_expression ';' 
{ 
	debug_print("Function call detected");
	Symbol *func = find_symbol(table, $1); // בדיקה האם הפונקציה קיימת
	if(func == NULL) {
    		yyerror("Function not declared");
   	}
	$$=mknode("function call",mknode($1,NULL,NULL),mknode("ARGS",$2,NULL)); 
};

paren_expression: '(' expression_list ')' { $$=$2; };

expression_list: expr ',' expression_list { $$=mknode("",$1,mknode(",",$3,NULL)); } 
| expr { $$=mknode("",$1,NULL); }
| { $$=NULL; };

expr: '(' expr ')' { $$=mknode("(",$2,mknode(")",NULL,NULL)); }
| expr EQL expr { $$=mknode("==",$1,$3); }
| expr NOTEQL expr { $$=mknode("!=",$1,$3); }
| expr GREATEREQL expr { $$=mknode(">=",$1,$3); }
| expr GREATER expr { $$=mknode(">",$1,$3); }
| expr LESSEQL expr { $$=mknode("<=",$1,$3); }
| expr LESS expr { $$=mknode("<",$1,$3); }
| expr AND expr { $$=mknode("&&",$1,$3); }
| expr OR expr { $$=mknode("||",$1,$3); }
| expr PLUS expr { $$=mknode("+",$1,$3); }
| expr MINUS expr { $$=mknode("-",$1,$3); }
| expr MULTI expr { $$=mknode("*",$1,$3); }
| expr DIVISION expr { $$=mknode("/",$1,$3); }
| NOT expr { $$=mknode("!",$2,NULL); }
| address_exprs { $$=$1; }
| derefrence_expr { $$=$1; }
| function_call cmmnt { $$=$1; }
| DECIMAL_LTL { $$=mknode($1,NULL,NULL); }
| HEX_LTL { $$=mknode($1,NULL,NULL); }
| CHAR_LTL { $$=mknode($1,NULL,NULL); }
| INT_LTL { $$=mknode($1,NULL,NULL); }
| FLOAT_LTL { $$=mknode($1,NULL,NULL); }
| STRING_LTL { $$=mknode($1,NULL,NULL); }
| BOOLFALSE { $$=mknode($1,NULL,NULL); }
| BOOLTRUE { $$=mknode($1,NULL,NULL); }
| '|' '|' IDENTIFIER { $$=mknode("|", mknode("|",NULL,NULL), mknode($3,NULL,NULL)); }
| IDENTIFIER '[' expr ']' { $$=mknode($1,mknode("[",$3,mknode("]",NULL,NULL)),NULL); }
| IDENTIFIER { $$=mknode($1,NULL,NULL); }
| NULLL { $$=mknode("null",NULL,NULL); };

address_exprs: ADDRESS address_exprs { $$=mknode($1,$2,NULL); } 
| address_expr { $$=$1; };

address_expr: ADDRESS IDENTIFIER { $$=mknode("&",mknode($2,NULL,NULL),NULL); }
| ADDRESS '(' IDENTIFIER ')' { $$=mknode("&",mknode("(",mknode($3,NULL,NULL),NULL),mknode(")",NULL,NULL)); }
| ADDRESS IDENTIFIER '[' expr ']' { $$=mknode("&", mknode($2,NULL,NULL), mknode("[",$4,mknode("]",NULL,NULL))); }
| ADDRESS '(' IDENTIFIER '[' expr ']' ')' { $$=mknode("&",mknode("(", mknode($3,NULL,NULL),mknode("[",$5,NULL)), mknode("]",NULL,mknode(")",NULL,NULL))); };

%%

int main()
{	
	table = create_symbol_table();
	int pass = yyparse();
	print_current_scope(table); 
	return pass;
	free_symbol_table(table);
}

/* allocation for node*/
node* mknode(char *token, node *left, node *right)
{
    node *newnode = (node*)malloc(sizeof(node));
    newnode->token = strdup(token);
    newnode->left = left;
    newnode->right = right;

    return newnode;
}

node* create_string_node(char *str) {
    return mknode(strdup(str), NULL, NULL);
}


void printTabs(int n)
{
	int i;
	for(i=0;i<n/3;i++)
		printf(" ");
}
void Printtree(node* tree)
{

	int flag = 4;
	printTabs(printlevel); 
	if(strcmp(tree->token, "var") == 0)
	{
		printf("(DECLARE ");
		
		flag=2;
	}
	else if(strcmp(tree->token, "if") == 0)
	{
		printf("(IF\n");
		flag = 1;	
	}
	else if(strcmp(tree->token, "while") == 0)
	{
		printf("(WHILE\n");
		flag = 1;	
	}
	else if(strcmp(tree->token, "for") == 0)
	{
		printf("(FOR\n");
		flag = 1;	
	}
	else if(strcmp(tree->token, "function") == 0 ||
		strcmp(tree->token, "CODE") == 0||
		strcmp(tree->token, "function call") == 0)
	{
		printf("(%s\n",tree->token);
		flag= 2;
	}
	else if(strcmp(tree->token, "ARGS") == 0)
	{
	// check types and number of argumnets
		/*if (!valitade_args(tree -> left)) {
			yyerror("Invalid arguments in function call");
		}*/
		printf("(ARGS ");
		if(tree->left)
		{
			flag = 2;
			printf("\n");
		}
		else
		{
			printf(" NONE)\n"); 
		}
	}
	else if(strcmp(tree->token, "IF-ELSE") == 0)
	{
		printf("(IF-ELSE\n");
		printlevel--;
		flag = 1;
	}
	else if(strcmp(tree->token, "return") == 0)
	{
		printf("(RETURN ");
		flag = 2;
	}
	else if(strcmp(tree->token, "{") == 0)
	{
                printf("(BLOCK\n");		
	}
	else if(strcmp(tree->token, "}") == 0)
	{
		printf(")\n");
	}
	else if(strcmp(tree->token, "") == 0);
	else if(strcmp(tree->token, "(") == 0)
		printf("(");
	else if(strcmp(tree->token, "\n") == 0)
		printf("\n");
	else if(strcmp(tree->token, ")") == 0)
		printf(")\n");
	else if(strcmp(tree->token, ",") == 0)
		printf(",");
	else if(strcmp(tree->token, ";") == 0)
		printf("\n");
	else if(strcmp(tree->token, "&&") == 0 ||
		strcmp(tree->token, "/") == 0 || 
		strcmp(tree->token, "=") == 0 || 
		strcmp(tree->token, "==") == 0 || 
		strcmp(tree->token, ">") == 0 || 
		strcmp(tree->token, ">=") == 0 || 
		strcmp(tree->token, "<") == 0 || 
		strcmp(tree->token, "<=") == 0 || 
		strcmp(tree->token, "-") == 0 || 
		strcmp(tree->token, "!") == 0 || 
		strcmp(tree->token, "!=") == 0 || 
		strcmp(tree->token, "||") == 0 || 
		strcmp(tree->token, "+") == 0 || 
		strcmp(tree->token, "*") == 0 || 
		strcmp(tree->token, "&") == 0 || 
		strcmp(tree->token, "^") == 0 || 
		strcmp(tree->token, "|") == 0 || 
		strcmp(tree->token, "ASSIGN") == 0 ||
		strcmp(tree->token, ",") == 0)
	{	
		
		printf("(%s",tree->token);
		flag=1; 
		if(strcmp(tree->token, "ASSIGN") == 0)
			flag=2;		
	}
	else
	{
		if((tree && (!tree->left && !tree->right)) || strcmp(tree->token, "Main") == 0)
		{
			printf("%s ", tree->token);
		
		}
		else
		{
			printlevel++;
			printf("%s", tree->token);
			printlevel--;
		}
	}
	if (tree->left) 
	{
		printlevel++;
		Printtree(tree->left);
		printlevel--;
	}
	
	if (tree->right)
	{
		printlevel++;
		Printtree(tree->right);
		printlevel--;
	}
	if(flag == 2)
		printf(")\n");
	if(flag == 1)
		printf(")");
	if(flag == 0)
		printf("\n)");
}


void yyerror(char *e) {
    yyparse();
    fflush(stdout);
    fprintf(stderr, "Error %s at line %d\n", e, yylineno);
    fprintf(stderr, "does not accept '%s'\n", yytext);
    
}
