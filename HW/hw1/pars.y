%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum { 
    NODE_PROGRAM, NODE_FUNCTION, NODE_DECLARATION, NODE_ASSIGNMENT, 
    NODE_IF, NODE_IF_ELSE, NODE_WHILE, NODE_FOR, NODE_RETURN, 
    NODE_EXPR, NODE_IDENTIFIER, NODE_LITERAL 
} NodeType;

typedef struct Node {
    NodeType type;
    char *value;
    struct Node *left;
    struct Node *right;
    struct Node *next;
} Node;

Node *createNode(NodeType type, char *value, Node *left, Node *right, Node *next);
void printAST(Node *node, int depth);
void yyerror(const char *s);
int yylex();
Node *root;

%}

%union {
    int ival;
    double dval;
    char *sval;
    Node *node;
}

%token BOOL CHAR INT DOUBLE FLOAT STRING IF ELSE WHILE FOR VAR PUBLIC PRIVATE STATIC RETURN NULL VOID DO
%token ASSIGN EQ GE LE AND OR NE
%token INT_LITERAL FLOAT_LITERAL IDENTIFIER
%type <node> program function_list function parameter_list parameter statement_list statement declaration assignment if_statement while_statement for_statement return_statement expr identifier type

%%

program:
    function_list {
        root = createNode(NODE_PROGRAM, "program", $1, NULL, NULL);
    }
    ;

function_list:
    function {
        $$ = $1;
    }
    | function_list function {
        $1->next = $2;
        $$ = $1;
    }
    ;

function:
    type identifier '(' parameter_list ')' '{' statement_list '}' {
        $$ = createNode(NODE_FUNCTION, $2->sval, $1, $6, NULL);
    }
    ;

parameter_list:
    /* empty */ {
        $$ = NULL;
    }
    | parameter_list ',' parameter {
        if ($1 == NULL) {
            $$ = $3;
        } else {
            Node *temp = $1;
            while (temp->next != NULL) temp = temp->next;
            temp->next = $3;
            $$ = $1;
        }
    }
    ;

parameter:
    type identifier {
        $$ = createNode(NODE_DECLARATION, $2->sval, $1, NULL, NULL);
    }
    ;

statement_list:
    statement {
        $$ = $1;
    }
    | statement_list statement {
        $1->next = $2;
        $$ = $1;
    }
    ;

statement:
    declaration {
        $$ = $1;
    }
    | assignment {
        $$ = $1;
    }
    | if_statement {
        $$ = $1;
    }
    | while_statement {
        $$ = $1;
    }
    | for_statement {
        $$ = $1;
    }
    | return_statement {
        $$ = $1;
    }
    ;

declaration:
    type identifier ';' {
        $$ = createNode(NODE_DECLARATION, $2->sval, $1, NULL, NULL);
    }
    ;

assignment:
    identifier ASSIGN expr ';' {
        $$ = createNode(NODE_ASSIGNMENT, $1->sval, $3, NULL, NULL);
    }
    ;

if_statement:
    IF '(' expr ')' '{' statement_list '}' {
        $$ = createNode(NODE_IF, "if", $3, $6, NULL);
    }
    | IF '(' expr ')' '{' statement_list '}' ELSE '{' statement_list '}' {
        $$ = createNode(NODE_IF_ELSE, "if-else", $3, $6, $10);
    }
    ;

while_statement:
    WHILE '(' expr ')' '{' statement_list '}' {
        $$ = createNode(NODE_WHILE, "while", $3, $6, NULL);
    }
    ;

for_statement:
    FOR '(' assignment expr ';' assignment ')' '{' statement_list '}' {
        $$ = createNode(NODE_FOR, "for", $3, $4, $6);
    }
    ;

return_statement:
    RETURN expr ';' {
        $$ = createNode(NODE_RETURN, "return", $2, NULL, NULL);
    }
    ;

expr:
    expr '+' expr {
        $$ = createNode(NODE_EXPR, "+", $1, $3, NULL);
    }
    | expr '-' expr {
        $$ = createNode(NODE_EXPR, "-", $1, $3, NULL);
    }
    | expr '*' expr {
        $$ = createNode(NODE_EXPR, "*", $1, $3, NULL);
    }
    | expr '/' expr {
        $$ = createNode(NODE_EXPR, "/", $1, $3, NULL);
    }
    | '(' expr ')' {
        $$ = $2;
    }
    | INT_LITERAL {
        char buffer[32];
        snprintf(buffer, sizeof(buffer), "%d", $1);
        $$ = createNode(NODE_LITERAL, strdup(buffer), NULL, NULL, NULL);
    }
    | FLOAT_LITERAL {
        char buffer[32];
        snprintf(buffer, sizeof(buffer), "%f", $1);
        $$ = createNode(NODE_LITERAL, strdup(buffer), NULL, NULL, NULL);
    }
    | IDENTIFIER {
        $$ = createNode(NODE_IDENTIFIER, $1, NULL, NULL, NULL);
    }
    ;

identifier:
    IDENTIFIER {
        $$ = createNode(NODE_IDENTIFIER, $1, NULL, NULL, NULL);
    }
    ;

type:
    BOOL {
        $$ = createNode(NODE_IDENTIFIER, "bool", NULL, NULL, NULL);
    }
    | CHAR {
        $$ = createNode(NODE_IDENTIFIER, "char", NULL, NULL, NULL);
    }
    | INT {
        $$ = createNode(NODE_IDENTIFIER, "int", NULL, NULL, NULL);
    }
    | DOUBLE {
        $$ = createNode(NODE_IDENTIFIER, "double", NULL, NULL, NULL);
    }
    | FLOAT {
        $$ = createNode(NODE_IDENTIFIER, "float", NULL, NULL, NULL);
    }
    | STRING {
        $$ = createNode(NODE_IDENTIFIER, "string", NULL, NULL, NULL);
    }
    ;

%%

Node *createNode(NodeType type, char *value, Node *left, Node *right, Node *next) {
    Node *node = (Node *)malloc(sizeof(Node));
    node->type = type;
    node->value = value;
    node->left = left;
    node->right = right;
    node->next = next;
    return node;
}

void printAST(Node *node, int depth) {
    if (node == NULL) return;
    for (int i = 0; i < depth; i++) printf("  ");
    switch (node->type) {
        case NODE_PROGRAM: printf("PROGRAM\n"); break;
        case NODE_FUNCTION: printf("FUNCTION: %s\n", node->value); break;
        case NODE_DECLARATION: printf("DECLARATION: %s\n", node->value); break;
        case NODE_ASSIGNMENT: printf("ASSIGNMENT: %s\n", node->value); break;
        case NODE_IF: printf("IF\n"); break;
        case NODE_IF_ELSE: printf("IF-ELSE\n"); break;
        case NODE_WHILE: printf("WHILE\n"); break;
        case NODE_FOR: printf("FOR\n"); break;
        case NODE_RETURN: printf("RETURN\n"); break;
        case NODE_EXPR: printf("EXPR: %s\n", node->value); break;
        case NODE_IDENTIFIER: printf("IDENTIFIER: %s\n", node->value); break;
        case NODE_LITERAL: printf("LITERAL: %s\n", node->value); break;
    }
    printAST(node->left, depth + 1);
    printAST(node->right, depth + 1);
    printAST(node->next, depth);
}

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int main() {
    if (yyparse() == 0) {
        printf("Parse successful!\n");
        printAST(root, 0);
    } else {
        printf("Parse failed!\n");
    }
    return 0;
}

