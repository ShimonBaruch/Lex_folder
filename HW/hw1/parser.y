%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	
typedef struct node
{
	char *token;
	struct node *left;
	struct node *right;
} node;
node* mknode(char* token, node *left, node *right);
void Printtree(node *tree);
void printTabs(int n);
int yylex();
extern int yylineno;
extern char* yytext;
void yyerror(char *e);
int printlevel=0;
%}
%union
{
    struct node *node;
    char *string;
}

%token <string> COMMENT WHILE DO IF ELSE FOR 
%token <string> RETURN ARGS
%token <string> BOOL STRING CHARPTR CHAR INT DOUBLE FLOAT FLOATPTR DOUBPTR INTPTR PROCEDUR
%token <string> AND ADDRESS EQL ASSINGMENT ASS OR LENGTH GREATEREQL GREATER LESSEQL LESS NOTEQL NOT
%token <string> DIVISION PLUS MINUS MULTI VARIABLE
%token <string> STRING_LTL REAL_LTL CHAR_LTL NULLL
%token <string> MAIN IDENTIFIER ';' ',' '(' ')' '[' ']' '{' '}'
%token <string> VOID PUBLIC PRIVATE STATIC 
%token <string> INT_LTL DECIMAL_LTL HEX_LTL BOOLTRUE BOOLFALSE  REAL FLOATPTR FUNCTION COLON  DEREFRENCE 

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
%type <node> statement type var_id declare paren_expression
%type <node> function_body parameter_list parameter_type function multi_function
%type <node> main program project declarations return_value
%type <node> cmmnt function_access_level parameter_list arguments string_exp2 string_exp multi_string_exp static_function
%%
project: cmmnt program { Printtree($2); printf("syntax valid\n");};

program: multi_function main {$$=mknode("CODE",$1,$2);};

main: PUBLIC type MAIN '(' ')' ':' STATIC '{' function_body '}' {$$=mknode("public", mknode("Main",mknode("\n",$7,NULL),NULL), mknode("body",NULL,$9));}	
| {$$=NULL;};

function: function_access_level type IDENTIFIER '(' parameter_list ')' static_function '{' function_body '}'
{$$ = mknode("func", mknode($3, $1, mknode("ARGS", $5, mknode("return", $8, NULL))), mknode("", $10, NULL));}
| function_access_level type IDENTIFIER '(' parameter_list ')' ':' static_function '{' function_body '}'
{$$ = mknode("func", mknode($3, $1, mknode("ARGS", $5, mknode("return", $8, NULL))), mknode("body", NULL, $11));};

function_access_level: PRIVATE { $$ = mknode("private", NULL, NULL); }
| PUBLIC { $$ = mknode("public", NULL, NULL); };

/*type for returning from a function*/
type: BOOL {$$=mknode("boolean", NULL, NULL);}
 	| STRING {$$=mknode("string", NULL, NULL);}
	| CHAR {$$=mknode("char", NULL, NULL);}
	| INT {$$=mknode("int", NULL, NULL);}
	| DOUBLE {$$=mknode("double", NULL, NULL);}
	| FLOAT { $$ = mknode("int", NULL, NULL); }
	| INTPTR {$$=mknode("int*", NULL, NULL);}
	| CHARPTR {$$=mknode("char*", NULL, NULL);}
	| FLOATPTR {$$=mknode("float*", NULL, NULL);};
	| DOUBPTR { $$ = mknode("double*", NULL, NULL); }
	| VOID { $$ = mknode("void*", NULL, NULL); };

parameter_list: ARGS parameter_type  { $$ = mknode("ARGS", $2, NULL); }
| { $$ = NULL; };

//list of parameter for function or not
parameter_type: type ':' arguments parameter_list  {$$ = mknode("params", $1, $4); }
| {$$=NULL;};

//list of parameter
parameter_list: parameter_list type ':' arguments { $$ = mknode("params", $1, $4); }
| { $$ = NULL; }
| IDENTIFIER { $$ = NULL; };

arguments: IDENTIFIER ',' arguments { $$ = mknode("arguments", mknode($1, NULL, NULL), $3); }
| IDENTIFIER ';' { $$ = mknode("arguments", mknode($1, NULL, NULL), NULL); }
| { $$ = NULL; }
| IDENTIFIER { $$ = NULL; };

static_function: STATIC { $$ = mknode("Static", NULL, NULL); }
    | { $$ = mknode("Nonstatic", NULL, NULL); };

