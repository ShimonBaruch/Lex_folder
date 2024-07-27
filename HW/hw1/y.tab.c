/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

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
extern int yylineno;
extern char* yytext;
void yyerror(char *e);
int printlevel=0;

#line 92 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 268 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_COMMENT = 3,                    /* COMMENT  */
  YYSYMBOL_WHILE = 4,                      /* WHILE  */
  YYSYMBOL_DO = 5,                         /* DO  */
  YYSYMBOL_IF = 6,                         /* IF  */
  YYSYMBOL_ELSE = 7,                       /* ELSE  */
  YYSYMBOL_FOR = 8,                        /* FOR  */
  YYSYMBOL_RETURN = 9,                     /* RETURN  */
  YYSYMBOL_ARGS = 10,                      /* ARGS  */
  YYSYMBOL_BOOL = 11,                      /* BOOL  */
  YYSYMBOL_STRING = 12,                    /* STRING  */
  YYSYMBOL_CHARPTR = 13,                   /* CHARPTR  */
  YYSYMBOL_CHAR = 14,                      /* CHAR  */
  YYSYMBOL_INT = 15,                       /* INT  */
  YYSYMBOL_DOUBLE = 16,                    /* DOUBLE  */
  YYSYMBOL_FLOAT = 17,                     /* FLOAT  */
  YYSYMBOL_DOUBPTR = 18,                   /* DOUBPTR  */
  YYSYMBOL_INTPTR = 19,                    /* INTPTR  */
  YYSYMBOL_PROCEDUR = 20,                  /* PROCEDUR  */
  YYSYMBOL_AND = 21,                       /* AND  */
  YYSYMBOL_ADDRESS = 22,                   /* ADDRESS  */
  YYSYMBOL_EQL = 23,                       /* EQL  */
  YYSYMBOL_ASSINGMENT = 24,                /* ASSINGMENT  */
  YYSYMBOL_ASS = 25,                       /* ASS  */
  YYSYMBOL_OR = 26,                        /* OR  */
  YYSYMBOL_LENGTH = 27,                    /* LENGTH  */
  YYSYMBOL_GREATEREQL = 28,                /* GREATEREQL  */
  YYSYMBOL_GREATER = 29,                   /* GREATER  */
  YYSYMBOL_LESSEQL = 30,                   /* LESSEQL  */
  YYSYMBOL_LESS = 31,                      /* LESS  */
  YYSYMBOL_NOTEQL = 32,                    /* NOTEQL  */
  YYSYMBOL_NOT = 33,                       /* NOT  */
  YYSYMBOL_DIVISION = 34,                  /* DIVISION  */
  YYSYMBOL_PLUS = 35,                      /* PLUS  */
  YYSYMBOL_MINUS = 36,                     /* MINUS  */
  YYSYMBOL_MULTI = 37,                     /* MULTI  */
  YYSYMBOL_VARIABLE = 38,                  /* VARIABLE  */
  YYSYMBOL_STRING_LTL = 39,                /* STRING_LTL  */
  YYSYMBOL_REAL_LTL = 40,                  /* REAL_LTL  */
  YYSYMBOL_CHAR_LTL = 41,                  /* CHAR_LTL  */
  YYSYMBOL_NULLL = 42,                     /* NULLL  */
  YYSYMBOL_MAIN = 43,                      /* MAIN  */
  YYSYMBOL_IDENTIFIER = 44,                /* IDENTIFIER  */
  YYSYMBOL_45_ = 45,                       /* ';'  */
  YYSYMBOL_46_ = 46,                       /* ','  */
  YYSYMBOL_47_ = 47,                       /* '('  */
  YYSYMBOL_48_ = 48,                       /* ')'  */
  YYSYMBOL_49_ = 49,                       /* '['  */
  YYSYMBOL_50_ = 50,                       /* ']'  */
  YYSYMBOL_51_ = 51,                       /* '{'  */
  YYSYMBOL_52_ = 52,                       /* '}'  */
  YYSYMBOL_VOID = 53,                      /* VOID  */
  YYSYMBOL_PUBLIC = 54,                    /* PUBLIC  */
  YYSYMBOL_PRIVATE = 55,                   /* PRIVATE  */
  YYSYMBOL_STATIC = 56,                    /* STATIC  */
  YYSYMBOL_INT_LTL = 57,                   /* INT_LTL  */
  YYSYMBOL_DECIMAL_LTL = 58,               /* DECIMAL_LTL  */
  YYSYMBOL_HEX_LTL = 59,                   /* HEX_LTL  */
  YYSYMBOL_FLOAT_LTL = 60,                 /* FLOAT_LTL  */
  YYSYMBOL_BOOLTRUE = 61,                  /* BOOLTRUE  */
  YYSYMBOL_BOOLFALSE = 62,                 /* BOOLFALSE  */
  YYSYMBOL_REAL = 63,                      /* REAL  */
  YYSYMBOL_FLOATPTR = 64,                  /* FLOATPTR  */
  YYSYMBOL_FUNCTION = 65,                  /* FUNCTION  */
  YYSYMBOL_COLON = 66,                     /* COLON  */
  YYSYMBOL_DEREFRENCE = 67,                /* DEREFRENCE  */
  YYSYMBOL_68_ = 68,                       /* ':'  */
  YYSYMBOL_69_ = 69,                       /* '|'  */
  YYSYMBOL_YYACCEPT = 70,                  /* $accept  */
  YYSYMBOL_project = 71,                   /* project  */
  YYSYMBOL_program = 72,                   /* program  */
  YYSYMBOL_main = 73,                      /* main  */
  YYSYMBOL_function = 74,                  /* function  */
  YYSYMBOL_function_access_level = 75,     /* function_access_level  */
  YYSYMBOL_type = 76,                      /* type  */
  YYSYMBOL_parameter_list = 77,            /* parameter_list  */
  YYSYMBOL_parameter_type = 78,            /* parameter_type  */
  YYSYMBOL_params_list = 79,               /* params_list  */
  YYSYMBOL_arguments = 80,                 /* arguments  */
  YYSYMBOL_static_function = 81,           /* static_function  */
  YYSYMBOL_function_body = 82,             /* function_body  */
  YYSYMBOL_cmmnt = 83,                     /* cmmnt  */
  YYSYMBOL_declarations = 84,              /* declarations  */
  YYSYMBOL_declare = 85,                   /* declare  */
  YYSYMBOL_var_id = 86,                    /* var_id  */
  YYSYMBOL_string_exp2 = 87,               /* string_exp2  */
  YYSYMBOL_multi_string_exp = 88,          /* multi_string_exp  */
  YYSYMBOL_string_exp = 89,                /* string_exp  */
  YYSYMBOL_multi_function = 90,            /* multi_function  */
  YYSYMBOL_statements = 91,                /* statements  */
  YYSYMBOL_statement_block = 92,           /* statement_block  */
  YYSYMBOL_statement = 93,                 /* statement  */
  YYSYMBOL_assignment_statement = 94,      /* assignment_statement  */
  YYSYMBOL_code_block = 95,                /* code_block  */
  YYSYMBOL_return_value = 96,              /* return_value  */
  YYSYMBOL_lhs = 97,                       /* lhs  */
  YYSYMBOL_derefrence_expr = 98,           /* derefrence_expr  */
  YYSYMBOL_function_call = 99,             /* function_call  */
  YYSYMBOL_paren_expression = 100,         /* paren_expression  */
  YYSYMBOL_expression_list = 101,          /* expression_list  */
  YYSYMBOL_expr = 102,                     /* expr  */
  YYSYMBOL_address_exprs = 103,            /* address_exprs  */
  YYSYMBOL_address_expr = 104              /* address_expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1569

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  127
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  284

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   314


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      47,    48,     2,     2,    46,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    68,    45,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    49,     2,    50,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,    69,    52,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    55,    55,    57,    59,    60,    62,    64,    67,    68,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    82,    83,    86,    87,    90,    91,    92,    94,    95,
      96,    97,    99,   100,   102,   104,   107,   108,   110,   111,
     114,   115,   117,   118,   119,   120,   121,   122,   124,   125,
     127,   128,   130,   131,   133,   134,   136,   137,   139,   140,
     141,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   171,   172,   174,
     175,   177,   179,   180,   181,   183,   184,   185,   187,   190,
     192,   193,   194,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   226,   226,   228,   229,   230,   231
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "COMMENT", "WHILE",
  "DO", "IF", "ELSE", "FOR", "RETURN", "ARGS", "BOOL", "STRING", "CHARPTR",
  "CHAR", "INT", "DOUBLE", "FLOAT", "DOUBPTR", "INTPTR", "PROCEDUR", "AND",
  "ADDRESS", "EQL", "ASSINGMENT", "ASS", "OR", "LENGTH", "GREATEREQL",
  "GREATER", "LESSEQL", "LESS", "NOTEQL", "NOT", "DIVISION", "PLUS",
  "MINUS", "MULTI", "VARIABLE", "STRING_LTL", "REAL_LTL", "CHAR_LTL",
  "NULLL", "MAIN", "IDENTIFIER", "';'", "','", "'('", "')'", "'['", "']'",
  "'{'", "'}'", "VOID", "PUBLIC", "PRIVATE", "STATIC", "INT_LTL",
  "DECIMAL_LTL", "HEX_LTL", "FLOAT_LTL", "BOOLTRUE", "BOOLFALSE", "REAL",
  "FLOATPTR", "FUNCTION", "COLON", "DEREFRENCE", "':'", "'|'", "$accept",
  "project", "program", "main", "function", "function_access_level",
  "type", "parameter_list", "parameter_type", "params_list", "arguments",
  "static_function", "function_body", "cmmnt", "declarations", "declare",
  "var_id", "string_exp2", "multi_string_exp", "string_exp",
  "multi_function", "statements", "statement_block", "statement",
  "assignment_statement", "code_block", "return_value", "lhs",
  "derefrence_expr", "function_call", "paren_expression",
  "expression_list", "expr", "address_exprs", "address_expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-206)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-85)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,    10,    31,    11,  -206,  -206,  -206,  -206,  -206,    11,
      22,   -26,  -206,  -206,  -206,  -206,  -206,  -206,  -206,  -206,
    -206,  -206,  -206,  -206,    12,    22,  -206,     4,    15,    53,
      20,    22,    33,    35,    19,  -206,     2,    26,    52,    10,
      41,    42,    28,    55,    48,  -206,  -206,    50,    51,  -206,
      52,  -206,    22,  -206,   401,    10,    10,  -206,    38,     7,
      56,    61,    10,  -206,     5,  1146,    22,  -206,  -206,  -206,
      44,    81,    10,  -206,  -206,  -206,  -206,  -206,  -206,   -27,
      40,  -206,   445,  -206,  -206,  -206,    86,    87,    10,  1452,
    -206,  -206,    63,    64,    52,  1146,    66,   489,  1146,    70,
    -206,    74,    72,    75,  -206,   -28,  1146,  -206,  -206,    58,
    1146,  1146,    79,    82,  1250,  -206,    78,  1146,    85,  1146,
    1115,  -206,  -206,  1177,  -206,  1146,  1146,  1146,  1146,  1146,
    1146,  1146,  1146,  1146,  1146,  1146,  1146,    10,  -206,  -206,
    -206,  1271,  1146,  1146,   521,  -206,  1292,   -21,    83,  -206,
    1146,    30,  1146,    90,    88,  1376,   224,  -206,  -206,  -206,
       6,  1146,  1313,  -206,  1470,    99,  1488,  -206,  -206,  -206,
    -206,  -206,  -206,  -206,  -206,   150,   443,   443,   150,  -206,
      80,  1334,  1506,   131,  -206,   587,    96,   101,  -206,  1208,
     300,  -206,  1146,   396,    36,   104,  -206,  1146,   126,   445,
     582,  -206,    10,  -206,  -206,   489,   489,  -206,   105,   335,
     619,  1146,  1146,   106,   800,  -206,  1018,  -206,  1146,  1146,
      90,  -206,  -206,   103,  -206,  -206,   663,   695,  1146,   739,
     153,  1110,  1524,   -13,    25,   113,  1395,  1414,  -206,    10,
    -206,  -206,  1355,   155,   805,  -206,   -21,   151,  -206,  1146,
    -206,  -206,    90,    90,  -206,   119,   849,   335,   881,   117,
     121,  1433,  -206,  -206,  -206,   335,   925,   957,  -206,  1023,
    -206,  -206,  1055,  -206,  -206,    10,  1115,  -206,   116,  -206,
    -206,   401,   445,   103
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      37,    37,     0,    55,    36,     1,     9,     8,     2,    55,
       0,     5,    54,    10,    11,    17,    12,    13,    14,    15,
      19,    16,    20,    18,     0,     0,     3,     0,     0,    22,
       0,    24,     0,     0,     0,    21,     0,     0,    30,    37,
      33,     0,    31,    26,     0,    39,    32,     0,     0,    29,
      30,    27,    23,     6,    57,    37,    37,    28,     0,     0,
       0,     0,    37,    51,     0,     0,     0,   115,   112,   121,
     120,    37,    37,   113,   110,   111,   114,   117,   116,     0,
       0,    38,    57,    34,    75,    74,     0,   108,    37,     0,
     107,   123,     0,     0,    30,     0,     0,    57,     0,     0,
      41,     0,   124,     0,   122,   120,     0,   108,   106,     0,
      92,     0,     0,     0,     0,    39,    85,     0,     0,     0,
      57,    56,    35,     0,   109,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    37,     7,     4,
      25,     0,     0,     0,     0,    59,     0,     0,     0,    50,
       0,     0,     0,     0,     0,    91,     0,    88,    61,    93,
      57,     0,     0,   118,     0,   115,     0,   100,    94,   101,
      96,    97,    98,    99,    95,   105,   102,   103,   104,    73,
       0,     0,     0,     0,    58,    57,    83,     0,    84,     0,
       0,   125,     0,     0,    47,     0,    89,    92,   119,     0,
       0,    86,    37,    78,    77,    57,    57,    60,     0,    37,
      57,     0,     0,   113,     0,   126,     0,   119,     0,     0,
       0,    40,    90,     0,    87,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,    45,    42,    37,
      69,    68,     0,    62,    57,    82,     0,     0,    49,     0,
      53,   127,     0,     0,    79,     0,    57,    37,     0,     0,
       0,     0,    43,    44,    70,    37,     0,     0,    63,    57,
      48,    52,     0,    67,    64,    37,    57,    65,     0,    39,
      72,    57,    57,     0
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -206,  -206,  -206,  -206,  -206,  -206,    -9,  -206,  -206,  -206,
     -39,  -206,   -47,     0,  -112,  -206,  -205,  -206,  -206,  -206,
     160,   -50,  -180,   -40,  -141,  -206,  -192,  -206,   -52,  -206,
    -206,   -25,   172,   120,  -206
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     8,    26,     9,    10,    24,    32,    35,    52,
      43,    47,    44,    45,    54,    81,   195,   100,   101,   149,
      11,   120,   144,   145,    84,    85,   122,    86,   107,    88,
     112,   154,    89,    90,    91
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       3,     4,    87,   160,    82,   210,   187,   223,    92,    93,
       1,    57,   247,     1,    83,   238,    28,   116,    63,   110,
     117,   152,    34,   186,   113,   226,   227,    64,    25,   229,
      87,     5,   248,    13,    14,    15,    16,    17,    18,    19,
      20,    21,   121,    58,    66,    87,    79,   262,   263,   102,
     249,    29,   103,    39,    95,   140,    27,   109,    30,    96,
     218,   219,    99,    31,   258,     6,     7,    33,    87,   -83,
      40,   250,   115,    49,    50,    22,   266,   267,   191,   192,
     121,    36,   220,    37,     1,   272,    23,    38,   124,   276,
     283,   110,    87,   111,    41,   188,    42,    46,    48,    51,
      53,    55,    56,    64,   184,   259,    94,    97,    98,   118,
     199,   123,   -84,   142,    65,   138,   139,   147,   148,   151,
      67,   150,    68,    69,   157,   105,   153,   161,   106,   163,
     158,   205,   189,    87,   194,   208,   196,   179,    73,    74,
      75,    76,    77,    78,   203,   211,   212,    87,    79,   221,
      80,   -82,   228,    87,    87,   239,   233,    87,    87,   121,
     244,   251,   256,   260,   264,   269,   270,   281,   280,    12,
     184,   125,   222,   126,    87,    87,   127,    87,   128,   129,
     130,   131,   132,     0,   104,     0,   184,   184,     0,   184,
       0,     0,    87,     0,   188,     0,     0,     0,     0,     0,
       0,     0,   225,     0,    87,    87,    87,     0,     0,   115,
       0,     0,     0,    87,    87,    87,     0,    87,   184,     0,
      87,     0,     0,     0,    87,     0,   184,   184,   278,    87,
      87,   282,   184,     0,     0,     0,   184,   108,     0,   254,
       0,    83,   121,   114,     0,   125,     0,   126,     0,     0,
     127,     0,   128,   129,   130,   131,   132,   115,   133,   134,
     135,   136,     0,     0,     0,   115,     0,   141,     0,     0,
     146,     0,     0,     0,   198,   279,     0,     0,   114,     0,
       0,     0,   155,   156,     0,     0,     0,     0,     0,   162,
       0,   164,     0,     0,     0,   166,     0,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,     0,
       0,     0,     0,     0,   181,   182,     0,     0,     0,     0,
       0,   125,   190,   126,   193,     0,   127,     0,   128,   129,
     130,   131,   132,   200,   133,   134,   135,   136,     1,    59,
      60,    61,     0,    62,   143,     0,     0,     0,     0,     0,
     215,     0,     0,     0,     0,     0,     0,    64,     0,     0,
       0,   214,     0,     0,   216,     0,     0,     0,    65,   155,
       0,     0,     0,     0,    67,     0,    68,    69,     0,    70,
       0,     0,    71,   231,   232,     0,    72,   -57,     0,     0,
     236,   237,    73,    74,    75,    76,    77,    78,     0,     0,
     242,     0,    79,     0,    80,    59,    60,    61,     0,    62,
       0,     0,     0,    63,     0,     0,     0,   125,     0,   126,
       0,   261,   127,    64,   128,   129,   130,   131,   132,     0,
     133,   134,   135,   136,    65,     0,     0,     0,     0,    66,
      67,     0,    68,    69,     0,    70,   217,     0,    71,    59,
      60,    61,    72,    62,   119,     0,     0,     0,    73,    74,
      75,    76,    77,    78,   125,     0,   126,    64,    79,   127,
      80,   128,   129,   130,   131,   132,     0,   133,    65,     0,
     136,     0,     0,     0,    67,     0,    68,    69,     0,    70,
       0,     0,    71,    59,    60,    61,    72,    62,   143,     0,
       0,     0,    73,    74,    75,    76,    77,    78,     0,     0,
       0,    64,    79,     0,    80,     0,     0,     0,     0,     0,
       0,     0,    65,     0,     0,    59,    60,    61,    67,    62,
      68,    69,     0,    70,     0,     0,    71,     0,     0,     0,
      72,     0,     0,    64,     0,     0,    73,    74,    75,    76,
      77,    78,     0,     0,    65,     0,    79,     0,    80,     0,
      67,     0,    68,    69,     0,    70,     0,     0,    71,     0,
       0,     0,    72,   183,     0,     0,     0,     0,    73,    74,
      75,    76,    77,    78,     0,     0,     0,     0,    79,     0,
      80,    59,    60,    61,     0,    62,   143,     0,     0,     0,
       0,     0,     0,   125,     0,   126,     0,     0,   127,    64,
     128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
      65,     0,     0,    59,    60,    61,    67,    62,    68,    69,
       0,    70,   224,     0,    71,     0,     0,     0,   209,     0,
       0,    64,     0,     0,    73,    74,    75,    76,    77,    78,
       0,     0,    65,     0,    79,     0,    80,     0,    67,     0,
      68,    69,     0,    70,   230,     0,    71,    59,    60,    61,
      72,    62,     0,     0,     0,     0,    73,    74,    75,    76,
      77,    78,     0,     0,     0,    64,    79,     0,    80,     0,
       0,     0,     0,     0,     0,     0,    65,     0,     0,    59,
      60,    61,    67,    62,    68,    69,     0,    70,     0,     0,
      71,     0,     0,     0,    72,   240,     0,    64,     0,     0,
      73,    74,    75,    76,    77,    78,     0,     0,    65,     0,
      79,     0,    80,     0,    67,     0,    68,    69,     0,    70,
     241,     0,    71,    59,    60,    61,    72,    62,     0,     0,
       0,     0,    73,    74,    75,    76,    77,    78,     0,     0,
       0,    64,    79,     0,    80,     0,     0,     0,     0,     0,
       0,     0,    65,     0,     0,     0,     0,     0,    67,     0,
      68,    69,     0,    70,     0,     0,    71,     0,     0,     0,
      72,   243,     0,     0,     0,     0,    73,    74,    75,    76,
      77,    78,     0,     0,     0,     0,    79,     0,    80,    59,
      60,    61,     0,    62,   143,     0,     0,     0,     0,     0,
       0,   125,     0,   126,     0,     0,   127,    64,   128,   129,
     130,   131,   132,     0,   133,   134,   135,   136,    65,     0,
       0,     0,     0,     0,    67,     0,    68,    69,     0,    70,
     234,     0,    71,    59,    60,    61,   257,    62,   143,     0,
       0,     0,    73,    74,    75,    76,    77,    78,     0,     0,
       0,    64,    79,     0,    80,     0,     0,     0,     0,     0,
       0,     0,    65,     0,     0,    59,    60,    61,    67,    62,
      68,    69,     0,    70,     0,     0,    71,     0,     0,     0,
     265,     0,     0,    64,     0,     0,    73,    74,    75,    76,
      77,    78,     0,     0,    65,     0,    79,     0,    80,     0,
      67,     0,    68,    69,     0,    70,   268,     0,    71,    59,
      60,    61,    72,    62,     0,     0,     0,     0,    73,    74,
      75,    76,    77,    78,     0,     0,     0,    64,    79,     0,
      80,     0,     0,     0,     0,     0,     0,     0,    65,     0,
       0,    59,    60,    61,    67,    62,    68,    69,     0,    70,
     273,     0,    71,     0,     0,     0,    72,     0,     0,    64,
       0,     0,    73,    74,    75,    76,    77,    78,     0,     0,
      65,     0,    79,     0,    80,     0,    67,     0,    68,    69,
       0,    70,     0,     0,    71,     0,     0,     0,    72,   274,
       0,     0,     0,     0,    73,    74,    75,    76,    77,    78,
       0,     0,     0,     0,    79,     0,    80,    59,    60,    61,
       0,    62,   143,     0,     0,     0,     0,     0,     0,   125,
       0,   126,     0,     0,   127,    64,   128,   129,   130,   131,
     132,     0,   133,   134,   135,   136,    65,     0,     0,    59,
      60,    61,    67,    62,    68,    69,     0,    70,   235,     0,
      71,     0,     0,     0,   275,     0,     0,    64,     0,     0,
      73,    74,    75,    76,    77,    78,     0,     0,    65,     0,
      79,     0,    80,     0,    67,     0,    68,    69,     0,    70,
       0,     0,    71,     0,     0,     0,    72,   277,     0,     0,
       0,     0,    73,    74,    75,    76,    77,    78,     0,    59,
      60,    61,    79,    62,    80,     0,     0,     0,     0,     0,
       0,   125,     0,   126,     0,     0,   127,    64,   128,   129,
     130,   131,   132,     0,   133,   134,   135,   136,    65,     0,
       0,     0,     0,     0,    67,     0,    68,    69,     0,    70,
     245,     0,    71,     0,     0,     0,    72,     0,    64,     0,
       0,     0,    73,    74,    75,    76,    77,    78,     0,    65,
       0,     0,    79,     0,    80,    67,     0,    68,    69,     0,
     105,     0,     0,   106,     0,     0,     0,     0,     0,    64,
       0,     0,     0,    73,    74,    75,    76,    77,    78,     0,
      65,     0,     0,    79,     0,    80,   165,     0,    68,    69,
       0,   105,     0,     0,   106,     0,     0,     0,     0,     0,
      64,     0,     0,     0,    73,    74,    75,    76,    77,    78,
       0,    65,     0,     0,    79,     0,    80,    67,     0,    68,
      69,     0,   105,     0,     0,   106,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   213,    74,    75,    76,    77,
      78,   125,     0,   126,     0,    79,   127,    80,   128,   129,
     130,   131,   132,     0,   133,   134,   135,   136,     0,     0,
       0,     0,   125,     0,   126,     0,     0,   127,   159,   128,
     129,   130,   131,   132,     0,   133,   134,   135,   136,     0,
       0,     0,     0,   125,     0,   126,     0,     0,   127,   180,
     128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
       0,     0,     0,     0,   125,     0,   126,     0,     0,   127,
     185,   128,   129,   130,   131,   132,     0,   133,   134,   135,
     136,     0,     0,     0,     0,   125,     0,   126,     0,     0,
     127,   201,   128,   129,   130,   131,   132,     0,   133,   134,
     135,   136,     0,     0,     0,     0,   125,     0,   126,     0,
       0,   127,   206,   128,   129,   130,   131,   132,     0,   133,
     134,   135,   136,     0,     0,     0,     0,   125,     0,   126,
       0,     0,   127,   255,   128,   129,   130,   131,   132,     0,
     133,   134,   135,   136,     0,     0,   125,     0,   126,     0,
       0,   127,   197,   128,   129,   130,   131,   132,     0,   133,
     134,   135,   136,     0,     0,   125,     0,   126,     0,     0,
     127,   252,   128,   129,   130,   131,   132,     0,   133,   134,
     135,   136,     0,     0,   125,     0,   126,     0,     0,   127,
     253,   128,   129,   130,   131,   132,     0,   133,   134,   135,
     136,     0,     0,   125,     0,   126,     0,     0,   127,   271,
     128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
       0,   125,     0,   126,     0,     0,   127,   137,   128,   129,
     130,   131,   132,     0,   133,   134,   135,   136,     0,   125,
       0,   126,     0,     0,   127,   202,   128,   129,   130,   131,
     132,     0,   133,   134,   135,   136,     0,   125,     0,   126,
       0,     0,   127,   204,   128,   129,   130,   131,   132,     0,
     133,   134,   135,   136,     0,   125,     0,   126,     0,     0,
     127,   207,   128,   129,   130,   131,   132,     0,   133,   134,
     135,   136,     0,     0,     0,     0,     0,     0,     0,   246
};

static const yytype_int16 yycheck[] =
{
       0,     1,    54,   115,    54,   185,   147,   199,    55,    56,
       3,    50,    25,     3,    54,   220,    25,    44,    12,    47,
      47,    49,    31,    44,    71,   205,   206,    22,    54,   209,
      82,     0,    45,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    82,    52,    38,    97,    67,   252,   253,    44,
      25,    47,    47,    51,    47,    94,    44,    66,    43,    59,
      24,    25,    62,    10,   244,    54,    55,    47,   120,    25,
      68,    46,    72,    45,    46,    53,   256,   257,    48,    49,
     120,    48,    46,    48,     3,   265,    64,    68,    88,   269,
     282,    47,   144,    49,    68,   147,    44,    56,    56,    44,
      52,    51,    51,    22,   144,   246,    68,    51,    47,    69,
     160,    25,    25,    47,    33,    52,    52,    47,    44,    44,
      39,    49,    41,    42,    45,    44,    68,    49,    47,    44,
      48,    51,    49,   185,    44,     4,    48,   137,    57,    58,
      59,    60,    61,    62,    45,    49,    45,   199,    67,    45,
      69,    25,    47,   205,   206,    52,    50,   209,   210,   199,
       7,    48,     7,    12,    45,    48,    45,   279,    52,     9,
     210,    21,   197,    23,   226,   227,    26,   229,    28,    29,
      30,    31,    32,    -1,    64,    -1,   226,   227,    -1,   229,
      -1,    -1,   244,    -1,   246,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   202,    -1,   256,   257,   258,    -1,    -1,   209,
      -1,    -1,    -1,   265,   266,   267,    -1,   269,   258,    -1,
     272,    -1,    -1,    -1,   276,    -1,   266,   267,   275,   281,
     282,   281,   272,    -1,    -1,    -1,   276,    65,    -1,   239,
      -1,   281,   282,    71,    -1,    21,    -1,    23,    -1,    -1,
      26,    -1,    28,    29,    30,    31,    32,   257,    34,    35,
      36,    37,    -1,    -1,    -1,   265,    -1,    95,    -1,    -1,
      98,    -1,    -1,    -1,    50,   275,    -1,    -1,   106,    -1,
      -1,    -1,   110,   111,    -1,    -1,    -1,    -1,    -1,   117,
      -1,   119,    -1,    -1,    -1,   123,    -1,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,    -1,
      -1,    -1,    -1,    -1,   142,   143,    -1,    -1,    -1,    -1,
      -1,    21,   150,    23,   152,    -1,    26,    -1,    28,    29,
      30,    31,    32,   161,    34,    35,    36,    37,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      -1,   189,    -1,    -1,   192,    -1,    -1,    -1,    33,   197,
      -1,    -1,    -1,    -1,    39,    -1,    41,    42,    -1,    44,
      -1,    -1,    47,   211,   212,    -1,    51,    52,    -1,    -1,
     218,   219,    57,    58,    59,    60,    61,    62,    -1,    -1,
     228,    -1,    67,    -1,    69,     4,     5,     6,    -1,     8,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    21,    -1,    23,
      -1,   249,    26,    22,    28,    29,    30,    31,    32,    -1,
      34,    35,    36,    37,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    41,    42,    -1,    44,    50,    -1,    47,     4,
       5,     6,    51,     8,     9,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    21,    -1,    23,    22,    67,    26,
      69,    28,    29,    30,    31,    32,    -1,    34,    33,    -1,
      37,    -1,    -1,    -1,    39,    -1,    41,    42,    -1,    44,
      -1,    -1,    47,     4,     5,     6,    51,     8,     9,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    62,    -1,    -1,
      -1,    22,    67,    -1,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,     4,     5,     6,    39,     8,
      41,    42,    -1,    44,    -1,    -1,    47,    -1,    -1,    -1,
      51,    -1,    -1,    22,    -1,    -1,    57,    58,    59,    60,
      61,    62,    -1,    -1,    33,    -1,    67,    -1,    69,    -1,
      39,    -1,    41,    42,    -1,    44,    -1,    -1,    47,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    -1,    -1,    -1,    -1,    67,    -1,
      69,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    23,    -1,    -1,    26,    22,
      28,    29,    30,    31,    32,    -1,    34,    35,    36,    37,
      33,    -1,    -1,     4,     5,     6,    39,     8,    41,    42,
      -1,    44,    50,    -1,    47,    -1,    -1,    -1,    51,    -1,
      -1,    22,    -1,    -1,    57,    58,    59,    60,    61,    62,
      -1,    -1,    33,    -1,    67,    -1,    69,    -1,    39,    -1,
      41,    42,    -1,    44,    45,    -1,    47,     4,     5,     6,
      51,     8,    -1,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    62,    -1,    -1,    -1,    22,    67,    -1,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,     4,
       5,     6,    39,     8,    41,    42,    -1,    44,    -1,    -1,
      47,    -1,    -1,    -1,    51,    52,    -1,    22,    -1,    -1,
      57,    58,    59,    60,    61,    62,    -1,    -1,    33,    -1,
      67,    -1,    69,    -1,    39,    -1,    41,    42,    -1,    44,
      45,    -1,    47,     4,     5,     6,    51,     8,    -1,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    62,    -1,    -1,
      -1,    22,    67,    -1,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      41,    42,    -1,    44,    -1,    -1,    47,    -1,    -1,    -1,
      51,    52,    -1,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    62,    -1,    -1,    -1,    -1,    67,    -1,    69,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    23,    -1,    -1,    26,    22,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    33,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    41,    42,    -1,    44,
      50,    -1,    47,     4,     5,     6,    51,     8,     9,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    62,    -1,    -1,
      -1,    22,    67,    -1,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,     4,     5,     6,    39,     8,
      41,    42,    -1,    44,    -1,    -1,    47,    -1,    -1,    -1,
      51,    -1,    -1,    22,    -1,    -1,    57,    58,    59,    60,
      61,    62,    -1,    -1,    33,    -1,    67,    -1,    69,    -1,
      39,    -1,    41,    42,    -1,    44,    45,    -1,    47,     4,
       5,     6,    51,     8,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    -1,    -1,    -1,    22,    67,    -1,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,     4,     5,     6,    39,     8,    41,    42,    -1,    44,
      45,    -1,    47,    -1,    -1,    -1,    51,    -1,    -1,    22,
      -1,    -1,    57,    58,    59,    60,    61,    62,    -1,    -1,
      33,    -1,    67,    -1,    69,    -1,    39,    -1,    41,    42,
      -1,    44,    -1,    -1,    47,    -1,    -1,    -1,    51,    52,
      -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,    62,
      -1,    -1,    -1,    -1,    67,    -1,    69,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    23,    -1,    -1,    26,    22,    28,    29,    30,    31,
      32,    -1,    34,    35,    36,    37,    33,    -1,    -1,     4,
       5,     6,    39,     8,    41,    42,    -1,    44,    50,    -1,
      47,    -1,    -1,    -1,    51,    -1,    -1,    22,    -1,    -1,
      57,    58,    59,    60,    61,    62,    -1,    -1,    33,    -1,
      67,    -1,    69,    -1,    39,    -1,    41,    42,    -1,    44,
      -1,    -1,    47,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    62,    -1,     4,
       5,     6,    67,     8,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    23,    -1,    -1,    26,    22,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    33,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    41,    42,    -1,    44,
      50,    -1,    47,    -1,    -1,    -1,    51,    -1,    22,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    62,    -1,    33,
      -1,    -1,    67,    -1,    69,    39,    -1,    41,    42,    -1,
      44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    22,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    -1,
      33,    -1,    -1,    67,    -1,    69,    39,    -1,    41,    42,
      -1,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      22,    -1,    -1,    -1,    57,    58,    59,    60,    61,    62,
      -1,    33,    -1,    -1,    67,    -1,    69,    39,    -1,    41,
      42,    -1,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      62,    21,    -1,    23,    -1,    67,    26,    69,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    21,    -1,    23,    -1,    -1,    26,    48,    28,
      29,    30,    31,    32,    -1,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    21,    -1,    23,    -1,    -1,    26,    48,
      28,    29,    30,    31,    32,    -1,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    21,    -1,    23,    -1,    -1,    26,
      48,    28,    29,    30,    31,    32,    -1,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    21,    -1,    23,    -1,    -1,
      26,    48,    28,    29,    30,    31,    32,    -1,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    21,    -1,    23,    -1,
      -1,    26,    48,    28,    29,    30,    31,    32,    -1,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    21,    -1,    23,
      -1,    -1,    26,    48,    28,    29,    30,    31,    32,    -1,
      34,    35,    36,    37,    -1,    -1,    21,    -1,    23,    -1,
      -1,    26,    46,    28,    29,    30,    31,    32,    -1,    34,
      35,    36,    37,    -1,    -1,    21,    -1,    23,    -1,    -1,
      26,    46,    28,    29,    30,    31,    32,    -1,    34,    35,
      36,    37,    -1,    -1,    21,    -1,    23,    -1,    -1,    26,
      46,    28,    29,    30,    31,    32,    -1,    34,    35,    36,
      37,    -1,    -1,    21,    -1,    23,    -1,    -1,    26,    46,
      28,    29,    30,    31,    32,    -1,    34,    35,    36,    37,
      -1,    21,    -1,    23,    -1,    -1,    26,    45,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    -1,    21,
      -1,    23,    -1,    -1,    26,    45,    28,    29,    30,    31,
      32,    -1,    34,    35,    36,    37,    -1,    21,    -1,    23,
      -1,    -1,    26,    45,    28,    29,    30,    31,    32,    -1,
      34,    35,    36,    37,    -1,    21,    -1,    23,    -1,    -1,
      26,    45,    28,    29,    30,    31,    32,    -1,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    71,    83,    83,     0,    54,    55,    72,    74,
      75,    90,    90,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    53,    64,    76,    54,    73,    44,    76,    47,
      43,    10,    77,    47,    76,    78,    48,    48,    68,    51,
      68,    68,    44,    80,    82,    83,    56,    81,    56,    45,
      46,    44,    79,    52,    84,    51,    51,    80,    76,     4,
       5,     6,     8,    12,    22,    33,    38,    39,    41,    42,
      44,    47,    51,    57,    58,    59,    60,    61,    62,    67,
      69,    85,    91,    93,    94,    95,    97,    98,    99,   102,
     103,   104,    82,    82,    68,    47,    83,    51,    47,    83,
      87,    88,    44,    47,   103,    44,    47,    98,   102,    76,
      47,    49,   100,    82,   102,    83,    44,    47,    69,     9,
      91,    93,    96,    25,    83,    21,    23,    26,    28,    29,
      30,    31,    32,    34,    35,    36,    37,    45,    52,    52,
      80,   102,    47,     9,    92,    93,   102,    47,    44,    89,
      49,    44,    49,    68,   101,   102,   102,    45,    48,    48,
      84,    49,   102,    44,   102,    39,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,    83,
      48,   102,   102,    52,    93,    48,    44,    94,    98,    49,
     102,    48,    49,   102,    44,    86,    48,    46,    50,    91,
     102,    48,    45,    45,    45,    51,    48,    45,     4,    51,
      92,    49,    45,    57,   102,    50,   102,    50,    24,    25,
      46,    45,   101,    96,    50,    83,    92,    92,    47,    92,
      45,   102,   102,    50,    50,    50,   102,   102,    86,    52,
      52,    45,   102,    52,     7,    50,    45,    25,    45,    25,
      46,    48,    46,    46,    83,    48,     7,    51,    92,    94,
      12,   102,    86,    86,    45,    51,    92,    92,    45,    48,
      45,    46,    92,    45,    52,    51,    92,    52,    82,    83,
      52,    84,    91,    96
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    70,    71,    72,    73,    73,    74,    74,    75,    75,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    77,    77,    78,    78,    79,    79,    79,    80,    80,
      80,    80,    81,    81,    82,    82,    83,    83,    84,    84,
      85,    85,    86,    86,    86,    86,    86,    86,    87,    87,
      88,    88,    89,    89,    90,    90,    91,    91,    92,    92,
      92,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    94,    94,    95,
      95,    96,    97,    97,    97,    98,    98,    98,    99,   100,
     101,   101,   101,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   103,   103,   104,   104,   104,   104
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,    10,     0,     9,    11,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     0,     4,     0,     4,     0,     1,     3,     2,
       0,     1,     1,     0,     3,     4,     2,     0,     2,     0,
       5,     2,     3,     5,     5,     3,     3,     1,     8,     6,
       2,     0,     7,     5,     2,     0,     2,     0,     2,     1,
       3,     3,     7,     9,    10,    11,     5,    10,     7,     7,
       9,    10,    12,     3,     1,     1,     1,     4,     4,     7,
       0,     4,     4,     1,     1,     2,     4,     5,     3,     3,
       3,     1,     0,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     4,
       1,     1,     2,     1,     2,     4,     5,     7
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* project: cmmnt program  */
#line 55 "parser.y"
                       { Printtree((yyvsp[0].node)); printf("syntax valid\n");}
