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
#line 1 "src/le_parser.y"

#include <stdio.h>
#include <stdlib.h>
#include "tree.h"
#include <getopt.h>

extern int yylineno;
extern char* yytext;
int yylex();

int lineno = 1;
Node *root = NULL;

void yyerror(const char *s) {
    fprintf(stderr, "Erreur de syntaxe à la ligne %d: %s", yylineno, s);
    if (yytext) fprintf(stderr, " --> : '%s'", yytext);
    printf("\n");
}

void print_help() {
    printf("Usage: tpcas [OPTIONS]\n");
    printf("Options:\n");
    printf("  -t, --tree       Affiche l'arbre abstrait sur la sortie standard\n");
    printf("  -h, --help       Affiche cette aide et termine l'exécution\n");
}

#line 98 "obj/le_parser.c"

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

#include "le_parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CHARACTER = 3,                  /* CHARACTER  */
  YYSYMBOL_NUM = 4,                        /* NUM  */
  YYSYMBOL_IDENT = 5,                      /* IDENT  */
  YYSYMBOL_TYPE = 6,                       /* TYPE  */
  YYSYMBOL_STRUCT = 7,                     /* STRUCT  */
  YYSYMBOL_VOID = 8,                       /* VOID  */
  YYSYMBOL_IF = 9,                         /* IF  */
  YYSYMBOL_ELSE = 10,                      /* ELSE  */
  YYSYMBOL_RETURN = 11,                    /* RETURN  */
  YYSYMBOL_WHILE = 12,                     /* WHILE  */
  YYSYMBOL_ADDSUB = 13,                    /* ADDSUB  */
  YYSYMBOL_DIVSTAR = 14,                   /* DIVSTAR  */
  YYSYMBOL_AND = 15,                       /* AND  */
  YYSYMBOL_OR = 16,                        /* OR  */
  YYSYMBOL_EQ = 17,                        /* EQ  */
  YYSYMBOL_ORDER = 18,                     /* ORDER  */
  YYSYMBOL_DOT = 19,                       /* DOT  */
  YYSYMBOL_20_ = 20,                       /* ';'  */
  YYSYMBOL_21_ = 21,                       /* '{'  */
  YYSYMBOL_22_ = 22,                       /* '}'  */
  YYSYMBOL_23_ = 23,                       /* ','  */
  YYSYMBOL_24_ = 24,                       /* '('  */
  YYSYMBOL_25_ = 25,                       /* ')'  */
  YYSYMBOL_26_ = 26,                       /* '='  */
  YYSYMBOL_27_ = 27,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 28,                  /* $accept  */
  YYSYMBOL_Prog = 29,                      /* Prog  */
  YYSYMBOL_DeclGlobales = 30,              /* DeclGlobales  */
  YYSYMBOL_DeclGlobale = 31,               /* DeclGlobale  */
  YYSYMBOL_StructDecl = 32,                /* StructDecl  */
  YYSYMBOL_StructFields = 33,              /* StructFields  */
  YYSYMBOL_StructField = 34,               /* StructField  */
  YYSYMBOL_Declarateurs = 35,              /* Declarateurs  */
  YYSYMBOL_DeclFoncts = 36,                /* DeclFoncts  */
  YYSYMBOL_DeclFonct = 37,                 /* DeclFonct  */
  YYSYMBOL_EnTeteFonct = 38,               /* EnTeteFonct  */
  YYSYMBOL_Parametres = 39,                /* Parametres  */
  YYSYMBOL_ListTypVar = 40,                /* ListTypVar  */
  YYSYMBOL_Corps = 41,                     /* Corps  */
  YYSYMBOL_ListDeclLocales = 42,           /* ListDeclLocales  */
  YYSYMBOL_DeclLocale = 43,                /* DeclLocale  */
  YYSYMBOL_SuiteInstr = 44,                /* SuiteInstr  */
  YYSYMBOL_Instr = 45,                     /* Instr  */
  YYSYMBOL_Exp = 46,                       /* Exp  */
  YYSYMBOL_TB = 47,                        /* TB  */
  YYSYMBOL_FB = 48,                        /* FB  */
  YYSYMBOL_M = 49,                         /* M  */
  YYSYMBOL_E = 50,                         /* E  */
  YYSYMBOL_T = 51,                         /* T  */
  YYSYMBOL_F = 52,                         /* F  */
  YYSYMBOL_Arguments = 53,                 /* Arguments  */
  YYSYMBOL_ListExp = 54                    /* ListExp  */
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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   189

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  28
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  145

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   274


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
       2,     2,     2,    27,     2,     2,     2,     2,     2,     2,
      24,    25,     2,     2,    23,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    20,
       2,    26,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    21,     2,    22,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    58,    58,    68,    73,    78,    80,    87,   100,   109,
     114,   122,   128,   139,   144,   154,   159,   167,   176,   183,
     190,   202,   207,   215,   223,   233,   241,   258,   267,   272,
     277,   279,   286,   297,   302,   310,   316,   323,   331,   338,
     346,   352,   357,   366,   374,   381,   385,   392,   396,   403,
     407,   414,   418,   425,   429,   436,   440,   446,   452,   458,
     459,   463,   467,   468,   479,   480,   484,   489
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
  "\"end of file\"", "error", "\"invalid token\"", "CHARACTER", "NUM",
  "IDENT", "TYPE", "STRUCT", "VOID", "IF", "ELSE", "RETURN", "WHILE",
  "ADDSUB", "DIVSTAR", "AND", "OR", "EQ", "ORDER", "DOT", "';'", "'{'",
  "'}'", "','", "'('", "')'", "'='", "'!'", "$accept", "Prog",
  "DeclGlobales", "DeclGlobale", "StructDecl", "StructFields",
  "StructField", "Declarateurs", "DeclFoncts", "DeclFonct", "EnTeteFonct",
  "Parametres", "ListTypVar", "Corps", "ListDeclLocales", "DeclLocale",
  "SuiteInstr", "Instr", "Exp", "TB", "FB", "M", "E", "T", "F",
  "Arguments", "ListExp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-75)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -75,    12,   109,   -75,    37,    48,    54,   -75,   -75,   112,
     -75,    55,    64,    57,    -3,    69,    76,    92,   -75,   -75,
     -75,   115,   -75,   123,    71,    -2,    81,   115,    64,   124,
     118,   125,   126,   -75,   107,   110,   -75,   115,   129,   130,
      22,   -75,   -75,   111,    71,   129,   132,   -75,   -75,    36,
     -75,   133,   -75,   120,   114,   -75,    82,   129,   121,   -75,
     -75,    83,     1,   -75,   -75,   116,   119,     6,   122,    11,
     -75,   -75,   -75,    11,    11,   -75,    59,   -75,   137,   139,
     -75,   -75,    89,   -75,   -75,    90,    11,    11,   127,   -75,
      16,   134,   128,   135,   141,   136,   138,    11,   138,    62,
      -8,   138,   142,    11,   -75,   143,   -75,   -75,   140,   144,
     145,    27,    11,    11,   -75,    11,    11,    11,    11,    11,
      39,   -75,   -75,   -75,    52,   -75,   146,    11,    87,   147,
     134,   128,   135,   141,   136,   138,    87,   -75,   -75,   140,
     148,   -75,   -75,    87,   -75
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     0,     1,     0,     0,     0,     3,     5,     2,
      16,     0,    14,     0,     0,     0,     0,     0,    15,    29,
      17,     0,     6,     0,    14,     0,     0,     0,     0,     0,
      34,     0,     0,    21,     0,    22,    13,     0,     0,     0,
       0,    10,     7,     0,     0,     0,     0,    30,    28,     0,
      25,     0,    18,     0,     0,    14,     0,     0,     0,     9,
      19,     0,     0,    61,    60,    62,     0,     0,     0,     0,
      43,    34,    27,     0,     0,    33,     0,    26,     0,     0,
      20,    11,     0,     8,    31,     0,    65,     0,    62,    41,
       0,    45,    47,    49,    51,    53,    55,     0,    57,     0,
       0,    58,     0,     0,    23,     0,    12,    32,    67,     0,
      64,     0,    65,     0,    40,     0,     0,     0,     0,     0,
       0,    42,    59,    56,     0,    24,    63,     0,     0,     0,
      44,    46,    48,    50,    52,    54,     0,    35,    39,    66,
      36,    63,    38,     0,    37
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -75,   -75,   -75,   -75,   131,   -75,   149,   -11,   -75,   150,
     -75,   -14,   -75,   -75,   -75,   -75,    84,   -74,   -66,    47,
      49,    46,    35,    45,   -49,    53,   -75
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,     7,     8,    40,    41,    13,     9,    10,
      11,    34,    35,    20,    30,    48,    49,    75,   108,    91,
      92,    93,    94,    95,    96,   109,   110
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      76,    90,    24,    26,    38,    39,    55,   100,   113,    63,
      64,    88,     3,    43,    63,    64,    88,   122,    25,    69,
      98,   111,    25,    54,    69,   101,    89,    56,    38,    39,
      73,   120,   113,    74,    61,    73,   114,   124,    74,    63,
      64,    65,    12,   113,    58,    66,    82,    67,    68,    69,
      76,    85,   128,    14,   140,   113,    70,    71,    72,    15,
      73,   139,   142,    74,   136,    63,    64,    65,   113,   144,
     135,    66,   137,    67,    68,    69,    19,    22,   102,    76,
      23,    28,    70,    71,   121,   103,    73,    76,    21,    74,
      63,    64,    65,    27,    76,    37,    66,    29,    67,    68,
      69,    42,    81,    84,    23,    23,    23,    70,    71,   106,
     107,    73,    23,    23,    74,     4,     5,     6,    16,    17,
       6,    31,    32,    33,    45,    46,    78,    79,    36,    44,
      50,    51,    52,    53,    55,    57,    60,    62,    77,    80,
      86,    83,   104,    87,   105,   116,    97,   123,   125,   115,
     119,   112,   133,   117,   118,    99,   113,   102,   143,    18,
     130,    47,   132,   134,   131,   129,   138,     0,   127,   126,
       0,     0,   141,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    59
};

