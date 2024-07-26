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
    DO = 260,                      /* DO  */
    IF = 261,                      /* IF  */
    ELSE = 262,                    /* ELSE  */
    FOR = 263,                     /* FOR  */
    RETURN = 264,                  /* RETURN  */
    ARGS = 265,                    /* ARGS  */
    BOOL = 266,                    /* BOOL  */
    STRING = 267,                  /* STRING  */
    CHARPTR = 268,                 /* CHARPTR  */
    CHAR = 269,                    /* CHAR  */
    INT = 270,                     /* INT  */
    DOUBLE = 271,                  /* DOUBLE  */
    FLOAT = 272,                   /* FLOAT  */
    FLOATPTR = 273,                /* FLOATPTR  */
    DOUBPTR = 274,                 /* DOUBPTR  */
    INTPTR = 275,                  /* INTPTR  */
    PROCEDUR = 276,                /* PROCEDUR  */
    AND = 277,                     /* AND  */
    ADDRESS = 278,                 /* ADDRESS  */
    EQL = 279,                     /* EQL  */
    ASSINGMENT = 280,              /* ASSINGMENT  */
    ASS = 281,                     /* ASS  */
    OR = 282,                      /* OR  */
    LENGTH = 283,                  /* LENGTH  */
    GREATEREQL = 284,              /* GREATEREQL  */
    GREATER = 285,                 /* GREATER  */
    LESSEQL = 286,                 /* LESSEQL  */
    LESS = 287,                    /* LESS  */
    NOTEQL = 288,                  /* NOTEQL  */
    NOT = 289,                     /* NOT  */
    DIVISION = 290,                /* DIVISION  */
    PLUS = 291,                    /* PLUS  */
    MINUS = 292,                   /* MINUS  */
    MULTI = 293,                   /* MULTI  */
    VARIABLE = 294,                /* VARIABLE  */
    STRING_LTL = 295,              /* STRING_LTL  */
    REAL_LTL = 296,                /* REAL_LTL  */
    CHAR_LTL = 297,                /* CHAR_LTL  */
    NULLL = 298,                   /* NULLL  */
    MAIN = 299,                    /* MAIN  */
    IDENTIFIER = 300,              /* IDENTIFIER  */
    VOID = 301,                    /* VOID  */
    PUBLIC = 302,                  /* PUBLIC  */
    PRIVATE = 303,                 /* PRIVATE  */
    STATIC = 304,                  /* STATIC  */
    INT_LTL = 305,                 /* INT_LTL  */
    DECIMAL_LTL = 306,             /* DECIMAL_LTL  */
    HEX_LTL = 307,                 /* HEX_LTL  */
    BOOLTRUE = 308,                /* BOOLTRUE  */
    BOOLFALSE = 309,               /* BOOLFALSE  */
    REAL = 310,                    /* REAL  */
    REALPTR = 311,                 /* REALPTR  */
    FUNCTION = 312,                /* FUNCTION  */
    COLON = 313,                   /* COLON  */
    DEREFRENCE = 314               /* DEREFRENCE  */
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
#define DO 260
#define IF 261
#define ELSE 262
#define FOR 263
#define RETURN 264
#define ARGS 265
#define BOOL 266
#define STRING 267
#define CHARPTR 268
#define CHAR 269
#define INT 270
#define DOUBLE 271
#define FLOAT 272
#define FLOATPTR 273
#define DOUBPTR 274
#define INTPTR 275
#define PROCEDUR 276
#define AND 277
#define ADDRESS 278
#define EQL 279
#define ASSINGMENT 280
#define ASS 281
#define OR 282
#define LENGTH 283
#define GREATEREQL 284
#define GREATER 285
#define LESSEQL 286
#define LESS 287
#define NOTEQL 288
#define NOT 289
#define DIVISION 290
#define PLUS 291
#define MINUS 292
#define MULTI 293
#define VARIABLE 294
#define STRING_LTL 295
#define REAL_LTL 296
#define CHAR_LTL 297
#define NULLL 298
#define MAIN 299
#define IDENTIFIER 300
#define VOID 301
#define PUBLIC 302
#define PRIVATE 303
#define STATIC 304
#define INT_LTL 305
#define DECIMAL_LTL 306
#define HEX_LTL 307
#define BOOLTRUE 308
#define BOOLFALSE 309
#define REAL 310
#define REALPTR 311
#define FUNCTION 312
#define COLON 313
#define DEREFRENCE 314

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 22 "parser.y"

    struct node *node;
    char *string;

#line 190 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