#line 1797 "y.tab.c"
    break;

  case 3: /* program: multi_function main  */
#line 57 "parser.y"
                             {(yyval.node)=mknode("CODE",(yyvsp[-1].node),(yyvsp[0].node));}
#line 1803 "y.tab.c"
    break;

  case 4: /* main: PUBLIC type MAIN '(' ')' ':' STATIC '{' function_body '}'  */
#line 59 "parser.y"
                                                                {(yyval.node)=mknode("public", mknode("Main",mknode("\n",(yyvsp[-3].string),NULL),NULL), mknode("body",NULL,(yyvsp[-1].node)));}
#line 1809 "y.tab.c"
    break;

  case 5: /* main: %empty  */
#line 60 "parser.y"
  {(yyval.node)=NULL;}
#line 1815 "y.tab.c"
    break;

  case 6: /* function: function_access_level type IDENTIFIER '(' parameter_list ')' '{' function_body '}'  */
#line 63 "parser.y"
{(yyval.node) = mknode("func", mknode((yyvsp[-6].string), (yyvsp[-8].node), mknode("ARGS", (yyvsp[-4].node), mknode("return", (yyvsp[-1].node), NULL))), mknode("", (yyvsp[-1].node), NULL));}
#line 1821 "y.tab.c"
    break;

  case 7: /* function: function_access_level type IDENTIFIER '(' parameter_list ')' ':' static_function '{' function_body '}'  */
