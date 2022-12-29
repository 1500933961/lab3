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
#line 1 "calc.y"


#include <stdio.h>
#include "ast.h"

int yylex(void);
void yyerror(char *);
extern char *yytext;

past root;

int n = 0;

void ShowYes()
{
	n++;
	printf("%d: Yes!\n",n);
}

void show(char* str)
{
	printf("str: %s \n", str);
}


#line 97 "calc.tab.c"

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

#include "calc.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_num_INT = 3,                    /* num_INT  */
  YYSYMBOL_num_FLOAT = 4,                  /* num_FLOAT  */
  YYSYMBOL_INT = 5,                        /* INT  */
  YYSYMBOL_FLOAT = 6,                      /* FLOAT  */
  YYSYMBOL_VOID = 7,                       /* VOID  */
  YYSYMBOL_CONST = 8,                      /* CONST  */
  YYSYMBOL_IF = 9,                         /* IF  */
  YYSYMBOL_ELSE = 10,                      /* ELSE  */
  YYSYMBOL_WHILE = 11,                     /* WHILE  */
  YYSYMBOL_BREAK = 12,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 13,                  /* CONTINUE  */
  YYSYMBOL_RETURN = 14,                    /* RETURN  */
  YYSYMBOL_ADD = 15,                       /* ADD  */
  YYSYMBOL_SUB = 16,                       /* SUB  */
  YYSYMBOL_MUL = 17,                       /* MUL  */
  YYSYMBOL_DIV = 18,                       /* DIV  */
  YYSYMBOL_MODULO = 19,                    /* MODULO  */
  YYSYMBOL_LESS = 20,                      /* LESS  */
  YYSYMBOL_LESSEQ = 21,                    /* LESSEQ  */
  YYSYMBOL_GREAT = 22,                     /* GREAT  */
  YYSYMBOL_GREATEQ = 23,                   /* GREATEQ  */
  YYSYMBOL_NOTEQ = 24,                     /* NOTEQ  */
  YYSYMBOL_EQ = 25,                        /* EQ  */
  YYSYMBOL_NOT = 26,                       /* NOT  */
  YYSYMBOL_AND = 27,                       /* AND  */
  YYSYMBOL_OR = 28,                        /* OR  */
  YYSYMBOL_ASSIGN = 29,                    /* ASSIGN  */
  YYSYMBOL_LPAR = 30,                      /* LPAR  */
  YYSYMBOL_RPAR = 31,                      /* RPAR  */
  YYSYMBOL_LBRACKET = 32,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 33,                  /* RBRACKET  */
  YYSYMBOL_LSQUARE = 34,                   /* LSQUARE  */
  YYSYMBOL_RSQUARE = 35,                   /* RSQUARE  */
  YYSYMBOL_COMMA = 36,                     /* COMMA  */
  YYSYMBOL_SEMICOLON = 37,                 /* SEMICOLON  */
  YYSYMBOL_NUMBER = 38,                    /* NUMBER  */
  YYSYMBOL_ID = 39,                        /* ID  */
  YYSYMBOL_YYACCEPT = 40,                  /* $accept  */
  YYSYMBOL_CompUnit = 41,                  /* CompUnit  */
  YYSYMBOL_Decl = 42,                      /* Decl  */
  YYSYMBOL_ConstDecl = 43,                 /* ConstDecl  */
  YYSYMBOL_ConstDefs = 44,                 /* ConstDefs  */
  YYSYMBOL_ConstDef = 45,                  /* ConstDef  */
  YYSYMBOL_ConstExps = 46,                 /* ConstExps  */
  YYSYMBOL_ConstInitVal = 47,              /* ConstInitVal  */
  YYSYMBOL_ConstInitVals = 48,             /* ConstInitVals  */
  YYSYMBOL_VarDecl = 49,                   /* VarDecl  */
  YYSYMBOL_VarDecls = 50,                  /* VarDecls  */
  YYSYMBOL_VarDef = 51,                    /* VarDef  */
  YYSYMBOL_InitVal = 52,                   /* InitVal  */
  YYSYMBOL_InitVals = 53,                  /* InitVals  */
  YYSYMBOL_FuncDef = 54,                   /* FuncDef  */
  YYSYMBOL_FuncFParams = 55,               /* FuncFParams  */
  YYSYMBOL_FuncFParam = 56,                /* FuncFParam  */
  YYSYMBOL_Block = 57,                     /* Block  */
  YYSYMBOL_BlockItems = 58,                /* BlockItems  */
  YYSYMBOL_BlockItem = 59,                 /* BlockItem  */
  YYSYMBOL_Stmt = 60,                      /* Stmt  */
  YYSYMBOL_Exp = 61,                       /* Exp  */
  YYSYMBOL_LVal = 62,                      /* LVal  */
  YYSYMBOL_ArraySubscripts = 63,           /* ArraySubscripts  */
  YYSYMBOL_PrimaryExp = 64,                /* PrimaryExp  */
  YYSYMBOL_UnaryExp = 65,                  /* UnaryExp  */
  YYSYMBOL_CallParams = 66,                /* CallParams  */
  YYSYMBOL_MulExp = 67,                    /* MulExp  */
  YYSYMBOL_AddExp = 68,                    /* AddExp  */
  YYSYMBOL_RelExp = 69,                    /* RelExp  */
  YYSYMBOL_EqExp = 70,                     /* EqExp  */
  YYSYMBOL_LAndExp = 71,                   /* LAndExp  */
  YYSYMBOL_LOrExp = 72,                    /* LOrExp  */
  YYSYMBOL_ConstExp = 73                   /* ConstExp  */
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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   297

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  190

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   294


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
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    78,    78,    79,    80,    81,    84,    85,    88,    89,
      92,    93,    96,    97,   100,   101,   104,   105,   106,   107,
     110,   111,   115,   116,   117,   118,   121,   122,   125,   126,
     127,   128,   131,   132,   133,   134,   137,   138,   141,   142,
     143,   144,   147,   148,   151,   152,   153,   154,   157,   158,
     161,   162,   165,   166,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   181,   184,   185,   188,   189,   192,
     193,   194,   195,   199,   200,   201,   202,   203,   204,   208,
     209,   213,   214,   215,   216,   219,   220,   221,   224,   225,
     226,   227,   228,   231,   232,   233,   236,   237,   240,   241,
     245
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
  "\"end of file\"", "error", "\"invalid token\"", "num_INT", "num_FLOAT",
  "INT", "FLOAT", "VOID", "CONST", "IF", "ELSE", "WHILE", "BREAK",
  "CONTINUE", "RETURN", "ADD", "SUB", "MUL", "DIV", "MODULO", "LESS",
  "LESSEQ", "GREAT", "GREATEQ", "NOTEQ", "EQ", "NOT", "AND", "OR",
  "ASSIGN", "LPAR", "RPAR", "LBRACKET", "RBRACKET", "LSQUARE", "RSQUARE",
  "COMMA", "SEMICOLON", "NUMBER", "ID", "$accept", "CompUnit", "Decl",
  "ConstDecl", "ConstDefs", "ConstDef", "ConstExps", "ConstInitVal",
  "ConstInitVals", "VarDecl", "VarDecls", "VarDef", "InitVal", "InitVals",
  "FuncDef", "FuncFParams", "FuncFParam", "Block", "BlockItems",
  "BlockItem", "Stmt", "Exp", "LVal", "ArraySubscripts", "PrimaryExp",
  "UnaryExp", "CallParams", "MulExp", "AddExp", "RelExp", "EqExp",
  "LAndExp", "LOrExp", "ConstExp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-151)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      68,   -21,    -5,    40,    62,    68,  -151,  -151,    68,    -3,
      79,    -1,    86,    28,  -151,  -151,  -151,    78,    11,   258,
      50,    52,  -151,    58,    25,  -151,    72,     3,   121,   145,
    -151,  -151,   258,   258,   258,   258,    45,    29,  -151,  -151,
    -151,  -151,  -151,   108,   174,    66,    75,    88,    93,   174,
     105,    78,     7,   119,  -151,    75,   128,  -151,    98,   132,
      28,  -151,    28,  -151,  -151,  -151,  -151,   133,  -151,    63,
     227,   258,   138,   258,   258,   258,   258,   258,   149,   130,
    -151,    75,   186,   159,  -151,  -151,  -151,    75,   196,  -151,
    -151,    98,  -151,  -151,  -151,  -151,    78,   165,  -151,   167,
     179,   160,   258,  -151,  -151,  -151,   108,   108,   230,   138,
      52,    52,   190,   191,   187,   201,   233,  -151,  -151,  -151,
     194,   162,  -151,   202,   211,  -151,  -151,  -151,  -151,  -151,
      70,  -151,   205,  -151,   258,  -151,  -151,   209,   213,   258,
     258,  -151,  -151,  -151,   214,  -151,  -151,  -151,   258,  -151,
      98,   217,  -151,  -151,  -151,   138,   164,   189,   225,   226,
     224,   236,  -151,   231,   228,  -151,   258,   258,   258,   258,
     258,   258,   258,   258,   193,   193,  -151,  -151,  -151,  -151,
    -151,  -151,  -151,  -151,  -151,  -151,   261,  -151,   193,  -151
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     4,     6,     7,     5,    28,
       0,    28,     0,     0,     1,     2,     3,     0,     0,     0,
      30,     0,    22,     0,     0,    23,     0,     0,     0,     0,
      71,    72,     0,     0,     0,     0,     0,    65,    29,    32,
      70,    73,    81,    85,    64,     0,     0,     0,    42,   100,
       0,     0,    28,    26,    24,     0,     0,    25,     0,     0,
       0,     9,     0,     8,    76,    77,    78,     0,    33,     0,
       0,     0,    66,     0,     0,     0,     0,     0,    44,     0,
      38,     0,     0,    14,    31,    27,    39,     0,     0,    12,
      16,     0,    11,    10,    69,    34,     0,     0,    74,    79,
       0,     0,     0,    82,    83,    84,    86,    87,     0,    46,
       0,     0,     0,     0,     0,     0,     0,    49,    52,    56,
       0,    50,    53,     0,    70,    40,    43,    15,    41,    17,
       0,    13,    36,    35,     0,    75,    67,     0,    45,     0,
       0,    60,    61,    63,     0,    48,    51,    55,     0,    18,
       0,     0,    37,    80,    68,    47,    88,    93,    96,    98,
       0,     0,    62,     0,    20,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    54,    21,    89,    91,
      90,    92,    95,    94,    97,    99,    58,    57,     0,    59
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -151,    35,   -64,  -151,  -151,    23,   -13,   -84,   111,  -151,
       5,     1,   -28,   144,  -151,   -18,  -151,   -34,   156,  -151,
    -150,   -16,   -77,   -73,  -151,   -23,   146,   139,   -19,   -79,
      47,   106,  -127,   260
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,    28,    29,    20,    89,   151,     7,
      23,    10,    38,    97,     8,    47,    48,   119,   120,   121,
     122,   123,    40,    72,    41,    42,   100,    43,    44,   157,
     158,   159,   160,    90
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      49,    39,   124,    12,   130,   109,    56,   131,    69,    64,
      65,    66,    80,   161,    59,   118,    45,    26,     9,    67,
      39,    86,    53,    84,   186,   187,    17,    18,    17,    24,
      45,    19,    58,    19,    11,    39,    17,    19,   189,    49,
      15,    19,    46,    16,   124,    13,   185,   125,    30,    31,
     103,   104,   105,   128,    99,   101,    55,   118,    85,    70,
      32,    33,    14,    71,   126,   155,   164,    27,   132,    49,
     127,    34,    49,     1,     2,    35,     3,    36,    68,    51,
      39,    30,    31,    92,    37,    93,   137,   178,   179,   180,
     181,    52,   101,    32,    33,    54,    95,   124,   124,    96,
     144,    30,    31,   149,    34,    78,   150,    79,    35,    57,
      36,   124,    12,    32,    33,    21,    22,    37,    99,    81,
     156,   156,    21,    25,    34,    73,    74,    75,    35,    82,
      88,    49,   163,    30,    31,   110,   111,    37,     3,   112,
      83,   113,   114,   115,   116,    32,    33,   156,   156,   156,
     156,   156,   156,   156,   156,    21,    34,    60,    61,    87,
      35,    91,    79,   117,    94,    30,    31,   110,   111,    37,
       3,   112,   102,   113,   114,   115,   116,    32,    33,    76,
      77,    62,    63,   108,   166,   167,   168,   169,    34,    76,
      77,    45,    35,    19,    79,   136,    30,    31,   133,    30,
      31,    37,   112,   134,   113,   114,   115,   116,    32,    33,
     135,    32,    33,   170,   171,   106,   107,   182,   183,    34,
     139,   140,    34,    35,   141,    79,    35,   145,    88,   129,
      30,    31,    37,    30,    31,    37,    30,    31,   142,   147,
     148,    96,    32,    33,   154,    32,    33,    71,    32,    33,
     165,   162,   172,    34,   173,   174,    34,    35,    98,    34,
      35,    30,    31,    35,   150,   138,    37,   175,   176,    37,
     143,   188,    37,    32,    33,   177,   152,   146,   184,    50,
     153,     0,     0,     0,    34,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,    37
};

