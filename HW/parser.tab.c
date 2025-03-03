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


/* Substitute the variable and function names.  */
#define yyparse         my_prefix_parse
#define yylex           my_prefix_lex
#define yyerror         my_prefix_error
#define yydebug         my_prefix_debug
#define yynerrs         my_prefix_nerrs
#define yylval          my_prefix_lval
#define yychar          my_prefix_char

/* First part of user prologue.  */
#line 1 "parser.y"

	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "lex.my_prefix.c"
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
	
	int printlevel=0;

#line 98 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_COMMENT = 3,                    /* COMMENT  */
  YYSYMBOL_WHILE = 4,                      /* WHILE  */
  YYSYMBOL_IF = 5,                         /* IF  */
  YYSYMBOL_ELSE = 6,                       /* ELSE  */
  YYSYMBOL_FOR = 7,                        /* FOR  */
  YYSYMBOL_RETURN = 8,                     /* RETURN  */
  YYSYMBOL_BOOL = 9,                       /* BOOL  */
  YYSYMBOL_STRING = 10,                    /* STRING  */
  YYSYMBOL_CHARPTR = 11,                   /* CHARPTR  */
  YYSYMBOL_CHAR = 12,                      /* CHAR  */
  YYSYMBOL_INT = 13,                       /* INT  */
  YYSYMBOL_INTPTR = 14,                    /* INTPTR  */
  YYSYMBOL_PROCEDUR = 15,                  /* PROCEDUR  */
  YYSYMBOL_AND = 16,                       /* AND  */
  YYSYMBOL_ADDRESS = 17,                   /* ADDRESS  */
  YYSYMBOL_EQL = 18,                       /* EQL  */
  YYSYMBOL_ASSINGMENT = 19,                /* ASSINGMENT  */
  YYSYMBOL_OR = 20,                        /* OR  */
  YYSYMBOL_LENGTH = 21,                    /* LENGTH  */
  YYSYMBOL_GREATEREQL = 22,                /* GREATEREQL  */
  YYSYMBOL_GREATER = 23,                   /* GREATER  */
  YYSYMBOL_LESSEQL = 24,                   /* LESSEQL  */
  YYSYMBOL_LESS = 25,                      /* LESS  */
  YYSYMBOL_NOTEQL = 26,                    /* NOTEQL  */
  YYSYMBOL_NOT = 27,                       /* NOT  */
  YYSYMBOL_DIVISION = 28,                  /* DIVISION  */
  YYSYMBOL_PLUS = 29,                      /* PLUS  */
  YYSYMBOL_MINUS = 30,                     /* MINUS  */
  YYSYMBOL_MULTI = 31,                     /* MULTI  */
  YYSYMBOL_VARIABLE = 32,                  /* VARIABLE  */
  YYSYMBOL_STRING_LTL = 33,                /* STRING_LTL  */
  YYSYMBOL_REAL_LTL = 34,                  /* REAL_LTL  */
  YYSYMBOL_CHAR_LTL = 35,                  /* CHAR_LTL  */
  YYSYMBOL_NULLL = 36,                     /* NULLL  */
  YYSYMBOL_MAIN = 37,                      /* MAIN  */
  YYSYMBOL_IDENTIFIER = 38,                /* IDENTIFIER  */
  YYSYMBOL_SEMICOLON = 39,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 40,                     /* COMMA  */
  YYSYMBOL_OPENPAREN = 41,                 /* OPENPAREN  */
  YYSYMBOL_CLOSEPAREN = 42,                /* CLOSEPAREN  */
  YYSYMBOL_OPENBRACKET = 43,               /* OPENBRACKET  */
  YYSYMBOL_CLOSEBRACKET = 44,              /* CLOSEBRACKET  */
  YYSYMBOL_OPENBRACE = 45,                 /* OPENBRACE  */
  YYSYMBOL_CLOSEBRACE = 46,                /* CLOSEBRACE  */
  YYSYMBOL_DECIMAL_LTL = 47,               /* DECIMAL_LTL  */
  YYSYMBOL_HEX_LTL = 48,                   /* HEX_LTL  */
  YYSYMBOL_BOOLTRUE = 49,                  /* BOOLTRUE  */
  YYSYMBOL_BOOLFALSE = 50,                 /* BOOLFALSE  */
  YYSYMBOL_REAL = 51,                      /* REAL  */
  YYSYMBOL_REALPTR = 52,                   /* REALPTR  */
  YYSYMBOL_FUNCTION = 53,                  /* FUNCTION  */
  YYSYMBOL_COLON = 54,                     /* COLON  */
  YYSYMBOL_DEREFRENCE = 55,                /* DEREFRENCE  */
  YYSYMBOL_YYACCEPT = 56,                  /* $accept  */
  YYSYMBOL_project = 57,                   /* project  */
  YYSYMBOL_program = 58,                   /* program  */
  YYSYMBOL_cmmnt = 59,                     /* cmmnt  */
  YYSYMBOL_main = 60,                      /* main  */
  YYSYMBOL_procedures = 61,                /* procedures  */
  YYSYMBOL_procedure = 62,                 /* procedure  */
  YYSYMBOL_para_pro = 63,                  /* para_pro  */
  YYSYMBOL_para_list = 64,                 /* para_list  */
  YYSYMBOL_pro_body = 65,                  /* pro_body  */
  YYSYMBOL_declears = 66,                  /* declears  */
  YYSYMBOL_declear = 67,                   /* declear  */
  YYSYMBOL_var_id = 68,                    /* var_id  */
  YYSYMBOL_type_id = 69,                   /* type_id  */
  YYSYMBOL_type_pro = 70,                  /* type_pro  */
  YYSYMBOL_stmnts = 71,                    /* stmnts  */
  YYSYMBOL_stmnt_block = 72,               /* stmnt_block  */
  YYSYMBOL_new_block = 73,                 /* new_block  */
  YYSYMBOL_RET = 74,                       /* RET  */
  YYSYMBOL_stmnt = 75,                     /* stmnt  */
  YYSYMBOL_assmnt_stmnt = 76,              /* assmnt_stmnt  */
  YYSYMBOL_lhs = 77,                       /* lhs  */
  YYSYMBOL_expr = 78,                      /* expr  */
  YYSYMBOL_address_exprs = 79,             /* address_exprs  */
  YYSYMBOL_address_expr = 80,              /* address_expr  */
  YYSYMBOL_derefrence_expr = 81,           /* derefrence_expr  */
  YYSYMBOL_expr_list = 82,                 /* expr_list  */
  YYSYMBOL_paren_expr = 83,                /* paren_expr  */
  YYSYMBOL_call_func = 84                  /* call_func  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYLAST   567

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  214

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   310


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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    56,    56,    58,    61,    61,    64,    69,    72,    73,
      76,    80,    87,    88,    92,    93,    97,   104,   104,   107,
     113,   114,   118,   119,   120,   121,   122,   123,   124,   125,
     130,   131,   132,   133,   134,   135,   136,   137,   141,   141,
     144,   144,   147,   153,   153,   156,   162,   170,   176,   184,
     185,   186,   192,   199,   203,   204,   209,   211,   212,   213,
     214,   215,   216,   217,   218,   220,   221,   222,   223,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   242,   244,   245,   249,   249,   251,   252,   253,   255,
     266,   267,   268,   272,   273,   274,   276,   278
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
  "IF", "ELSE", "FOR", "RETURN", "BOOL", "STRING", "CHARPTR", "CHAR",
  "INT", "INTPTR", "PROCEDUR", "AND", "ADDRESS", "EQL", "ASSINGMENT", "OR",
  "LENGTH", "GREATEREQL", "GREATER", "LESSEQL", "LESS", "NOTEQL", "NOT",
  "DIVISION", "PLUS", "MINUS", "MULTI", "VARIABLE", "STRING_LTL",
  "REAL_LTL", "CHAR_LTL", "NULLL", "MAIN", "IDENTIFIER", "SEMICOLON",
  "COMMA", "OPENPAREN", "CLOSEPAREN", "OPENBRACKET", "CLOSEBRACKET",
  "OPENBRACE", "CLOSEBRACE", "DECIMAL_LTL", "HEX_LTL", "BOOLTRUE",
  "BOOLFALSE", "REAL", "REALPTR", "FUNCTION", "COLON", "DEREFRENCE",
  "$accept", "project", "program", "cmmnt", "main", "procedures",
  "procedure", "para_pro", "para_list", "pro_body", "declears", "declear",
  "var_id", "type_id", "type_pro", "stmnts", "stmnt_block", "new_block",
  "RET", "stmnt", "assmnt_stmnt", "lhs", "expr", "address_exprs",
  "address_expr", "derefrence_expr", "expr_list", "paren_expr",
  "call_func", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-169)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-56)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       7,     7,    18,  -169,  -169,  -169,  -169,   -12,    46,   -18,
    -169,  -169,    -7,     8,    28,    25,    37,    37,    34,    49,
      50,    54,    40,    53,     7,    37,    56,     7,    12,     7,
    -169,    57,  -169,     7,    37,  -169,    63,  -169,  -169,  -169,
    -169,  -169,  -169,  -169,   100,    -6,  -169,    77,  -169,    79,
      26,    72,    97,  -169,    87,  -169,  -169,  -169,  -169,  -169,
    -169,  -169,  -169,    88,    37,  -169,   207,  -169,     7,    78,
       7,    94,     7,   -10,   101,    64,  -169,  -169,  -169,  -169,
      47,    64,     7,  -169,  -169,  -169,  -169,   -26,  -169,  -169,
      99,   121,   448,  -169,  -169,   123,     7,   135,    12,   104,
      64,   105,   106,   112,  -169,   130,   -24,  -169,  -169,    64,
      64,  -169,   345,  -169,   109,    64,     7,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
       7,  -169,    64,   111,     7,    64,   366,   -25,    64,    44,
    -169,    64,   429,   117,   243,  -169,    97,    64,   387,  -169,
     520,  -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,   213,
     536,   536,   213,  -169,   466,  -169,   124,   408,   120,   119,
     125,  -169,   260,  -169,    64,   277,    64,  -169,   141,   172,
     294,  -169,     7,     7,   120,    64,   160,  -169,    64,    64,
    -169,   311,  -169,  -169,   126,  -169,  -169,  -169,  -169,   484,
     120,   328,   502,   129,     7,  -169,  -169,  -169,   -25,  -169,
    -169,   131,   120,  -169
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,     5,     0,     9,     4,     1,     2,     7,     0,     0,
       3,     8,     0,     0,     0,     0,    13,    13,     0,    21,
       0,    12,     0,     0,     5,     0,     0,     5,     0,     5,
       9,     0,    20,     5,     0,    22,     0,    28,    24,    25,
      27,    26,    29,    14,     0,    18,     6,     0,    15,     0,
       0,     0,    39,    11,     0,    30,    31,    36,    32,    33,
      35,    34,    37,     0,     0,    17,    16,    23,     5,     0,
       5,     0,     5,     0,     0,     0,    77,    76,    75,    83,
      82,     0,     5,    73,    74,    79,    78,     0,    51,    38,
       0,     0,     0,    70,    85,    71,     5,    44,     0,     0,
       0,     0,    86,     0,    84,     0,    82,    69,    71,    95,
       0,    97,     0,    18,    90,     0,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,    72,     0,     0,     5,     0,     0,     0,     0,     0,
      80,     0,    94,     0,     0,    56,    39,     0,     0,    49,
      52,    63,    57,    64,    59,    60,    61,    62,    58,    68,
      65,    66,    67,    50,     0,    10,     0,     0,     0,    54,
       0,    55,     0,    87,     0,     0,    95,    96,    81,    44,
       0,    91,     5,     5,     0,     0,    45,    40,     0,     0,
      88,     0,    81,    93,     0,    92,    43,    19,    47,     0,
       0,     0,     0,     0,     5,    41,    46,    53,     0,    89,
      42,     0,     0,    48
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -169,  -169,  -169,     0,  -169,   144,  -169,   161,   147,   -22,
      71,  -169,   -19,    89,  -169,    39,  -168,  -169,     9,   -62,
    -132,  -169,   -67,   113,  -169,   -64,    14,  -169,  -169
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     6,    30,    10,     7,    11,    20,    21,    31,
      52,    65,    22,    43,    63,    66,   186,    88,   133,   187,
      90,    91,    92,    93,    94,   108,   143,   111,    96
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       3,     4,    95,     8,    89,   170,    32,    73,   107,    51,
       1,    47,   114,   169,   112,   115,   198,   109,     5,   141,
      14,    35,    36,    37,    38,    39,    40,    34,   102,    44,
      87,   103,   206,   136,    15,    55,    56,    57,    58,    59,
      60,     9,   142,   144,   213,    69,    97,     9,   148,    16,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,    41,    42,   164,   -54,    18,   167,    17,
      99,   172,   101,   171,   175,    19,   211,    61,    62,    24,
     180,    73,   113,    12,    13,    74,   173,   174,   109,    25,
     110,    75,    26,    27,    28,    29,   131,    76,    77,    78,
      79,    33,   106,    46,    95,    81,    49,   191,    50,   142,
      13,    83,    84,    85,    86,    95,   149,    89,   199,    87,
      95,   201,   202,    53,    70,    71,    54,    72,   185,    64,
     163,    67,    98,    68,   166,   100,    95,    73,   116,   105,
     117,    74,   -55,   132,   171,   135,   137,    75,    95,   138,
     139,   140,   147,    76,    77,    78,    79,   165,    80,   177,
     -53,    81,   188,   183,   189,    82,   200,    83,    84,    85,
      86,   209,   204,   212,    45,    87,    70,    71,    23,    72,
     132,    48,   196,   197,   146,   179,   104,   134,   194,    73,
     193,     0,     0,    74,     0,     0,     0,     0,     0,    75,
       0,     0,     0,     0,   210,    76,    77,    78,    79,     0,
      80,    70,    71,    81,    72,     0,     0,    82,     0,    83,
      84,    85,    86,     0,    73,     0,     0,    87,    74,   118,
       0,   119,     0,   120,    75,   121,   122,   123,   124,   125,
      76,    77,    78,    79,     0,    80,     0,     0,    81,     0,
       0,     0,    82,     0,    83,    84,    85,    86,     0,   118,
       0,   119,    87,   120,     0,   121,   122,   123,   124,   125,
       0,   126,   127,   128,   129,     0,   118,     0,   119,     0,
     120,     0,   121,   122,   123,   124,   125,   178,   126,   127,
     128,   129,     0,   118,     0,   119,     0,   120,     0,   121,
     122,   123,   124,   125,   190,   126,   127,   128,   129,     0,
     118,     0,   119,     0,   120,     0,   121,   122,   123,   124,
     125,   192,   126,   127,   128,   129,     0,   118,     0,   119,
       0,   120,     0,   121,   122,   123,   124,   125,   195,   126,
     127,   128,   129,     0,   118,     0,   119,     0,   120,     0,
     121,   122,   123,   124,   125,   203,   126,   127,   128,   129,
       0,   118,     0,   119,     0,   120,     0,   121,   122,   123,
     124,   125,   207,   126,   127,   128,   129,     0,     0,     0,
       0,     0,   118,     0,   119,     0,   120,   145,   121,   122,
     123,   124,   125,     0,   126,   127,   128,   129,     0,     0,
       0,     0,     0,   118,     0,   119,     0,   120,   168,   121,
     122,   123,   124,   125,     0,   126,   127,   128,   129,     0,
       0,     0,     0,     0,   118,     0,   119,     0,   120,   181,
     121,   122,   123,   124,   125,     0,   126,   127,   128,   129,
       0,     0,     0,     0,     0,   118,     0,   119,     0,   120,
     184,   121,   122,   123,   124,   125,     0,   126,   127,   128,
     129,     0,     0,     0,   118,     0,   119,     0,   120,   176,
     121,   122,   123,   124,   125,     0,   126,   127,   128,   129,
       0,     0,   118,     0,   119,     0,   120,   130,   121,   122,
     123,   124,   125,     0,   126,   127,   128,   129,     0,     0,
     118,     0,   119,     0,   120,   182,   121,   122,   123,   124,
     125,     0,   126,   127,   128,   129,     0,     0,   118,     0,
     119,     0,   120,   205,   121,   122,   123,   124,   125,     0,
     126,   127,   128,   129,     0,     0,   118,     0,   119,     0,
     120,   208,   121,   122,   123,   124,   125,     0,   126,   127,
     128,   129,   118,     0,   119,     0,   120,     0,   121,   122,
     123,   124,   125,     0,   126,     0,     0,   129
};

static const yytype_int16 yycheck[] =
{
       0,     1,    66,    15,    66,   137,    25,    17,    75,    15,
       3,    33,    38,    38,    81,    41,   184,    41,     0,    43,
      38,     9,    10,    11,    12,    13,    14,    27,    38,    29,
      55,    41,   200,   100,    41,     9,    10,    11,    12,    13,
      14,    53,   109,   110,   212,    64,    68,    53,   115,    41,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,    51,    52,   132,    19,    42,   135,    41,
      70,   138,    72,   137,   141,    38,   208,    51,    52,    45,
     147,    17,    82,    37,    38,    21,    42,    43,    41,    40,
      43,    27,    42,    39,    54,    42,    96,    33,    34,    35,
      36,    45,    38,    46,   168,    41,    43,   174,     8,   176,
      38,    47,    48,    49,    50,   179,   116,   179,   185,    55,
     184,   188,   189,    46,     4,     5,    47,     7,     8,    32,
     130,    44,    54,    45,   134,    41,   200,    17,    39,    38,
      19,    21,    19,     8,   208,    41,    41,    27,   212,    43,
      38,    21,    43,    33,    34,    35,    36,    46,    38,    42,
      19,    41,    43,    39,    39,    45,     6,    47,    48,    49,
      50,    42,    46,    42,    30,    55,     4,     5,    17,     7,
       8,    34,   182,   183,   113,   146,    73,    98,   179,    17,
     176,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,   204,    33,    34,    35,    36,    -1,
      38,     4,     5,    41,     7,    -1,    -1,    45,    -1,    47,
      48,    49,    50,    -1,    17,    -1,    -1,    55,    21,    16,
      -1,    18,    -1,    20,    27,    22,    23,    24,    25,    26,
      33,    34,    35,    36,    -1,    38,    -1,    -1,    41,    -1,
      -1,    -1,    45,    -1,    47,    48,    49,    50,    -1,    16,
      -1,    18,    55,    20,    -1,    22,    23,    24,    25,    26,
      -1,    28,    29,    30,    31,    -1,    16,    -1,    18,    -1,
      20,    -1,    22,    23,    24,    25,    26,    44,    28,    29,
      30,    31,    -1,    16,    -1,    18,    -1,    20,    -1,    22,
      23,    24,    25,    26,    44,    28,    29,    30,    31,    -1,
      16,    -1,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    44,    28,    29,    30,    31,    -1,    16,    -1,    18,
      -1,    20,    -1,    22,    23,    24,    25,    26,    44,    28,
      29,    30,    31,    -1,    16,    -1,    18,    -1,    20,    -1,
      22,    23,    24,    25,    26,    44,    28,    29,    30,    31,
      -1,    16,    -1,    18,    -1,    20,    -1,    22,    23,    24,
      25,    26,    44,    28,    29,    30,    31,    -1,    -1,    -1,
      -1,    -1,    16,    -1,    18,    -1,    20,    42,    22,    23,
      24,    25,    26,    -1,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,    16,    -1,    18,    -1,    20,    42,    22,
      23,    24,    25,    26,    -1,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,    -1,    16,    -1,    18,    -1,    20,    42,
      22,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
      -1,    -1,    -1,    -1,    -1,    16,    -1,    18,    -1,    20,
      42,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    -1,    -1,    -1,    16,    -1,    18,    -1,    20,    40,
      22,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
      -1,    -1,    16,    -1,    18,    -1,    20,    39,    22,    23,
      24,    25,    26,    -1,    28,    29,    30,    31,    -1,    -1,
      16,    -1,    18,    -1,    20,    39,    22,    23,    24,    25,
      26,    -1,    28,    29,    30,    31,    -1,    -1,    16,    -1,
      18,    -1,    20,    39,    22,    23,    24,    25,    26,    -1,
      28,    29,    30,    31,    -1,    -1,    16,    -1,    18,    -1,
      20,    39,    22,    23,    24,    25,    26,    -1,    28,    29,
      30,    31,    16,    -1,    18,    -1,    20,    -1,    22,    23,
      24,    25,    26,    -1,    28,    -1,    -1,    31
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    57,    59,    59,     0,    58,    61,    15,    53,
      60,    62,    37,    38,    38,    41,    41,    41,    42,    38,
      63,    64,    68,    63,    45,    40,    42,    39,    54,    42,
      59,    65,    68,    45,    59,     9,    10,    11,    12,    13,
      14,    51,    52,    69,    59,    61,    46,    65,    64,    43,
       8,    15,    66,    46,    47,     9,    10,    11,    12,    13,
      14,    51,    52,    70,    32,    67,    71,    44,    45,    68,
       4,     5,     7,    17,    21,    27,    33,    34,    35,    36,
      38,    41,    45,    47,    48,    49,    50,    55,    73,    75,
      76,    77,    78,    79,    80,    81,    84,    65,    54,    59,
      41,    59,    38,    41,    79,    38,    38,    78,    81,    41,
      43,    83,    78,    59,    38,    41,    39,    19,    16,    18,
      20,    22,    23,    24,    25,    26,    28,    29,    30,    31,
      39,    59,     8,    74,    69,    41,    78,    41,    43,    38,
      21,    43,    78,    82,    78,    42,    66,    43,    78,    59,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    59,    78,    46,    59,    78,    42,    38,
      76,    81,    78,    42,    43,    78,    40,    42,    44,    71,
      78,    42,    39,    39,    42,     8,    72,    75,    43,    39,
      44,    78,    44,    82,    74,    44,    59,    59,    72,    78,
       6,    78,    78,    44,    46,    39,    72,    44,    39,    42,
      59,    76,    42,    72
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    57,    58,    59,    59,    60,    60,    61,    61,
      62,    62,    63,    63,    64,    64,    65,    66,    66,    67,
      68,    68,    69,    69,    69,    69,    69,    69,    69,    69,
      70,    70,    70,    70,    70,    70,    70,    70,    71,    71,
      72,    72,    73,    74,    74,    75,    75,    75,    75,    75,
      75,    75,    76,    77,    77,    77,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    79,    79,    80,    80,    80,    80,
      81,    81,    81,    82,    82,    82,    83,    84
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     0,     7,     0,     2,     0,
      12,     8,     1,     0,     3,     4,     4,     2,     0,     7,
       3,     1,     1,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     0,
       1,     3,     7,     4,     0,     5,     7,     6,    10,     3,
       3,     1,     3,     4,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       3,     4,     1,     1,     2,     1,     2,     4,     5,     7,
       2,     4,     5,     3,     1,     0,     3,     2
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
#line 56 "parser.y"
                       { Printtree((yyvsp[0].node)); printf("syntax valid\n");}
#line 1380 "parser.tab.c"
    break;

  case 3: /* program: procedures main  */
