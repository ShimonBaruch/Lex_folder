/*Scanner-file*/
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"

%}
%%
 /*keywords lexamas*/
"bool" {return BOOL;}
"char" {return CHAR;}
"int" {return INT;}
"double" {return DOUBLE;}
"float" {return FLOAT;}
"string" {return STRING;}
"int\*" {return INTPTR;}
"char\*" {return CHARPTR;}
"double\*" {return DOUBPTR;}
"float\*" {return FLOATPTR;}

"if" {return IF;}
"else" {return ELSE;}
"while" {return WHILE;}
do {return DO;}
for {return FOR;}
var {return VARIABLE;}
args>> {return ARGS;}
public {return PUBLIC;}
private {return PRIVATE;}
static {return STATIC;}
return {return RETURN;}
null {return NULLL;}
void {return VOID;}

func {return FUNCTION;}
proc {return PROCEDUR;}
main {return MAIN;}
 /*operator lexamas*/ 
"&&" {return AND;}
"\/" {return DIVISION;}
"=" {return ASSINGMENT;}
"<-" {return ASS;}
"==" {return EQL;}
">" {return GREATER;}
">=" {return GREATEREQL;}
"<" {return LESS;}
"<=" {return LESSEQL;}
"\-" {return MINUS;}
"!" {return NOT;}
"!=" {return NOTEQL;}
"||" {return OR;}
"\+" {return PLUS;}
"\*" {return MULTI;}
"&" {return ADDRESS;}
"^" {return DEREFRENCE;}

"|" {return '|';}
";" {return ';';}
":" {return ':';}
"," {return ',';}
"{" {return '{';}
"}" {return '}';}
"(" {return '(';}
")" {return ')';}
"[" {return '[';}
"]" {return ']';}
 
"\/\*([^*]|\*+[^*/])*\*+\/" {return COMMENT;}
true {return BOOLTRUE;}
false {return BOOLFALSE;}
[0-9]* { yylval.string = atoi(yytext); return INT_LTL; }
[a-zA-Z][a-zA-Z0-9]* { yylval.string= strdup(yytext); return IDENTIFIER; }
"\""[^"]*"\"" {yylval.string= strdup(yytext); return STRING_LTL; }
\'.\' {yylval.string= strdup(yytext); return CHAR_LTL; }
[+-]?[1-9][0-9]*|[0-9] {yylval.string= strdup(yytext); return DECIMAL_LTL; }
0(x|X)[0-9A-F]+ {yylval.string= strdup(yytext); return HEX_LTL; }
[-+]?[0-9]*\.?[0-9]*[eE]?[-+]?[0-9]+ {yylval.string= strdup(yytext); return FLOAT_LTL; }
[\n] {yylineno++;} //For each line (enter=\n), do yylineo+=1
[ \t]+ ;
. return yytext[0];
%%

