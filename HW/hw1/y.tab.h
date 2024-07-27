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
    PROCEDUR = 275,                /* PROCEDUR  */
    AND = 276,                     /* AND  */
    ADDRESS = 277,                 /* ADDRESS  */
    EQL = 278,                     /* EQL  */
    ASSINGMENT = 279,              /* ASSINGMENT  */
    ASS = 280,                     /* ASS  */
    OR = 281,                      /* OR  */
    LENGTH = 282,                  /* LENGTH  */
    GREATEREQL = 283,              /* GREATEREQL  */
    GREATER = 284,                 /* GREATER  */
    LESSEQL = 285,                 /* LESSEQL  */
    LESS = 286,                    /* LESS  */
    NOTEQL = 287,                  /* NOTEQL  */
    NOT = 288,                     /* NOT  */
    DIVISION = 289,                /* DIVISION  */
    PLUS = 290,                    /* PLUS  */
    MINUS = 291,                   /* MINUS  */
    MULTI = 292,                   /* MULTI  */
    VARIABLE = 293,                /* VARIABLE  */
    STRING_LTL = 294,              /* STRING_LTL  */
    REAL_LTL = 295,                /* REAL_LTL  */
    CHAR_LTL = 296,                /* CHAR_LTL  */
    NULLL = 297,                   /* NULLL  */
    MAIN = 298,                    /* MAIN  */
    IDENTIFIER = 299,              /* IDENTIFIER  */
    VOID = 300,                    /* VOID  */
    PUBLIC = 301,                  /* PUBLIC  */
    PRIVATE = 302,                 /* PRIVATE  */
    STATIC = 303,                  /* STATIC  */
    INT_LTL = 304,                 /* INT_LTL  */
    DECIMAL_LTL = 305,             /* DECIMAL_LTL  */
    HEX_LTL = 306,                 /* HEX_LTL  */
    FLOAT_LTL = 307,               /* FLOAT_LTL  */
    BOOLTRUE = 308,                /* BOOLTRUE  */
    BOOLFALSE = 309,               /* BOOLFALSE  */
    REAL = 310,                    /* REAL  */
    FLOATPTR = 311,                /* FLOATPTR  */
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
#define DOUBPTR 273
#define INTPTR 274
#define PROCEDUR 275
#define AND 276
#define ADDRESS 277
#define EQL 278
#define ASSINGMENT 279
#define ASS 280
#define OR 281
#define LENGTH 282
#define GREATEREQL 283
#define GREATER 284
#define LESSEQL 285
#define LESS 286
#define NOTEQL 287
#define NOT 288
#define DIVISION 289
#define PLUS 290
#define MINUS 291
#define MULTI 292
#define VARIABLE 293
#define STRING_LTL 294
#define REAL_LTL 295
#define CHAR_LTL 296
#define NULLL 297
#define MAIN 298
#define IDENTIFIER 299
#define VOID 300
#define PUBLIC 301
#define PRIVATE 302
#define STATIC 303
#define INT_LTL 304
#define DECIMAL_LTL 305
#define HEX_LTL 306
#define FLOAT_LTL 307
#define BOOLTRUE 308
#define BOOLFALSE 309
#define REAL 310
#define FLOATPTR 311
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
