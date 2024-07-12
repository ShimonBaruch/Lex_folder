%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void yyerror(const char *s);
int yylex(void);

typedef struct node {
    char *type;
    struct node *left;
    struct node *right;
    struct node *next;
    char *value;
} Node;

Node *create_node(char *type, Node *left, Node *right, Node *next, char *value);
void print_ast(Node *node, int depth);
void free_ast(Node *node);

Node *ast_root = NULL;

%}

%union {
    int ival;
    float fval;
    double dval;
    char cval;
    char *sval;
    int bval;
    Node *node;
}

%token <ival> BOOL CHAR INT DOUBLE FLOAT STRING INT_PTR CHAR_PTR DOUBLE_PTR FLOAT_PTR
%token <ival> IF ELSE WHILE FOR VAR ARGS PUBLIC PRIVATE STATIC RETURN NULL_PTR VOID DO
%token <ival> AND DIVIDE ASSIGN EQUAL GT GE LT LE MINUS NOT NE OR PLUS MULTIPLY ADDRESS
%token <bval> BOOL_LITERAL
%token <cval> CHAR_LITERAL
%token <ival> INT_LITERAL
%token <dval> DOUBLE_LITERAL
%token <fval> FLOAT_LITERAL
%token <sval> STRING_LITERAL IDENTIFIER
%token SEMICOLON COMMA LBRACE RBRACE LPAREN RPAREN LBRACKET RBRACKET

%type <node> program function_list function type parameter_list parameter_declaration_list parameter_declaration body declaration_list declaration statement_list statement assignment if_statement while_statement for_statement do_while_statement return_statement expression term factor function_call argument_list argument_declaration_list

%%

program:
    function_list
    {
        ast_root = $1;
    }
    ;

function_list:
    function
    | function_list function
    {
        $$ = create_node("FUNCTION_LIST", $1, NULL, $2, NULL);
    }
    ;

function:
    PUBLIC type IDENTIFIER LPAREN parameter_list RPAREN STATIC LBRACE body RBRACE
    {
        $$ = create_node("FUNCTION", $2, $6, NULL, $3);
    }
    | PRIVATE type IDENTIFIER LPAREN parameter_list RPAREN STATIC LBRACE body RBRACE
    {
        $$ = create_node("FUNCTION", $2, $6, NULL, $3);
    }
    | PUBLIC type IDENTIFIER LPAREN parameter_list RPAREN LBRACE body RBRACE
    {
        $$ = create_node("FUNCTION", $2, $6, NULL, $3);
    }
    | PRIVATE type IDENTIFIER LPAREN parameter_list RPAREN LBRACE body RBRACE
    {
        $$ = create_node("FUNCTION", $2, $6, NULL, $3);
    }
    ;

type:
    BOOL { $$ = create_node("TYPE", NULL, NULL, NULL, "BOOL"); }
    | CHAR { $$ = create_node("TYPE", NULL, NULL, NULL, "CHAR"); }
    | INT { $$ = create_node("TYPE", NULL, NULL, NULL, "INT"); }
    | DOUBLE { $$ = create_node("TYPE", NULL, NULL, NULL, "DOUBLE"); }
    | FLOAT { $$ = create_node("TYPE", NULL, NULL, NULL, "FLOAT"); }
    | STRING { $$ = create_node("TYPE", NULL, NULL, NULL, "STRING"); }
    | INT_PTR { $$ = create_node("TYPE", NULL, NULL, NULL, "INT_PTR"); }
    | CHAR_PTR { $$ = create_node("TYPE", NULL, NULL, NULL, "CHAR_PTR"); }
    | DOUBLE_PTR { $$ = create_node("TYPE", NULL, NULL, NULL, "DOUBLE_PTR"); }
    | FLOAT_PTR { $$ = create_node("TYPE", NULL, NULL, NULL, "FLOAT_PTR"); }
    | VOID { $$ = create_node("TYPE", NULL, NULL, NULL, "VOID"); }
    ;

parameter_list:
    /* empty */
    | parameter_declaration_list
    {
        $$ = $1;
    }
    ;

parameter_declaration_list:
    parameter_declaration
    | parameter_declaration_list COMMA parameter_declaration
    {
        $$ = create_node("PARAM_LIST", $1, NULL, $3, NULL);
    }
    ;

parameter_declaration:
    type IDENTIFIER
    {
        $$ = create_node("PARAM", $1, NULL, NULL, $2);
    }
    ;

body:
    declaration_list statement_list
    {
        $$ = create_node("BODY", $1, NULL, $2, NULL);
    }
    ;

declaration_list:
    /* empty */
    | declaration_list declaration
    {
        $$ = create_node("DECL_LIST", $1, NULL, $2, NULL);
    }
    ;

declaration:
    VAR type IDENTIFIER SEMICOLON
    {
        $$ = create_node("DECL", $2, NULL, NULL, $3);
    }
    | VAR type IDENTIFIER ASSIGN expression SEMICOLON
    {
        $$ = create_node("DECL_ASSIGN", $2, $5, NULL, $3);
    }
    | VAR type IDENTIFIER_LIST SEMICOLON
    {
        $$ = create_node("DECL_LIST", $2, NULL, $3, NULL);
    }
    | VAR type IDENTIFIER_LIST ASSIGN expression SEMICOLON
    {
        $$ = create_node("DECL_LIST_ASSIGN", $2, $5, $3, NULL);
    }
    ;