function_body: cmmnt declarations multi_function statements return_value
{ $$=mknode("(BODY\n", mknode("",$2,NULL),mknode("",$3,mknode("",$4, mknode("}",NULL,NULL))));};

cmmnt: COMMENT cmmnt {$$ = mknode("COMMENT", mknode($1, NULL, NULL), $2);}
| { $$ = NULL; };

declarations: declarations declare  {$$=mknode("",$1,$2);} | {$$=NULL;}  ;

//declaration of varibals/ 
declare: VARIABLE type ':' var_id ';' {$$ = mknode("var", $2, mknode("",$4, NULL));}
| STRING string_exp2 { $$ = mknode($1, $2, NULL); };

var_id: IDENTIFIER ',' var_id {$$=mknode($1, mknode(" ", $3, NULL),NULL);}
| IDENTIFIER ASSINGMENT expr ',' var_id {$$=mknode($1, $3, NULL);}
| IDENTIFIER ASS expr ',' var_id  {$$ = mknode($1, $3, NULL); }
| IDENTIFIER ASS expr {$$ = mknode("", mknode($1, NULL, NULL), NULL); }
| IDENTIFIER ASSINGMENT expr {$$ = mknode($1, $3, NULL);}
| IDENTIFIER {$$ = NULL; };

string_exp2: multi_string_exp IDENTIFIER '[' INT_LTL ']' ASS STRING ';' { $$ = mknode("", $1, mknode($2, mknode("[", mknode($4, NULL, NULL), mknode("]", NULL, NULL)), mknode($7, NULL, NULL))); }
| multi_string_exp IDENTIFIER '[' INT_LTL ']' ';' { $$ = mknode("", $1, mknode($2, mknode("[", mknode($4, NULL, NULL), mknode("]", NULL, NULL)),mknode("]", NULL, NULL))); };

multi_string_exp: multi_string_exp string_exp { $$ = mknode("", $1, $2); }
    | { $$ = NULL; };
    
string_exp: IDENTIFIER '[' expr ']' ASS expr ',' { $$ = mknode($1, mknode($2, $3, mknode($4, NULL, NULL)), mknode($5, $6, NULL)); }
| IDENTIFIER '[' expr ']' ',' { $$ = mknode($1, mknode("[", $3, mknode("]", NULL, NULL)), NULL); };

multi_function: function multi_function {$$=mknode("",$1,$2);}
| {$$=NULL;};

statements: statements statement {$$=mknode("",$1,$2);} | {$$=NULL;};

statement: '(' function_body ')' { $$ = mknode("", $2, NULL); }
| IF '(' expr ')' '{' function_body '}' { $$ = mknode("IF", mknode("(", $3, mknode(")", NULL, NULL)), mknode("BLOCK", $6, NULL)); }
| IF '(' expr ')' statement_block ';' ELSE statement_block ';' { $$ = mknode("IF-ELSE", mknode("(", $3, mknode(")", NULL, NULL)), mknode("BLOCK", $5, $8)); }
| IF '(' expr ')' statement_block ';' ELSE '{' function_body '}' { $$ = mknode("IF-ELSE", mknode("(", $3, mknode(")", NULL, NULL)), mknode("BLOCK", $5, mknode("BLOCK", $9, NULL))); }
| IF '(' expr ')' '{' function_body '}' ELSE '{' function_body '}' { $$ = mknode("IF-ELSE", mknode("(", $3, mknode(")", NULL, NULL)), mknode("BLOCK", $6, mknode("BLOCK", $10, NULL))); }
| IF '(' expr ')' statement_block { $$=mknode("IF", mknode("(", $3, mknode(")",NULL,NULL)),$5);}
| IF '(' expr ')' '{' function_body '}' ELSE statement_block ';' { $$=mknode("IF_ELSE", mknode("(", $3, mknode(")",NULL,NULL)), mknode("",$5, mknode("", $7,NULL)));}
| WHILE cmmnt '(' expr ')' statement_block ';' { $$=mknode("WHILE", mknode("(", $4, mknode(")",NULL,NULL)),$6);}
| WHILE '(' expr ')' '{' function_body '}' { $$ = mknode("WHILE", mknode("(", $3, mknode(")", NULL, NULL)), mknode("BLOCK", $6, NULL)); }
| DO '{' function_body '}' WHILE '(' expr ')' ';' { $$ = mknode("DO", mknode("(", $3, mknode(")", NULL, NULL)), mknode("BLOCK", $5, NULL)); }
| FOR cmmnt '(' assignment_statement ';' expr ';' assignment_statement ')' statement_block { $$= mknode("for", mknode("(", mknode("",$4,$6), mknode("",$8, mknode(")",NULL,NULL))),$10);}
| FOR cmmnt '(' assignment_statement ';' expr ';' assignment_statement ')' '{' function_body '}' { $$= mknode("for", mknode("(", mknode("",$4,$6), mknode("",$8, mknode(")",NULL,NULL))),$11);}
| expr ';' cmmnt {$$=$1;}
| code_block {$$=$1;}
| assignment_statement {$$ = mknode("ASSIGN", $1, NULL);}
| assignment_statement ';' cmmnt {$$=mknode("",$1,NULL);};