#line 58 "parser.y"
                         {(yyval.node)=mknode("CODE",(yyvsp[-1].node),(yyvsp[0].node));}
#line 1386 "parser.tab.c"
    break;

  case 6: /* main: PROCEDUR MAIN OPENPAREN CLOSEPAREN OPENBRACE pro_body CLOSEBRACE  */
#line 65 "parser.y"
{
(yyval.node)=mknode("proc",
mknode("Main",mknode("\n",NULL,NULL),NULL),
mknode("ARGS",NULL,(yyvsp[-1].node)));
}
#line 1396 "parser.tab.c"
    break;

  case 7: /* main: %empty  */
#line 69 "parser.y"
          {(yyval.node)=NULL;}
#line 1402 "parser.tab.c"
    break;

  case 8: /* procedures: procedures procedure  */
#line 72 "parser.y"
                                  {(yyval.node)=mknode("",(yyvsp[-1].node),(yyvsp[0].node));}
#line 1408 "parser.tab.c"
    break;

  case 9: /* procedures: %empty  */
#line 73 "parser.y"
          {(yyval.node)=NULL;}
#line 1414 "parser.tab.c"
    break;

  case 10: /* procedure: FUNCTION IDENTIFIER OPENPAREN para_pro CLOSEPAREN cmmnt RETURN type_pro OPENBRACE pro_body RET CLOSEBRACE  */
