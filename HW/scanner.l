%{
#include "y.tab.h"
%}

%option noyywrap

%%

"bool"          { return BOOL; }
"char"          { return CHAR; }
"int"           { return INT; }
"double"        { return DOUBLE; }
"float"         { return FLOAT; }
"string"        { return STRING; }
"int\\*"        { return INT_PTR; }
"char\\*"       { return CHAR_PTR; }
"double\\*"     { return DOUBLE_PTR; }
"float\\*"      { return FLOAT_PTR; }
"if"            { return IF; }
"else"          { return ELSE; }
"while"         { return WHILE; }
"for"           { return FOR; }
"var"           { return VAR; }
"args>>"        { return ARGS; }
"public"        { return PUBLIC; }
"private"       { return PRIVATE; }
"static"        { return STATIC; }
"return"        { return RETURN; }
"null"          { return NULL_PTR; }
"void"          { return VOID; }
"do"            { return DO; }

"&&"            { return AND; }
"/"             { return DIVIDE; }
"<-"            { return ASSIGN; }
"=="            { return EQUAL; }
">"             { return GT; }
">="            { return GE; }
"<"             { return LT; }
"<="            { return LE; }
"-"             { return MINUS; }
"!"             { return NOT; }
"!="            { return NE; }
"||"            { return OR; }
"+"             { return PLUS; }
"*"             { return MULTIPLY; }
"&"             { return ADDRESS; }

"true"          { yylval.bval = 1; return BOOL_LITERAL; }
"false"         { yylval.bval = 0; return BOOL_LITERAL; }

\'[^\']\'       { yylval.cval = yytext[1]; return CHAR_LITERAL; }
[0-9]+          { yylval.ival = atoi(yytext); return INT_LITERAL; }
0[xX][0-9a-fA-F]+  { yylval.ival = strtol(yytext, NULL, 16); return INT_LITERAL; }
[0-9]+(\.[0-9]+)?([eE][-+]?[0-9]+)?  { yylval.dval = atof(yytext); return DOUBLE_LITERAL; }
[0-9]+(\.[0-9]+)?[fF]  { yylval.fval = atof(yytext); return FLOAT_LITERAL; }

\"[^\"]*\"      { yylval.sval = strdup(yytext); return STRING_LITERAL; }

[a-zA-Z_][a-zA-Z0-9_]*  { yylval.sval = strdup(yytext); return IDENTIFIER; }

";"             { return SEMICOLON; }
","             { return COMMA; }
"{"             { return LBRACE; }
"}"             { return RBRACE; }
"("             { return LPAREN; }
")"             { return RPAREN; }
"["             { return LBRACKET; }
"]"             { return RBRACKET; }

[ \t\n]         { /* Ignore whitespace */ }

.               { printf("Unknown character: %s\n", yytext); }

%%

int main(void) {
    yylex();
    return 0;
}

