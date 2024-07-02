%%

August       { return AUGUST; }
September    { return SEPTEMBER; }
October      { return OCTOBER; }
NOVEMBER     { return NOVEMBER; }
December     { return DECEMBER; }
20[0-9][0-9] { return YEAR; }
.            { return yytext[0]; }

%%