#line 77 "parser.y"
{ 
		(yyval.node)=mknode("func",mknode((yyvsp[-10].string),mknode("\n",NULL,NULL),mknode("ARGS",(yyvsp[-8].node),mknode("return",(yyvsp[-4].node),NULL))),mknode("",(yyvsp[-2].node),(yyvsp[-1].node)));	
}
#line 1422 "parser.tab.c"
    break;

  case 11: /* procedure: PROCEDUR IDENTIFIER OPENPAREN para_pro CLOSEPAREN OPENBRACE pro_body CLOSEBRACE  */
#line 81 "parser.y"
{
	(yyval.node)=mknode("proc",mknode((yyvsp[-6].string),mknode("\n",NULL,NULL),NULL),mknode("ARGS",(yyvsp[-4].node),(yyvsp[-1].node)));
}
#line 1430 "parser.tab.c"
    break;

  case 12: /* para_pro: para_list  */
#line 87 "parser.y"
                    {(yyval.node)=(yyvsp[0].node);}
#line 1436 "parser.tab.c"
    break;

  case 13: /* para_pro: %empty  */
#line 88 "parser.y"
  {(yyval.node)=NULL;}
#line 1442 "parser.tab.c"
    break;

  case 14: /* para_list: var_id COLON type_id  */
