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
int yyerror(char *e);
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
  YYSYMBOL_FLOATPTR = 18,                  /* FLOATPTR  */
  YYSYMBOL_DOUBPTR = 19,                   /* DOUBPTR  */
  YYSYMBOL_INTPTR = 20,                    /* INTPTR  */
  YYSYMBOL_PROCEDUR = 21,                  /* PROCEDUR  */
  YYSYMBOL_AND = 22,                       /* AND  */
  YYSYMBOL_ADDRESS = 23,                   /* ADDRESS  */
  YYSYMBOL_EQL = 24,                       /* EQL  */
  YYSYMBOL_ASSINGMENT = 25,                /* ASSINGMENT  */
  YYSYMBOL_ASS = 26,                       /* ASS  */
  YYSYMBOL_OR = 27,                        /* OR  */
  YYSYMBOL_LENGTH = 28,                    /* LENGTH  */
  YYSYMBOL_GREATEREQL = 29,                /* GREATEREQL  */
  YYSYMBOL_GREATER = 30,                   /* GREATER  */
  YYSYMBOL_LESSEQL = 31,                   /* LESSEQL  */
  YYSYMBOL_LESS = 32,                      /* LESS  */
  YYSYMBOL_NOTEQL = 33,                    /* NOTEQL  */
  YYSYMBOL_NOT = 34,                       /* NOT  */
  YYSYMBOL_DIVISION = 35,                  /* DIVISION  */
  YYSYMBOL_PLUS = 36,                      /* PLUS  */
  YYSYMBOL_MINUS = 37,                     /* MINUS  */
  YYSYMBOL_MULTI = 38,                     /* MULTI  */
  YYSYMBOL_VARIABLE = 39,                  /* VARIABLE  */
  YYSYMBOL_STRING_LTL = 40,                /* STRING_LTL  */
  YYSYMBOL_REAL_LTL = 41,                  /* REAL_LTL  */
  YYSYMBOL_CHAR_LTL = 42,                  /* CHAR_LTL  */
  YYSYMBOL_NULLL = 43,                     /* NULLL  */
  YYSYMBOL_MAIN = 44,                      /* MAIN  */
  YYSYMBOL_IDENTIFIER = 45,                /* IDENTIFIER  */
  YYSYMBOL_46_ = 46,                       /* ';'  */
  YYSYMBOL_47_ = 47,                       /* ','  */
  YYSYMBOL_48_ = 48,                       /* '('  */
  YYSYMBOL_49_ = 49,                       /* ')'  */
  YYSYMBOL_50_ = 50,                       /* '['  */
  YYSYMBOL_51_ = 51,                       /* ']'  */
  YYSYMBOL_52_ = 52,                       /* '{'  */
  YYSYMBOL_53_ = 53,                       /* '}'  */
  YYSYMBOL_VOID = 54,                      /* VOID  */
  YYSYMBOL_PUBLIC = 55,                    /* PUBLIC  */
  YYSYMBOL_PRIVATE = 56,                   /* PRIVATE  */
  YYSYMBOL_STATIC = 57,                    /* STATIC  */
  YYSYMBOL_INT_LTL = 58,                   /* INT_LTL  */
  YYSYMBOL_DECIMAL_LTL = 59,               /* DECIMAL_LTL  */
  YYSYMBOL_HEX_LTL = 60,                   /* HEX_LTL  */
  YYSYMBOL_BOOLTRUE = 61,                  /* BOOLTRUE  */
  YYSYMBOL_BOOLFALSE = 62,                 /* BOOLFALSE  */
  YYSYMBOL_REAL = 63,                      /* REAL  */
  YYSYMBOL_REALPTR = 64,                   /* REALPTR  */
  YYSYMBOL_FUNCTION = 65,                  /* FUNCTION  */
  YYSYMBOL_COLON = 66,                     /* COLON  */
  YYSYMBOL_DEREFRENCE = 67,                /* DEREFRENCE  */
  YYSYMBOL_68_ = 68,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 69,                  /* $accept  */
  YYSYMBOL_project = 70,                   /* project  */
  YYSYMBOL_program = 71,                   /* program  */
  YYSYMBOL_cmmnt = 72,                     /* cmmnt  */
  YYSYMBOL_main = 73,                      /* main  */
  YYSYMBOL_procedures = 74,                /* procedures  */
  YYSYMBOL_procedure = 75,                 /* procedure  */
  YYSYMBOL_stat = 76,                      /* stat  */
  YYSYMBOL_funct = 77,                     /* funct  */
  YYSYMBOL_args = 78,                      /* args  */
  YYSYMBOL_para_pro = 79,                  /* para_pro  */
  YYSYMBOL_para_list = 80,                 /* para_list  */
  YYSYMBOL_arguments = 81,                 /* arguments  */
  YYSYMBOL_pro_body = 82,                  /* pro_body  */
  YYSYMBOL_declears = 83,                  /* declears  */
  YYSYMBOL_declear = 84,                   /* declear  */
  YYSYMBOL_stv = 85,                       /* stv  */
  YYSYMBOL_stvs = 86,                      /* stvs  */
  YYSYMBOL_st = 87,                        /* st  */
  YYSYMBOL_var_id = 88,                    /* var_id  */
  YYSYMBOL_type_id = 89,                   /* type_id  */
  YYSYMBOL_type_pro = 90,                  /* type_pro  */
  YYSYMBOL_stmnts = 91,                    /* stmnts  */
  YYSYMBOL_stmnt_block = 92,               /* stmnt_block  */
  YYSYMBOL_new_block = 93,                 /* new_block  */
  YYSYMBOL_RET = 94,                       /* RET  */
  YYSYMBOL_stmnt = 95,                     /* stmnt  */
  YYSYMBOL_assmnt_stmnt = 96,              /* assmnt_stmnt  */
  YYSYMBOL_expr = 97,                      /* expr  */
  YYSYMBOL_address_exprs = 98,             /* address_exprs  */
  YYSYMBOL_address_expr = 99,              /* address_expr  */
  YYSYMBOL_derefrence_expr = 100,          /* derefrence_expr  */
  YYSYMBOL_expr_list = 101,                /* expr_list  */
  YYSYMBOL_paren_expr = 102,               /* paren_expr  */
  YYSYMBOL_call_func = 103                 /* call_func  */
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
#define YYLAST   877

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  138
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  298

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
      48,    49,     2,     2,    47,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    68,    46,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,    51,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,     2,    53,     2,     2,     2,     2,
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
      45,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    59,    59,    61,    63,    64,    66,    67,    69,    70,
      72,    74,    77,    78,    80,    81,    83,    84,    87,    88,
      91,    92,    93,    95,    96,    97,    98,   101,   105,   105,
     108,   109,   111,   112,   114,   115,   117,   118,   121,   122,
     123,   124,   125,   126,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   155,   155,   158,   159,
     162,   164,   164,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   231,   231,   233,   234,   235,
     237,   247,   248,   249,   252,   253,   254,   256,   258
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
  "CHAR", "INT", "DOUBLE", "FLOAT", "FLOATPTR", "DOUBPTR", "INTPTR",
  "PROCEDUR", "AND", "ADDRESS", "EQL", "ASSINGMENT", "ASS", "OR", "LENGTH",
  "GREATEREQL", "GREATER", "LESSEQL", "LESS", "NOTEQL", "NOT", "DIVISION",
  "PLUS", "MINUS", "MULTI", "VARIABLE", "STRING_LTL", "REAL_LTL",
  "CHAR_LTL", "NULLL", "MAIN", "IDENTIFIER", "';'", "','", "'('", "')'",
  "'['", "']'", "'{'", "'}'", "VOID", "PUBLIC", "PRIVATE", "STATIC",
  "INT_LTL", "DECIMAL_LTL", "HEX_LTL", "BOOLTRUE", "BOOLFALSE", "REAL",
  "REALPTR", "FUNCTION", "COLON", "DEREFRENCE", "':'", "$accept",
  "project", "program", "cmmnt", "main", "procedures", "procedure", "stat",
  "funct", "args", "para_pro", "para_list", "arguments", "pro_body",
  "declears", "declear", "stv", "stvs", "st", "var_id", "type_id",
  "type_pro", "stmnts", "stmnt_block", "new_block", "RET", "stmnt",
  "assmnt_stmnt", "expr", "address_exprs", "address_expr",
  "derefrence_expr", "expr_list", "paren_expr", "call_func", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-233)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      18,    18,    26,   -21,  -233,  -233,  -233,  -233,  -233,    -5,
     -21,   373,   373,  -233,  -233,  -233,  -233,  -233,  -233,  -233,
    -233,  -233,  -233,  -233,  -233,  -233,    15,    22,    31,    37,
     105,    81,   373,    82,    65,  -233,    79,   -35,    86,    99,
    -233,   101,    18,   108,    74,   126,    18,   122,    18,  -233,
      99,  -233,   373,   123,    18,  -233,   124,  -233,   110,    18,
     127,    -2,  -233,    99,   130,  -233,  -233,   384,  -233,  -233,
    -233,  -233,  -233,   134,  -233,  -233,  -233,  -233,  -233,  -233,
    -233,  -233,  -233,  -233,  -233,   118,   161,   139,  -233,   145,
      18,   144,    18,   383,    93,   148,   383,   149,  -233,  -233,
    -233,  -233,    38,    94,    18,  -233,  -233,  -233,  -233,  -233,
      84,  -233,  -233,  -233,   150,   731,  -233,  -233,  -233,    18,
     412,   138,   151,   152,   383,   157,   100,    45,   383,   749,
     -11,   153,  -233,   179,  -233,   182,   383,   435,   458,   383,
    -233,   162,   550,  -233,   166,   383,    18,   383,   383,   383,
     383,   383,   383,   383,   383,   383,   383,   383,   383,    18,
    -233,   168,   571,   383,   383,   145,  -233,   383,   592,   143,
     174,   383,    18,   173,   383,    75,  -233,   -27,   767,   128,
      51,   785,     9,   176,   655,   177,    76,  -233,  -233,     2,
     383,   613,  -233,  -233,  -233,  -233,  -233,  -233,  -233,  -233,
    -233,   259,   839,   839,   259,  -233,    -1,    -9,   674,   693,
    -233,   634,   206,   185,     4,   181,  -233,   186,   499,  -233,
     383,   187,   190,  -233,   -22,   191,  -233,  -233,   205,   383,
    -233,  -233,   161,   516,  -233,   227,  -233,   383,  -233,   145,
     145,   271,   383,    18,     1,  -233,   215,   184,   383,  -233,
    -233,   533,  -233,  -233,  -233,  -233,   203,  -233,   197,  -233,
     207,   712,  -233,  -233,  -233,   803,  -233,   199,   271,   248,
     176,   821,   208,   210,    18,  -233,  -233,  -233,    -2,   252,
    -233,   316,   143,  -233,  -233,  -233,   209,    18,   214,   213,
      18,   216,  -233,   271,   217,  -233,  -233,  -233
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     5,     0,     9,     4,     1,    15,    14,     2,     7,
       9,     0,     0,     3,     8,    55,    56,    62,    57,    58,
      60,    64,    61,    65,    59,    63,     0,     0,     0,     0,
      17,     0,    19,     0,     0,    16,     0,    13,     0,    25,
      12,    13,     5,     0,    26,    21,     5,     0,     5,    24,
      25,    22,    18,     0,     5,    29,     0,    23,     0,     5,
       0,     9,     6,    25,     0,    10,    35,     0,    67,    28,
      20,    11,    31,     0,    44,    45,    51,    46,    47,    49,
      53,    50,    54,    48,    52,     0,    72,     0,    34,     0,
       5,     0,     5,     0,     0,     0,     0,     0,   118,   117,
     115,   124,   123,     5,     5,   116,   113,   114,   120,   119,
       0,    84,    27,    66,    85,     0,   110,   126,   111,     5,
       0,    43,     0,     0,     0,     0,     0,   123,     0,     0,
     127,     0,   125,     0,   109,     0,     0,     0,   136,     0,
     138,     0,     0,    29,   131,     0,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
     112,   116,     0,     0,     0,     0,    30,     0,     0,     0,
     127,   136,     5,     0,     0,     0,   121,     0,     0,     0,
     123,     0,     5,   116,   135,     0,     0,    73,    96,    67,
       0,     0,    82,   103,    97,   104,    99,   100,   101,   102,
      98,   108,   105,   106,   107,    83,     0,     0,    42,    41,
      38,     0,     0,     0,     0,     0,    71,     0,     0,   128,
       0,     0,     0,    87,   127,     0,    86,    95,     0,   136,
     137,   122,    72,     0,   132,     0,    33,     0,    37,     0,
       0,     0,     0,     5,    78,    68,     0,     0,     0,    89,
     129,     0,    91,    92,    88,    90,     0,   134,     0,   133,
       0,     0,    39,    40,    80,     0,    29,     0,     0,     0,
       0,     0,     0,     0,     5,    32,    36,    69,     9,    74,
      79,     0,     0,   130,    93,    70,     0,     5,     0,     0,
       5,     0,    75,     0,     0,    76,    81,    77
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -233,  -233,  -233,     0,  -233,    17,  -233,   222,  -233,  -233,
    -233,  -233,   -31,   -52,  -140,  -233,  -233,  -233,  -233,  -159,
    -233,    50,   204,  -232,  -233,    39,   -82,  -164,   -80,   -83,
    -233,  -233,    47,  -233,   141
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     8,    55,    13,    68,    10,    42,    11,    33,
      35,    52,    45,    56,    61,    69,    72,    73,    88,   122,
      85,    26,   232,   244,   111,   112,   245,   114,   115,   116,
     117,   118,   185,   140,   119
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       3,     4,    60,   189,   113,   215,   210,    64,   268,   264,
      66,   132,     1,   129,    66,   173,   134,   237,   221,    57,
       9,     1,    40,   142,   254,   235,     5,    14,   174,   136,
     137,   222,    70,    41,     6,     7,   280,    67,   238,   174,
     162,    67,    47,   132,   168,   236,    53,   269,   142,   288,
      12,   141,   247,     6,     7,   227,   178,   181,   184,   186,
      28,   296,    27,   136,   137,   191,    29,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,    30,
     262,   263,    36,   208,   209,    31,   138,   211,   139,   225,
     123,   184,   125,   171,   218,   139,   132,     1,   147,   171,
     148,   139,    58,   149,   143,   150,   151,   152,   153,   154,
     233,   155,   156,   157,   158,    32,   126,   126,   289,   160,
      49,    50,    95,   126,   219,   220,   278,   231,    96,   144,
      34,    37,   145,    38,    98,    99,   100,   101,   130,   127,
     251,   131,   128,    43,    44,   170,   192,    39,   131,   184,
     113,   126,   105,   106,   107,   108,   109,   261,    40,   205,
      48,   110,   265,   163,   164,    90,   213,    91,   271,    92,
      93,    51,   216,   224,    54,    59,   131,    62,    63,    87,
      65,    97,   160,    71,    94,   165,    89,   120,   214,    95,
     121,   267,   124,   133,   135,    96,   146,   166,   175,    97,
     167,    98,    99,   100,   101,   169,   102,   176,   177,   103,
      90,   187,    91,   104,    92,   242,   190,   206,   217,   105,
     106,   107,   108,   109,   174,   228,   230,   248,   110,    94,
     246,   256,   249,   252,    95,   291,   253,   255,   294,   260,
      96,   173,   270,   266,    97,   273,    98,    99,   100,   101,
     274,   102,   279,   275,   103,   281,   284,   283,   243,   286,
     292,   290,   293,    46,   105,   106,   107,   108,   109,   295,
     297,   258,    86,   110,   285,    90,   257,    91,   182,    92,
     242,   147,     0,   148,     0,     0,   149,   266,   150,   151,
     152,   153,   154,     0,    94,     0,     0,     0,     0,    95,
       0,     0,     0,     0,     0,    96,     0,     0,     0,    97,
       0,    98,    99,   100,   101,     0,   102,     0,     0,   103,
      90,     0,    91,   104,    92,   242,     0,     0,     0,   105,
     106,   107,   108,   109,     0,     0,     0,     0,   110,    94,
       0,     0,     0,     0,    95,     0,     0,     0,     0,     0,
      96,     0,     0,     0,    97,     0,    98,    99,   100,   101,
       0,   102,     0,     0,   103,     0,     0,     0,   287,     0,
       0,     0,     0,     0,   105,   106,   107,   108,   109,     0,
       0,     0,     0,   110,    15,    16,    17,    18,    19,     0,
      20,     0,    21,    22,     0,    74,    75,    76,    77,    78,
       0,    79,     0,    80,    81,     0,   126,     0,     0,     0,
       0,    95,     0,     0,     0,     0,     0,    96,     0,     0,
       0,     0,     0,    98,    99,   100,   101,    23,   127,     0,
       0,   128,     0,     0,     0,   126,    24,    25,    82,     0,
      95,   105,   106,   107,   108,   109,    96,    83,    84,     0,
     110,     0,    98,    99,   100,   101,     0,   127,   179,     0,
     128,     0,     0,    95,     0,     0,     0,     0,     0,    96,
     161,   106,   107,   108,   109,    98,    99,   100,   101,   110,
     180,   126,     0,   128,     0,     0,    95,     0,     0,     0,
       0,     0,    96,   105,   106,   107,   108,   109,    98,    99,
     100,   101,   110,   127,     0,     0,   128,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   183,   106,   107,   108,
     109,   147,     0,   148,     0,   110,   149,     0,   150,   151,
     152,   153,   154,     0,   155,   156,   157,   158,   147,     0,
     148,     0,     0,   149,     0,   150,   151,   152,   153,   154,
     250,   155,   156,   157,   158,   147,     0,   148,     0,     0,
     149,     0,   150,   151,   152,   153,   154,   259,   155,   156,
     157,   158,   147,     0,   148,     0,     0,   149,     0,   150,
     151,   152,   153,   154,   272,   155,   156,   157,   158,     0,
       0,     0,     0,   147,     0,   148,     0,     0,   149,   188,
     150,   151,   152,   153,   154,     0,   155,   156,   157,   158,
       0,     0,     0,     0,   147,     0,   148,     0,     0,   149,
     207,   150,   151,   152,   153,   154,     0,   155,   156,   157,
     158,     0,     0,     0,     0,   147,     0,   148,     0,     0,
     149,   212,   150,   151,   152,   153,   154,     0,   155,   156,
     157,   158,     0,     0,     0,     0,   147,     0,   148,     0,
       0,   149,   234,   150,   151,   152,   153,   154,     0,   155,
     156,   157,   158,     0,     0,     0,     0,   147,     0,   148,
       0,     0,   149,   241,   150,   151,   152,   153,   154,     0,
     155,   156,   157,   158,     0,     0,   147,     0,   148,     0,
       0,   149,   229,   150,   151,   152,   153,   154,     0,   155,
     156,   157,   158,     0,     0,   147,     0,   148,     0,     0,
     149,   239,   150,   151,   152,   153,   154,     0,   155,   156,
     157,   158,     0,     0,   147,     0,   148,     0,     0,   149,
     240,   150,   151,   152,   153,   154,     0,   155,   156,   157,
     158,     0,     0,   147,     0,   148,     0,     0,   149,   276,
     150,   151,   152,   153,   154,     0,   155,   156,   157,   158,
       0,   147,     0,   148,     0,     0,   149,   159,   150,   151,
     152,   153,   154,     0,   155,   156,   157,   158,     0,   147,
       0,   148,     0,     0,   149,   172,   150,   151,   152,   153,
     154,     0,   155,   156,   157,   158,     0,   147,     0,   148,
       0,     0,   149,   223,   150,   151,   152,   153,   154,     0,
     155,   156,   157,   158,     0,   147,     0,   148,     0,     0,
     149,   226,   150,   151,   152,   153,   154,     0,   155,   156,
     157,   158,     0,   147,     0,   148,     0,     0,   149,   277,
     150,   151,   152,   153,   154,     0,   155,   156,   157,   158,
       0,   147,     0,   148,     0,     0,   149,   282,   150,   151,
     152,   153,   154,     0,   155,     0,     0,   158
};