static const yytype_int16 yycheck[] =
{
      19,    17,    79,     2,    88,    78,    24,    91,    36,    32,
      33,    34,    46,   140,    27,    79,     5,    12,    39,    35,
      36,    55,    21,    51,   174,   175,    29,    30,    29,    30,
       5,    34,    29,    34,    39,    51,    29,    34,   188,    58,
       5,    34,    31,     8,   121,     5,   173,    81,     3,     4,
      73,    74,    75,    87,    70,    71,    31,   121,    53,    30,
      15,    16,     0,    34,    82,   138,   150,    39,    96,    88,
      83,    26,    91,     5,     6,    30,     8,    32,    33,    29,
      96,     3,     4,    60,    39,    62,   102,   166,   167,   168,
     169,    39,   108,    15,    16,    37,    33,   174,   175,    36,
     116,     3,     4,    33,    26,    39,    36,    32,    30,    37,
      32,   188,   111,    15,    16,    36,    37,    39,   134,    31,
     139,   140,    36,    37,    26,    17,    18,    19,    30,    36,
      32,   150,   148,     3,     4,     5,     6,    39,     8,     9,
      35,    11,    12,    13,    14,    15,    16,   166,   167,   168,
     169,   170,   171,   172,   173,    36,    26,    36,    37,    31,
      30,    29,    32,    33,    31,     3,     4,     5,     6,    39,
       8,     9,    34,    11,    12,    13,    14,    15,    16,    15,
      16,    36,    37,    34,    20,    21,    22,    23,    26,    15,
      16,     5,    30,    34,    32,    35,     3,     4,    33,     3,
       4,    39,     9,    36,    11,    12,    13,    14,    15,    16,
      31,    15,    16,    24,    25,    76,    77,   170,   171,    26,
      30,    30,    26,    30,    37,    32,    30,    33,    32,    33,
       3,     4,    39,     3,     4,    39,     3,     4,    37,    37,
      29,    36,    15,    16,    35,    15,    16,    34,    15,    16,
      33,    37,    27,    26,    28,    31,    26,    30,    31,    26,
      30,     3,     4,    30,    36,    35,    39,    31,    37,    39,
      37,    10,    39,    15,    16,   164,   132,   121,   172,    19,
     134,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     6,     8,    41,    42,    43,    49,    54,    39,
      51,    39,    51,     5,     0,    41,    41,    29,    30,    34,
      46,    36,    37,    50,    30,    37,    50,    39,    44,    45,
       3,     4,    15,    16,    26,    30,    32,    39,    52,    61,
      62,    64,    65,    67,    68,     5,    31,    55,    56,    68,
      73,    29,    39,    51,    37,    31,    55,    37,    29,    46,
      36,    37,    36,    37,    65,    65,    65,    61,    33,    52,
      30,    34,    63,    17,    18,    19,    15,    16,    39,    32,
      57,    31,    36,    35,    52,    50,    57,    31,    32,    47,
      73,    29,    45,    45,    31,    33,    36,    53,    31,    61,
      66,    61,    34,    65,    65,    65,    67,    67,    34,    63,
       5,     6,     9,    11,    12,    13,    14,    33,    42,    57,
      58,    59,    60,    61,    62,    57,    55,    46,    57,    33,
      47,    47,    52,    33,    36,    31,    35,    61,    35,    30,
      30,    37,    37,    37,    61,    33,    58,    37,    29,    33,
      36,    48,    53,    66,    35,    63,    68,    69,    70,    71,
      72,    72,    37,    61,    47,    33,    20,    21,    22,    23,
      24,    25,    27,    28,    31,    31,    37,    48,    69,    69,
      69,    69,    70,    70,    71,    72,    60,    60,    10,    60
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    41,    41,    41,    41,    42,    42,    43,    43,
      44,    44,    45,    45,    46,    46,    47,    47,    47,    47,
      48,    48,    49,    49,    49,    49,    50,    50,    51,    51,
      51,    51,    52,    52,    52,    52,    53,    53,    54,    54,
      54,    54,    55,    55,    56,    56,    56,    56,    57,    57,
      58,    58,    59,    59,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    61,    62,    62,    63,    63,    64,
      64,    64,    64,    65,    65,    65,    65,    65,    65,    66,
      66,    67,    67,    67,    67,    68,    68,    68,    69,    69,
      69,    69,    69,    70,    70,    70,    71,    71,    72,    72,
      73
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     1,     1,     1,     1,     4,     4,
       3,     3,     3,     4,     3,     4,     1,     2,     3,     4,
       2,     3,     3,     3,     4,     4,     2,     3,     1,     3,
       2,     4,     1,     2,     3,     4,     2,     3,     5,     5,
       6,     6,     1,     3,     2,     4,     3,     5,     3,     2,
       1,     2,     1,     1,     4,     2,     1,     5,     5,     7,
       2,     2,     3,     2,     1,     1,     2,     3,     4,     3,
       1,     1,     1,     1,     3,     4,     2,     2,     2,     1,
       3,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1
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
  case 2: /* CompUnit: Decl CompUnit  */
#line 78 "calc.y"
                                { (yyval.pAst) = (yyvsp[-1].pAst); (yyval.pAst)->next = (yyvsp[0].pAst); }
#line 1305 "calc.tab.c"
    break;

  case 3: /* CompUnit: FuncDef CompUnit  */
#line 79 "calc.y"
                                { (yyval.pAst) = (yyvsp[-1].pAst); (yyval.pAst)->next = (yyvsp[0].pAst); }
#line 1311 "calc.tab.c"
    break;

  case 4: /* CompUnit: Decl  */
#line 80 "calc.y"
                                        { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1317 "calc.tab.c"
    break;

  case 5: /* CompUnit: FuncDef  */
#line 81 "calc.y"
                                        { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1323 "calc.tab.c"
    break;

  case 6: /* Decl: ConstDecl  */
#line 84 "calc.y"
                { (yyval.pAst) = newBasicNode("DECL_STMT", NULL, -1, (yyvsp[0].pAst), NULL, NULL); }
#line 1329 "calc.tab.c"
    break;

  case 7: /* Decl: VarDecl  */
#line 85 "calc.y"
                { (yyval.pAst) = newBasicNode("DECL_STMT", NULL, -1, (yyvsp[0].pAst), NULL, NULL); }
#line 1335 "calc.tab.c"
    break;

  case 8: /* ConstDecl: CONST INT ConstDef SEMICOLON  */
#line 88 "calc.y"
                                                { (yyval.pAst) = (yyvsp[-1].pAst); (yyvsp[-1].pAst)->typeValue = "const int"; }
#line 1341 "calc.tab.c"
    break;

  case 9: /* ConstDecl: CONST INT ConstDefs SEMICOLON  */
#line 89 "calc.y"
                                                { (yyval.pAst) = (yyvsp[-1].pAst); (yyvsp[-1].pAst)->typeValue = "const int"; }
#line 1347 "calc.tab.c"
    break;

  case 10: /* ConstDefs: ConstDef COMMA ConstDef  */
#line 92 "calc.y"
                                                        { (yyval.pAst) = (yyvsp[-2].pAst); (yyval.pAst)->next = (yyvsp[0].pAst); }
#line 1353 "calc.tab.c"
    break;

  case 11: /* ConstDefs: ConstDefs COMMA ConstDef  */
#line 93 "calc.y"
                                                        { (yyval.pAst) = (yyvsp[-2].pAst); (yyval.pAst)->next = (yyvsp[0].pAst); }
#line 1359 "calc.tab.c"
    break;

  case 12: /* ConstDef: ID ASSIGN ConstInitVal  */
#line 96 "calc.y"
                                                        { (yyval.pAst) = newBasicNode("VAR_DECL", "ID", -1, (yyvsp[0].pAst), NULL, NULL); }
#line 1365 "calc.tab.c"
    break;

  case 13: /* ConstDef: ID ConstExps ASSIGN ConstInitVal  */
#line 97 "calc.y"
                                                { (yyval.pAst) = newBasicNode("VAR_DECL", "ID_ConstExps", -1, (yyvsp[0].pAst), NULL, NULL); }
#line 1371 "calc.tab.c"
    break;

  case 14: /* ConstExps: LSQUARE ConstExp RSQUARE  */
#line 100 "calc.y"
                                                                { (yyval.pAst) = (yyvsp[-1].pAst); }
#line 1377 "calc.tab.c"
    break;

  case 15: /* ConstExps: LSQUARE ConstExp RSQUARE ConstExps  */
#line 101 "calc.y"
                                                { (yyval.pAst) = (yyvsp[-2].pAst); (yyval.pAst)->next = (yyvsp[0].pAst); }
#line 1383 "calc.tab.c"
    break;

  case 16: /* ConstInitVal: ConstExp  */
#line 104 "calc.y"
                                                                                                { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1389 "calc.tab.c"
    break;

  case 17: /* ConstInitVal: LBRACKET RBRACKET  */
#line 105 "calc.y"
                                                                                        { (yyval.pAst) = newBasicNode("INIT_LIST_EXPR", NULL, -1, NULL, NULL, NULL); }
#line 1395 "calc.tab.c"
    break;

  case 18: /* ConstInitVal: LBRACKET ConstInitVal RBRACKET  */
#line 106 "calc.y"
                                                                        { (yyval.pAst) = newBasicNode("INIT_LIST_EXPR", NULL, -1, (yyvsp[-1].pAst), NULL, NULL); }
#line 1401 "calc.tab.c"
    break;

  case 19: /* ConstInitVal: LBRACKET ConstInitVal ConstInitVals RBRACKET  */
#line 107 "calc.y"
                                                                { (yyval.pAst) = newBasicNode("INIT_LIST_EXPR", NULL, -1, (yyvsp[-2].pAst), (yyvsp[-1].pAst), NULL); }
#line 1407 "calc.tab.c"
    break;

  case 20: /* ConstInitVals: COMMA ConstInitVal  */
#line 110 "calc.y"
                                                                { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1413 "calc.tab.c"
    break;

  case 21: /* ConstInitVals: COMMA ConstInitVal ConstInitVals  */
#line 111 "calc.y"
                                                { (yyval.pAst) = (yyvsp[-1].pAst); (yyval.pAst)->next = (yyvsp[0].pAst); }
#line 1419 "calc.tab.c"
    break;

  case 22: /* VarDecl: INT VarDef SEMICOLON  */
#line 115 "calc.y"
                                                        { (yyval.pAst) = (yyvsp[-1].pAst); (yyval.pAst)->typeValue = "INT"; }
#line 1425 "calc.tab.c"
    break;

  case 23: /* VarDecl: FLOAT VarDef SEMICOLON  */
#line 116 "calc.y"
                                                                { (yyval.pAst) = (yyvsp[-1].pAst); (yyval.pAst)->typeValue = "FLOAT"; }
#line 1431 "calc.tab.c"
    break;

  case 24: /* VarDecl: INT VarDef VarDecls SEMICOLON  */
#line 117 "calc.y"
                                                        { (yyval.pAst) = (yyvsp[-2].pAst); (yyval.pAst)->typeValue = "INT"; (yyval.pAst)->next = (yyvsp[-1].pAst);}
#line 1437 "calc.tab.c"
    break;

  case 25: /* VarDecl: FLOAT VarDef VarDecls SEMICOLON  */
#line 118 "calc.y"
                                                        { (yyval.pAst) = (yyvsp[-2].pAst); (yyval.pAst)->typeValue = "FLOAT"; (yyval.pAst)->next = (yyvsp[-1].pAst);}
#line 1443 "calc.tab.c"
    break;

  case 26: /* VarDecls: COMMA VarDef  */
#line 121 "calc.y"
                                                        { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1449 "calc.tab.c"
    break;

  case 27: /* VarDecls: COMMA VarDef VarDecls  */
#line 122 "calc.y"
                                                { (yyval.pAst) = (yyvsp[-1].pAst); (yyval.pAst)->next = (yyvsp[0].pAst); }
#line 1455 "calc.tab.c"
    break;

  case 28: /* VarDef: ID  */
#line 125 "calc.y"
                                                                        { (yyval.pAst) = newBasicNode("VAR_DECL", "VarDefId", -1, NULL, NULL, NULL); }
#line 1461 "calc.tab.c"
    break;

  case 29: /* VarDef: ID ASSIGN InitVal  */
#line 126 "calc.y"
                                                                { (yyval.pAst) = newBasicNode("VAR_DECL", "VarDefId", -1, (yyvsp[0].pAst), NULL, NULL); }
#line 1467 "calc.tab.c"
    break;

  case 30: /* VarDef: ID ConstExps  */
#line 127 "calc.y"
                                                                { (yyval.pAst) = newBasicNode("VAR_DECL", "VarDefId_ConstExps", -1, NULL, NULL, NULL); }
#line 1473 "calc.tab.c"
    break;

  case 31: /* VarDef: ID ConstExps ASSIGN InitVal  */
#line 128 "calc.y"
                                                { (yyval.pAst) = newBasicNode("VAR_DECL", "VarDefId_ConstExps", -1, (yyvsp[0].pAst), NULL, NULL); }
#line 1479 "calc.tab.c"
    break;

  case 32: /* InitVal: Exp  */
#line 131 "calc.y"
                                                                                { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1485 "calc.tab.c"
    break;

  case 33: /* InitVal: LBRACKET RBRACKET  */
#line 132 "calc.y"
                                                                                { (yyval.pAst) = newBasicNode("INIT_LIST_EXPR", NULL, -1, NULL, NULL, NULL); }
#line 1491 "calc.tab.c"
    break;

  case 34: /* InitVal: LBRACKET InitVal RBRACKET  */
#line 133 "calc.y"
                                                                        { (yyval.pAst) = newBasicNode("INIT_LIST_EXPR", NULL, -1, (yyvsp[-1].pAst), NULL, NULL); }
#line 1497 "calc.tab.c"
    break;

  case 35: /* InitVal: LBRACKET InitVal InitVals RBRACKET  */
#line 134 "calc.y"
                                                        { (yyval.pAst) = newBasicNode("INIT_LIST_EXPR", NULL, -1, (yyvsp[-2].pAst), (yyvsp[-1].pAst), NULL); }
#line 1503 "calc.tab.c"
    break;

  case 36: /* InitVals: COMMA InitVal  */
#line 137 "calc.y"
                                                                        { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1509 "calc.tab.c"
    break;

  case 37: /* InitVals: COMMA InitVal InitVals  */
#line 138 "calc.y"
                                                                { (yyval.pAst) = (yyvsp[-1].pAst); (yyval.pAst)->next = (yyvsp[0].pAst); }
#line 1515 "calc.tab.c"
    break;

  case 38: /* FuncDef: INT ID LPAR RPAR Block  */
#line 141 "calc.y"
                                                                { (yyval.pAst) = newBasicNode("FUNCTION_DECL", "ID", -1, NULL, (yyvsp[0].pAst), NULL); }
#line 1521 "calc.tab.c"
    break;

  case 39: /* FuncDef: FLOAT ID LPAR RPAR Block  */
#line 142 "calc.y"
                                                                        { (yyval.pAst) = newBasicNode("FUNCTION_DECL", "ID", -1, NULL, (yyvsp[0].pAst), NULL); }
#line 1527 "calc.tab.c"
    break;

  case 40: /* FuncDef: INT ID LPAR FuncFParams RPAR Block  */
#line 143 "calc.y"
                                                        { (yyval.pAst) = newBasicNode("FUNCTION_DECL", "ID", -1, (yyvsp[-2].pAst), (yyvsp[0].pAst), NULL); }
#line 1533 "calc.tab.c"
    break;

  case 41: /* FuncDef: FLOAT ID LPAR FuncFParams RPAR Block  */
#line 144 "calc.y"
                                                        { (yyval.pAst) = newBasicNode("FUNCTION_DECL", "ID", -1, (yyvsp[-2].pAst), (yyvsp[0].pAst), NULL); }
#line 1539 "calc.tab.c"
    break;

  case 42: /* FuncFParams: FuncFParam  */
#line 147 "calc.y"
                                                        { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1545 "calc.tab.c"
    break;

  case 43: /* FuncFParams: FuncFParam COMMA FuncFParams  */
#line 148 "calc.y"
                                        { (yyval.pAst) = (yyvsp[-2].pAst); (yyval.pAst)->next = (yyvsp[0].pAst); }
#line 1551 "calc.tab.c"
    break;

  case 44: /* FuncFParam: INT ID  */
#line 151 "calc.y"
                                                                                        { (yyval.pAst) = newBasicNode("PARM_DECL", "ID", -1, NULL, NULL, NULL); }
#line 1557 "calc.tab.c"
    break;

  case 45: /* FuncFParam: INT ID LSQUARE RSQUARE  */
#line 152 "calc.y"
                                                                        { (yyval.pAst) = newBasicNode("PARM_DECL", "ID", -1, NULL, NULL, NULL); }
#line 1563 "calc.tab.c"
    break;

  case 46: /* FuncFParam: INT ID ArraySubscripts  */
#line 153 "calc.y"
                                                                        { (yyval.pAst) = newBasicNode("PARM_DECL", "ID", -1, NULL, NULL, NULL); }
#line 1569 "calc.tab.c"
    break;

  case 47: /* FuncFParam: INT ID LSQUARE RSQUARE ArraySubscripts  */
#line 154 "calc.y"
                                                        { (yyval.pAst) = newBasicNode("PARM_DECL", "ID", -1, NULL, NULL, NULL); }
#line 1575 "calc.tab.c"
    break;

  case 48: /* Block: LBRACKET BlockItems RBRACKET  */
#line 157 "calc.y"
                                                { (yyval.pAst) = newBasicNode("COMPOUND_STMT", NULL, -1, NULL, NULL, (yyvsp[-1].pAst)); }
#line 1581 "calc.tab.c"
    break;

  case 49: /* Block: LBRACKET RBRACKET  */
#line 158 "calc.y"
                                                        { (yyval.pAst) = newBasicNode("COMPOUND_STMT", NULL, -1, NULL, NULL, NULL); }
#line 1587 "calc.tab.c"
    break;

  case 50: /* BlockItems: BlockItem  */
#line 161 "calc.y"
                                        { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1593 "calc.tab.c"
    break;

  case 51: /* BlockItems: BlockItem BlockItems  */
#line 162 "calc.y"
                                { (yyval.pAst) = (yyvsp[-1].pAst); (yyval.pAst)->next = (yyvsp[0].pAst); }
#line 1599 "calc.tab.c"
    break;

  case 52: /* BlockItem: Decl  */
#line 165 "calc.y"
                                                { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1605 "calc.tab.c"
    break;

  case 53: /* BlockItem: Stmt  */
#line 166 "calc.y"
                                                { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1611 "calc.tab.c"
    break;

  case 54: /* Stmt: LVal ASSIGN Exp SEMICOLON  */
#line 169 "calc.y"
                                                        { (yyval.pAst) = newBasicNode("BINARY_OPERATOR", "=", -1, (yyvsp[-3].pAst), (yyvsp[-1].pAst), NULL); }
#line 1617 "calc.tab.c"
    break;

  case 55: /* Stmt: Exp SEMICOLON  */
#line 170 "calc.y"
                                                                        { (yyval.pAst) = (yyvsp[-1].pAst); }
#line 1623 "calc.tab.c"
    break;

  case 56: /* Stmt: Block  */
#line 171 "calc.y"
                                                                                { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1629 "calc.tab.c"
    break;

  case 57: /* Stmt: WHILE LPAR LOrExp RPAR Stmt  */
#line 172 "calc.y"
                                                        { (yyval.pAst) = newIfNode((yyvsp[-2].pAst), (yyvsp[0].pAst), NULL);}
#line 1635 "calc.tab.c"
    break;

  case 58: /* Stmt: IF LPAR LOrExp RPAR Stmt  */
#line 173 "calc.y"
                                                        { (yyval.pAst) = newIfNode((yyvsp[-2].pAst), (yyvsp[0].pAst), NULL);}
#line 1641 "calc.tab.c"
    break;

  case 59: /* Stmt: IF LPAR LOrExp RPAR Stmt ELSE Stmt  */
#line 174 "calc.y"
                                                { (yyval.pAst) = newIfNode((yyvsp[-4].pAst), (yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 1647 "calc.tab.c"
    break;

  case 60: /* Stmt: BREAK SEMICOLON  */
#line 175 "calc.y"
                                                                { (yyval.pAst) = newBasicNode("BREAK_STMT", NULL, -1, NULL, NULL, NULL); }
#line 1653 "calc.tab.c"
    break;

  case 61: /* Stmt: CONTINUE SEMICOLON  */
#line 176 "calc.y"
                                                                { (yyval.pAst) = newBasicNode("CONTINUE_STMT", NULL, -1, NULL, NULL, NULL); }
#line 1659 "calc.tab.c"
    break;

  case 62: /* Stmt: RETURN Exp SEMICOLON  */
#line 177 "calc.y"
                                                                { (yyval.pAst) = newBasicNode("RETURN_STMT", NULL, -1, (yyvsp[-1].pAst), NULL, NULL); }
#line 1665 "calc.tab.c"
    break;

  case 63: /* Stmt: RETURN SEMICOLON  */
#line 178 "calc.y"
                                                                { (yyval.pAst) = newBasicNode("RETURN_STMT", NULL, -1, NULL, NULL, NULL); }
#line 1671 "calc.tab.c"
    break;

  case 65: /* LVal: ID  */
#line 184 "calc.y"
                                                        { (yyval.pAst) = newBasicNode("DECL_REF_EXPR", NULL, -1, NULL, NULL, NULL); }
#line 1677 "calc.tab.c"
    break;

  case 66: /* LVal: ID ArraySubscripts  */
#line 185 "calc.y"
                                        { (yyval.pAst) = newBasicNode("ARRASUBSCRIPT_EXPR", NULL, -1, (yyvsp[0].pAst), NULL, NULL); }
#line 1683 "calc.tab.c"
    break;

  case 67: /* ArraySubscripts: LSQUARE Exp RSQUARE  */
#line 188 "calc.y"
                                                        { (yyval.pAst) = newBasicNode("DECL_REF_EXPR", NULL, -1, NULL, NULL, (yyvsp[-1].pAst)); }
#line 1689 "calc.tab.c"
    break;

  case 68: /* ArraySubscripts: ArraySubscripts LSQUARE Exp RSQUARE  */
#line 189 "calc.y"
                                                        { (yyval.pAst) = newBasicNode("ARRASUBSCRIPT_EXPR", NULL, -1, (yyvsp[-3].pAst), (yyvsp[-1].pAst), NULL); }
#line 1695 "calc.tab.c"
    break;

  case 69: /* PrimaryExp: LPAR Exp RPAR  */
#line 192 "calc.y"
                                        { (yyval.pAst) = (yyvsp[-1].pAst); }
#line 1701 "calc.tab.c"
    break;

  case 70: /* PrimaryExp: LVal  */
#line 193 "calc.y"
                                                { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1707 "calc.tab.c"
    break;

  case 71: /* PrimaryExp: num_INT  */
#line 194 "calc.y"
                                                { (yyval.pAst) = newBasicNode("INTEGER_LITERAL", NULL, yylval.iValue, NULL, NULL, NULL); }
#line 1713 "calc.tab.c"
    break;

  case 72: /* PrimaryExp: num_FLOAT  */
#line 195 "calc.y"
                                                { (yyval.pAst) = newBasicNode("FLOAT_LITERAL", NULL, yylval.iValue, NULL, NULL, NULL); }
#line 1719 "calc.tab.c"
    break;

  case 73: /* UnaryExp: PrimaryExp  */
#line 199 "calc.y"
                                        { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1725 "calc.tab.c"
    break;

  case 74: /* UnaryExp: ID LPAR RPAR  */
#line 200 "calc.y"
                                                { (yyval.pAst) = newBasicNode("CALL_EXPR", NULL, -1,newBasicNode("DECL_REF_EXPR", "ID", -1, NULL, NULL, NULL), NULL, NULL); }
#line 1731 "calc.tab.c"
    break;

  case 75: /* UnaryExp: ID LPAR CallParams RPAR  */
#line 201 "calc.y"
                                { (yyval.pAst) = newBasicNode("CALL_EXPR", NULL, -1,newBasicNode("DECL_REF_EXPR", "ID", -1, NULL, NULL, NULL), (yyvsp[-1].pAst)  , NULL); }
#line 1737 "calc.tab.c"
    break;

  case 76: /* UnaryExp: ADD UnaryExp  */
#line 202 "calc.y"
                                                { (yyval.pAst) = newBasicNode("UNARY_EXPR", "+", -1, NULL, NULL, (yyvsp[0].pAst)); }
#line 1743 "calc.tab.c"
    break;

  case 77: /* UnaryExp: SUB UnaryExp  */
#line 203 "calc.y"
                                                { (yyval.pAst) = newBasicNode("UNARY_EXPR", "+", -1, NULL, NULL, (yyvsp[0].pAst)); }
#line 1749 "calc.tab.c"
    break;

  case 78: /* UnaryExp: NOT UnaryExp  */
#line 204 "calc.y"
                                                { (yyval.pAst) = newBasicNode("UNARY_EXPR", "!", -1, NULL, NULL, (yyvsp[0].pAst)); }
#line 1755 "calc.tab.c"
    break;

  case 79: /* CallParams: Exp  */
#line 208 "calc.y"
                                                { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1761 "calc.tab.c"
    break;

  case 80: /* CallParams: Exp COMMA CallParams  */
#line 209 "calc.y"
                                { (yyval.pAst) = (yyvsp[-2].pAst); (yyval.pAst)->next = (yyvsp[0].pAst); }
#line 1767 "calc.tab.c"
    break;

  case 81: /* MulExp: UnaryExp  */
#line 213 "calc.y"
                                                { (yyval.pAst) = (yyvsp[0].pAst);}
#line 1773 "calc.tab.c"
    break;

  case 82: /* MulExp: MulExp MUL UnaryExp  */
#line 214 "calc.y"
                                        { (yyval.pAst) = newBinaryExp("*", (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1779 "calc.tab.c"
    break;

  case 83: /* MulExp: MulExp DIV UnaryExp  */
#line 215 "calc.y"
                                        { (yyval.pAst) = newBinaryExp("/", (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1785 "calc.tab.c"
    break;

  case 84: /* MulExp: MulExp MODULO UnaryExp  */
#line 216 "calc.y"
                                { (yyval.pAst) = newBinaryExp("%", (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1791 "calc.tab.c"
    break;

  case 86: /* AddExp: AddExp ADD MulExp  */
#line 220 "calc.y"
                                        { (yyval.pAst) = newBinaryExp("+", (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1797 "calc.tab.c"
    break;

  case 87: /* AddExp: AddExp SUB MulExp  */
#line 221 "calc.y"
                                        { (yyval.pAst) = newBinaryExp("-", (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1803 "calc.tab.c"
    break;

  case 89: /* RelExp: AddExp LESS RelExp  */
#line 225 "calc.y"
                                        { (yyval.pAst) = newBinaryExp("<", (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1809 "calc.tab.c"
    break;

  case 90: /* RelExp: AddExp GREAT RelExp  */
#line 226 "calc.y"
                                        { (yyval.pAst) = newBinaryExp(">", (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1815 "calc.tab.c"
    break;

  case 91: /* RelExp: AddExp LESSEQ RelExp  */
#line 227 "calc.y"
                                        { (yyval.pAst) = newBinaryExp("<=", (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1821 "calc.tab.c"
    break;

  case 92: /* RelExp: AddExp GREATEQ RelExp  */
#line 228 "calc.y"
                                        { (yyval.pAst) = newBinaryExp(">=", (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1827 "calc.tab.c"
    break;

  case 94: /* EqExp: RelExp EQ EqExp  */
#line 232 "calc.y"
                                                { (yyval.pAst) = newBinaryExp("==", (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1833 "calc.tab.c"
    break;

  case 95: /* EqExp: RelExp NOTEQ EqExp  */
#line 233 "calc.y"
                                        { (yyval.pAst) = newBinaryExp("!=", (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1839 "calc.tab.c"
    break;

  case 97: /* LAndExp: EqExp AND LAndExp  */
#line 237 "calc.y"
                                                { (yyval.pAst) = newBinaryExp("&&", (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1845 "calc.tab.c"
    break;

  case 99: /* LOrExp: LAndExp OR LOrExp  */
#line 241 "calc.y"
                                                { (yyval.pAst) = newBinaryExp("||", (yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 1851 "calc.tab.c"
    break;

  case 100: /* ConstExp: AddExp  */
#line 245 "calc.y"
                                                { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1857 "calc.tab.c"
    break;


#line 1861 "calc.tab.c"

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

#line 247 "calc.y"

void yyerror(char *s) 
{
	fprintf(stderr, "%s\n", s);
}