static const yytype_int16 yycheck[] =
{
      49,    67,     5,    14,     6,     7,     5,    73,    16,     3,
       4,     5,     0,    27,     3,     4,     5,    25,    21,    13,
      69,    87,    21,    37,    13,    74,    20,    38,     6,     7,
      24,    97,    16,    27,    45,    24,    20,   103,    27,     3,
       4,     5,     5,    16,    22,     9,    57,    11,    12,    13,
      99,    62,    25,     5,   128,    16,    20,    21,    22,     5,
      24,   127,   136,    27,    25,     3,     4,     5,    16,   143,
     119,     9,    20,    11,    12,    13,    21,    20,    19,   128,
      23,     5,    20,    21,    22,    26,    24,   136,    24,    27,
       3,     4,     5,    24,   143,    24,     9,     5,    11,    12,
      13,    20,    20,    20,    23,    23,    23,    20,    21,    20,
      20,    24,    23,    23,    27,     6,     7,     8,     6,     7,
       8,     6,     7,     8,     6,     7,     6,     7,     5,     5,
       5,     5,    25,    23,     5,     5,    25,     5,     5,    25,
      24,    20,     5,    24,     5,    17,    24,     5,     5,    15,
      14,    24,   117,    18,    13,    71,    16,    19,    10,     9,
     113,    30,   116,   118,   115,   112,    20,    -1,    23,    25,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    29,    30,     0,     6,     7,     8,    31,    32,    36,
      37,    38,     5,    35,     5,     5,     6,     7,    37,    21,
      41,    24,    20,    23,     5,    21,    35,    24,     5,     5,
      42,     6,     7,     8,    39,    40,     5,    24,     6,     7,
      33,    34,    20,    39,     5,     6,     7,    32,    43,    44,
       5,     5,    25,    23,    39,     5,    35,     5,    22,    34,
      25,    35,     5,     3,     4,     5,     9,    11,    12,    13,
      20,    21,    22,    24,    27,    45,    52,     5,     6,     7,
      25,    20,    35,    20,    20,    35,    24,    24,     5,    20,
      46,    47,    48,    49,    50,    51,    52,    24,    52,    44,
      46,    52,    19,    26,     5,     5,    20,    20,    46,    53,
      54,    46,    24,    16,    20,    15,    17,    18,    13,    14,
      46,    22,    25,     5,    46,     5,    25,    23,    25,    53,
      47,    48,    49,    50,    51,    52,    25,    20,    20,    46,
      45,    25,    45,    10,    45
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    28,    29,    30,    30,    31,    31,    31,    32,    33,
      33,    34,    34,    35,    35,    36,    36,    37,    38,    38,
      38,    39,    39,    40,    40,    40,    40,    41,    42,    42,
      43,    43,    43,    44,    44,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    46,    46,    47,    47,    48,    48,
      49,    49,    50,    50,    51,    51,    52,    52,    52,    52,
      52,    52,    52,    52,    53,    53,    54,    54
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     0,     1,     3,     4,     6,     2,
       1,     3,     4,     3,     1,     2,     1,     2,     5,     5,
       6,     1,     1,     4,     5,     2,     3,     4,     2,     0,
       1,     3,     4,     2,     0,     4,     5,     7,     5,     5,
       3,     2,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     2,     2,     3,
       1,     1,     1,     4,     1,     0,     3,     1
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
  case 2: /* Prog: DeclGlobales DeclFoncts  */
#line 58 "src/le_parser.y"
                            {
        Node *tmp = makeNode(Programme, NULL);
        if ((yyvsp[-1].node)) addChild(tmp, (yyvsp[-1].node));
        if ((yyvsp[0].node)) addChild(tmp, (yyvsp[0].node));
        (yyval.node) = tmp;
        root = tmp;
    }
#line 1240 "obj/le_parser.c"
    break;

  case 3: /* DeclGlobales: DeclGlobales DeclGlobale  */
#line 68 "src/le_parser.y"
                             {
        Node *tmp = (yyvsp[-1].node) ? (yyvsp[-1].node) : makeNode(DeclVars, NULL); 
        addChild(tmp, (yyvsp[0].node));
        (yyval.node) = tmp;
    }
#line 1250 "obj/le_parser.c"
    break;

  case 4: /* DeclGlobales: %empty  */
#line 73 "src/le_parser.y"
    { (yyval.node) = NULL; }
#line 1256 "obj/le_parser.c"
    break;

  case 5: /* DeclGlobale: StructDecl  */
#line 78 "src/le_parser.y"
               { (yyval.node) = (yyvsp[0].node); }
#line 1262 "obj/le_parser.c"
    break;

  case 6: /* DeclGlobale: TYPE Declarateurs ';'  */
#line 80 "src/le_parser.y"
                          {
        Node *decl = makeNode(DeclVars, NULL);
        addChild(decl, makeNode(id, (yyvsp[-2].id)));
        addChild(decl, (yyvsp[-1].node));
        (yyval.node) = decl;
    }
#line 1273 "obj/le_parser.c"
    break;

  case 7: /* DeclGlobale: STRUCT IDENT Declarateurs ';'  */
#line 87 "src/le_parser.y"
                                  {
        Node *decl = makeNode(DeclVars, NULL);
        Node *structType = makeNode(id, "struct");
        addChild(structType, makeNode(id, (yyvsp[-2].id)));
        addChild(decl, structType);
        addChild(decl, (yyvsp[-1].node));
        (yyval.node) = decl;
    }
#line 1286 "obj/le_parser.c"
    break;

  case 8: /* StructDecl: STRUCT IDENT '{' StructFields '}' ';'  */
#line 100 "src/le_parser.y"
                                          {
        Node *tmp = makeNode(StructDecl, NULL);
        addChild(tmp, makeNode(id, (yyvsp[-4].id)));
        addChild(tmp, (yyvsp[-2].node));
        (yyval.node) = tmp;
    }
#line 1297 "obj/le_parser.c"
    break;

  case 9: /* StructFields: StructFields StructField  */
#line 109 "src/le_parser.y"
                               {
          Node *tmp = (yyvsp[-1].node) ? (yyvsp[-1].node) : makeNode(StructFields, NULL);
          addChild(tmp, (yyvsp[0].node));
          (yyval.node) = tmp;
      }
#line 1307 "obj/le_parser.c"
    break;

  case 10: /* StructFields: StructField  */
#line 114 "src/le_parser.y"
                  {
          Node *tmp = makeNode(StructFields, NULL);
          addChild(tmp, (yyvsp[0].node));
          (yyval.node) = tmp;
      }
#line 1317 "obj/le_parser.c"
    break;

  case 11: /* StructField: TYPE Declarateurs ';'  */
#line 122 "src/le_parser.y"
                            {
          Node *tmp = makeNode(StructField, NULL);
          addChild(tmp, makeNode(id, (yyvsp[-2].id)));
          addChild(tmp, (yyvsp[-1].node));
          (yyval.node) = tmp;
      }
#line 1328 "obj/le_parser.c"
    break;

  case 12: /* StructField: STRUCT IDENT Declarateurs ';'  */
#line 128 "src/le_parser.y"
                                    {
          Node *tmp = makeNode(StructField, NULL);
          addChild(tmp, makeNode(id, (yyvsp[-2].id)));
          addChild(tmp, (yyvsp[-1].node));
          (yyval.node) = tmp;
      }
#line 1339 "obj/le_parser.c"
    break;

  case 13: /* Declarateurs: Declarateurs ',' IDENT  */
#line 139 "src/le_parser.y"
                           {
        Node *tmp = (yyvsp[-2].node) ? (yyvsp[-2].node) : makeNode(Declarateurs, NULL);
        addChild(tmp, makeNode(id, (yyvsp[0].id)));
        (yyval.node) = tmp;
    }
#line 1349 "obj/le_parser.c"
    break;

  case 14: /* Declarateurs: IDENT  */
#line 144 "src/le_parser.y"
          {
        Node *tmp = makeNode(Declarateurs, NULL);
        addChild(tmp, makeNode(id, (yyvsp[0].id)));
        (yyval.node) = tmp;
    }
#line 1359 "obj/le_parser.c"
    break;

  case 15: /* DeclFoncts: DeclFoncts DeclFonct  */
#line 154 "src/le_parser.y"
                         {
        Node *tmp = (yyvsp[-1].node) ? (yyvsp[-1].node) : makeNode(DeclFoncts, NULL);
        addChild(tmp, (yyvsp[0].node));
        (yyval.node) = tmp;
    }
#line 1369 "obj/le_parser.c"
    break;

  case 16: /* DeclFoncts: DeclFonct  */
#line 159 "src/le_parser.y"
              {
        Node *tmp = makeNode(DeclFoncts, NULL);
        addChild(tmp, (yyvsp[0].node));
        (yyval.node) = tmp;
    }
#line 1379 "obj/le_parser.c"
    break;

  case 17: /* DeclFonct: EnTeteFonct Corps  */
#line 167 "src/le_parser.y"
                      {
        Node *tmp = makeNode(DeclFonct, NULL);
        addChild(tmp, (yyvsp[-1].node));
        addChild(tmp, (yyvsp[0].node));
        (yyval.node) = tmp;
    }
#line 1390 "obj/le_parser.c"
    break;

  case 18: /* EnTeteFonct: TYPE IDENT '(' Parametres ')'  */
#line 176 "src/le_parser.y"
                                  {
        Node *tmp = makeNode(EnTeteFonct, NULL);
        addChild(tmp, makeNode(id, (yyvsp[-4].id)));
        addChild(tmp, makeNode(id, (yyvsp[-3].id)));
        if ((yyvsp[-1].node)) addChild(tmp, (yyvsp[-1].node));
        (yyval.node) = tmp;
    }
#line 1402 "obj/le_parser.c"
    break;

  case 19: /* EnTeteFonct: VOID IDENT '(' Parametres ')'  */
#line 183 "src/le_parser.y"
                                  {
        Node *tmp = makeNode(EnTeteFonct, NULL);
        addChild(tmp, makeNode(id, (yyvsp[-4].id)));
        addChild(tmp, makeNode(id, (yyvsp[-3].id)));
        if ((yyvsp[-1].node)) addChild(tmp, (yyvsp[-1].node));
        (yyval.node) = tmp;
    }
#line 1414 "obj/le_parser.c"
    break;

  case 20: /* EnTeteFonct: STRUCT IDENT IDENT '(' Parametres ')'  */
#line 190 "src/le_parser.y"
                                          {
        Node *tmp = makeNode(EnTeteFonct, NULL);
        Node *structType = makeNode(id, "struct");
        addChild(structType, makeNode(id, (yyvsp[-4].id)));
        addChild(tmp, structType);
        addChild(tmp, makeNode(id, (yyvsp[-3].id)));
        if ((yyvsp[-1].node)) addChild(tmp, (yyvsp[-1].node));
        (yyval.node) = tmp;
    }
#line 1428 "obj/le_parser.c"
    break;

  case 21: /* Parametres: VOID  */
#line 202 "src/le_parser.y"
         {
        Node *tmp = makeNode(Parametres, NULL);
        addChild(tmp, makeNode(id, (yyvsp[0].id)));
        (yyval.node) = tmp;
    }
#line 1438 "obj/le_parser.c"
    break;

  case 22: /* Parametres: ListTypVar  */
#line 207 "src/le_parser.y"
               {
        Node *tmp = makeNode(Parametres, NULL);
        addChild(tmp, (yyvsp[0].node));
        (yyval.node) = tmp;
    }
#line 1448 "obj/le_parser.c"
    break;

  case 23: /* ListTypVar: ListTypVar ',' TYPE IDENT  */
#line 215 "src/le_parser.y"
                              {
        Node *tmp = (yyvsp[-3].node) ? (yyvsp[-3].node) : makeNode(ListTypVar, NULL);
        Node *param = makeNode(Parametres, NULL);
        addChild(param, makeNode(id, (yyvsp[-1].id)));
        addChild(param, makeNode(id, (yyvsp[0].id)));
        addChild(tmp, param);
        (yyval.node) = tmp;
    }
#line 1461 "obj/le_parser.c"
    break;

  case 24: /* ListTypVar: ListTypVar ',' STRUCT IDENT IDENT  */
#line 223 "src/le_parser.y"
                                      {
        Node *tmp = (yyvsp[-4].node) ? (yyvsp[-4].node) : makeNode(ListTypVar, NULL);
        Node *param = makeNode(Parametres, NULL);
        Node *structType = makeNode(id, "struct");
        addChild(structType, makeNode(id, (yyvsp[-1].id)));
        addChild(param, structType);
        addChild(param, makeNode(id, (yyvsp[0].id)));
        addChild(tmp, param);
        (yyval.node) = tmp;
    }
#line 1476 "obj/le_parser.c"
    break;

  case 25: /* ListTypVar: TYPE IDENT  */
#line 233 "src/le_parser.y"
               {
        Node *tmp = makeNode(ListTypVar, NULL);
        Node *param = makeNode(Parametres, NULL);
        addChild(param, makeNode(id, (yyvsp[-1].id)));
        addChild(param, makeNode(id, (yyvsp[0].id)));
        addChild(tmp, param);
        (yyval.node) = tmp;
    }
#line 1489 "obj/le_parser.c"
    break;

  case 26: /* ListTypVar: STRUCT IDENT IDENT  */
#line 241 "src/le_parser.y"
                       {
        Node *tmp = makeNode(ListTypVar, NULL);
        Node *param = makeNode(Parametres, NULL);
        Node *structType = makeNode(id, "struct");
        addChild(structType, makeNode(id, (yyvsp[-1].id)));
        addChild(param, structType);
        addChild(param, makeNode(id, (yyvsp[0].id)));
        addChild(tmp, param);
        (yyval.node) = tmp;
    }
#line 1504 "obj/le_parser.c"
    break;

  case 27: /* Corps: '{' ListDeclLocales SuiteInstr '}'  */
#line 258 "src/le_parser.y"
                                       {
        Node *tmp = makeNode(Corps, NULL);
        if ((yyvsp[-2].node)) addChild(tmp, (yyvsp[-2].node));
        if ((yyvsp[-1].node)) addChild(tmp, (yyvsp[-1].node));
        (yyval.node) = tmp;
    }
#line 1515 "obj/le_parser.c"
    break;

  case 28: /* ListDeclLocales: ListDeclLocales DeclLocale  */
#line 267 "src/le_parser.y"
                               {
        Node *tmp = (yyvsp[-1].node) ? (yyvsp[-1].node) : makeNode(DeclVars, NULL);
        addChild(tmp, (yyvsp[0].node));
        (yyval.node) = tmp;
    }
#line 1525 "obj/le_parser.c"
    break;

  case 29: /* ListDeclLocales: %empty  */
#line 272 "src/le_parser.y"
    { (yyval.node) = NULL; }
#line 1531 "obj/le_parser.c"
    break;

  case 30: /* DeclLocale: StructDecl  */
#line 277 "src/le_parser.y"
                 { (yyval.node) = (yyvsp[0].node); }
#line 1537 "obj/le_parser.c"
    break;

  case 31: /* DeclLocale: TYPE Declarateurs ';'  */
#line 279 "src/le_parser.y"
                            {
          Node *decl = makeNode(DeclVars, NULL);
          addChild(decl, makeNode(id, (yyvsp[-2].id)));
          addChild(decl, (yyvsp[-1].node));
          (yyval.node) = decl;
      }
#line 1548 "obj/le_parser.c"
    break;

  case 32: /* DeclLocale: STRUCT IDENT Declarateurs ';'  */
#line 286 "src/le_parser.y"
                                    {
          Node *decl = makeNode(DeclVars, NULL);
          Node *structType = makeNode(id, "struct");
          addChild(structType, makeNode(id, (yyvsp[-2].id)));
          addChild(decl, structType);
          addChild(decl, (yyvsp[-1].node));
          (yyval.node) = decl;
      }
#line 1561 "obj/le_parser.c"
    break;

  case 33: /* SuiteInstr: SuiteInstr Instr  */
#line 297 "src/le_parser.y"
                     {
        Node *tmp = (yyvsp[-1].node) ? (yyvsp[-1].node) : makeNode(SuiteInstr, NULL);
        addChild(tmp, (yyvsp[0].node));
        (yyval.node) = tmp;
    }
#line 1571 "obj/le_parser.c"
    break;

  case 34: /* SuiteInstr: %empty  */
#line 302 "src/le_parser.y"
    { (yyval.node) = NULL; }
#line 1577 "obj/le_parser.c"
    break;

  case 35: /* Instr: F '=' Exp ';'  */
#line 310 "src/le_parser.y"
                    {
        Node *tmp = makeNode(Instr, "assign");
        addChild(tmp, (yyvsp[-3].node));
        addChild(tmp, (yyvsp[-1].node));
        (yyval.node) = tmp;
    }
#line 1588 "obj/le_parser.c"
    break;

  case 36: /* Instr: IF '(' Exp ')' Instr  */
#line 316 "src/le_parser.y"
                         {
        Node *tmp = makeNode(Instr, NULL);
        addChild(tmp, makeNode(id, "if"));
        addChild(tmp, (yyvsp[-2].node));
        addChild(tmp, (yyvsp[0].node));
        (yyval.node) = tmp;
    }
#line 1600 "obj/le_parser.c"
    break;

  case 37: /* Instr: IF '(' Exp ')' Instr ELSE Instr  */
#line 323 "src/le_parser.y"
                                    {
        Node *tmp = makeNode(Instr, NULL);
        addChild(tmp, makeNode(id, "ifelse"));
        addChild(tmp, (yyvsp[-4].node));
        addChild(tmp, (yyvsp[-2].node));
        addChild(tmp, (yyvsp[0].node));
        (yyval.node) = tmp;
    }
#line 1613 "obj/le_parser.c"
    break;

  case 38: /* Instr: WHILE '(' Exp ')' Instr  */
#line 331 "src/le_parser.y"
                            {
        Node *tmp = makeNode(Instr, NULL);
        addChild(tmp, makeNode(id, "while"));
        addChild(tmp, (yyvsp[-2].node));
        addChild(tmp, (yyvsp[0].node));
        (yyval.node) = tmp;
    }
#line 1625 "obj/le_parser.c"
    break;

  case 39: /* Instr: IDENT '(' Arguments ')' ';'  */
#line 338 "src/le_parser.y"
                                {
        Node *tmp = makeNode(Instr, NULL);
        Node *callNode = makeNode(id, "call");
        addChild(callNode, makeNode(id, (yyvsp[-4].id)));
        if ((yyvsp[-2].node)) addChild(callNode, (yyvsp[-2].node));
        addChild(tmp, callNode);
        (yyval.node) = tmp;
    }
#line 1638 "obj/le_parser.c"
    break;

  case 40: /* Instr: RETURN Exp ';'  */
#line 346 "src/le_parser.y"
                   {
        Node *tmp = makeNode(Instr, NULL);
        addChild(tmp, makeNode(id, "return"));
        addChild(tmp, (yyvsp[-1].node));
        (yyval.node) = tmp;
    }
#line 1649 "obj/le_parser.c"
    break;

  case 41: /* Instr: RETURN ';'  */
#line 352 "src/le_parser.y"
               {
        Node *tmp = makeNode(Instr, NULL);
        addChild(tmp, makeNode(id, "return"));
        (yyval.node) = tmp;
    }
#line 1659 "obj/le_parser.c"
    break;

  case 42: /* Instr: '{' SuiteInstr '}'  */
#line 357 "src/le_parser.y"
                       {
        if ((yyvsp[-1].node)) {
            Node *tmp = makeNode(Instr, NULL);
            addChild(tmp, (yyvsp[-1].node));
            (yyval.node) = tmp;
        } else {
            (yyval.node) = makeNode(Instr, "empty_block");
        }
    }
#line 1673 "obj/le_parser.c"
    break;

  case 43: /* Instr: ';'  */
#line 366 "src/le_parser.y"
        {
        (yyval.node) = makeNode(Instr, "empty_instr");
    }
#line 1681 "obj/le_parser.c"
    break;

  case 44: /* Exp: Exp OR TB  */
#line 374 "src/le_parser.y"
              {
        Node *tmp = makeNode(Exp, NULL);
        addChild(tmp, (yyvsp[-2].node));
        addChild(tmp, makeNode(id, "||"));
        addChild(tmp, (yyvsp[0].node));
        (yyval.node) = tmp;
    }
#line 1693 "obj/le_parser.c"
    break;

  case 45: /* Exp: TB  */
#line 381 "src/le_parser.y"
       { (yyval.node) = (yyvsp[0].node); }
#line 1699 "obj/le_parser.c"
    break;

  case 46: /* TB: TB AND FB  */
#line 385 "src/le_parser.y"
              {
        Node *tmp = makeNode(TB, NULL);
        addChild(tmp, (yyvsp[-2].node));
        addChild(tmp, makeNode(id, "&&"));
        addChild(tmp, (yyvsp[0].node));
        (yyval.node) = tmp;
    }
#line 1711 "obj/le_parser.c"
    break;

  case 47: /* TB: FB  */
#line 392 "src/le_parser.y"
       { (yyval.node) = (yyvsp[0].node); }
#line 1717 "obj/le_parser.c"
    break;

  case 48: /* FB: FB EQ M  */
#line 396 "src/le_parser.y"
            {
        Node *tmp = makeNode(FB, NULL);
        addChild(tmp, (yyvsp[-2].node));
        addChild(tmp, makeNode(id, (yyvsp[-1].id)));
        addChild(tmp, (yyvsp[0].node));
        (yyval.node) = tmp;
    }
#line 1729 "obj/le_parser.c"
    break;

  case 49: /* FB: M  */
#line 403 "src/le_parser.y"
      { (yyval.node) = (yyvsp[0].node); }
#line 1735 "obj/le_parser.c"
    break;

  case 50: /* M: M ORDER E  */
#line 407 "src/le_parser.y"
              {
        Node *tmp = makeNode(M, NULL);
        addChild(tmp, (yyvsp[-2].node));
        addChild(tmp, makeNode(id, (yyvsp[-1].id)));
        addChild(tmp, (yyvsp[0].node));
        (yyval.node) = tmp;
    }
#line 1747 "obj/le_parser.c"
    break;

  case 51: /* M: E  */
#line 414 "src/le_parser.y"
      { (yyval.node) = (yyvsp[0].node); }
#line 1753 "obj/le_parser.c"
    break;

  case 52: /* E: E ADDSUB T  */
#line 418 "src/le_parser.y"
               {
        Node *tmp = makeNode(E, NULL);
        addChild(tmp, (yyvsp[-2].node));
        addChild(tmp, makeNode(id, (yyvsp[-1].id)));
        addChild(tmp, (yyvsp[0].node));
        (yyval.node) = tmp;
    }
#line 1765 "obj/le_parser.c"
    break;

  case 53: /* E: T  */
#line 425 "src/le_parser.y"
      { (yyval.node) = (yyvsp[0].node); }
#line 1771 "obj/le_parser.c"
    break;

  case 54: /* T: T DIVSTAR F  */
#line 429 "src/le_parser.y"
                {
        Node *tmp = makeNode(T, NULL);
        addChild(tmp, (yyvsp[-2].node));
        addChild(tmp, makeNode(id, (yyvsp[-1].id)));
        addChild(tmp, (yyvsp[0].node));
        (yyval.node) = tmp;
    }
#line 1783 "obj/le_parser.c"
    break;

  case 55: /* T: F  */
#line 436 "src/le_parser.y"
      { (yyval.node) = (yyvsp[0].node); }
#line 1789 "obj/le_parser.c"
    break;

  case 56: /* F: F DOT IDENT  */
#line 440 "src/le_parser.y"
                {
        Node *tmp = makeNode(F, "field_access");
        addChild(tmp, (yyvsp[-2].node));
        addChild(tmp, makeNode(id, (yyvsp[0].id)));
        (yyval.node) = tmp;
    }
#line 1800 "obj/le_parser.c"
    break;

  case 57: /* F: ADDSUB F  */
#line 446 "src/le_parser.y"
             {
        Node *tmp = makeNode(F, NULL);
        addChild(tmp, makeNode(id, (yyvsp[-1].id)));
        addChild(tmp, (yyvsp[0].node));
        (yyval.node) = tmp;
    }
#line 1811 "obj/le_parser.c"
    break;

  case 58: /* F: '!' F  */
#line 452 "src/le_parser.y"
          {
        Node *tmp = makeNode(F, NULL);
        addChild(tmp, makeNode(id, "!"));
        addChild(tmp, (yyvsp[0].node));
        (yyval.node) = tmp;
    }
#line 1822 "obj/le_parser.c"
    break;

  case 59: /* F: '(' Exp ')'  */
#line 458 "src/le_parser.y"
                { (yyval.node) = (yyvsp[-1].node); }
#line 1828 "obj/le_parser.c"
    break;

  case 60: /* F: NUM  */
#line 459 "src/le_parser.y"
        {
        char buf[32]; snprintf(buf, sizeof(buf), "%d", (yyvsp[0].num));
        (yyval.node) = makeNode(num, buf);
    }
#line 1837 "obj/le_parser.c"
    break;

  case 61: /* F: CHARACTER  */
#line 463 "src/le_parser.y"
              {
        char buf[2]; buf[0] = (yyvsp[0].character); buf[1] = '\0';
        (yyval.node) = makeNode(id, buf);
    }
#line 1846 "obj/le_parser.c"
    break;

  case 62: /* F: IDENT  */
#line 467 "src/le_parser.y"
          { (yyval.node) = makeNode(id, (yyvsp[0].id)); }
#line 1852 "obj/le_parser.c"
    break;

  case 63: /* F: IDENT '(' Arguments ')'  */
#line 468 "src/le_parser.y"
                            {
        Node *tmp = makeNode(F, NULL);
        Node *callNode = makeNode(id, "call");
        addChild(callNode, makeNode(id, (yyvsp[-3].id)));
        if ((yyvsp[-1].node)) addChild(callNode, (yyvsp[-1].node));
        addChild(tmp, callNode);
        (yyval.node) = tmp;
    }
#line 1865 "obj/le_parser.c"
    break;

  case 64: /* Arguments: ListExp  */
#line 479 "src/le_parser.y"
            { (yyval.node) = (yyvsp[0].node); }
#line 1871 "obj/le_parser.c"
    break;

  case 65: /* Arguments: %empty  */
#line 480 "src/le_parser.y"
    { (yyval.node) = NULL; }
#line 1877 "obj/le_parser.c"
    break;

  case 66: /* ListExp: ListExp ',' Exp  */
#line 484 "src/le_parser.y"
                    {
        Node *tmp = (yyvsp[-2].node) ? (yyvsp[-2].node) : makeNode(ListExp, NULL);
        addChild(tmp, (yyvsp[0].node));
        (yyval.node) = tmp;
    }
#line 1887 "obj/le_parser.c"
    break;

  case 67: /* ListExp: Exp  */
#line 489 "src/le_parser.y"
        {
        Node *tmp = makeNode(ListExp, NULL);
        addChild(tmp, (yyvsp[0].node));
        (yyval.node) = tmp;
    }
#line 1897 "obj/le_parser.c"
    break;


#line 1901 "obj/le_parser.c"

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

#line 496 "src/le_parser.y"


int yyparse();

int main(int argc, char *argv[]) {
    int opt, show_tree = 0;

    struct option long_options[] = {
        {"tree", no_argument, NULL, 't'},
        {"help", no_argument, NULL, 'h'},
        {0, 0, 0, 0}
    };

    while ((opt = getopt_long(argc, argv, "th", long_options, NULL)) != -1) {
        switch (opt) {
            case 't': show_tree = 1; break;
            case 'h': print_help(); return 0;
            default:
                fprintf(stderr, "Option invalide : -%c\n", opt);
                print_help(); return 2;
        }
    }

    printf("Début de l'analyse syntaxique...\n");
    if (yyparse() == 0) {
        printf("Analyse syntaxique réussie.\n");
        if (show_tree && root) printTree(root);
        return 0;
    } else {
        printf("Erreur d'analyse syntaxique.\n");
        return 1;
    }
}
