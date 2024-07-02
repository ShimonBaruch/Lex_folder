%{
#include "y.tab.h"
%}
%%
"bool"               { return BOOL; }
"char"               { return CHAR; }
"int"                { return INT; }
"double"             { return DOUBLE; }
"float"              { return FLOAT; }
"string"             { return STRING; }
"int*"               { return INT_PTR; }
"char*"              { return CHAR_PTR; }
"Double*"            { return DOUBLE_PTR; }
"float*"             { return FLOAT_PTR; }
"if"                 { return IF; }
"else"               { return ELSE ;}
"while"              { return WHILE; }
"for"                { return FOR ;}
"var"                { return VAR; }
"args>>"             { return ARGS ;}
"public"             { return PUBLIC; }
"private"            { return PRIVATE;}
"static"             { return STATIC;}
"return "            { return RETURN;}
"null"               { return NULL; }
"void"               { return VOID; }
"do"                 { return DO; }
"&&"                 { return AND; }
"/"                  { return DIV; }
"<-"                 { return ASSIGN; }//to fix
"=="                 { return EQ; }
">"                  { return GT; }
">="                 { return GE; }
"<"                  { return LT; }
"<="                 { return LE; }
"-"                  { return MINUS; }
"!"                  { return NOT; }
"!="                 { return NE; }
"||"                 { return OR; }
"+"                  { return PLUS; }
"*"                  { return MUL; }
"&"   		     { return ADDRESS; }
[0-9]+               { yylval.ival = atoi(yytext); return NUMBER; }
"{"                  { return '{'; }
"("                  { return '('; }
")"                  { return ')'; }
";"                  { return ';'; }
"="                  { return '='; }
[a-zA-Z][a-zA-Z0-9]*  { yylval.sval = strdup(yyext); return IDENTIFIER; }
[ \t\n]+               {/* */ }
.                     { printf("Unrecognized charactor: %s \n" ,yytext); }
%%
int yywarp(){
	return 1;
	}