assignment_statement2: IDENTIFIER ASS expr ';' {$$ = mknode($1, $3, NULL);}
| IDENTIFIER ASSINGMENT expr ';' {$$ = mknode($1, $3, NULL);}
| IDENTIFIER ASS ADDRESS IDENTIFIER ';' {$$ = mknode("ADDRESSTO", mknode($3, NULL, NULL), mknode($4, NULL, NULL));}
| ADDRESS IDENTIFIER ASS IDENTIFIER ';' {$$ = mknode("ADDRESSFROM", mknode($2, NULL, NULL), mknode($4, NULL, NULL));}
| IDENTIFIER ASS IDENTIFIER MULTI ';'  {$$ = mknode("CONTENT", mknode($1, NULL, NULL), mknode($3, NULL, NULL));}
| MULTI IDENTIFIER ASS IDENTIFIER ';' {$$ = mknode("ADDCONTENTVAR", mknode($2, NULL, NULL), mknode($4, NULL, NULL));}
| MULTI IDENTIFIER ASS INT_LTL ';' { $$ = mknode("ADDCONTENTNUM", mknode($2, NULL, NULL), mknode($4, NULL, NULL)); }
| IDENTIFIER '(' INT_LTL ')' ASS CHAR_LTL ';' { $$ = mknode("ARRCHAR", mknode($1, NULL, NULL), mknode("INDEX-CHAR", mknode($3, NULL, NULL), mknode($6, NULL, NULL))); }
| IDENTIFIER ASS IDENTIFIER MULTI ';' { $$ = mknode("DOUBLECONTENT", mknode($1, NULL, NULL), mknode($3, NULL, NULL)); }
| IDENTIFIER ASS function_call ';' {$$ = mknode("function", mknode($1, NULL, NULL), $3);};
/**/
assignment_statement: lhs ASS expr ';' {$$ = mknode("<-", $1, $3);}
| lhs ASS STRING_LTL ';' {$$ = mknode("<-", $1, $3);};

code_block: '{' cmmnt declarations statements return_value '}' cmmnt {$$=mknode("{",$3,mknode("", $4, mknode("",$5,mknode("}",NULL,NULL))));}
| { $$ = NULL; };

return_value: RETURN expr ';' cmmnt {$$=mknode("return",$2,NULL);}
| {$$=NULL;};

lhs: IDENTIFIER '[' expr ']' { $$=mknode($1, mknode("[",$3,mknode("]",NULL,NULL)), NULL);} 
| IDENTIFIER {$$=mknode($1,NULL,NULL);}
| derefrence_expr {$$=$1;} ;
/**/
derefrence_expr: DEREFRENCE IDENTIFIER {$$=mknode("^",mknode($2,NULL,NULL),NULL);}
| DEREFRENCE '(' expr ')' {$$=mknode("^",mknode("(",$3,NULL),mknode(")",NULL,NULL));}
| DEREFRENCE IDENTIFIER '[' expr ']' {$$=mknode($1, mknode($2,NULL,NULL), mknode("[",$4,mknode("]",NULL,NULL)));};

function_call: IDENTIFIER paren_expression ';' {$$=mknode("function call",mknode($1,NULL,NULL),mknode("ARGS",$2,NULL));} 
/*| lhs ASS IDENTIFIER '(' expression_list ')' ';' {$$=mknode("function call",mknode($1,NULL,NULL),mknode("ARGS",$2,NULL));}*/;

paren_expression:'(' expression_list ')' {$$=$2;};

expression_list: expr ',' expression_list {$$=mknode("",$1,mknode(",",$3,NULL));} 
| expr {$$=mknode("",$1,NULL);}
| {$$=NULL;};

statement_block: statement {$$=$1;}
| RETURN expr ';' {$$=mknode("return",$2,NULL);};

