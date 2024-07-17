/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    COMMENT = 258,                 /* COMMENT  */
    WHILE = 259,                   /* WHILE  */
    IF = 260,                      /* IF  */
    ELSE = 261,                    /* ELSE  */
    FOR = 262,                     /* FOR  */
    RETURN = 263,                  /* RETURN  */
    BOOL = 264,                    /* BOOL  */
    STRING = 265,                  /* STRING  */
    CHARPTR = 266,                 /* CHARPTR  */
    CHAR = 267,                    /* CHAR  */
    INT = 268,                     /* INT  */
    INTPTR = 269,                  /* INTPTR  */
    PROCEDUR = 270,                /* PROCEDUR  */
    AND = 271,                     /* AND  */
    ADDRESS = 272,                 /* ADDRESS  */
    EQL = 273,                     /* EQL  */
    ASSINGMENT = 274,              /* ASSINGMENT  */
    OR = 275,                      /* OR  */
    LENGTH = 276,                  /* LENGTH  */
    GREATEREQL = 277,              /* GREATEREQL  */
    GREATER = 278,                 /* GREATER  */
    LESSEQL = 279,                 /* LESSEQL  */
    LESS = 280,                    /* LESS  */
    NOTEQL = 281,                  /* NOTEQL  */
    NOT = 282,                     /* NOT  */
    DIVISION = 283,                /* DIVISION  */
    PLUS = 284,                    /* PLUS  */
    MINUS = 285,                   /* MINUS  */
    MULTI = 286,                   /* MULTI  */
    VARIABLE = 287,                /* VARIABLE  */
    STRING_LTL = 288,              /* STRING_LTL  */
    REAL_LTL = 289,                /* REAL_LTL  */
    CHAR_LTL = 290,                /* CHAR_LTL  */
    NULLL = 291,                   /* NULLL  */
    MAIN = 292,                    /* MAIN  */
    IDENTIFIER = 293,              /* IDENTIFIER  */
    DECIMAL_LTL = 294,             /* DECIMAL_LTL  */
    HEX_LTL = 295,                 /* HEX_LTL  */
    BOOLTRUE = 296,                /* BOOLTRUE  */
    BOOLFALSE = 297,               /* BOOLFALSE  */
    REAL = 298,                    /* REAL  */
    REALPTR = 299,                 /* REALPTR  */
    FUNCTION = 300,                /* FUNCTION  */
    COLON = 301,                   /* COLON  */
    DEREFRENCE = 302               /* DEREFRENCE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define COMMENT 258
#define WHILE 259
#define IF 260
#define ELSE 261
#define FOR 262
#define RETURN 263
#define BOOL 264
#define STRING 265
#define CHARPTR 266
#define CHAR 267
#define INT 268
#define INTPTR 269
#define PROCEDUR 270
#define AND 271
#define ADDRESS 272
#define EQL 273
#define ASSINGMENT 274
#define OR 275
#define LENGTH 276
#define GREATEREQL 277
#define GREATER 278
#define LESSEQL 279
#define LESS 280
#define NOTEQL 281
#define NOT 282
#define DIVISION 283
#define PLUS 284
#define MINUS 285
#define MULTI 286
#define VARIABLE 287
#define STRING_LTL 288
#define REAL_LTL 289
#define CHAR_LTL 290
#define NULLL 291
#define MAIN 292
#define IDENTIFIER 293
#define DECIMAL_LTL 294
#define HEX_LTL 295
#define BOOLTRUE 296
#define BOOLFALSE 297
#define REAL 298
#define REALPTR 299
#define FUNCTION 300
#define COLON 301
#define DEREFRENCE 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 21 "parser.y"

    struct node *node;
    char *string;

#line 166 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
