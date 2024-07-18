# Lex_folder
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11


%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    char *token;
    struct node *left;
    struct node *right;
} node;
node* mknode(char* token, node *left, node *right);
void Printtree(node *tree);
void printTabs(int n);
int yylex();
int yyerror(char *e);

extern int yylineno; // הוספת ההצהרה של yylineno
extern char *yytext; // הוספת ההצהרה של yytext

int printlevel=0;
%}
