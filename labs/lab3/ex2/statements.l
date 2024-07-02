%%
"while"     { return WHILE; }
"for"       { return "FOR"; }
"do"        { return "DO"; }
"continue"  { return "CONTINUE"; }
"if"        { return "IF"; }
"else"      { return "ELSE"; }
"case"      { return "CASE"; }
"break"     { return "BREAK"; }
"default"   { return "DEFAULT";}
[ \t\n]+    { /* ignore whitespace*/ }
.           { return yytext[0]; }
%%