#line 65 "parser.y"
{(yyval.node) = mknode("func", mknode((yyvsp[-8].string), (yyvsp[-10].node), mknode("ARGS", (yyvsp[-6].node), mknode("return", (yyvsp[-3].node), NULL))), mknode("body", NULL, (yyvsp[-1].node)));}
#line 1827 "y.tab.c"
    break;

  case 8: /* function_access_level: PRIVATE  */
#line 67 "parser.y"
                               { (yyval.node) = mknode("private", NULL, NULL); }
#line 1833 "y.tab.c"
    break;

  case 9: /* function_access_level: PUBLIC  */
#line 68 "parser.y"
         { (yyval.node) = mknode("public", NULL, NULL); }
#line 1839 "y.tab.c"
    break;

  case 10: /* type: BOOL  */
#line 70 "parser.y"
           {(yyval.node)=mknode("boolean", NULL, NULL);}
#line 1845 "y.tab.c"
    break;

  case 11: /* type: STRING  */
#line 71 "parser.y"
                 {(yyval.node)=mknode("string", NULL, NULL);}
#line 1851 "y.tab.c"
    break;

  case 12: /* type: CHAR  */
#line 72 "parser.y"
               {(yyval.node)=mknode("char", NULL, NULL);}
#line 1857 "y.tab.c"
    break;

  case 13: /* type: INT  */