#line 92 "parser.y"
                                {(yyval.node)=mknode("(",(yyvsp[0].node),mknode("",(yyvsp[-2].node),mknode(")",NULL,NULL)));}
#line 1448 "parser.tab.c"
    break;

  case 15: /* para_list: para_list SEMICOLON cmmnt para_list  */
#line 94 "parser.y"
        {(yyval.node)=mknode("",(yyvsp[-3].node),mknode("",(yyvsp[0].node),NULL));}
#line 1454 "parser.tab.c"
    break;

  case 16: /* pro_body: cmmnt procedures declears stmnts  */
#line 98 "parser.y"
{
	(yyval.node)=mknode("(BODY\n    ", mknode("",(yyvsp[-2].node),NULL),mknode("",(yyvsp[-1].node),mknode("",(yyvsp[0].node),mknode("}",NULL,NULL))));
}
#line 1462 "parser.tab.c"
    break;

  case 17: /* declears: declears declear  */
#line 104 "parser.y"
                            {(yyval.node)=mknode("",(yyvsp[-1].node),(yyvsp[0].node));}
#line 1468 "parser.tab.c"
    break;

  case 18: /* declears: %empty  */
#line 104 "parser.y"
                                                     {(yyval.node)=NULL;}
#line 1474 "parser.tab.c"
    break;

  case 19: /* declear: VARIABLE var_id COLON type_id cmmnt SEMICOLON cmmnt  */