static const yytype_int16 yycheck[] =
{
       0,     1,    54,   143,    86,   169,   165,    59,     7,   241,
      12,    94,     3,    93,    12,    26,    96,    26,    45,    50,
       3,     3,    57,   103,    46,    26,     0,    10,    50,    25,
      26,    58,    63,    68,    55,    56,   268,    39,    47,    50,
     120,    39,    42,   126,   124,    46,    46,    46,   128,   281,
      55,   103,    48,    55,    56,    46,   136,   137,   138,   139,
      45,   293,    12,    25,    26,   145,    44,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,    48,
     239,   240,    32,   163,   164,    48,    48,   167,    50,    38,
      90,   171,    92,    48,   174,    50,   179,     3,    22,    48,
      24,    50,    52,    27,   104,    29,    30,    31,    32,    33,
     190,    35,    36,    37,    38,    10,    23,    23,   282,   119,
      46,    47,    28,    23,    49,    50,   266,    51,    34,    45,
      49,    49,    48,    68,    40,    41,    42,    43,    45,    45,
     220,    48,    48,    57,    45,    45,   146,    68,    48,   229,
     232,    23,    58,    59,    60,    61,    62,   237,    57,   159,
      52,    67,   242,    25,    26,     4,    23,     6,   248,     8,
       9,    45,   172,    45,    52,    52,    48,    53,    68,    45,
      53,    38,   182,    53,    23,    47,    68,    48,    45,    28,
      45,   243,    48,    45,    45,    34,    46,    46,    45,    38,
      48,    40,    41,    42,    43,    48,    45,    28,    26,    48,
       4,    49,     6,    52,     8,     9,    50,    49,    45,    58,
      59,    60,    61,    62,    50,    49,    49,    46,    67,    23,
      45,    26,    46,    46,    28,   287,    46,    46,   290,    12,
      34,    26,    58,   243,    38,    42,    40,    41,    42,    43,
      53,    45,    53,    46,    48,     7,    46,    49,    52,     7,
      46,    52,    49,    41,    58,    59,    60,    61,    62,    53,
      53,   232,    68,    67,   274,     4,   229,     6,   137,     8,
       9,    22,    -1,    24,    -1,    -1,    27,   287,    29,    30,
      31,    32,    33,    -1,    23,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    38,
      -1,    40,    41,    42,    43,    -1,    45,    -1,    -1,    48,
       4,    -1,     6,    52,     8,     9,    -1,    -1,    -1,    58,
      59,    60,    61,    62,    -1,    -1,    -1,    -1,    67,    23,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    38,    -1,    40,    41,    42,    43,
      -1,    45,    -1,    -1,    48,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,    -1,
      -1,    -1,    -1,    67,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    20,    -1,    11,    12,    13,    14,    15,
      -1,    17,    -1,    19,    20,    -1,    23,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    40,    41,    42,    43,    54,    45,    -1,
      -1,    48,    -1,    -1,    -1,    23,    63,    64,    54,    -1,
      28,    58,    59,    60,    61,    62,    34,    63,    64,    -1,
      67,    -1,    40,    41,    42,    43,    -1,    45,    23,    -1,
      48,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    34,
      58,    59,    60,    61,    62,    40,    41,    42,    43,    67,
      45,    23,    -1,    48,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    34,    58,    59,    60,    61,    62,    40,    41,
      42,    43,    67,    45,    -1,    -1,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,
      62,    22,    -1,    24,    -1,    67,    27,    -1,    29,    30,
      31,    32,    33,    -1,    35,    36,    37,    38,    22,    -1,
      24,    -1,    -1,    27,    -1,    29,    30,    31,    32,    33,
      51,    35,    36,    37,    38,    22,    -1,    24,    -1,    -1,
      27,    -1,    29,    30,    31,    32,    33,    51,    35,    36,
      37,    38,    22,    -1,    24,    -1,    -1,    27,    -1,    29,
      30,    31,    32,    33,    51,    35,    36,    37,    38,    -1,
      -1,    -1,    -1,    22,    -1,    24,    -1,    -1,    27,    49,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      -1,    -1,    -1,    -1,    22,    -1,    24,    -1,    -1,    27,
      49,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    22,    -1,    24,    -1,    -1,
      27,    49,    29,    30,    31,    32,    33,    -1,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    22,    -1,    24,    -1,
      -1,    27,    49,    29,    30,    31,    32,    33,    -1,    35,
      36,    37,    38,    -1,    -1,    -1,    -1,    22,    -1,    24,
      -1,    -1,    27,    49,    29,    30,    31,    32,    33,    -1,
      35,    36,    37,    38,    -1,    -1,    22,    -1,    24,    -1,
      -1,    27,    47,    29,    30,    31,    32,    33,    -1,    35,
      36,    37,    38,    -1,    -1,    22,    -1,    24,    -1,    -1,
      27,    47,    29,    30,    31,    32,    33,    -1,    35,    36,
      37,    38,    -1,    -1,    22,    -1,    24,    -1,    -1,    27,
      47,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    22,    -1,    24,    -1,    -1,    27,    47,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      -1,    22,    -1,    24,    -1,    -1,    27,    46,    29,    30,
      31,    32,    33,    -1,    35,    36,    37,    38,    -1,    22,
      -1,    24,    -1,    -1,    27,    46,    29,    30,    31,    32,
      33,    -1,    35,    36,    37,    38,    -1,    22,    -1,    24,
      -1,    -1,    27,    46,    29,    30,    31,    32,    33,    -1,
      35,    36,    37,    38,    -1,    22,    -1,    24,    -1,    -1,
      27,    46,    29,    30,    31,    32,    33,    -1,    35,    36,
      37,    38,    -1,    22,    -1,    24,    -1,    -1,    27,    46,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      -1,    22,    -1,    24,    -1,    -1,    27,    46,    29,    30,
      31,    32,    33,    -1,    35,    -1,    -1,    38
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    70,    72,    72,     0,    55,    56,    71,    74,
      75,    77,    55,    73,    74,    11,    12,    13,    14,    15,
      17,    19,    20,    54,    63,    64,    90,    90,    45,    44,
      48,    48,    10,    78,    49,    79,    90,    49,    68,    68,
      57,    68,    76,    57,    45,    81,    76,    72,    52,    46,
      47,    45,    80,    72,    52,    72,    82,    81,    90,    52,
      82,    83,    53,    68,    82,    53,    12,    39,    74,    84,
      81,    53,    85,    86,    11,    12,    13,    14,    15,    17,
      19,    20,    54,    63,    64,    89,    91,    45,    87,    68,
       4,     6,     8,     9,    23,    28,    34,    38,    40,    41,
      42,    43,    45,    48,    52,    58,    59,    60,    61,    62,
      67,    93,    94,    95,    96,    97,    98,    99,   100,   103,
      48,    45,    88,    72,    48,    72,    23,    45,    48,    97,
      45,    48,    98,    45,    97,    45,    25,    26,    48,    50,
     102,    82,    97,    72,    45,    48,    46,    22,    24,    27,
      29,    30,    31,    32,    33,    35,    36,    37,    38,    46,
      72,    58,    97,    25,    26,    47,    46,    48,    97,    48,
      45,    48,    46,    26,    50,    45,    28,    26,    97,    23,
      45,    97,   103,    58,    97,   101,    97,    49,    49,    83,
      50,    97,    72,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    72,    49,    49,    97,    97,
      88,    97,    49,    23,    45,    96,    72,    45,    97,    49,
      50,    45,    58,    46,    45,    38,    46,    46,    49,    47,
      49,    51,    91,    97,    49,    26,    46,    26,    47,    47,
      47,    49,     9,    52,    92,    95,    45,    48,    46,    46,
      51,    97,    46,    46,    46,    46,    26,   101,    94,    51,
      12,    97,    88,    88,    92,    97,    72,    82,     7,    46,
      58,    97,    51,    42,    53,    46,    47,    46,    83,    53,
      92,     7,    46,    49,    46,    72,     7,    52,    92,    96,
      52,    82,    46,    49,    82,    53,    92,    53
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    69,    70,    71,    72,    72,    73,    73,    74,    74,
      75,    75,    76,    76,    77,    77,    78,    78,    79,    79,
      80,    80,    80,    81,    81,    81,    81,    82,    83,    83,
      84,    84,    85,    85,    86,    86,    87,    87,    88,    88,
      88,    88,    88,    88,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    91,    91,    92,    92,
      93,    94,    94,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    98,    98,    99,    99,    99,
      99,   100,   100,   100,   101,   101,   101,   102,   103
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     0,    10,     0,     2,     0,
      11,    12,     1,     0,     1,     1,     2,     0,     4,     0,
       4,     0,     1,     3,     2,     0,     1,     5,     2,     0,
       5,     2,     8,     6,     2,     0,     7,     5,     3,     5,
       5,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     0,     1,     3,
       7,     4,     0,     3,     7,     9,    10,    11,     5,     7,
       6,    10,     3,     3,     1,     1,     4,     4,     5,     5,
       5,     5,     5,     7,     5,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     1,     1,     2,     1,     2,     4,     5,
       7,     2,     4,     5,     3,     1,     0,     3,     2
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
#line 59 "parser.y"
                       { Printtree((yyvsp[0].node)); printf("syntax valid\n");}
#line 1662 "y.tab.c"
    break;

  case 3: /* program: procedures main  */
#line 61 "parser.y"
                         {(yyval.node)=mknode("CODE",(yyvsp[-1].node),(yyvsp[0].node));}
#line 1668 "y.tab.c"
    break;

  case 4: /* cmmnt: COMMENT cmmnt  */
#line 63 "parser.y"
                     {(yyval.node) = mknode("COMMENT", mknode((yyvsp[-1].string), NULL, NULL), (yyvsp[0].node));}
#line 1674 "y.tab.c"
    break;

  case 5: /* cmmnt: %empty  */
#line 64 "parser.y"
  { (yyval.node) = NULL; }
#line 1680 "y.tab.c"
    break;

  case 6: /* main: PUBLIC type_pro MAIN '(' ')' ':' STATIC '{' pro_body '}'  */
#line 66 "parser.y"
                                                               {(yyval.node)=mknode("public", mknode("Main",mknode("\n",(yyvsp[-3].string),NULL),NULL), mknode("body",NULL,(yyvsp[-1].node)));}
#line 1686 "y.tab.c"
    break;

  case 7: /* main: %empty  */
#line 67 "parser.y"
  {(yyval.node)=NULL;}
#line 1692 "y.tab.c"
    break;

  case 8: /* procedures: procedure procedures  */
#line 69 "parser.y"
                                 {(yyval.node)=mknode("",(yyvsp[-1].node),(yyvsp[0].node));}
#line 1698 "y.tab.c"
    break;

  case 9: /* procedures: %empty  */
#line 70 "parser.y"
  {(yyval.node)=NULL;}
#line 1704 "y.tab.c"
    break;

  case 10: /* procedure: funct type_pro IDENTIFIER '(' args ')' stat cmmnt '{' pro_body '}'  */
#line 73 "parser.y"
{(yyval.node) = mknode("func", mknode((yyvsp[-8].string), (yyvsp[-10].node), mknode("ARGS", (yyvsp[-6].node), mknode("return", (yyvsp[-3].node), NULL))), mknode("", (yyvsp[-1].node), NULL));}
#line 1710 "y.tab.c"
    break;

  case 11: /* procedure: funct type_pro IDENTIFIER '(' args ')' ':' stat cmmnt '{' pro_body '}'  */
#line 75 "parser.y"
{(yyval.node) = mknode("func", mknode((yyvsp[-9].string), (yyvsp[-11].node), mknode("ARGS", (yyvsp[-7].node), mknode("return", (yyvsp[-4].node), NULL))), mknode("body", NULL, (yyvsp[-1].node)));}
#line 1716 "y.tab.c"
    break;

  case 12: /* stat: STATIC  */
#line 77 "parser.y"
             { (yyval.node) = mknode("Static", NULL, NULL); }
#line 1722 "y.tab.c"
    break;

  case 13: /* stat: %empty  */
#line 78 "parser.y"
      { (yyval.node) = mknode("Nonstatic", NULL, NULL); }
#line 1728 "y.tab.c"
    break;

  case 14: /* funct: PRIVATE  */
#line 80 "parser.y"
               { (yyval.node) = mknode("private", NULL, NULL); }
#line 1734 "y.tab.c"
    break;

  case 15: /* funct: PUBLIC  */
#line 81 "parser.y"
         { (yyval.node) = mknode("public", NULL, NULL); }
#line 1740 "y.tab.c"
    break;

  case 16: /* args: ARGS para_pro  */
#line 83 "parser.y"
                     { (yyval.node) = mknode("ARGS", (yyvsp[0].node), NULL); }
#line 1746 "y.tab.c"
    break;

  case 17: /* args: %empty  */
#line 84 "parser.y"
  { (yyval.node) = NULL; }
#line 1752 "y.tab.c"
    break;

  case 18: /* para_pro: type_pro ':' arguments para_list  */
#line 87 "parser.y"
                                            {(yyval.node) = mknode("params", (yyvsp[-3].node), (yyvsp[0].node)); }
#line 1758 "y.tab.c"
    break;

  case 19: /* para_pro: %empty  */
#line 88 "parser.y"
  {(yyval.node)=NULL;}
#line 1764 "y.tab.c"
    break;

  case 20: /* para_list: para_list type_pro ':' arguments  */
#line 91 "parser.y"
                                            { (yyval.node) = mknode("params", (yyvsp[-3].node), (yyvsp[0].node)); }
#line 1770 "y.tab.c"
    break;

  case 21: /* para_list: %empty  */
#line 92 "parser.y"
  { (yyval.node) = NULL; }
#line 1776 "y.tab.c"
    break;

  case 22: /* para_list: IDENTIFIER  */
#line 93 "parser.y"
             { (yyval.node) = NULL; }
#line 1782 "y.tab.c"
    break;

  case 23: /* arguments: IDENTIFIER ',' arguments  */
#line 95 "parser.y"
                                    { (yyval.node) = mknode("arguments", mknode((yyvsp[-2].string), NULL, NULL), (yyvsp[0].node)); }
#line 1788 "y.tab.c"
    break;

  case 24: /* arguments: IDENTIFIER ';'  */
#line 96 "parser.y"
                 { (yyval.node) = mknode("arguments", mknode((yyvsp[-1].string), NULL, NULL), NULL); }
#line 1794 "y.tab.c"
    break;

  case 25: /* arguments: %empty  */
#line 97 "parser.y"
  { (yyval.node) = NULL; }
#line 1800 "y.tab.c"
    break;

  case 26: /* arguments: IDENTIFIER  */
#line 98 "parser.y"
             { (yyval.node) = NULL; }
#line 1806 "y.tab.c"
    break;

  case 27: /* pro_body: cmmnt declears procedures stmnts RET  */
#line 102 "parser.y"
{ (yyval.node)=mknode("(BODY\n", mknode("",(yyvsp[-3].node),NULL),mknode("",(yyvsp[-2].node),mknode("",(yyvsp[-1].node), mknode("}",NULL,NULL))));}
#line 1812 "y.tab.c"
    break;

  case 28: /* declears: declears declear  */
#line 105 "parser.y"
                            {(yyval.node)=mknode("",(yyvsp[-1].node),(yyvsp[0].node));}
#line 1818 "y.tab.c"
    break;

  case 29: /* declears: %empty  */
#line 105 "parser.y"
                                                     {(yyval.node)=NULL;}
#line 1824 "y.tab.c"
    break;

  case 30: /* declear: VARIABLE type_id ':' var_id ';'  */
#line 108 "parser.y"
                                         {(yyval.node) = mknode("var", (yyvsp[-3].node), mknode("",(yyvsp[-1].node), NULL));}
#line 1830 "y.tab.c"
    break;

  case 31: /* declear: STRING stv  */
#line 109 "parser.y"
             { (yyval.node) = mknode((yyvsp[-1].string), (yyvsp[0].node), NULL); }
#line 1836 "y.tab.c"
    break;

  case 32: /* stv: stvs IDENTIFIER '(' INT_LTL ')' ASS STRING ';'  */
#line 111 "parser.y"
                                                    { (yyval.node) = mknode("", (yyvsp[-7].node), mknode((yyvsp[-6].string), mknode("[", mknode((yyvsp[-4].string), NULL, NULL), mknode("]", NULL, NULL)), mknode((yyvsp[-1].string), NULL, NULL))); }
#line 1842 "y.tab.c"
    break;

  case 33: /* stv: stvs IDENTIFIER '(' INT_LTL ')' ';'  */
#line 112 "parser.y"
                                      { (yyval.node) = mknode("", (yyvsp[-5].node), mknode((yyvsp[-4].string), mknode("[", mknode((yyvsp[-2].string), NULL, NULL), mknode("]", NULL, NULL)),mknode("]", NULL, NULL))); }
#line 1848 "y.tab.c"
    break;

  case 34: /* stvs: stvs st  */
#line 114 "parser.y"
              { (yyval.node) = mknode("", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1854 "y.tab.c"
    break;

  case 35: /* stvs: %empty  */
#line 115 "parser.y"
      { (yyval.node) = NULL; }
#line 1860 "y.tab.c"
    break;

  case 36: /* st: IDENTIFIER '(' expr ')' ASS expr ','  */
#line 117 "parser.y"
                                         { (yyval.node) = mknode((yyvsp[-6].string), mknode((yyvsp[-5].string), (yyvsp[-4].node), mknode((yyvsp[-3].string), NULL, NULL)), mknode((yyvsp[-2].string), (yyvsp[-1].node), NULL)); }
#line 1866 "y.tab.c"
    break;

  case 37: /* st: IDENTIFIER '(' expr ')' ','  */
#line 118 "parser.y"
                              { (yyval.node) = mknode((yyvsp[-4].string), mknode("[", (yyvsp[-2].node), mknode("]", NULL, NULL)), NULL); }
#line 1872 "y.tab.c"
    break;

  case 38: /* var_id: IDENTIFIER ',' var_id  */
#line 121 "parser.y"
                              {(yyval.node)=mknode((yyvsp[-2].string), mknode(" ", (yyvsp[0].node), NULL),NULL);}
#line 1878 "y.tab.c"
    break;

  case 39: /* var_id: IDENTIFIER ASSINGMENT expr ',' var_id  */
#line 122 "parser.y"
                                        {(yyval.node)=mknode((yyvsp[-4].string), (yyvsp[-2].node), NULL);}
#line 1884 "y.tab.c"
    break;

  case 40: /* var_id: IDENTIFIER ASS expr ',' var_id  */
#line 123 "parser.y"
                                  {(yyval.node) = mknode((yyvsp[-4].string), (yyvsp[-2].node), NULL); }
#line 1890 "y.tab.c"
    break;

  case 41: /* var_id: IDENTIFIER ASS expr  */
#line 124 "parser.y"
                      {(yyval.node) = mknode("", mknode((yyvsp[-2].string), NULL, NULL), NULL); }
#line 1896 "y.tab.c"
    break;

  case 42: /* var_id: IDENTIFIER ASSINGMENT expr  */
#line 125 "parser.y"
                             {(yyval.node) = mknode((yyvsp[-2].string), (yyvsp[0].node), NULL);}
#line 1902 "y.tab.c"
    break;

  case 43: /* var_id: IDENTIFIER  */
#line 126 "parser.y"
             {(yyval.node) = NULL; }
#line 1908 "y.tab.c"
    break;

  case 44: /* type_id: BOOL  */
#line 129 "parser.y"
              {(yyval.node)=mknode("boolean", NULL, NULL);}
#line 1914 "y.tab.c"
    break;

  case 45: /* type_id: STRING  */
#line 130 "parser.y"
                 {(yyval.node)=mknode("string", NULL, NULL);}
#line 1920 "y.tab.c"
    break;

  case 46: /* type_id: CHAR  */
#line 131 "parser.y"
               {(yyval.node)=mknode("char", NULL, NULL);}
#line 1926 "y.tab.c"
    break;

  case 47: /* type_id: INT  */
#line 132 "parser.y"
              {(yyval.node)=mknode("int", NULL, NULL);}
#line 1932 "y.tab.c"
    break;

  case 48: /* type_id: REAL  */
#line 133 "parser.y"
               {(yyval.node)=mknode("real", NULL, NULL);}
#line 1938 "y.tab.c"
    break;

  case 49: /* type_id: FLOAT  */
#line 134 "parser.y"
                { (yyval.node) = mknode("int", NULL, NULL); }
#line 1944 "y.tab.c"
    break;

  case 50: /* type_id: INTPTR  */
#line 135 "parser.y"
                 {(yyval.node)=mknode("int*", NULL, NULL);}
#line 1950 "y.tab.c"
    break;

  case 51: /* type_id: CHARPTR  */
#line 136 "parser.y"
                  {(yyval.node)=mknode("char*", NULL, NULL);}
#line 1956 "y.tab.c"
    break;

  case 52: /* type_id: REALPTR  */
#line 137 "parser.y"
                  {(yyval.node)=mknode("real*", NULL, NULL);}
#line 1962 "y.tab.c"
    break;

  case 53: /* type_id: DOUBPTR  */
#line 138 "parser.y"
                  { (yyval.node) = mknode("double*", NULL, NULL); }
#line 1968 "y.tab.c"
    break;

  case 54: /* type_id: VOID  */
#line 139 "parser.y"
               { (yyval.node) = mknode("void*", NULL, NULL); }
#line 1974 "y.tab.c"
    break;

  case 55: /* type_pro: BOOL  */
#line 142 "parser.y"
               {(yyval.node)=mknode("boolean", NULL, NULL);}
#line 1980 "y.tab.c"
    break;

  case 56: /* type_pro: STRING  */
#line 143 "parser.y"
                 {(yyval.node)=mknode("string", NULL, NULL);}
#line 1986 "y.tab.c"
    break;

  case 57: /* type_pro: CHAR  */
#line 144 "parser.y"
               {(yyval.node)=mknode("char", NULL, NULL);}
#line 1992 "y.tab.c"
    break;

  case 58: /* type_pro: INT  */
#line 145 "parser.y"
              {(yyval.node)=mknode("int", NULL, NULL);}
#line 1998 "y.tab.c"
    break;

  case 59: /* type_pro: REAL  */
#line 146 "parser.y"
               {(yyval.node)=mknode("real", NULL, NULL);}
#line 2004 "y.tab.c"
    break;

  case 60: /* type_pro: FLOAT  */
#line 147 "parser.y"
                { (yyval.node) = mknode("int", NULL, NULL); }
#line 2010 "y.tab.c"
    break;

  case 61: /* type_pro: INTPTR  */
#line 148 "parser.y"
                 {(yyval.node)=mknode("int*", NULL, NULL);}
#line 2016 "y.tab.c"
    break;

  case 62: /* type_pro: CHARPTR  */
#line 149 "parser.y"
                  {(yyval.node)=mknode("char*", NULL, NULL);}
#line 2022 "y.tab.c"
    break;

  case 63: /* type_pro: REALPTR  */
#line 150 "parser.y"
                  {(yyval.node)=mknode("real*", NULL, NULL);}
#line 2028 "y.tab.c"
    break;

  case 64: /* type_pro: DOUBPTR  */
#line 151 "parser.y"
                  { (yyval.node) = mknode("double*", NULL, NULL); }
#line 2034 "y.tab.c"
    break;

  case 65: /* type_pro: VOID  */
#line 152 "parser.y"
               { (yyval.node) = mknode("void*", NULL, NULL); }
#line 2040 "y.tab.c"
    break;

  case 66: /* stmnts: stmnts stmnt  */
#line 155 "parser.y"
                     {(yyval.node)=mknode("",(yyvsp[-1].node),(yyvsp[0].node));}
#line 2046 "y.tab.c"
    break;

  case 67: /* stmnts: %empty  */
#line 155 "parser.y"
                                              {(yyval.node)=NULL;}
#line 2052 "y.tab.c"
    break;

  case 68: /* stmnt_block: stmnt  */
#line 158 "parser.y"
                   {(yyval.node)=(yyvsp[0].node);}
#line 2058 "y.tab.c"
    break;

  case 69: /* stmnt_block: RETURN expr ';'  */
#line 159 "parser.y"
                  {(yyval.node)=mknode("return",(yyvsp[-1].node),NULL);}
#line 2064 "y.tab.c"
    break;

  case 70: /* new_block: '{' cmmnt declears stmnts RET '}' cmmnt  */
#line 162 "parser.y"
                                                   {(yyval.node)=mknode("{",(yyvsp[-4].node),mknode("", (yyvsp[-3].node), mknode("",(yyvsp[-2].node),mknode("}",NULL,NULL))));}
#line 2070 "y.tab.c"
    break;

  case 71: /* RET: RETURN expr ';' cmmnt  */
#line 164 "parser.y"
                           {(yyval.node)=mknode("return",(yyvsp[-2].node),NULL);}
#line 2076 "y.tab.c"
    break;

  case 72: /* RET: %empty  */
#line 164 "parser.y"
                                                           {(yyval.node)=NULL;}
#line 2082 "y.tab.c"
    break;

  case 73: /* stmnt: '(' pro_body ')'  */
#line 167 "parser.y"
                        { (yyval.node) = mknode("", (yyvsp[-1].node), NULL); }
#line 2088 "y.tab.c"
    break;

  case 74: /* stmnt: IF '(' expr ')' '{' pro_body '}'  */
#line 168 "parser.y"
                                   { (yyval.node) = mknode("IF", mknode("(", (yyvsp[-4].node), mknode(")", NULL, NULL)), mknode("BLOCK", (yyvsp[-1].node), NULL)); }
#line 2094 "y.tab.c"
    break;

  case 75: /* stmnt: IF '(' expr ')' stmnt_block ';' ELSE stmnt_block ';'  */
#line 169 "parser.y"
                                                       { (yyval.node) = mknode("IF-ELSE", mknode("(", (yyvsp[-6].node), mknode(")", NULL, NULL)), mknode("BLOCK", (yyvsp[-4].node), (yyvsp[-1].node))); }
#line 2100 "y.tab.c"
    break;

  case 76: /* stmnt: IF '(' expr ')' stmnt_block ';' ELSE '{' pro_body '}'  */
#line 170 "parser.y"
                                                        { (yyval.node) = mknode("IF-ELSE", mknode("(", (yyvsp[-7].node), mknode(")", NULL, NULL)), mknode("BLOCK", (yyvsp[-5].node), mknode("BLOCK", (yyvsp[-1].node), NULL))); }
#line 2106 "y.tab.c"
    break;

  case 77: /* stmnt: IF '(' expr ')' '{' pro_body '}' ELSE '{' pro_body '}'  */
#line 171 "parser.y"
                                                         { (yyval.node) = mknode("IF-ELSE", mknode("(", (yyvsp[-8].node), mknode(")", NULL, NULL)), mknode("BLOCK", (yyvsp[-5].node), mknode("BLOCK", (yyvsp[-1].node), NULL))); }
#line 2112 "y.tab.c"
    break;

  case 78: /* stmnt: IF '(' expr ')' stmnt_block  */
#line 172 "parser.y"
                              { (yyval.node)=mknode("if", mknode("(", (yyvsp[-2].node), mknode(")",NULL,NULL)),(yyvsp[0].node));}
#line 2118 "y.tab.c"
    break;

  case 79: /* stmnt: IF '(' expr ')' stmnt_block ELSE stmnt_block  */
#line 173 "parser.y"
                                               { (yyval.node)=mknode("if-else", mknode("(", (yyvsp[-4].node), mknode(")",NULL,NULL)), mknode("",(yyvsp[-2].node), mknode("", (yyvsp[0].node),NULL)));}
#line 2124 "y.tab.c"
    break;

  case 80: /* stmnt: WHILE cmmnt '(' expr ')' stmnt_block  */
#line 174 "parser.y"
                                       { (yyval.node)=mknode("while", mknode("(", (yyvsp[-2].node), mknode(")",NULL,NULL)),(yyvsp[0].node));}
#line 2130 "y.tab.c"
    break;

  case 81: /* stmnt: FOR cmmnt '(' assmnt_stmnt ';' expr ';' assmnt_stmnt ')' stmnt_block  */
#line 175 "parser.y"
                                                                       { (yyval.node)= mknode("for", mknode("(", mknode("",(yyvsp[-6].node),(yyvsp[-4].node)), mknode("",(yyvsp[-2].node), mknode(")",NULL,NULL))),(yyvsp[0].node));}
#line 2136 "y.tab.c"
    break;

  case 82: /* stmnt: assmnt_stmnt ';' cmmnt  */
#line 176 "parser.y"
                         {(yyval.node)=mknode("",(yyvsp[-2].node),NULL);}
#line 2142 "y.tab.c"
    break;

  case 83: /* stmnt: expr ';' cmmnt  */
#line 177 "parser.y"
                 {(yyval.node)=(yyvsp[-2].node);}
#line 2148 "y.tab.c"
    break;

  case 84: /* stmnt: new_block  */
#line 178 "parser.y"
            {(yyval.node)=(yyvsp[0].node);}
#line 2154 "y.tab.c"
    break;

  case 85: /* stmnt: assmnt_stmnt  */
#line 179 "parser.y"
               {(yyval.node) = mknode("ASSIGN", (yyvsp[0].node), NULL);}
#line 2160 "y.tab.c"
    break;

  case 86: /* assmnt_stmnt: IDENTIFIER ASS expr ';'  */
#line 182 "parser.y"
                                      {(yyval.node) = mknode((yyvsp[-3].string), (yyvsp[-1].node), NULL);}
#line 2166 "y.tab.c"
    break;

  case 87: /* assmnt_stmnt: IDENTIFIER ASSINGMENT expr ';'  */
#line 183 "parser.y"
                                 {(yyval.node) = mknode((yyvsp[-3].string), (yyvsp[-1].node), NULL);}
#line 2172 "y.tab.c"
    break;

  case 88: /* assmnt_stmnt: IDENTIFIER ASS ADDRESS IDENTIFIER ';'  */
#line 184 "parser.y"
                                        {(yyval.node) = mknode("ADDRESSTO", mknode((yyvsp[-2].string), NULL, NULL), mknode((yyvsp[-1].string), NULL, NULL));}
#line 2178 "y.tab.c"
    break;

  case 89: /* assmnt_stmnt: ADDRESS IDENTIFIER ASS IDENTIFIER ';'  */
#line 185 "parser.y"
                                        {(yyval.node) = mknode("ADDRESSFROM", mknode((yyvsp[-3].string), NULL, NULL), mknode((yyvsp[-1].string), NULL, NULL));}
#line 2184 "y.tab.c"
    break;

  case 90: /* assmnt_stmnt: IDENTIFIER ASS IDENTIFIER MULTI ';'  */
#line 186 "parser.y"
                                       {(yyval.node) = mknode("CONTENT", mknode((yyvsp[-4].string), NULL, NULL), mknode((yyvsp[-2].string), NULL, NULL));}
#line 2190 "y.tab.c"
    break;

  case 91: /* assmnt_stmnt: MULTI IDENTIFIER ASS IDENTIFIER ';'  */
#line 187 "parser.y"
                                      {(yyval.node) = mknode("ADDCONTENTVAR", mknode((yyvsp[-3].string), NULL, NULL), mknode((yyvsp[-1].string), NULL, NULL));}
#line 2196 "y.tab.c"
    break;

  case 92: /* assmnt_stmnt: MULTI IDENTIFIER ASS INT_LTL ';'  */
#line 188 "parser.y"
                                   { (yyval.node) = mknode("ADDCONTENTNUM", mknode((yyvsp[-3].string), NULL, NULL), mknode((yyvsp[-1].string), NULL, NULL)); }
#line 2202 "y.tab.c"
    break;

  case 93: /* assmnt_stmnt: IDENTIFIER '(' INT_LTL ')' ASS CHAR_LTL ';'  */
#line 189 "parser.y"
                                              { (yyval.node) = mknode("ARRCHAR", mknode((yyvsp[-6].string), NULL, NULL), mknode("INDEX-CHAR", mknode((yyvsp[-4].string), NULL, NULL), mknode((yyvsp[-1].string), NULL, NULL))); }
#line 2208 "y.tab.c"
    break;

  case 94: /* assmnt_stmnt: IDENTIFIER ASS IDENTIFIER MULTI ';'  */
#line 190 "parser.y"
                                      { (yyval.node) = mknode("DOUBLECONTENT", mknode((yyvsp[-4].string), NULL, NULL), mknode((yyvsp[-2].string), NULL, NULL)); }
#line 2214 "y.tab.c"
    break;

  case 95: /* assmnt_stmnt: IDENTIFIER ASS call_func ';'  */
#line 191 "parser.y"
                               {(yyval.node) = mknode("function", mknode((yyvsp[-3].string), NULL, NULL), (yyvsp[-1].node));}
#line 2220 "y.tab.c"
    break;

  case 96: /* expr: '(' expr ')'  */
#line 200 "parser.y"
                    {(yyval.node)=mknode("(",(yyvsp[-1].node),mknode(")",NULL,NULL));}
#line 2226 "y.tab.c"
    break;

  case 97: /* expr: expr EQL expr  */
#line 201 "parser.y"
                        {(yyval.node)=mknode("==",(yyvsp[-2].node),(yyvsp[0].node));}
#line 2232 "y.tab.c"
    break;

  case 98: /* expr: expr NOTEQL expr  */
#line 202 "parser.y"
                           {(yyval.node)=mknode("!=",(yyvsp[-2].node),(yyvsp[0].node));}
#line 2238 "y.tab.c"
    break;

  case 99: /* expr: expr GREATEREQL expr  */
#line 203 "parser.y"
                               {(yyval.node)=mknode(">=",(yyvsp[-2].node),(yyvsp[0].node));}
#line 2244 "y.tab.c"
    break;

  case 100: /* expr: expr GREATER expr  */
#line 204 "parser.y"
                            {(yyval.node)=mknode(">",(yyvsp[-2].node),(yyvsp[0].node));}
#line 2250 "y.tab.c"
    break;

  case 101: /* expr: expr LESSEQL expr  */
#line 205 "parser.y"
                            {(yyval.node)=mknode("<=",(yyvsp[-2].node),(yyvsp[0].node));}
#line 2256 "y.tab.c"
    break;

  case 102: /* expr: expr LESS expr  */
#line 206 "parser.y"
                         {(yyval.node)=mknode("<",(yyvsp[-2].node),(yyvsp[0].node));}
#line 2262 "y.tab.c"
    break;

  case 103: /* expr: expr AND expr  */
#line 207 "parser.y"
                        {(yyval.node)=mknode("&&",(yyvsp[-2].node),(yyvsp[0].node));}
#line 2268 "y.tab.c"
    break;

  case 104: /* expr: expr OR expr  */
#line 208 "parser.y"
                       {(yyval.node)=mknode("||",(yyvsp[-2].node),(yyvsp[0].node));}
#line 2274 "y.tab.c"
    break;

  case 105: /* expr: expr PLUS expr  */
#line 209 "parser.y"
                         {(yyval.node)=mknode("+",(yyvsp[-2].node),(yyvsp[0].node));}
#line 2280 "y.tab.c"
    break;

  case 106: /* expr: expr MINUS expr  */
#line 210 "parser.y"
                          {(yyval.node)=mknode("-",(yyvsp[-2].node),(yyvsp[0].node));}
#line 2286 "y.tab.c"
    break;

  case 107: /* expr: expr MULTI expr  */
#line 211 "parser.y"
                          {(yyval.node)=mknode("*",(yyvsp[-2].node),(yyvsp[0].node));}
#line 2292 "y.tab.c"
    break;

  case 108: /* expr: expr DIVISION expr  */
#line 212 "parser.y"
                             {(yyval.node)=mknode("/",(yyvsp[-2].node),(yyvsp[0].node));}
#line 2298 "y.tab.c"
    break;

  case 109: /* expr: NOT expr  */
#line 213 "parser.y"
                   {(yyval.node)=mknode("!",(yyvsp[0].node),NULL);}
#line 2304 "y.tab.c"
    break;

  case 110: /* expr: address_exprs  */
#line 214 "parser.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 2310 "y.tab.c"
    break;

  case 111: /* expr: derefrence_expr  */
#line 215 "parser.y"
                          {(yyval.node)=(yyvsp[0].node);}
#line 2316 "y.tab.c"
    break;

  case 112: /* expr: call_func cmmnt  */
#line 216 "parser.y"
                          {(yyval.node)=(yyvsp[-1].node);}
#line 2322 "y.tab.c"
    break;

  case 113: /* expr: DECIMAL_LTL  */
#line 217 "parser.y"
                      {(yyval.node)=mknode((yyvsp[0].string),NULL,NULL);}
#line 2328 "y.tab.c"
    break;

  case 114: /* expr: HEX_LTL  */
#line 218 "parser.y"
                  {(yyval.node)=mknode((yyvsp[0].string),NULL,NULL);}
#line 2334 "y.tab.c"
    break;

  case 115: /* expr: CHAR_LTL  */
#line 219 "parser.y"
                   {(yyval.node)=mknode((yyvsp[0].string),NULL,NULL);}
#line 2340 "y.tab.c"
    break;

  case 116: /* expr: INT_LTL  */
#line 220 "parser.y"
                  {(yyval.node)=mknode((yyvsp[0].string),NULL,NULL);}
#line 2346 "y.tab.c"
    break;

  case 117: /* expr: REAL_LTL  */
#line 221 "parser.y"
                   {(yyval.node)=mknode((yyvsp[0].string),NULL,NULL);}
#line 2352 "y.tab.c"
    break;

  case 118: /* expr: STRING_LTL  */
#line 222 "parser.y"
                     {(yyval.node)=mknode((yyvsp[0].string),NULL,NULL);}
#line 2358 "y.tab.c"
    break;

  case 119: /* expr: BOOLFALSE  */
#line 223 "parser.y"
                    {(yyval.node)=mknode((yyvsp[0].string),NULL,NULL);}
#line 2364 "y.tab.c"
    break;

  case 120: /* expr: BOOLTRUE  */
#line 224 "parser.y"
                   {(yyval.node)=mknode((yyvsp[0].string),NULL,NULL);}
#line 2370 "y.tab.c"
    break;

  case 121: /* expr: LENGTH IDENTIFIER LENGTH  */
#line 225 "parser.y"
                                   { (yyval.node)=mknode("|", mknode((yyvsp[-1].string),NULL,NULL), mknode("|",NULL,NULL));}
#line 2376 "y.tab.c"
    break;

  case 122: /* expr: IDENTIFIER '[' expr ']'  */
#line 226 "parser.y"
                                  {(yyval.node)=mknode((yyvsp[-3].string),mknode("[",(yyvsp[-1].node),mknode("]",NULL,NULL)),NULL);}
#line 2382 "y.tab.c"
    break;

  case 123: /* expr: IDENTIFIER  */
#line 227 "parser.y"
                     {(yyval.node)=mknode((yyvsp[0].string),NULL,NULL);}
#line 2388 "y.tab.c"
    break;

  case 124: /* expr: NULLL  */
#line 228 "parser.y"
                {(yyval.node)=mknode("null",NULL,NULL);}
#line 2394 "y.tab.c"
    break;

  case 125: /* address_exprs: ADDRESS address_exprs  */
#line 231 "parser.y"
                                    {(yyval.node)=mknode((yyvsp[-1].string),(yyvsp[0].node),NULL);}
#line 2400 "y.tab.c"
    break;

  case 126: /* address_exprs: address_expr  */
#line 231 "parser.y"
                                                                            {(yyval.node)=(yyvsp[0].node);}
#line 2406 "y.tab.c"
    break;

  case 127: /* address_expr: ADDRESS IDENTIFIER  */
#line 233 "parser.y"
                                 {(yyval.node)=mknode("&",mknode((yyvsp[0].string),NULL,NULL),NULL);}
#line 2412 "y.tab.c"
    break;

  case 128: /* address_expr: ADDRESS '(' IDENTIFIER ')'  */
#line 234 "parser.y"
                                     {(yyval.node)=mknode("&",mknode("(",mknode((yyvsp[-1].string),NULL,NULL),NULL),mknode(")",NULL,NULL));}
#line 2418 "y.tab.c"
    break;

  case 129: /* address_expr: ADDRESS IDENTIFIER '[' expr ']'  */
#line 236 "parser.y"
        {(yyval.node)=mknode("&", mknode((yyvsp[-3].string),NULL,NULL), mknode("[",(yyvsp[-1].node),mknode("]",NULL,NULL)));}
#line 2424 "y.tab.c"
    break;

  case 130: /* address_expr: ADDRESS '(' IDENTIFIER '[' expr ']' ')'  */
#line 238 "parser.y"
        {
		(yyval.node)=mknode("&",
		mknode("(", 
		mknode((yyvsp[-4].string),NULL,NULL),
		mknode("[",(yyvsp[-2].node),NULL)), 
		mknode("]",NULL,mknode(")",NULL,NULL)));
	}
#line 2436 "y.tab.c"
    break;

  case 131: /* derefrence_expr: DEREFRENCE IDENTIFIER  */
#line 247 "parser.y"
                                               {(yyval.node)=mknode("^",mknode((yyvsp[0].string),NULL,NULL),NULL);}
#line 2442 "y.tab.c"
    break;

  case 132: /* derefrence_expr: DEREFRENCE '(' expr ')'  */
#line 248 "parser.y"
                                  {(yyval.node)=mknode("^",mknode("(",(yyvsp[-1].node),NULL),mknode(")",NULL,NULL));}
#line 2448 "y.tab.c"
    break;

  case 133: /* derefrence_expr: DEREFRENCE IDENTIFIER '[' expr ']'  */
#line 250 "parser.y"
        {(yyval.node)=mknode((yyvsp[-4].string), mknode((yyvsp[-3].string),NULL,NULL), mknode("[",(yyvsp[-1].node),mknode("]",NULL,NULL)));}
#line 2454 "y.tab.c"
    break;

  case 134: /* expr_list: expr ',' expr_list  */
#line 252 "parser.y"
                              {(yyval.node)=mknode("",(yyvsp[-2].node),mknode(",",(yyvsp[0].node),NULL));}
#line 2460 "y.tab.c"
    break;

  case 135: /* expr_list: expr  */
#line 253 "parser.y"
               {(yyval.node)=mknode("",(yyvsp[0].node),NULL);}
#line 2466 "y.tab.c"
    break;

  case 136: /* expr_list: %empty  */
#line 254 "parser.y"
          {(yyval.node)=NULL;}
#line 2472 "y.tab.c"
    break;

  case 137: /* paren_expr: '(' expr_list ')'  */
#line 256 "parser.y"
                             {(yyval.node)=(yyvsp[-1].node);}
#line 2478 "y.tab.c"
    break;

  case 138: /* call_func: IDENTIFIER paren_expr  */
#line 258 "parser.y"
                                 {(yyval.node)=mknode("Call func",mknode((yyvsp[-1].string),NULL,NULL),mknode("ARGS",(yyvsp[0].node),NULL));}
#line 2484 "y.tab.c"
    break;


#line 2488 "y.tab.c"

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

#line 259 "parser.y"




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
		printf("(RET ");
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

int yyerror(char *e) {
    fflush(stdout);
    fprintf(stderr, "Error %s at line %d\n", e, yylineno);
    fprintf(stderr, "does not accept '%s'\n", yytext);
    return 0;
}

