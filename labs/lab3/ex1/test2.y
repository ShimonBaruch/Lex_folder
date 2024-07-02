%token AUGUST
%token SEPTEMBER
%token OCTOBER 
%token NOVEMBER
%token DECEMBER
%token YEAR
%%
s: month '#' YEAR { printf("Date is OK\n"); };
month: AUGUST | SEPTEMBER | OCTOBER | NOVEMBER | DECEMBER;
%%
#include "lex.yy.c"
main(){
	return yyparse();
}
int yyerror(){
	printf("Error in date\n");
	return 0;
}