#line 73 "parser.y"
              {(yyval.node)=mknode("int", NULL, NULL);}
#line 1863 "y.tab.c"
    break;

  case 14: /* type: DOUBLE  */
#line 74 "parser.y"
                 {(yyval.node)=mknode("double", NULL, NULL);}
#line 1869 "y.tab.c"
    break;

  case 15: /* type: FLOAT  */
#line 75 "parser.y"
                { (yyval.node) = mknode("int", NULL, NULL); }
#line 1875 "y.tab.c"
    break;

  case 16: /* type: INTPTR  */
#line 76 "parser.y"
                 {(yyval.node)=mknode("int*", NULL, NULL);}
#line 1881 "y.tab.c"
    break;

  case 17: /* type: CHARPTR  */
#line 77 "parser.y"
                  {(yyval.node)=mknode("char*", NULL, NULL);}
#line 1887 "y.tab.c"
    break;

  case 18: /* type: FLOATPTR  */
#line 78 "parser.y"
                   {(yyval.node)=mknode("float*", NULL, NULL);}
#line 1893 "y.tab.c"
    break;

  case 19: /* type: DOUBPTR  */
#line 79 "parser.y"
                  { (yyval.node) = mknode("double*", NULL, NULL); }
#line 1899 "y.tab.c"
    break;

  case 20: /* type: VOID  */