#line 108 "parser.y"
{
	(yyval.node)=mknode("var", (yyvsp[-3].node),(yyvsp[-5].node));
}
#line 1482 "parser.tab.c"
    break;

  case 20: /* var_id: IDENTIFIER COMMA var_id  */
#line 113 "parser.y"
                                {(yyval.node)=mknode((yyvsp[-2].string), mknode(" ", (yyvsp[0].node), NULL),NULL);}
#line 1488 "parser.tab.c"
    break;

  case 21: /* var_id: IDENTIFIER  */
#line 114 "parser.y"
                     {(yyval.node)=mknode((yyvsp[0].string), NULL, NULL);}
#line 1494 "parser.tab.c"
    break;

  case 22: /* type_id: BOOL  */
#line 118 "parser.y"
              {(yyval.node)=mknode("boolean", NULL, NULL);}
#line 1500 "parser.tab.c"
    break;

  case 23: /* type_id: STRING OPENBRACKET DECIMAL_LTL CLOSEBRACKET  */
#line 119 "parser.y"
                                                      {(yyval.node)=mknode("string", NULL, NULL);}
#line 1506 "parser.tab.c"
    break;

  case 24: /* type_id: CHAR  */
#line 120 "parser.y"
               {(yyval.node)=mknode("char", NULL, NULL);}
#line 1512 "parser.tab.c"
    break;

  case 25: /* type_id: INT  */
#line 121 "parser.y"
              {(yyval.node)=mknode("int", NULL, NULL);}
#line 1518 "parser.tab.c"
    break;

  case 26: /* type_id: REAL  */
#line 122 "parser.y"
               {(yyval.node)=mknode("real", NULL, NULL);}
#line 1524 "parser.tab.c"
    break;

  case 27: /* type_id: INTPTR  */
#line 123 "parser.y"
                 {(yyval.node)=mknode("int*", NULL, NULL);}
#line 1530 "parser.tab.c"
    break;

  case 28: /* type_id: CHARPTR  */
#line 124 "parser.y"
                  {(yyval.node)=mknode("char*", NULL, NULL);}