expr:  '(' expr ')' {$$=mknode("(",$2,mknode(")",NULL,NULL));}
	| expr EQL expr {$$=mknode("==",$1,$3);}
	| expr NOTEQL expr {$$=mknode("!=",$1,$3);}
	| expr GREATEREQL expr {$$=mknode(">=",$1,$3);}
	| expr GREATER expr {$$=mknode(">",$1,$3);}
	| expr LESSEQL expr {$$=mknode("<=",$1,$3);}
	| expr LESS expr {$$=mknode("<",$1,$3);}
	| expr AND expr {$$=mknode("&&",$1,$3);}
	| expr OR expr {$$=mknode("||",$1,$3);}
	| expr PLUS expr {$$=mknode("+",$1,$3);}
	| expr MINUS expr {$$=mknode("-",$1,$3);}
	| expr MULTI expr {$$=mknode("*",$1,$3);}
	| expr DIVISION expr {$$=mknode("/",$1,$3);}
	| NOT expr {$$=mknode("!",$2,NULL);}
	| address_exprs {$$=$1;}
	| derefrence_expr {$$=$1;}
	| function_call cmmnt {$$=$1;}
	| DECIMAL_LTL {$$=mknode($1,NULL,NULL);}
	| HEX_LTL {$$=mknode($1,NULL,NULL);}
	| CHAR_LTL {$$=mknode($1,NULL,NULL);}
	| INT_LTL {$$=mknode($1,NULL,NULL);}
	| FLOAT_LTL {$$=mknode($1,NULL,NULL);}
	| STRING_LTL {$$=mknode($1,NULL,NULL);}
	| BOOLFALSE {$$=mknode($1,NULL,NULL);}
	| BOOLTRUE {$$=mknode($1,NULL,NULL);}
	| '|' '|' IDENTIFIER { $$=mknode("|", mknode("|",NULL,NULL), mknode($3,NULL,NULL));}
	| IDENTIFIER '[' expr ']' {$$=mknode($1,mknode("[",$3,mknode("]",NULL,NULL)),NULL);}
	| IDENTIFIER {$$=mknode($1,NULL,NULL);}
	| NULLL {$$=mknode("null",NULL,NULL);};

address_exprs:ADDRESS address_exprs {$$=mknode($1,$2,NULL);} | address_expr {$$=$1;};

address_expr: ADDRESS IDENTIFIER {$$=mknode("&",mknode($2,NULL,NULL),NULL);}
	| ADDRESS '(' IDENTIFIER ')' {$$=mknode("&",mknode("(",mknode($3,NULL,NULL),NULL),mknode(")",NULL,NULL));}
	| ADDRESS IDENTIFIER '[' expr ']' {$$=mknode("&", mknode($2,NULL,NULL), mknode("[",$4,mknode("]",NULL,NULL)));}
	| ADDRESS '(' IDENTIFIER '[' expr ']' ')' {$$=mknode("&",mknode("(", mknode($3,NULL,NULL),mknode("[",$5,NULL)), mknode("]",NULL,mknode(")",NULL,NULL)));};

%%

int main()
{
	return yyparse();	
}

/* allocation for node*/
node* mknode (char *token, node *left, node *right)
{
	node *newnode = (node*)malloc(sizeof(node));
	newnode->left=left;
	newnode->right=right;
	newnode->token=token;
	return newnode;
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
		else if(strcmp(tree->token, "func") == 0 ||strcmp(tree->token, "proc") == 0 ||strcmp(tree->token, "CODE") == 0||strcmp(tree->token, "Call func") == 0)
	{
		printf("(%s \n",tree->token);
		flag= 2;
		
	}
		else if(strcmp(tree->token, "ARGS") == 0)
	{
		printf("(ARGS ");
		if(tree->left)
		{
			flag = 2;
			printf("\n");
			
		}
		else{
			printf(" NONE)\n"); 
		}
	

	}
		else if(strcmp(tree->token, "if-else") == 0)
	{
		printf("(IF-ELSE\n");
		printlevel--;
		
		flag = 1;
	}
			else if(strcmp(tree->token, "return") == 0)
	{
		printf("(return_value ");
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
strcmp(tree->token, ",") == 0 )
	{
			printf("(%s",tree->token);
			flag=1;
			if(strcmp(tree->token, "=") == 0)
				flag=2;
				
	}
	else
	{
		if(tree && (!tree->left && !tree->right)
		||strcmp(tree->token, "Main") == 0)
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

int yyerror(char *e) {
    fflush(stdout);
    fprintf(stderr, "Error %s at line %d\n", e, yylineno);
    fprintf(stderr, "does not accept '%s'\n", yytext);
    return 0;
}