#line 80 "parser.y"
               { (yyval.node) = mknode("void*", NULL, NULL); }
#line 1905 "y.tab.c"
    break;

  case 21: /* parameter_list: ARGS parameter_type  */
#line 82 "parser.y"
                                     { (yyval.node) = mknode("ARGS", (yyvsp[0].node), NULL); }
#line 1911 "y.tab.c"
    break;

  case 22: /* parameter_list: %empty  */
#line 83 "parser.y"
  { (yyval.node) = NULL; }
#line 1917 "y.tab.c"
    break;

  case 23: /* parameter_type: type ':' arguments params_list  */
#line 86 "parser.y"
                                                {(yyval.node) = mknode("params", (yyvsp[-3].node), (yyvsp[0].node)); }
#line 1923 "y.tab.c"
    break;

  case 24: /* parameter_type: %empty  */
#line 87 "parser.y"
  {(yyval.node)=NULL;}
#line 1929 "y.tab.c"
    break;

  case 25: /* params_list: params_list type ':' arguments  */
#line 90 "parser.y"
                                            { (yyval.node) = mknode("params", (yyvsp[-3].node), (yyvsp[0].node)); }
#line 1935 "y.tab.c"
    break;

  case 26: /* params_list: %empty  */
#line 91 "parser.y"
  { (yyval.node) = NULL; }
#line 1941 "y.tab.c"
    break;

  case 27: /* params_list: IDENTIFIER  */
#line 92 "parser.y"
             { (yyval.node) = NULL; }
#line 1947 "y.tab.c"
    break;

  case 28: /* arguments: IDENTIFIER ',' arguments  */
#line 94 "parser.y"
                                    { (yyval.node) = mknode("arguments", mknode((yyvsp[-2].string), NULL, NULL), (yyvsp[0].node)); }
#line 1953 "y.tab.c"
    break;

  case 29: /* arguments: IDENTIFIER ';'  */
#line 95 "parser.y"
                 { (yyval.node) = mknode("arguments", mknode((yyvsp[-1].string), NULL, NULL), NULL); }
#line 1959 "y.tab.c"
    break;

  case 30: /* arguments: %empty  */
#line 96 "parser.y"
  { (yyval.node) = NULL; }
#line 1965 "y.tab.c"
    break;

  case 31: /* arguments: IDENTIFIER  */
#line 97 "parser.y"
             { (yyval.node) = NULL; }
#line 1971 "y.tab.c"
    break;

  case 32: /* static_function: STATIC  */
#line 99 "parser.y"
                        { (yyval.node) = mknode("Static", NULL, NULL); }
#line 1977 "y.tab.c"
    break;

  case 33: /* static_function: %empty  */
#line 100 "parser.y"
      { (yyval.node) = mknode("Nonstatic", NULL, NULL); }
#line 1983 "y.tab.c"
    break;

  case 34: /* function_body: cmmnt declarations statement  */
#line 103 "parser.y"
{ (yyval.node)=mknode("(BODY\n", mknode("",(yyvsp[-1].node),NULL),mknode("",(yyvsp[0].node),mknode("}",NULL,NULL)));}
#line 1989 "y.tab.c"
    break;

  case 35: /* function_body: cmmnt declarations statements return_value  */
#line 105 "parser.y"
{ (yyval.node)=mknode("(BODY\n", mknode("",(yyvsp[-2].node),NULL),mknode("",(yyvsp[-1].node),mknode("",(yyvsp[0].node), mknode("}",NULL,NULL))));}
#line 1995 "y.tab.c"
    break;

  case 36: /* cmmnt: COMMENT cmmnt  */
