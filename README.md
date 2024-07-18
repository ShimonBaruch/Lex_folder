# Lex_folder
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11
%{
#include <stdio.h>
#include <stdlib.h>

void yyerror(const char *s);
int yylex();
%}

%union {
    int ival;
    float fval;
    double dval;
    char cval;
    char *sval;
}

%token <ival> BOOL CHAR INT DOUBLE FLOAT STRING INT_PTR CHAR_PTR DOUBLE_PTR FLOAT_PTR
%token <ival> IF ELSE WHILE FOR VAR ARGS PUBLIC PRIVATE STATIC RETURN NULLPTR VOID DO
%token <ival> TRUE FALSE
%token <sval> IDENTIFIER
%token <ival> INTEGER
%token <dval> DOUBLE_LITERAL
%token <fval> FLOAT_LITERAL
%token <sval> STRING_LITERAL
%token <cval> CHAR_LITERAL

%token AND OR ASSIGN EQ GT GE LT LE MINUS NOT NEQ PLUS MUL ADDRESS

%%

program:
    function_list
    ;

function_list:
    function
    | function_list function
    ;

function:
    PUBLIC type IDENTIFIER '(' parameter_list ')' STATIC '{' body '}'
    | PRIVATE type IDENTIFIER '(' parameter_list ')' STATIC '{' body '}'
    | PUBLIC type IDENTIFIER '(' parameter_list ')' '{' body '}'
    | PRIVATE type IDENTIFIER '(' parameter_list ')' '{' body '}'
    ;

type:
    BOOL
    | CHAR
    | INT
    | DOUBLE
    | FLOAT
    | STRING
    | VOID
    | INT_PTR
    | CHAR_PTR
    | DOUBLE_PTR
    | FLOAT_PTR
    ;

parameter_list:
    /* empty */
    | parameter_list ARGS parameter_type_list
    ;

parameter_type_list:
    parameter_type
    | parameter_type_list ',' parameter_type
    ;

parameter_type:
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
    VAR type IDENTIFIER ';'
    | VAR type IDENTIFIER ASSIGN expression ';'
    ;

statement_list:
    /* empty */
    | statement_list statement
    ;

statement:
    assignment_statement
    | if_statement
    | while_statement
    | for_statement
    | do_while_statement
    | code_block
    | return_statement
    ;

assignment_statement:
    IDENTIFIER ASSIGN expression ';'
    ;

if_statement:
    IF '(' expression ')' code_block
    | IF '(' expression ')' code_block ELSE code_block
    ;

while_statement:
    WHILE '(' expression ')' code_block
    ;

for_statement:
    FOR '(' assignment_statement expression ';' assignment_statement ')' code_block
    ;

do_while_statement:
    DO code_block WHILE '(' expression ')' ';'
    ;

code_block:
    '{' declaration_list statement_list '}'
    ;

return_statement:
    RETURN expression ';'
    ;

expression:
    INTEGER
    | DOUBLE_LITERAL
    | FLOAT_LITERAL
    | STRING_LITERAL
    | CHAR_LITERAL
    | IDENTIFIER
    | expression PLUS expression
    | expression MINUS expression
    | expression MUL expression
    | expression DIV expression
    | expression EQ expression
    | expression NEQ expression
    | expression GT expression
    | expression GE expression
    | expression LT expression
    | expression LE expression
    | expression AND expression
    | expression OR expression
    | NOT expression
    | '(' expression ')'
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int main() {
    return yyparse();
}

