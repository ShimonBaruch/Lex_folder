%{
#include <stdio.h>
%}
%token WHILE DO CONTINUE FOR IF ELSE CASE BREAK DEFAULT
%%
program:
	statements
	;
statements:
	statement:
	| statements statement
	;
loop_statement:
	WHILE { printf("found loop statement : WHILE\n");}
	| DO { printf ("found loop statement : DO \n");}
	| CONTINUE { printf("found loop statement : CONTINUE \n");}
	| FOR {printf("found loop statement : FOR \n");}
	;
conditional_statement:
	IF { printf("found conditional statement : If\n"); }
	| ELSE { printf("found conditional statement : ELSE\n"); }
	| CASE { printf("found conditional statement : CASE\n"); }
	| BREAK { printf("found conditional statement :BREAK\n"); }
	| DEFAULT { printf("found conditional statement :DEFAULT\n"); }
	;
%%

#include "lex.yy.c"

main()
{
	return yyparse();
}
int yyerror(const char *s) {
	fprintf(stderr,"error: %s\n", s);
	return 0;
}