#line 107 "parser.y"
                     {(yyval.node) = mknode("COMMENT", mknode((yyvsp[-1].string), NULL, NULL), (yyvsp[0].node));}
#line 2001 "y.tab.c"
    break;

  case 37: /* cmmnt: %empty  */
#line 108 "parser.y"
  { (yyval.node) = NULL; }
#line 2007 "y.tab.c"
    break;

  case 38: /* declarations: declarations declare  */
#line 110 "parser.y"
                                   {(yyval.node)=mknode("",(yyvsp[-1].node),(yyvsp[0].node));}
#line 2013 "y.tab.c"
    break;

  case 39: /* declarations: %empty  */
#line 111 "parser.y"
  {(yyval.node)=NULL;}
#line 2019 "y.tab.c"
    break;

  case 40: /* declare: VARIABLE type ':' var_id ';'  */
#line 114 "parser.y"
                                      {(yyval.node) = mknode("var", (yyvsp[-3].node), mknode("",(yyvsp[-1].node), NULL));}
#line 2025 "y.tab.c"
    break;

  case 41: /* declare: STRING string_exp2  */
#line 115 "parser.y"
                     { (yyval.node) = mknode((yyvsp[-1].string), (yyvsp[0].node), NULL); }
#line 2031 "y.tab.c"
    break;

  case 42: /* var_id: IDENTIFIER ',' var_id  */
#line 117 "parser.y"
                              {(yyval.node)=mknode((yyvsp[-2].string), mknode(" ", (yyvsp[0].node), NULL),NULL);}
#line 2037 "y.tab.c"
    break;

  case 43: /* var_id: IDENTIFIER ASSINGMENT expr ',' var_id  */
#line 118 "parser.y"
                                        {(yyval.node)=mknode((yyvsp[-4].string), (yyvsp[-2].node), NULL);}
#line 2043 "y.tab.c"
    break;

  case 44: /* var_id: IDENTIFIER ASS expr ',' var_id  */
#line 119 "parser.y"
                                  {(yyval.node) = mknode((yyvsp[-4].string), (yyvsp[-2].node), NULL); }
#line 2049 "y.tab.c"
    break;

  case 45: /* var_id: IDENTIFIER ASS expr  */
#line 120 "parser.y"
                      {(yyval.node) = mknode("", mknode((yyvsp[-2].string), NULL, NULL), NULL); }
#line 2055 "y.tab.c"
    break;

  case 46: /* var_id: IDENTIFIER ASSINGMENT expr  */
#line 121 "parser.y"
                             {(yyval.node) = mknode((yyvsp[-2].string), (yyvsp[0].node), NULL);}
#line 2061 "y.tab.c"
    break;

  case 47: /* var_id: IDENTIFIER  */
#line 122 "parser.y"
             {(yyval.node) = NULL; }
#line 2067 "y.tab.c"
    break;

  case 48: /* string_exp2: multi_string_exp IDENTIFIER '[' INT_LTL ']' ASS STRING ';'  */
#line 124 "parser.y"
                                                                        { (yyval.node) = mknode("", (yyvsp[-7].node), mknode((yyvsp[-6].string), mknode("[", mknode((yyvsp[-4].string), NULL, NULL), mknode("]", NULL, NULL)), mknode((yyvsp[-1].string), NULL, NULL))); }
#line 2073 "y.tab.c"
    break;

  case 49: /* string_exp2: multi_string_exp IDENTIFIER '[' INT_LTL ']' ';'  */
#line 125 "parser.y"
                                                  { (yyval.node) = mknode("", (yyvsp[-5].node), mknode((yyvsp[-4].string), mknode("[", mknode((yyvsp[-2].string), NULL, NULL), mknode("]", NULL, NULL)),mknode("]", NULL, NULL))); }
#line 2079 "y.tab.c"
    break;

  case 50: /* multi_string_exp: multi_string_exp string_exp  */