#line 1536 "parser.tab.c"
    break;

  case 29: /* type_id: REALPTR  */
#line 125 "parser.y"
                  {(yyval.node)=mknode("real*", NULL, NULL);}
#line 1542 "parser.tab.c"
    break;

  case 30: /* type_pro: BOOL  */
#line 130 "parser.y"
               {(yyval.node)=mknode("boolean", NULL, NULL);}
#line 1548 "parser.tab.c"
    break;

  case 31: /* type_pro: STRING  */
#line 131 "parser.y"
                 {(yyval.node)=mknode("string", NULL, NULL);}
#line 1554 "parser.tab.c"
    break;

  case 32: /* type_pro: CHAR  */
#line 132 "parser.y"
               {(yyval.node)=mknode("char", NULL, NULL);}
#line 1560 "parser.tab.c"
    break;

  case 33: /* type_pro: INT  */
#line 133 "parser.y"
              {(yyval.node)=mknode("int", NULL, NULL);}
#line 1566 "parser.tab.c"
    break;

  case 34: /* type_pro: REAL  */
#line 134 "parser.y"
               {(yyval.node)=mknode("real", NULL, NULL);}
#line 1572 "parser.tab.c"
    break;

  case 35: /* type_pro: INTPTR  */
#line 135 "parser.y"
                 {(yyval.node)=mknode("int*", NULL, NULL);}
#line 1578 "parser.tab.c"
    break;

  case 36: /* type_pro: CHARPTR  */
#line 136 "parser.y"
                  {(yyval.node)=mknode("char*", NULL, NULL);}
#line 1584 "parser.tab.c"
    break;

  case 37: /* type_pro: REALPTR  */
#line 137 "parser.y"
                  {(yyval.node)=mknode("real*", NULL, NULL);}
#line 1590 "parser.tab.c"
    break;

  case 38: /* stmnts: stmnts stmnt  */
#line 141 "parser.y"
                     {(yyval.node)=mknode("",(yyvsp[-1].node),(yyvsp[0].node));}
#line 1596 "parser.tab.c"
    break;

  case 39: /* stmnts: %empty  */
#line 141 "parser.y"
                                              {(yyval.node)=NULL;}
#line 1602 "parser.tab.c"
    break;

  case 40: /* stmnt_block: stmnt  */
#line 144 "parser.y"
                   {(yyval.node)=(yyvsp[0].node);}
#line 1608 "parser.tab.c"
    break;

  case 41: /* stmnt_block: RETURN expr SEMICOLON  */
#line 144 "parser.y"
                                                  {(yyval.node)=mknode("return",(yyvsp[-1].node),NULL);}
#line 1614 "parser.tab.c"
    break;

  case 42: /* new_block: OPENBRACE cmmnt declears stmnts RET CLOSEBRACE cmmnt  */
#line 148 "parser.y"
{
	(yyval.node)=mknode("{",(yyvsp[-4].node),mknode("", (yyvsp[-3].node), mknode("",(yyvsp[-2].node),mknode("}",NULL,NULL))));
}
#line 1622 "parser.tab.c"
    break;

  case 43: /* RET: RETURN expr SEMICOLON cmmnt  */
#line 153 "parser.y"
                                 {(yyval.node)=mknode("return",(yyvsp[-2].node),NULL);}
#line 1628 "parser.tab.c"
    break;

  case 44: /* RET: %empty  */
#line 153 "parser.y"
                                                                 {(yyval.node)=NULL;}
#line 1634 "parser.tab.c"
    break;

  case 45: /* stmnt: IF OPENPAREN expr CLOSEPAREN stmnt_block  */
#line 157 "parser.y"
{
	(yyval.node)=mknode("if",
	mknode("(", (yyvsp[-2].node), 
	mknode(")",NULL,NULL)),(yyvsp[0].node));
}
#line 1644 "parser.tab.c"
    break;

  case 46: /* stmnt: IF OPENPAREN expr CLOSEPAREN stmnt_block ELSE stmnt_block  */
#line 163 "parser.y"
{
	(yyval.node)=mknode("if-else",
	mknode("(", (yyvsp[-4].node), 
	mknode(")",NULL,NULL)),
	mknode("",(yyvsp[-2].node),
	mknode("",(yyvsp[0].node),NULL)));
}
#line 1656 "parser.tab.c"
    break;

  case 47: /* stmnt: WHILE cmmnt OPENPAREN expr CLOSEPAREN stmnt_block  */
#line 171 "parser.y"
{
	(yyval.node)=mknode("while",
	mknode("(", (yyvsp[-2].node), 
	mknode(")",NULL,NULL)),(yyvsp[0].node));
}
#line 1666 "parser.tab.c"
    break;

  case 48: /* stmnt: FOR cmmnt OPENPAREN assmnt_stmnt SEMICOLON expr SEMICOLON assmnt_stmnt CLOSEPAREN stmnt_block  */
#line 177 "parser.y"
{
		(yyval.node)= mknode("for",
			mknode("(",
			mknode("",(yyvsp[-6].node),(yyvsp[-4].node)),
			mknode("",(yyvsp[-2].node),
			mknode(")",NULL,NULL))),(yyvsp[0].node));		
}
#line 1678 "parser.tab.c"
    break;

  case 49: /* stmnt: assmnt_stmnt SEMICOLON cmmnt  */
#line 184 "parser.y"
                               {(yyval.node)=mknode("",(yyvsp[-2].node),NULL);}
#line 1684 "parser.tab.c"
    break;

  case 50: /* stmnt: expr SEMICOLON cmmnt  */
#line 185 "parser.y"
                       {(yyval.node)=(yyvsp[-2].node);}
#line 1690 "parser.tab.c"
    break;

  case 51: /* stmnt: new_block  */
#line 186 "parser.y"
            {(yyval.node)=(yyvsp[0].node);}
#line 1696 "parser.tab.c"
    break;

  case 52: /* assmnt_stmnt: lhs ASSINGMENT expr  */
