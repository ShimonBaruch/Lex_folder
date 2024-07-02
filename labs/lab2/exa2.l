 int l1, l2;
%%
[a-z]+ {
	l1= yyleng; printf("yytext len is %d\n", l1);
	l2= myLength(yytext); printf("my Len is %d\n", l2);
	}
%%
#include<string.h>
 int myLength(char *str)
{
	int myL;
	myL =strlen(str);
	return myL;
} 