#line 127 "parser.y"
                                              { (yyval.node) = mknode("", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2085 "y.tab.c"
    break;

  case 51: /* multi_string_exp: %empty  */
#line 128 "parser.y"
      { (yyval.node) = NULL; }
#line 2091 "y.tab.c"
    break;

  case 52: /* string_exp: IDENTIFIER '[' expr ']' ASS expr ','  */
#line 130 "parser.y"
                                                 { (yyval.node) = mknode((yyvsp[-6].string), mknode((yyvsp[-5].string), (yyvsp[-4].node), mknode((yyvsp[-3].string), NULL, NULL)), mknode((yyvsp[-2].string), (yyvsp[-1].node), NULL)); }
#line 2097 "y.tab.c"
    break;

  case 53: /* string_exp: IDENTIFIER '[' expr ']' ','  */
#line 131 "parser.y"
                              { (yyval.node) = mknode((yyvsp[-4].string), mknode("[", (yyvsp[-2].node), mknode("]", NULL, NULL)), NULL); }
#line 2103 "y.tab.c"
    break;

  case 54: /* multi_function: function multi_function  */
#line 133 "parser.y"
                                        {(yyval.node)=mknode("",(yyvsp[-1].node),(yyvsp[0].node));}
#line 2109 "y.tab.c"
    break;

  case 55: /* multi_function: %empty  */
#line 134 "parser.y"
  {(yyval.node)=NULL;}
#line 2115 "y.tab.c"
    break;

  case 56: /* statements: statements statement  */
#line 136 "parser.y"
                                 {(yyval.node)=mknode("",(yyvsp[-1].node),(yyvsp[0].node));}
#line 2121 "y.tab.c"
    break;

  case 57: /* statements: %empty  */
#line 137 "parser.y"
  {(yyval.node)=NULL;}
#line 2127 "y.tab.c"
    break;

  case 58: /* statement_block: statement_block statement  */
#line 139 "parser.y"
                                           {(yyval.node)=(yyvsp[0].node);}
#line 2133 "y.tab.c"
    break;

  case 59: /* statement_block: statement  */
#line 140 "parser.y"
            {(yyval.node)=(yyvsp[0].node);}
#line 2139 "y.tab.c"
    break;

  case 60: /* statement_block: RETURN expr ';'  */
#line 141 "parser.y"
                  {(yyval.node)=mknode("return",(yyvsp[-1].node),NULL);}
#line 2145 "y.tab.c"
    break;

  case 61: /* statement: '(' function_body ')'  */
#line 143 "parser.y"
                                 { (yyval.node) = mknode("", (yyvsp[-1].node), NULL); }
#line 2151 "y.tab.c"
    break;

  case 62: /* statement: IF '(' expr ')' '{' statement_block '}'  */
#line 144 "parser.y"
                                          { (yyval.node) = mknode("IF", mknode("(", (yyvsp[-4].node), mknode(")", NULL, NULL)), mknode("BLOCK", (yyvsp[-1].node), NULL)); }
#line 2157 "y.tab.c"
    break;

  case 63: /* statement: IF '(' expr ')' statement_block ';' ELSE statement_block ';'  */
#line 145 "parser.y"
                                                               { (yyval.node) = mknode("IF-ELSE", mknode("(", (yyvsp[-6].node), mknode(")", NULL, NULL)), mknode("BLOCK", (yyvsp[-4].node), (yyvsp[-1].node))); }
#line 2163 "y.tab.c"
    break;

  case 64: /* statement: IF '(' expr ')' statement_block ';' ELSE '{' statement_block '}'  */
#line 146 "parser.y"
                                                                   { (yyval.node) = mknode("IF-ELSE", mknode("(", (yyvsp[-7].node), mknode(")", NULL, NULL)), mknode("BLOCK", (yyvsp[-5].node), mknode("BLOCK", (yyvsp[-1].node), NULL))); }
#line 2169 "y.tab.c"
    break;

  case 65: /* statement: IF '(' expr ')' '{' statement_block '}' ELSE '{' statement_block '}'  */
#line 147 "parser.y"
                                                                       { (yyval.node) = mknode("IF-ELSE", mknode("(", (yyvsp[-8].node), mknode(")", NULL, NULL)), mknode("BLOCK", (yyvsp[-5].node), mknode("BLOCK", (yyvsp[-1].node), NULL))); }
#line 2175 "y.tab.c"
    break;

  case 66: /* statement: IF '(' expr ')' statement_block  */
#line 148 "parser.y"
                                  { (yyval.node)=mknode("IF", mknode("(", (yyvsp[-2].node), mknode(")",NULL,NULL)),(yyvsp[0].node));}
#line 2181 "y.tab.c"
    break;

  case 67: /* statement: IF '(' expr ')' '{' statement_block '}' ELSE statement_block ';'  */
#line 149 "parser.y"
                                                                   { (yyval.node)=mknode("IF_ELSE", mknode("(", (yyvsp[-7].node), mknode(")",NULL,NULL)), mknode("",(yyvsp[-5].string), mknode("", (yyvsp[-3].string),NULL)));}
#line 2187 "y.tab.c"
    break;

  case 68: /* statement: WHILE cmmnt '(' expr ')' statement_block ';'  */
#line 150 "parser.y"
                                               { (yyval.node)=mknode("WHILE", mknode("(", (yyvsp[-3].node), mknode(")",NULL,NULL)),(yyvsp[-1].node));}
#line 2193 "y.tab.c"
    break;

  case 69: /* statement: WHILE '(' expr ')' '{' statement_block '}'  */
#line 151 "parser.y"
                                             { (yyval.node) = mknode("WHILE", mknode("(", (yyvsp[-4].node), mknode(")", NULL, NULL)), mknode("BLOCK", (yyvsp[-1].node), NULL)); }
#line 2199 "y.tab.c"
    break;

  case 70: /* statement: DO '{' statement_block '}' WHILE '(' expr ')' ';'  */
#line 152 "parser.y"
                                                    { (yyval.node) = mknode("DO", mknode("(", (yyvsp[-6].node), mknode(")", NULL, NULL)), mknode("BLOCK", (yyvsp[-4].string), NULL)); }
#line 2205 "y.tab.c"
    break;

  case 71: /* statement: FOR cmmnt '(' assignment_statement ';' expr ';' assignment_statement ')' statement_block  */
#line 153 "parser.y"
                                                                                           { (yyval.node)= mknode("for", mknode("(", mknode("",(yyvsp[-6].node),(yyvsp[-4].node)), mknode("",(yyvsp[-2].node), mknode(")",NULL,NULL))),(yyvsp[0].node));}
#line 2211 "y.tab.c"
    break;

  case 72: /* statement: FOR cmmnt '(' assignment_statement ';' expr ';' assignment_statement ')' '{' function_body '}'  */
#line 154 "parser.y"
                                                                                                 { (yyval.node)= mknode("for", mknode("(", mknode("",(yyvsp[-8].node),(yyvsp[-6].node)), mknode("",(yyvsp[-4].node), mknode(")",NULL,NULL))),(yyvsp[-1].node));}
#line 2217 "y.tab.c"
    break;

  case 73: /* statement: expr ';' cmmnt  */
#line 155 "parser.y"
                 {(yyval.node)=(yyvsp[-2].node);}
#line 2223 "y.tab.c"
    break;

  case 74: /* statement: code_block  */
#line 156 "parser.y"
             {(yyval.node)=(yyvsp[0].node);}
#line 2229 "y.tab.c"
    break;

  case 75: /* statement: assignment_statement  */
#line 157 "parser.y"
                       {(yyval.node) = mknode("ASSIGN", (yyvsp[0].node), NULL);}
#line 2235 "y.tab.c"
    break;

  case 76: /* statement: statements  */
#line 158 "parser.y"
             {(yyval.node)=(yyvsp[0].node);}
#line 2241 "y.tab.c"
    break;

  case 77: /* assignment_statement: lhs ASS expr ';'  */
#line 171 "parser.y"
                                       {(yyval.node) = mknode("<-", (yyvsp[-3].node), (yyvsp[-1].node));}
#line 2247 "y.tab.c"
    break;

  case 78: /* assignment_statement: lhs ASS STRING_LTL ';'  */
#line 172 "parser.y"
                         {(yyval.node) = mknode("<-", (yyvsp[-3].node), (yyvsp[-1].string));}
#line 2253 "y.tab.c"
    break;

  case 79: /* code_block: '{' cmmnt declarations statements return_value '}' cmmnt  */
#line 174 "parser.y"
                                                                     {(yyval.node)=mknode("{",(yyvsp[-4].node),mknode("", (yyvsp[-3].node), mknode("",(yyvsp[-2].node),mknode("}",NULL,NULL))));}
#line 2259 "y.tab.c"
    break;

  case 80: /* code_block: %empty  */
#line 175 "parser.y"
  { (yyval.node) = NULL; }
#line 2265 "y.tab.c"
    break;

  case 81: /* return_value: RETURN expr ';' cmmnt  */
#line 177 "parser.y"
                                    {(yyval.node)=mknode("return",(yyvsp[-2].node),NULL);}
#line 2271 "y.tab.c"
    break;

  case 82: /* lhs: IDENTIFIER '[' expr ']'  */
#line 179 "parser.y"
                             { (yyval.node)=mknode((yyvsp[-3].string), mknode("[",(yyvsp[-1].node),mknode("]",NULL,NULL)), NULL);}
#line 2277 "y.tab.c"
    break;

  case 83: /* lhs: IDENTIFIER  */
#line 180 "parser.y"
             {(yyval.node)=mknode((yyvsp[0].string),NULL,NULL);}
#line 2283 "y.tab.c"
    break;

  case 84: /* lhs: derefrence_expr  */
#line 181 "parser.y"
                  {(yyval.node)=(yyvsp[0].node);}
#line 2289 "y.tab.c"
    break;

  case 85: /* derefrence_expr: DEREFRENCE IDENTIFIER  */
#line 183 "parser.y"
                                       {(yyval.node)=mknode("^",mknode((yyvsp[0].string),NULL,NULL),NULL);}
#line 2295 "y.tab.c"
    break;

  case 86: /* derefrence_expr: DEREFRENCE '(' expr ')'  */
#line 184 "parser.y"
                          {(yyval.node)=mknode("^",mknode("(",(yyvsp[-1].node),NULL),mknode(")",NULL,NULL));}
#line 2301 "y.tab.c"
    break;

  case 87: /* derefrence_expr: DEREFRENCE IDENTIFIER '[' expr ']'  */
#line 185 "parser.y"
                                     {(yyval.node)=mknode((yyvsp[-4].string), mknode((yyvsp[-3].string),NULL,NULL), mknode("[",(yyvsp[-1].node),mknode("]",NULL,NULL)));}
#line 2307 "y.tab.c"
    break;

  case 88: /* function_call: IDENTIFIER paren_expression ';'  */
#line 187 "parser.y"
                                               {(yyval.node)=mknode("function call",mknode((yyvsp[-2].string),NULL,NULL),mknode("ARGS",(yyvsp[-1].node),NULL));}
#line 2313 "y.tab.c"
    break;

  case 89: /* paren_expression: '(' expression_list ')'  */
#line 190 "parser.y"
                                         {(yyval.node)=(yyvsp[-1].node);}
#line 2319 "y.tab.c"
    break;

  case 90: /* expression_list: expr ',' expression_list  */
#line 192 "parser.y"
                                          {(yyval.node)=mknode("",(yyvsp[-2].node),mknode(",",(yyvsp[0].node),NULL));}
#line 2325 "y.tab.c"
    break;

  case 91: /* expression_list: expr  */
#line 193 "parser.y"
       {(yyval.node)=mknode("",(yyvsp[0].node),NULL);}
#line 2331 "y.tab.c"
    break;

  case 92: /* expression_list: %empty  */
#line 194 "parser.y"
  {(yyval.node)=NULL;}
#line 2337 "y.tab.c"
    break;

  case 93: /* expr: '(' expr ')'  */
#line 196 "parser.y"
                    {(yyval.node)=mknode("(",(yyvsp[-1].node),mknode(")",NULL,NULL));}
#line 2343 "y.tab.c"
    break;

  case 94: /* expr: expr EQL expr  */
#line 197 "parser.y"
                        {(yyval.node)=mknode("==",(yyvsp[-2].node),(yyvsp[0].node));}
#line 2349 "y.tab.c"
    break;

  case 95: /* expr: expr NOTEQL expr  */
#line 198 "parser.y"
                           {(yyval.node)=mknode("!=",(yyvsp[-2].node),(yyvsp[0].node));}
#line 2355 "y.tab.c"
    break;

  case 96: /* expr: expr GREATEREQL expr  */
#line 199 "parser.y"
                               {(yyval.node)=mknode(">=",(yyvsp[-2].node),(yyvsp[0].node));}
#line 2361 "y.tab.c"
    break;

  case 97: /* expr: expr GREATER expr  */
#line 200 "parser.y"
                            {(yyval.node)=mknode(">",(yyvsp[-2].node),(yyvsp[0].node));}
#line 2367 "y.tab.c"
    break;

  case 98: /* expr: expr LESSEQL expr  */
#line 201 "parser.y"
                            {(yyval.node)=mknode("<=",(yyvsp[-2].node),(yyvsp[0].node));}
#line 2373 "y.tab.c"
    break;

  case 99: /* expr: expr LESS expr  */
#line 202 "parser.y"
                         {(yyval.node)=mknode("<",(yyvsp[-2].node),(yyvsp[0].node));}
#line 2379 "y.tab.c"
    break;

  case 100: /* expr: expr AND expr  */
#line 203 "parser.y"
                        {(yyval.node)=mknode("&&",(yyvsp[-2].node),(yyvsp[0].node));}
#line 2385 "y.tab.c"
    break;

  case 101: /* expr: expr OR expr  */
#line 204 "parser.y"
                       {(yyval.node)=mknode("||",(yyvsp[-2].node),(yyvsp[0].node));}
#line 2391 "y.tab.c"
    break;

  case 102: /* expr: expr PLUS expr  */
#line 205 "parser.y"
                         {(yyval.node)=mknode("+",(yyvsp[-2].node),(yyvsp[0].node));}
#line 2397 "y.tab.c"
    break;

  case 103: /* expr: expr MINUS expr  */
#line 206 "parser.y"
                          {(yyval.node)=mknode("-",(yyvsp[-2].node),(yyvsp[0].node));}
#line 2403 "y.tab.c"
    break;

  case 104: /* expr: expr MULTI expr  */
#line 207 "parser.y"
                          {(yyval.node)=mknode("*",(yyvsp[-2].node),(yyvsp[0].node));}
#line 2409 "y.tab.c"
    break;

  case 105: /* expr: expr DIVISION expr  */
#line 208 "parser.y"
                             {(yyval.node)=mknode("/",(yyvsp[-2].node),(yyvsp[0].node));}
#line 2415 "y.tab.c"
    break;

  case 106: /* expr: NOT expr  */
#line 209 "parser.y"
                   {(yyval.node)=mknode("!",(yyvsp[0].node),NULL);}
#line 2421 "y.tab.c"
    break;

  case 107: /* expr: address_exprs  */
#line 210 "parser.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 2427 "y.tab.c"
    break;

  case 108: /* expr: derefrence_expr  */
#line 211 "parser.y"
                          {(yyval.node)=(yyvsp[0].node);}
#line 2433 "y.tab.c"
    break;

  case 109: /* expr: function_call cmmnt  */
#line 212 "parser.y"
                              {(yyval.node)=(yyvsp[-1].node);}
#line 2439 "y.tab.c"
    break;

  case 110: /* expr: DECIMAL_LTL  */
#line 213 "parser.y"
                      {(yyval.node)=mknode((yyvsp[0].string),NULL,NULL);}
#line 2445 "y.tab.c"
    break;

  case 111: /* expr: HEX_LTL  */
#line 214 "parser.y"
                  {(yyval.node)=mknode((yyvsp[0].string),NULL,NULL);}
#line 2451 "y.tab.c"
    break;

  case 112: /* expr: CHAR_LTL  */
#line 215 "parser.y"
                   {(yyval.node)=mknode((yyvsp[0].string),NULL,NULL);}
#line 2457 "y.tab.c"
    break;

  case 113: /* expr: INT_LTL  */
#line 216 "parser.y"
                  {(yyval.node)=mknode((yyvsp[0].string),NULL,NULL);}
#line 2463 "y.tab.c"
    break;

  case 114: /* expr: FLOAT_LTL  */
#line 217 "parser.y"
                    {(yyval.node)=mknode((yyvsp[0].string),NULL,NULL);}
#line 2469 "y.tab.c"
    break;

  case 115: /* expr: STRING_LTL  */
#line 218 "parser.y"
                     {(yyval.node)=mknode((yyvsp[0].string),NULL,NULL);}
#line 2475 "y.tab.c"
    break;

  case 116: /* expr: BOOLFALSE  */
#line 219 "parser.y"
                    {(yyval.node)=mknode((yyvsp[0].string),NULL,NULL);}
#line 2481 "y.tab.c"
    break;

  case 117: /* expr: BOOLTRUE  */
#line 220 "parser.y"
                   {(yyval.node)=mknode((yyvsp[0].string),NULL,NULL);}
#line 2487 "y.tab.c"
    break;

  case 118: /* expr: '|' '|' IDENTIFIER  */
#line 221 "parser.y"
                             { (yyval.node)=mknode("|", mknode("|",NULL,NULL), mknode((yyvsp[0].string),NULL,NULL));}
#line 2493 "y.tab.c"
    break;

  case 119: /* expr: IDENTIFIER '[' expr ']'  */
#line 222 "parser.y"
                                  {(yyval.node)=mknode((yyvsp[-3].string),mknode("[",(yyvsp[-1].node),mknode("]",NULL,NULL)),NULL);}
#line 2499 "y.tab.c"
    break;

  case 120: /* expr: IDENTIFIER  */
#line 223 "parser.y"
                     {(yyval.node)=mknode((yyvsp[0].string),NULL,NULL);}
#line 2505 "y.tab.c"
    break;

  case 121: /* expr: NULLL  */
#line 224 "parser.y"
                {(yyval.node)=mknode("null",NULL,NULL);}
#line 2511 "y.tab.c"
    break;

  case 122: /* address_exprs: ADDRESS address_exprs  */
#line 226 "parser.y"
                                    {(yyval.node)=mknode((yyvsp[-1].string),(yyvsp[0].node),NULL);}
#line 2517 "y.tab.c"
    break;

  case 123: /* address_exprs: address_expr  */
#line 226 "parser.y"
                                                                            {(yyval.node)=(yyvsp[0].node);}
#line 2523 "y.tab.c"
    break;

  case 124: /* address_expr: ADDRESS IDENTIFIER  */
#line 228 "parser.y"
                                 {(yyval.node)=mknode("&",mknode((yyvsp[0].string),NULL,NULL),NULL);}
#line 2529 "y.tab.c"
    break;

  case 125: /* address_expr: ADDRESS '(' IDENTIFIER ')'  */
#line 229 "parser.y"
                                     {(yyval.node)=mknode("&",mknode("(",mknode((yyvsp[-1].string),NULL,NULL),NULL),mknode(")",NULL,NULL));}
#line 2535 "y.tab.c"
    break;

  case 126: /* address_expr: ADDRESS IDENTIFIER '[' expr ']'  */
#line 230 "parser.y"
                                          {(yyval.node)=mknode("&", mknode((yyvsp[-3].string),NULL,NULL), mknode("[",(yyvsp[-1].node),mknode("]",NULL,NULL)));}
#line 2541 "y.tab.c"
    break;

  case 127: /* address_expr: ADDRESS '(' IDENTIFIER '[' expr ']' ')'  */
#line 231 "parser.y"
                                                  {(yyval.node)=mknode("&",mknode("(", mknode((yyvsp[-4].string),NULL,NULL),mknode("[",(yyvsp[-2].node),NULL)), mknode("]",NULL,mknode(")",NULL,NULL)));}
#line 2547 "y.tab.c"
    break;


#line 2551 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 233 "parser.y"


int main()
{
	return yyparse();	
}

/* allocation for node*/
node* mknode (char *token, node *left, node *right)
{
	node *newnode = (node*)malloc(sizeof(node));
	newnode->left=left;
	newnode->right=right;
	newnode->token=token;
	return newnode;
}

void printTabs(int n)
{
	int i;
	for(i=0;i<n/3;i++)
		printf(" ");
}
void Printtree(node* tree)
{
	int flag = 4;
	printTabs(printlevel); 
	if(strcmp(tree->token, "var") == 0)
	{
		
		printf("(DECLARE ");
		flag=2;
		
		
	}
	else if(strcmp(tree->token, "if") == 0)
	{
		printf("(IF\n");
		flag = 1;
		
		
	}
		else if(strcmp(tree->token, "while") == 0)
	{
		printf("(WHILE\n");
		flag = 1;
		
		
	}
			else if(strcmp(tree->token, "for") == 0)
	{
		printf("(FOR\n");
		flag = 1;
		
		
	}
		else if(strcmp(tree->token, "func") == 0 ||strcmp(tree->token, "proc") == 0 ||strcmp(tree->token, "CODE") == 0||strcmp(tree->token, "Call func") == 0)
	{
		printf("(%s \n",tree->token);
		flag= 2;
		
	}
		else if(strcmp(tree->token, "ARGS") == 0)
	{
		printf("(ARGS ");
		if(tree->left)
		{
			flag = 2;
			printf("\n");
			
		}
		else{
			printf(" NONE)\n"); 
		}
	

	}
		else if(strcmp(tree->token, "if-else") == 0)
	{
		printf("(IF-ELSE\n");
		printlevel--;
		
		flag = 1;
	}
			else if(strcmp(tree->token, "return") == 0)
	{
		printf("(return_value ");
		flag = 2;
	}
	else if(strcmp(tree->token, "{") == 0)
	{
                printf("(BLOCK\n");
				
				
	}
	else if(strcmp(tree->token, "}") == 0)
	{
		printf(")\n");
	}
	else if(strcmp(tree->token, "") == 0);
	else if(strcmp(tree->token, "(") == 0)
			printf("(");
	else if(strcmp(tree->token, "\n") == 0)
			printf("\n");
	else if(strcmp(tree->token, ")") == 0)
			printf(")\n");
	else if(strcmp(tree->token, ",") == 0)
			printf(",");
	else if(strcmp(tree->token, ";") == 0)
			printf("\n");
	else if(strcmp(tree->token, "&&") == 0 ||
strcmp(tree->token, "/") == 0 || 
strcmp(tree->token, "=") == 0 || 
strcmp(tree->token, "==") == 0 || 
strcmp(tree->token, ">") == 0 || 
strcmp(tree->token, ">=") == 0 || 
strcmp(tree->token, "<") == 0 || 
strcmp(tree->token, "<=") == 0 || 
strcmp(tree->token, "-") == 0 || 
strcmp(tree->token, "!") == 0 || 
strcmp(tree->token, "!=") == 0 || 
strcmp(tree->token, "||") == 0 || 
strcmp(tree->token, "+") == 0 || 
strcmp(tree->token, "*") == 0 || 
strcmp(tree->token, "&") == 0 || 
strcmp(tree->token, "^") == 0 || 
strcmp(tree->token, "|") == 0 || 
strcmp(tree->token, ",") == 0 )
	{
			printf("(%s",tree->token);
			flag=1;
			if(strcmp(tree->token, "=") == 0)
				flag=2;
				
	}
	else
	{
		if(tree && (!tree->left && !tree->right)
		||strcmp(tree->token, "Main") == 0)
		{
			printf("%s ", tree->token);
			
		}
		else
		{
			printlevel++;
			printf("%s", tree->token);
			printlevel--;
		
		}
	}
	if (tree->left) 
	{
		printlevel++;
		Printtree(tree->left);
		printlevel--;
	}
	
	if (tree->right)
	{
		printlevel++;
		Printtree(tree->right);
		printlevel--;
		
	}
	if(flag == 2)
		printf(")\n");
	
	if(flag == 1)
		printf(")");
	if(flag == 0)
		printf("\n)");
}

void yyerror(char *e) {
    fflush(stdout);
    fprintf(stderr, "Error %s at line %d\n", e, yylineno);
    fprintf(stderr, "does not accept '%s'\n", yytext);
    
}