#line 193 "parser.y"
{
	(yyval.node)=mknode("=",(yyvsp[-2].node),(yyvsp[0].node));
}
#line 1704 "parser.tab.c"
    break;

  case 53: /* lhs: IDENTIFIER OPENBRACKET expr CLOSEBRACKET  */
#line 200 "parser.y"
{
	(yyval.node)=mknode((yyvsp[-3].string), mknode("[",(yyvsp[-1].node),mknode("]",NULL,NULL)), NULL);
}
#line 1712 "parser.tab.c"
    break;

  case 54: /* lhs: IDENTIFIER  */
#line 203 "parser.y"
             {(yyval.node)=mknode((yyvsp[0].string),NULL,NULL);}
#line 1718 "parser.tab.c"
    break;

  case 55: /* lhs: derefrence_expr  */
#line 204 "parser.y"
                 {(yyval.node)=(yyvsp[0].node);}
#line 1724 "parser.tab.c"
    break;

  case 56: /* expr: OPENPAREN expr CLOSEPAREN  */
#line 209 "parser.y"
                                 {(yyval.node)=mknode("(",(yyvsp[-1].node),mknode(")",NULL,NULL));}
#line 1730 "parser.tab.c"
    break;

  case 57: /* expr: expr EQL expr  */
#line 211 "parser.y"
                  {(yyval.node)=mknode("==",(yyvsp[-2].node),(yyvsp[0].node));}
#line 1736 "parser.tab.c"
    break;

  case 58: /* expr: expr NOTEQL expr  */
#line 212 "parser.y"
                           {(yyval.node)=mknode("!=",(yyvsp[-2].node),(yyvsp[0].node));}
#line 1742 "parser.tab.c"
    break;

  case 59: /* expr: expr GREATEREQL expr  */
#line 213 "parser.y"
                               {(yyval.node)=mknode(">=",(yyvsp[-2].node),(yyvsp[0].node));}
#line 1748 "parser.tab.c"
    break;

  case 60: /* expr: expr GREATER expr  */
#line 214 "parser.y"
                            {(yyval.node)=mknode(">",(yyvsp[-2].node),(yyvsp[0].node));}
#line 1754 "parser.tab.c"
    break;

  case 61: /* expr: expr LESSEQL expr  */
#line 215 "parser.y"
                            {(yyval.node)=mknode("<=",(yyvsp[-2].node),(yyvsp[0].node));}
#line 1760 "parser.tab.c"
    break;

  case 62: /* expr: expr LESS expr  */
#line 216 "parser.y"
                         {(yyval.node)=mknode("<",(yyvsp[-2].node),(yyvsp[0].node));}
#line 1766 "parser.tab.c"
    break;

  case 63: /* expr: expr AND expr  */
#line 217 "parser.y"
                        {(yyval.node)=mknode("&&",(yyvsp[-2].node),(yyvsp[0].node));}
#line 1772 "parser.tab.c"
    break;

  case 64: /* expr: expr OR expr  */
#line 218 "parser.y"
                       {(yyval.node)=mknode("||",(yyvsp[-2].node),(yyvsp[0].node));}
#line 1778 "parser.tab.c"
    break;

  case 65: /* expr: expr PLUS expr  */
#line 220 "parser.y"
                         {(yyval.node)=mknode("+",(yyvsp[-2].node),(yyvsp[0].node));}
#line 1784 "parser.tab.c"
    break;

  case 66: /* expr: expr MINUS expr  */
#line 221 "parser.y"
                          {(yyval.node)=mknode("-",(yyvsp[-2].node),(yyvsp[0].node));}
#line 1790 "parser.tab.c"
    break;

  case 67: /* expr: expr MULTI expr  */
#line 222 "parser.y"
                          {(yyval.node)=mknode("*",(yyvsp[-2].node),(yyvsp[0].node));}
#line 1796 "parser.tab.c"
    break;

  case 68: /* expr: expr DIVISION expr  */
#line 223 "parser.y"
                             {(yyval.node)=mknode("/",(yyvsp[-2].node),(yyvsp[0].node));}
#line 1802 "parser.tab.c"
    break;

  case 69: /* expr: NOT expr  */
#line 225 "parser.y"
                   {(yyval.node)=mknode("!",(yyvsp[0].node),NULL);}
#line 1808 "parser.tab.c"
    break;

  case 70: /* expr: address_exprs  */
#line 226 "parser.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 1814 "parser.tab.c"
    break;

  case 71: /* expr: derefrence_expr  */
#line 227 "parser.y"
                          {(yyval.node)=(yyvsp[0].node);}
#line 1820 "parser.tab.c"
    break;

  case 72: /* expr: call_func cmmnt  */
#line 228 "parser.y"
                          {(yyval.node)=(yyvsp[-1].node);}
#line 1826 "parser.tab.c"
    break;

  case 73: /* expr: DECIMAL_LTL  */
#line 229 "parser.y"
                      {(yyval.node)=mknode((yyvsp[0].string),NULL,NULL);}
#line 1832 "parser.tab.c"
    break;

  case 74: /* expr: HEX_LTL  */
#line 230 "parser.y"
                  {(yyval.node)=mknode((yyvsp[0].string),NULL,NULL);}
#line 1838 "parser.tab.c"
    break;

  case 75: /* expr: CHAR_LTL  */
#line 231 "parser.y"
                   {(yyval.node)=mknode((yyvsp[0].string),NULL,NULL);}
#line 1844 "parser.tab.c"
    break;

  case 76: /* expr: REAL_LTL  */
#line 232 "parser.y"
                   {(yyval.node)=mknode((yyvsp[0].string),NULL,NULL);}
#line 1850 "parser.tab.c"
    break;

  case 77: /* expr: STRING_LTL  */
#line 233 "parser.y"
                     {(yyval.node)=mknode((yyvsp[0].string),NULL,NULL);}
#line 1856 "parser.tab.c"
    break;

  case 78: /* expr: BOOLFALSE  */
