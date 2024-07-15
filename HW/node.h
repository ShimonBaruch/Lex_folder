#ifndef NODE_H
#define NODE_H

typedef struct node {
    char *token;
    struct node *left;
    struct node *right;
} node;

node* mknode(char* token, node *left, node *right);
void Printtree(node *tree);
void printTabs(int n);

#endif 

%{
#include <stdio.h>
#include "parser.tab.h"
#include "node.h"
%}

%%

bool           { return BOOL; }
char           { return CHAR; }
int            { return INT; }
real           { return REAL; }
string         { return STRING; }
int\\*         { return INTPTR; }
char\\*        { return CHARPTR; }
real\\*        { return REALPTR; }

if             { return IF; }
else           { return ELSE; }
while          { return WHILE; }
for            { return FOR; }
var            { return VARIABLE; }
func           { return FUNCTION; }
proc           { return PROCEDUR; }
null           { return NULLL; }
Main           { return MAIN; }

"&&"           { return AND; }
"/"            { return DIVISION; }
"="            { return ASSINGMENT; }
"=="           { return EQL; }
">"            { return GREATER; }
">="           { return GREATEREQL; }
"<"            { return LESS; }
"<="           { return LESSEQL; }
"-"            { return MINUS; }
"!"            { return NOT; }
"!="           { return NOTEQL; }
"||"           { return OR; }
"+"            { return PLUS; }
"*"            { return MULTI; }
"&"            { return ADDRESS; }
"^"            { return DEREFRENCE; }

"|"            { return LENGTH; }
";"            { return SEMICOLON; }
":"            { return COLON; }
","            { return COMMA; }
"{"            { return OPENBRACE; }
"}"            { return CLOSEBRACE; }
"("            { return OPENPAREN; }
")"            { return CLOSEPAREN; }
"["            { return OPENBRACKET; }
"]"            { return CLOSEBRACKET; }



return         { return RETURN; }
true           { return BOOLTRUE; }
false          { return BOOLFALSE; }
[a-zA-Z_][a-zA-Z0-9_]*  { yylval.sval = strdup(yytext); return IDENTIFIER; }

"\\""[^"]*\\""  { yylval.string = strdup(yytext); return STRING_LTL; }
\\'.\\'         { yylval.string = strdup(yytext); return CHAR_LTL; }
[+-]?[1-9][0-9]*|[0-9]  { yylval.string = strdup(yytext); return DECIMAL_LTL; }
0(x|X)[0-9A-F]+ { yylval.string = strdup(yytext); return HEX_LTL; }
[-+]?[0-9]*\\.?[0-9]*[eE]?[-+]?[0-9]+ { yylval.string = strdup(yytext); return REAL_LTL; }

[\\n]          { yylineno++; } 
[ \\t]+        ; 
.              { return yytext[0]; }

%%

int main(void)
{
    yylex();
    return 0;
}