IDENTIFIER_LIST:
    IDENTIFIER
    {
        $$ = create_node("ID_LIST", NULL, NULL, NULL, $1);
    }
    | IDENTIFIER_LIST COMMA IDENTIFIER
    {
        $$ = create_node("ID_LIST", $1, NULL, NULL, $3);
    }
    ;

statement_list:
    /* empty */
    | statement_list statement
    {
        $$ = create_node("STMT_LIST", $1, NULL, $2, NULL);
    }
    ;

statement:
    assignment
    | if_statement
    | while_statement
    | for_statement
    | do_while_statement
    | return_statement
    | function_call SEMICOLON
    | LBRACE statement_list RBRACE
    {
        $$ = $2;
    }
    ;

assignment:
    IDENTIFIER ASSIGN expression SEMICOLON
    {
        $$ = create_node("ASSIGN", $3, NULL, NULL, $1);
    }
    | LBRACKET IDENTIFIER RBRACKET ASSIGN expression SEMICOLON
    {
        $$ = create_node("ASSIGN_ARRAY", $5, NULL, NULL, $2);
    }
    | MULTIPLY IDENTIFIER ASSIGN expression SEMICOLON
    {
        $$ = create_node("ASSIGN_PTR", $4, NULL, NULL, $2);
    }
    ;

if_statement:
    IF LPAREN expression RPAREN statement
    {
        $$ = create_node("IF", $3, $5, NULL, NULL);
    }
    | IF LPAREN expression RPAREN statement ELSE statement
    {
        $$ = create_node("IF_ELSE", $3, $5, $7, NULL);
    }
    ;

while_statement:
    WHILE LPAREN expression RPAREN statement
    {
        $$ = create_node("WHILE", $3, $5, NULL, NULL);
    }
    ;

for_statement:
    FOR LPAREN assignment expression SEMICOLON assignment RPAREN statement
    {
        $$ = create_node("FOR", $3, $4, $5, $7);
    }
    ;

do_while_statement:
    DO statement WHILE LPAREN expression RPAREN SEMICOLON
    {
        $$ = create_node("DO_WHILE", $2, $5, NULL, NULL);
    }
    ;

return_statement:
    RETURN expression SEMICOLON
    {
        $$ = create_node("RETURN", $2, NULL, NULL, NULL);
    }
    ;

expression:
    expression PLUS term
    {
        $$ = create_node("EXPR", $1, $3, NULL, "+");
    }
    | expression MINUS term
    {
        $$ = create_node("EXPR", $1, $3, NULL, "-");
    }
    | term
    {
        $$ = $1;
    }
    ;

term:
    term MULTIPLY factor
    {
        $$ = create_node("TERM", $1, $3, NULL, "*");
    }
    | term DIVIDE factor
    {
        $$ = create_node("TERM", $1, $3, NULL, "/");
    }
    | factor
    {
        $$ = $1;
    }
    ;

factor:
    INT_LITERAL
    {
        $$ = create_node("INT_LITERAL", NULL, NULL, NULL, $1);
    }
    | FLOAT_LITERAL
    {
        $$ = create_node("FLOAT_LITERAL", NULL, NULL, NULL, $1);
    }
    | DOUBLE_LITERAL
    {
        $$ = create_node("DOUBLE_LITERAL", NULL, NULL, NULL, $1);
    }
    | CHAR_LITERAL
    {
        $$ = create_node("CHAR_LITERAL", NULL, NULL, NULL, $1);
    }
    | BOOL_LITERAL
    {
        $$ = create_node("BOOL_LITERAL", NULL, NULL, NULL, $1);
    }
    | IDENTIFIER
    {
        $$ = create_node("IDENTIFIER", NULL, NULL, NULL, $1);
    }
    | LPAREN expression RPAREN
    {
        $$ = $2;
    }
    ;

function_call:
    IDENTIFIER LPAREN argument_list RPAREN
    {
        $$ = create_node("FUNCTION_CALL", $3, NULL, NULL, $1);
    }
    ;

argument_list:
    /* empty */
    | argument_declaration_list
    {
        $$ = $1;
    }
    ;

argument_declaration_list:
    expression
    {
        $$ = create_node("ARG_LIST", $1, NULL, NULL, NULL);
    }
    | argument_declaration_list COMMA expression
    {
        $$ = create_node("ARG_LIST", $1, NULL, $3, NULL);
    }
    ;

%%

Node *create_node(char *type, Node *left, Node *right, Node *next, char *value) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->type = strdup(type);
    new_node->left = left;
    new_node->right = right;
    new_node->next = next;
    new_node->value = value ? strdup(value) : NULL;
    return new_node;
}

void print_ast(Node *node, int depth) {
    if (node == NULL) return;
    for (int i = 0; i < depth; i++) printf("  ");
    printf("(%s", node->type);
    if (node->value) printf(" %s", node->value);
    printf(")\n");
    print_ast(node->left, depth + 1);
    print_ast(node->right, depth + 1);
    print_ast(node->next, depth);
}

void free_ast(Node *node) {
    if (node == NULL) return;
    free(node->type);
    if (node->value) free(node->value);
    free_ast(node->left);
    free_ast(node->right);
    free_ast(node->next);
    free(node);
}

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int main(void) {
    if (yyparse() == 0) {
        printf("Parse successful.\n");
        print_ast(ast_root, 0);
        free_ast(ast_root);
    } else {
        printf("Parse failed.\n");
    }
    return 0;
}
