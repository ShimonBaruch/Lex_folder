# Lex_folder
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11

%{
#include "y.tab.h"
%}

%%

bool            { return BOOL; }
char            { return CHAR; }
int             { return INT; }
double          { return DOUBLE; }
float           { return FLOAT; }
string          { return STRING; }
int\*           { return INT_PTR; }
char\*          { return CHAR_PTR; }
double\*        { return DOUBLE_PTR; }
float\*         { return FLOAT_PTR; }
if              { return IF; }
else            { return ELSE; }
while           { return WHILE; }
for             { return FOR; }
var             { return VAR; }
args>>          { return ARGS; }
public          { return PUBLIC; }
private         { return PRIVATE; }
static          { return STATIC; }
return          { return RETURN; }
null            { return NULLPTR; }
void            { return VOID; }
do              { return DO; }

"true"          { return TRUE; }
"false"         { return FALSE; }

[a-zA-Z_][a-zA-Z0-9_]*  { yylval.sval = strdup(yytext); return IDENTIFIER; }

[0-9]+                { yylval.ival = atoi(yytext); return INTEGER; }
0x[0-9a-fA-F]+        { yylval.ival = strtol(yytext, NULL, 16); return INTEGER; }

[0-9]+\.[0-9]+([eE][-+]?[0-9]+)? { yylval.dval = atof(yytext); return DOUBLE_LITERAL; }
[0-9]+\.[0-9]*[fF]               { yylval.fval = atof(yytext); return FLOAT_LITERAL; }
\"[^"]*\"               { yylval.sval = strdup(yytext); return STRING_LITERAL; }
\'[^\']\'               { yylval.cval = yytext[1]; return CHAR_LITERAL; }

&&              { return AND; }
\|\|            { return OR; }
<-              { return ASSIGN; }
==              { return EQ; }
>               { return GT; }
>=              { return GE; }
<               { return LT; }
<=              { return LE; }
-               { return MINUS; }
!               { return NOT; }
!=              { return NEQ; }
\+              { return PLUS; }
\*              { return MUL; }
&               { return ADDRESS; }

[ \t\n]         { /* skip whitespace */ }

.               { return yytext[0]; }

%%

int yywrap() {
    return 1;
}
