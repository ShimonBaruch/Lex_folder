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
    DOUBPTR = 273,                 /* DOUBPTR  */
    INTPTR = 274,                  /* INTPTR  */
    AND = 275,                     /* AND  */
    ADDRESS = 276,                 /* ADDRESS  */
    EQL = 277,                     /* EQL  */
    ASSINGMENT = 278,              /* ASSINGMENT  */
    ASS = 279,                     /* ASS  */
    OR = 280,                      /* OR  */
    LENGTH = 281,                  /* LENGTH  */
    GREATEREQL = 282,              /* GREATEREQL  */
    GREATER = 283,                 /* GREATER  */
    LESSEQL = 284,                 /* LESSEQL  */
    LESS = 285,                    /* LESS  */
    NOTEQL = 286,                  /* NOTEQL  */
    NOT = 287,                     /* NOT  */
    DIVISION = 288,                /* DIVISION  */
    PLUS = 289,                    /* PLUS  */
    MINUS = 290,                   /* MINUS  */
    MULTI = 291,                   /* MULTI  */
    VARIABLE = 292,                /* VARIABLE  */
    STRING_LTL = 293,              /* STRING_LTL  */
    REAL_LTL = 294,                /* REAL_LTL  */
    CHAR_LTL = 295,                /* CHAR_LTL  */
    NULLL = 296,                   /* NULLL  */
    MAIN = 297,                    /* MAIN  */
    IDENTIFIER = 298,              /* IDENTIFIER  */
    VOID = 299,                    /* VOID  */
    PUBLIC = 300,                  /* PUBLIC  */
    PRIVATE = 301,                 /* PRIVATE  */
    STATIC = 302,                  /* STATIC  */
    INT_LTL = 303,                 /* INT_LTL  */
    DECIMAL_LTL = 304,             /* DECIMAL_LTL  */
    HEX_LTL = 305,                 /* HEX_LTL  */
    FLOAT_LTL = 306,               /* FLOAT_LTL  */
    BOOLTRUE = 307,                /* BOOLTRUE  */
    BOOLFALSE = 308,               /* BOOLFALSE  */
    REAL = 309,                    /* REAL  */
    FLOATPTR = 310,                /* FLOATPTR  */
    FUNCTION = 311,                /* FUNCTION  */
    COLON = 312,                   /* COLON  */
    DEREFRENCE = 313               /* DEREFRENCE  */
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
#define DOUBPTR 273
#define INTPTR 274
#define AND 275
#define ADDRESS 276
#define EQL 277
#define ASSINGMENT 278
#define ASS 279
#define OR 280
#define LENGTH 281
#define GREATEREQL 282
#define GREATER 283
#define LESSEQL 284
#define LESS 285
#define NOTEQL 286
#define NOT 287
#define DIVISION 288
#define PLUS 289
#define MINUS 290
#define MULTI 291
#define VARIABLE 292
#define STRING_LTL 293
#define REAL_LTL 294
#define CHAR_LTL 295
#define NULLL 296
#define MAIN 297
#define IDENTIFIER 298
#define VOID 299
#define PUBLIC 300
#define PRIVATE 301
#define STATIC 302
#define INT_LTL 303
#define DECIMAL_LTL 304
#define HEX_LTL 305
#define FLOAT_LTL 306
#define BOOLTRUE 307
#define BOOLFALSE 308
#define REAL 309
#define FLOATPTR 310
#define FUNCTION 311
#define COLON 312
#define DEREFRENCE 313

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 22 "parser.y"

    struct node *node;
    char *string;

#line 188 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
