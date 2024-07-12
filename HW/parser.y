%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void yyerror(const char *s);
int yylex(void);

typedef struct {
    int ival;
    float fval;
    double dval;
    char cval;
    char *sval;
    int bval;
} YYSTYPE;

#define YYSTYPE YYSTYPE

%}

%union {
    int ival;
    float fval;
    double dval;
    char cval;
    char *sval;
    int bval;
}

%token BOOL CHAR INT DOUBLE FLOAT STRING INT_PTR CHAR_PTR DOUBLE_PTR FLOAT_PTR
%token IF ELSE WHILE FOR VAR ARGS PUBLIC PRIVATE STATIC RETURN NULL_PTR VOID DO
%token AND DIVIDE ASSIGN EQUAL GT GE LT LE MINUS NOT NE OR PLUS MULTIPLY ADDRESS
%token BOOL_LITERAL CHAR_LITERAL INT_LITERAL DOUBLE_LITERAL FLOAT_LITERAL STRING_LITERAL
%token IDENTIFIER
%token SEMICOLON COMMA LBRACE RBRACE LPAREN RPAREN LBRACKET RBRACKET

%%

program:
    function_list
    ;

function_list:
    function
    | function_list function
    ;

function:
    PUBLIC type IDENTIFIER LPAREN parameter_list RPAREN STATIC LBRACE body RBRACE
    | PRIVATE type IDENTIFIER LPAREN parameter_list RPAREN STATIC LBRACE body RBRACE
    | PUBLIC type IDENTIFIER LPAREN parameter_list RPAREN LBRACE body RBRACE
    | PRIVATE type IDENTIFIER LPAREN parameter_list RPAREN LBRACE body RBRACE
    ;

type:
    BOOL
    | CHAR
    | INT
    | DOUBLE
    | FLOAT
    | STRING
    | INT_PTR
    | CHAR_PTR
    | DOUBLE_PTR
    | FLOAT_PTR
    | VOID
    ;

parameter_list:
    /* empty */
    | parameter_declaration_list
    ;

parameter_declaration_list:
    parameter_declaration
    | parameter_declaration_list COMMA parameter_declaration
    ;

parameter_declaration:
    type IDENTIFIER
    ;

body:
    declaration_list statement_list
    ;

declaration_list:
    /* empty */
    | declaration_list declaration
    ;

declaration:
    VAR type IDENTIFIER SEMICOLON
    | VAR type IDENTIFIER ASSIGN expression SEMICOLON
    | VAR type IDENTIFIER_LIST SEMICOLON
    | VAR type IDENTIFIER_LIST ASSIGN expression SEMICOLON
    ;

IDENTIFIER_LIST:
    IDENTIFIER
    | IDENTIFIER_LIST COMMA IDENTIFIER
    ;

statement_list:
    /* empty */
    | statement_list statement
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
    ;

assignment:
    IDENTIFIER ASSIGN expression SEMICOLON
    | LBRACKET IDENTIFIER RBRACKET ASSIGN expression SEMICOLON
    | MULTIPLY IDENTIFIER ASSIGN expression SEMICOLON
    ;

if_statement:
    IF LPAREN expression RPAREN statement
    | IF LPAREN expression RPAREN statement ELSE statement
    ;

while_statement:
    WHILE LPAREN expression RPAREN statement
    ;

for_statement:
    FOR LPAREN assignment expression SEMICOLON assignment RPAREN statement
    ;

do_while_statement:
    DO statement WHILE LPAREN expression RPAREN SEMICOLON
    ;

return_statement:
    RETURN expression SEMICOLON
    ;

expression:
    expression PLUS term
    | expression MINUS term
    | term
    ;

term:
    term MULTIPLY factor
    | term DIVIDE factor
    | factor
    ;

factor:
    INT_LITERAL
    | FLOAT_LITERAL
    | DOUBLE_LITERAL
    | CHAR_LITERAL
    | BOOL_LITERAL
    | IDENTIFIER
    | LPAREN expression RPAREN
    ;

function_call:
    IDENTIFIER LPAREN argument_list RPAREN
    ;

argument_list:
    /* empty */
    | argument_declaration_list
    ;

argument_declaration_list:
    expression
    | argument_declaration_list COMMA expression
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int main(void) {
    return yyparse();
}