#line 234 "parser.y"
                    {(yyval.node)=mknode((yyvsp[0].string),NULL,NULL);}
#line 1862 "parser.tab.c"
    break;

  case 79: /* expr: BOOLTRUE  */
#line 235 "parser.y"
                   {(yyval.node)=mknode((yyvsp[0].string),NULL,NULL);}
#line 1868 "parser.tab.c"
    break;

  case 80: /* expr: LENGTH IDENTIFIER LENGTH  */
#line 237 "parser.y"
        {
		(yyval.node)=mknode("|",
		mknode((yyvsp[-1].string),NULL,NULL),
		mknode("|",NULL,NULL));
	}
#line 1878 "parser.tab.c"
    break;

  case 81: /* expr: IDENTIFIER OPENBRACKET expr CLOSEBRACKET  */
#line 243 "parser.y"
        {(yyval.node)=mknode((yyvsp[-3].string),mknode("[",(yyvsp[-1].node),mknode("]",NULL,NULL)),NULL);}
#line 1884 "parser.tab.c"
    break;

  case 82: /* expr: IDENTIFIER  */
#line 244 "parser.y"
                     {(yyval.node)=mknode((yyvsp[0].string),NULL,NULL);}
#line 1890 "parser.tab.c"
    break;

  case 83: /* expr: NULLL  */
#line 245 "parser.y"
                {(yyval.node)=mknode("null",NULL,NULL);}
#line 1896 "parser.tab.c"
    break;

  case 84: /* address_exprs: ADDRESS address_exprs  */
#line 249 "parser.y"
                                    {(yyval.node)=mknode((yyvsp[-1].string),(yyvsp[0].node),NULL);}
#line 1902 "parser.tab.c"
    break;

  case 85: /* address_exprs: address_expr  */
#line 249 "parser.y"
                                                                            {(yyval.node)=(yyvsp[0].node);}
#line 1908 "parser.tab.c"
    break;

  case 86: /* address_expr: ADDRESS IDENTIFIER  */
#line 251 "parser.y"
                                 {(yyval.node)=mknode("&",mknode((yyvsp[0].string),NULL,NULL),NULL);}
#line 1914 "parser.tab.c"
    break;

  case 87: /* address_expr: ADDRESS OPENPAREN IDENTIFIER CLOSEPAREN  */
#line 252 "parser.y"
                                                  {(yyval.node)=mknode("&",mknode("(",mknode((yyvsp[-1].string),NULL,NULL),NULL),mknode(")",NULL,NULL));}
#line 1920 "parser.tab.c"
    break;

  case 88: /* address_expr: ADDRESS IDENTIFIER OPENBRACKET expr CLOSEBRACKET  */
#line 254 "parser.y"
        {(yyval.node)=mknode("&", mknode((yyvsp[-3].string),NULL,NULL), mknode("[",(yyvsp[-1].node),mknode("]",NULL,NULL)));}
#line 1926 "parser.tab.c"
    break;

  case 89: /* address_expr: ADDRESS OPENPAREN IDENTIFIER OPENBRACKET expr CLOSEBRACKET CLOSEPAREN  */
#line 256 "parser.y"
        {
		(yyval.node)=mknode("&",
		mknode("(", 
		mknode((yyvsp[-4].string),NULL,NULL),
		mknode("[",(yyvsp[-2].node),NULL)), 
		mknode("]",NULL,mknode(")",NULL,NULL)));
	}
#line 1938 "parser.tab.c"
    break;

  case 90: /* derefrence_expr: DEREFRENCE IDENTIFIER  */
#line 266 "parser.y"
                                               {(yyval.node)=mknode("^",mknode((yyvsp[0].string),NULL,NULL),NULL);}
#line 1944 "parser.tab.c"
    break;

  case 91: /* derefrence_expr: DEREFRENCE OPENPAREN expr CLOSEPAREN  */
#line 267 "parser.y"
                                               {(yyval.node)=mknode("^",mknode("(",(yyvsp[-1].node),NULL),mknode(")",NULL,NULL));}
#line 1950 "parser.tab.c"
    break;

  case 92: /* derefrence_expr: DEREFRENCE IDENTIFIER OPENBRACKET expr CLOSEBRACKET  */
#line 269 "parser.y"
        {(yyval.node)=mknode((yyvsp[-4].string), mknode((yyvsp[-3].string),NULL,NULL), mknode("[",(yyvsp[-1].node),mknode("]",NULL,NULL)));}
#line 1956 "parser.tab.c"
    break;

  case 93: /* expr_list: expr COMMA expr_list  */
#line 272 "parser.y"
                                {(yyval.node)=mknode("",(yyvsp[-2].node),mknode(",",(yyvsp[0].node),NULL));}
#line 1962 "parser.tab.c"
    break;

  case 94: /* expr_list: expr  */
#line 273 "parser.y"
               {(yyval.node)=mknode("",(yyvsp[0].node),NULL);}
#line 1968 "parser.tab.c"
    break;

  case 95: /* expr_list: %empty  */
#line 274 "parser.y"
          {(yyval.node)=NULL;}
#line 1974 "parser.tab.c"
    break;

  case 96: /* paren_expr: OPENPAREN expr_list CLOSEPAREN  */
#line 276 "parser.y"
                                          {(yyval.node)=(yyvsp[-1].node);}
#line 1980 "parser.tab.c"
    break;

  case 97: /* call_func: IDENTIFIER paren_expr  */
#line 278 "parser.y"
                                 {(yyval.node)=mknode("Call func",mknode((yyvsp[-1].string),NULL,NULL),mknode("ARGS",(yyvsp[0].node),NULL));}
#line 1986 "parser.tab.c"
    break;


#line 1990 "parser.tab.c"

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

#line 279 "parser.y"




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
int yyerror(char *e)
{
	int yydebug=1; 
	fflush(stdout);
	fprintf(stderr,"Error %s at line %d\n" ,e,yylineno);
	fprintf(stderr, "does not accept '%s'\n",yytext);
	
	return 0;
}
