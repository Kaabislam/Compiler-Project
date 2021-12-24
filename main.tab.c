/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "main.y" /* yacc.c:339  */

	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
	#include<string.h>
	int sym[60];

#line 74 "main.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "main.tab.h".  */
#ifndef YY_YY_MAIN_TAB_H_INCLUDED
# define YY_YY_MAIN_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUM = 258,
    VAR = 259,
    IF = 260,
    ELSE = 261,
    ARRAY = 262,
    MAIN = 263,
    INT = 264,
    FLOAT = 265,
    CHAR = 266,
    BRACKETSTART = 267,
    BRACKETEND = 268,
    FOR = 269,
    WHILE = 270,
    ODDEVEN = 271,
    PRINTFUNCTION = 272,
    SIN = 273,
    COS = 274,
    TAN = 275,
    LOG = 276,
    FACTORIAL = 277,
    CASE = 278,
    DEFAULT = 279,
    SWITCH = 280,
    CLASS = 281,
    TRY = 282,
    CATCH = 283,
    FUNCTION = 284,
    MOD = 285,
    DEFINE = 286,
    STRUCT = 287,
    OR = 288,
    AND = 289,
    XOR = 290,
    POW = 291,
    ISGREATER = 292,
    PRIVATE = 293,
    ISLESS = 294,
    ISEQUAL = 295,
    PUBLIC = 296,
    STRING = 297,
    STRCMP = 298,
    HEADER = 299,
    BOOL = 300,
    ISDIVISIBLE = 301,
    IFX = 302
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MAIN_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 173 "main.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   435

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  268

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    64,    49,     2,
      61,    63,    55,    53,    62,    54,     2,    56,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    57,    58,
      51,    59,    52,    60,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    50,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    48,     2,     2,     2,     2,     2,
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
      45,    46,    47
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    23,    23,    26,    28,    31,    32,    34,    39,    46,
      52,    60,    71,    82,    95,   102,   113,   119,   126,   133,
     143,   153,   164,   172,   184,   194,   208,   220,   225,   232,
     239,   249,   256,   263,   269,   277,   286,   295,   304,   313,
     320,   335,   341,   342,   343,   344,   349,   350,   353,   354,
     357,   358,   361,   363,   369,   371,   373,   375,   377,   379,
     381,   383,   385,   395,   405,   407,   409
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "VAR", "IF", "ELSE", "ARRAY",
  "MAIN", "INT", "FLOAT", "CHAR", "BRACKETSTART", "BRACKETEND", "FOR",
  "WHILE", "ODDEVEN", "PRINTFUNCTION", "SIN", "COS", "TAN", "LOG",
  "FACTORIAL", "CASE", "DEFAULT", "SWITCH", "CLASS", "TRY", "CATCH",
  "FUNCTION", "MOD", "DEFINE", "STRUCT", "OR", "AND", "XOR", "POW",
  "ISGREATER", "PRIVATE", "ISLESS", "ISEQUAL", "PUBLIC", "STRING",
  "STRCMP", "HEADER", "BOOL", "ISDIVISIBLE", "IFX", "'|'", "'&'", "'^'",
  "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "':'", "';'", "'='", "'?'",
  "'('", "','", "')'", "'%'", "$accept", "program", "line", "statement",
  "declaration", "TYPE", "ID1", "SWITCHCASE", "casegrammer", "casenumber",
  "defaultgrammer", "expression", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   124,    38,
      94,    60,    62,    43,    45,    42,    47,    58,    59,    61,
      63,    40,    44,    41,    37
};
# endif

#define YYPACT_NINF -52

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-52)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,   -51,    29,   -52,   -52,   209,   -52,   -47,   -31,   -23,
     -52,   -52,   -52,   -29,   -28,   -15,   -12,   -10,    -8,    48,
      42,    52,    -3,    56,    10,    15,    27,    28,    30,    35,
      45,   -52,    47,    21,   -52,    -2,   -52,    32,    88,    49,
     105,   106,    16,    -2,    59,   111,   113,   117,    -2,   121,
     123,    -9,   209,    66,   125,   118,   126,   128,   130,   141,
     142,   143,   149,   150,   -20,   -52,    87,   -52,   -52,    70,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,   -52,
      -2,    95,    96,    97,   112,   129,    12,   107,   122,   109,
     223,   124,   127,   209,     6,   145,    11,   144,   209,   153,
     159,   160,   165,   166,   167,   168,   170,   171,   -52,   -52,
     182,   205,   205,   205,   363,   363,   -30,   -30,   110,   110,
     359,   131,   148,   173,   -52,   176,   135,   234,   237,   189,
     192,   193,   241,   239,   250,   252,   253,   238,   256,    31,
     277,   268,   279,   280,   281,   282,   294,   295,   296,   297,
      -2,   -52,    -2,    -2,    -2,   209,   249,   254,   251,   -52,
     -52,   -52,   -52,   -52,   209,   209,   209,   258,   209,    -2,
     290,   255,   -52,   270,   271,   272,   273,   285,   287,   288,
     289,   146,    14,    14,    14,   304,   316,   328,   341,   324,
       4,   352,   353,   354,    -2,   355,   240,   209,   311,   312,
     326,   327,   329,   330,   343,   344,   345,   -52,   257,   274,
     291,   348,   321,   323,   209,   -52,   396,   347,   -52,   -52,
     -52,   -52,   -52,   308,   -52,   393,   407,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   409,
     419,   412,   413,   368,    -2,   416,   209,   -52,   209,   366,
     209,   -52,    -2,   325,   209,   417,   418,   374,   420,   342,
     -52,   421,   -52,   -52,   -52,   -52,   -52,   -52
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     3,     1,     2,    54,    55,     0,     0,
      42,    43,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    45,     0,     0,     5,     0,     4,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,     0,     6,    47,    41,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       0,     0,     0,    55,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     9,    66,
       0,    59,    60,    61,    64,    65,    56,    57,    58,    62,
      63,     0,     0,     0,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    46,     0,     0,     0,     0,     0,     0,     0,    26,
      27,    25,    50,    36,     0,     0,     0,     0,     0,     0,
       0,     0,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,     0,     0,
       0,    23,     0,     0,     0,    32,     0,     0,    51,    49,
      37,    34,    35,     0,    28,     0,     0,    14,    16,    17,
      18,    22,    19,    20,    21,    15,    12,    11,    13,     0,
       0,     0,     0,     0,     0,     0,     0,    29,     0,     0,
       0,    39,     0,     0,     0,     0,     0,     0,     0,     0,
      53,     0,    30,    24,    31,    38,    52,    40
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -52,   -52,   -52,   -43,   -52,   349,   -52,   -52,   -52,   -52,
     -52,   -35
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     5,    36,    37,    38,    69,   189,   190,   218,
     219,    39
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      66,     6,    65,    93,    40,    41,     3,    84,    85,    95,
     134,   107,    42,    90,     6,    65,     1,     6,    65,     6,
      83,    10,    11,    12,   108,    77,    78,   216,   217,     4,
      43,    44,    45,    46,    80,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   135,   120,    47,   136,    94,    48,
     133,    49,    51,    50,    52,   141,    53,    31,    54,    35,
      55,   139,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    56,    35,    64,   138,    35,    57,    35,    80,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    58,    59,
      67,    60,    68,   169,   170,    80,    61,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    62,    79,    63,    81,
      82,    86,   185,    80,    87,   181,    88,   182,   183,   184,
      89,   191,   192,   193,    91,   195,    92,    96,    97,    99,
      98,   100,   110,   101,   196,    70,    71,    72,    73,    74,
      75,    76,    77,    78,   102,   103,   104,   208,   209,   210,
     109,    80,   105,   106,   226,   121,   122,   123,   137,   223,
      70,    71,    72,    73,    74,    75,    76,    77,    78,   127,
     124,   242,   129,   128,    80,   150,    80,    70,    71,    72,
      73,    74,    75,    76,    77,    78,   151,   131,   155,   156,
     132,   152,   125,    80,    70,    71,    72,    73,    74,    75,
      76,    77,    78,   255,   207,   256,   140,   258,   153,   253,
      80,   261,     6,     7,     8,   142,     9,   259,    10,    11,
      12,   143,   144,    13,    14,    15,    16,   145,   146,   147,
     148,    17,   149,   154,    18,    19,    20,   157,    21,    22,
     158,    23,    24,    25,    26,    27,    28,   159,    29,    30,
     160,   161,   163,   162,    31,    32,    73,    74,    75,    76,
      77,    78,   164,    33,   165,   166,   167,    34,   168,    80,
      35,    70,    71,    72,    73,    74,    75,    76,    77,    78,
     171,   172,   173,   174,   175,   176,   130,    80,    70,    71,
      72,    73,    74,    75,    76,    77,    78,   177,   178,   179,
     180,   186,   197,   225,    80,    70,    71,    72,    73,    74,
      75,    76,    77,    78,   188,   236,   187,   211,   198,   194,
     212,    80,    70,    71,    72,    73,    74,    75,    76,    77,
      78,   213,   237,   199,   200,   201,   202,   215,    80,    70,
      71,    72,    73,    74,    75,    76,    77,    78,   203,   238,
     204,   205,   206,   214,   239,    80,    70,    71,    72,    73,
      74,    75,    76,    77,    78,   220,   221,   222,   224,   227,
     228,   245,    80,    70,    71,    72,    73,    74,    75,    76,
      77,    78,   240,   260,   229,   230,   241,   231,   232,    80,
      70,    71,    72,    73,    74,    75,    76,    77,    78,   243,
     266,   233,   234,   235,   244,   246,    80,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    75,    76,    77,    78,
     247,   248,   249,    80,   250,   252,   251,    80,   254,   257,
     262,   263,   264,   265,   267,   126
};

static const yytype_uint8 yycheck[] =
{
      35,     3,     4,    12,    51,    52,    57,    42,    43,    52,
       4,    31,    59,    48,     3,     4,     8,     3,     4,     3,
       4,     9,    10,    11,    44,    55,    56,    23,    24,     0,
      61,    54,    61,    61,    64,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    38,    80,    61,    41,    57,    61,
      93,    61,     4,    61,    12,    98,     4,    45,    61,    61,
       4,    96,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    61,    61,    52,    63,    61,    61,    61,    64,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    61,    61,
      58,    61,     4,    62,    63,    64,    61,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    61,    58,    61,     4,
       4,    52,   155,    64,     3,   150,     3,   152,   153,   154,
       3,   164,   165,   166,     3,   168,     3,    61,     3,     3,
      12,     3,    62,     3,   169,    48,    49,    50,    51,    52,
      53,    54,    55,    56,     3,     3,     3,   182,   183,   184,
      63,    64,     3,     3,   197,    60,    60,    60,    13,   194,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    62,
      58,   214,    63,    51,    64,     4,    64,    48,    49,    50,
      51,    52,    53,    54,    55,    56,     4,    63,    12,    54,
      63,    60,    63,    64,    48,    49,    50,    51,    52,    53,
      54,    55,    56,   246,    58,   248,    62,   250,    60,   244,
      64,   254,     3,     4,     5,    62,     7,   252,     9,    10,
      11,    62,    62,    14,    15,    16,    17,    62,    62,    62,
      62,    22,    62,    60,    25,    26,    27,     3,    29,    30,
       3,    32,    33,    34,    35,    36,    37,    58,    39,    40,
      58,    58,    13,    12,    45,    46,    51,    52,    53,    54,
      55,    56,    12,    54,    12,    12,    28,    58,    12,    64,
      61,    48,    49,    50,    51,    52,    53,    54,    55,    56,
       3,    13,     3,     3,     3,     3,    63,    64,    48,    49,
      50,    51,    52,    53,    54,    55,    56,     3,     3,     3,
       3,    52,    12,    63,    64,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    63,    58,    62,    13,    63,    61,
       4,    64,    48,    49,    50,    51,    52,    53,    54,    55,
      56,     3,    58,    63,    63,    63,    63,    13,    64,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    63,    58,
      63,    63,    63,    12,     6,    64,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    13,    13,    13,    13,    58,
      58,    63,    64,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    61,    58,    58,    58,    63,    58,    58,    64,
      48,    49,    50,    51,    52,    53,    54,    55,    56,     3,
      58,    58,    58,    58,    57,    12,    64,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    53,    54,    55,    56,
      13,    12,     3,    64,    12,    57,    13,    64,    12,    63,
      13,    13,    58,    13,    13,    86
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    66,    57,     0,    67,     3,     4,     5,     7,
       9,    10,    11,    14,    15,    16,    17,    22,    25,    26,
      27,    29,    30,    32,    33,    34,    35,    36,    37,    39,
      40,    45,    46,    54,    58,    61,    68,    69,    70,    76,
      51,    52,    59,    61,    54,    61,    61,    61,    61,    61,
      61,     4,    12,     4,    61,     4,    61,    61,    61,    61,
      61,    61,    61,    61,    52,     4,    76,    58,     4,    71,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    58,
      64,     4,     4,     4,    76,    76,    52,     3,     3,     3,
      76,     3,     3,    12,    57,    68,    61,     3,    12,     3,
       3,     3,     3,     3,     3,     3,     3,    31,    44,    63,
      62,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    60,    60,    60,    58,    63,    70,    62,    51,    63,
      63,    63,    63,    68,     4,    38,    41,    13,    63,    76,
      62,    68,    62,    62,    62,    62,    62,    62,    62,    62,
       4,     4,    60,    60,    60,    12,    54,     3,     3,    58,
      58,    58,    12,    13,    12,    12,    12,    28,    12,    62,
      63,     3,    13,     3,     3,     3,     3,     3,     3,     3,
       3,    76,    76,    76,    76,    68,    52,    62,    63,    72,
      73,    68,    68,    68,    61,    68,    76,    12,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    58,    76,    76,
      76,    13,     4,     3,    12,    13,    23,    24,    74,    75,
      13,    13,    13,    76,    13,    63,    68,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,     6,
      61,    63,    68,     3,    57,    63,    12,    13,    12,     3,
      12,    13,    57,    76,    12,    68,    68,    63,    68,    76,
      58,    68,    13,    13,    58,    13,    58,    13
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    67,    67,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    69,    70,    70,    70,    70,    71,    71,    72,    72,
      73,    73,    74,    75,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     2,     1,     2,     2,     4,     3,
       6,     8,     8,     8,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,    11,     5,     5,     5,     7,     8,
      10,    11,     7,     5,     7,     7,     5,     7,    11,     9,
      11,     2,     1,     1,     1,     1,     3,     1,     1,     2,
       0,     2,     5,     4,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 23 "main.y" /* yacc.c:1646  */
    {printf("Main function END\n");}
#line 1442 "main.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 32 "main.y" /* yacc.c:1646  */
    { printf("Declaration\n"); }
#line 1448 "main.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 34 "main.y" /* yacc.c:1646  */
    {   printf("\nvalue of expression: %d\n", (yyvsp[-1])); (yyval)=(yyvsp[-1]);
							printf("\n---------------------------------------------------\n");
		
		}
#line 1457 "main.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 39 "main.y" /* yacc.c:1646  */
    { 				
							printf("\nValue of the variable: %d\n",(yyvsp[-1]));
							sym[(yyvsp[-3])]=(yyvsp[-1]);
							(yyval)=(yyvsp[-1]);
							printf("\n---------------------------------------------------\n");
						
						}
#line 1469 "main.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 46 "main.y" /* yacc.c:1646  */
    {
					printf("\nheader file declared\n");
					printf("\n---------------------------------------------------\n");

					
					}
#line 1480 "main.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 52 "main.y" /* yacc.c:1646  */
    {
							sym[(yyvsp[-2])] = (yyvsp[-1]);
							(yyval)=(yyvsp[-1]);
							printf("\nDefine declaration\n");
							printf("Preprocess for %c is %d\n",(yyvsp[-2])+'a',(yyvsp[-1]));  
							printf("\n---------------------------------------------------\n");

							}
#line 1493 "main.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 60 "main.y" /* yacc.c:1646  */
    {
							printf("\n Ternary operators executed\n");
							if((yyvsp[-7]) > (yyvsp[-5])){
								printf("\nFirst expression is executed : %d\n",(yyvsp[-3]));
							}
							else{
								printf("\nSecond expression is executed : %d\n",(yyvsp[-2]));
							}
							printf("\n---------------------------------------------------\n");

						}
#line 1509 "main.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 71 "main.y" /* yacc.c:1646  */
    {
							printf("\n Ternary operators executed\n");
							if((yyvsp[-7]) < (yyvsp[-5])){
								printf("\nFirst one is executed : %d\n",(yyvsp[-2]));
							}
							else{
								printf("\nSecond one is executed : %d\n",(yyvsp[-1]));
							}
							printf("\n---------------------------------------------------\n");

						}
#line 1525 "main.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 82 "main.y" /* yacc.c:1646  */
    {
							printf("\n Ternary operators executed\n");
							if((yyvsp[-7]) == (yyvsp[-5])){
								printf("\nFirst one is executed : %d\n",(yyvsp[-2]));
							}
							else{
								printf("\nSecond one is executed : %d\n",(yyvsp[-1]));
							}
							printf("\n---------------------------------------------------\n");

						}
#line 1541 "main.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 95 "main.y" /* yacc.c:1646  */
    {
								printf("\nMOD DEFINED!\n");
								printf("Remainder of %d divided by %d is : %d",(yyvsp[-4]),(yyvsp[-2]),(yyvsp[-4])%(yyvsp[-2]));
								printf("\n---------------------------------------------------\n");
								
		
							   }
#line 1553 "main.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 102 "main.y" /* yacc.c:1646  */
    {
									printf("\nISDIVISIBLE Function defined!\n");
									if((yyvsp[-4])%(yyvsp[-2]) == 0){
										printf("\n%d is divisible by %d\n",(yyvsp[-4]),(yyvsp[-2]));
									}
									else{
										printf("\n%d is not divisible by %d\n",(yyvsp[-4]),(yyvsp[-2]));
									}
									printf("\n---------------------------------------------------\n");

								}
#line 1569 "main.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 113 "main.y" /* yacc.c:1646  */
    {
								printf("\nBITWISE OR OPERATION EXECUTED!\n");
								printf("BITWISE OR OF %d and %d is : %d",(yyvsp[-4]),(yyvsp[-2]),(yyvsp[-4])|(yyvsp[-2]));
								printf("\n---------------------------------------------------\n");
								
							   }
#line 1580 "main.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 119 "main.y" /* yacc.c:1646  */
    {
								printf("\nBITWISE AND OPERATION EXECUTED!\n");
								printf("BITWISE AND OF %d and %d is : %d",(yyvsp[-4]),(yyvsp[-2]),(yyvsp[-4])&(yyvsp[-2]));
								printf("\n---------------------------------------------------\n");
								
							   }
#line 1591 "main.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 126 "main.y" /* yacc.c:1646  */
    {
								printf("\nBITWISE XOR OPERATION EXECUTED!\n");
								printf("BITWISE XOR OF %d and %d is : %d",(yyvsp[-4]),(yyvsp[-2]),(yyvsp[-4])^(yyvsp[-2]));
								printf("\n---------------------------------------------------\n");
								
							   }
#line 1602 "main.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 133 "main.y" /* yacc.c:1646  */
    {
								printf("\nISGREAER EXECUTED!\n");
								if((yyvsp[-4]) > (yyvsp[-2])){
									printf("\nFirst argument is bettter than second argument!!\n");
								}
								else{
									printf("\First argument is not bettter than second argument !!\n");
								}
								printf("\n---------------------------------------------------\n");
							   }
#line 1617 "main.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 143 "main.y" /* yacc.c:1646  */
    {
								printf("\nISLESS Function EXECUTED!\n");
								if((yyvsp[-4]) < (yyvsp[-2])){
									printf("\nFirst argument is less than second argument!!\n");
								}
								else{
									printf("\First argument is not less than second argument !!\n");
								}
								printf("\n---------------------------------------------------\n");
							   }
#line 1632 "main.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 153 "main.y" /* yacc.c:1646  */
    {
								printf("\nISEQUAL Function EXECUTED!\n");
								if((yyvsp[-4]) == (yyvsp[-2])){
									printf("\nFirst argument is equal to the second argument!!\n");
								}
								else{
									printf("\First argument is not equal to the second argument !!\n");
								}
								printf("\n---------------------------------------------------\n");
							   }
#line 1647 "main.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 164 "main.y" /* yacc.c:1646  */
    {
								
								printf("\nPOWER FUNCTION DEFINED!!\n");
								int x = pow((yyvsp[-4]),(yyvsp[-2]));
								printf("POWER OF %d to the power %d is : %d",(yyvsp[-4]),(yyvsp[-2]),x);
								printf("\n---------------------------------------------------\n");
							}
#line 1659 "main.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 172 "main.y" /* yacc.c:1646  */
    {
								if((yyvsp[-4])){
									printf("\nvalue of expression in IF: %d\n",(yyvsp[-1]));
								}
								else{
									printf("\ncondition value zero in IF block\n");
								}

								printf("\n---------------------------------------------------\n");
								
							}
#line 1675 "main.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 184 "main.y" /* yacc.c:1646  */
    {
								if((yyvsp[-8])){
									printf("value of expression in IF: %d\n",(yyvsp[-5]));
								}
								else{
									printf("value of expression in ELSE: %d\n",(yyvsp[0]));
								}
								
								printf("\n---------------------------------------------------\n");
							}
#line 1690 "main.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 194 "main.y" /* yacc.c:1646  */
    {
		printf("\nFACTORIAL declaration\n");
		int i;
		int ans=1;
		for(i=1;i<=(yyvsp[-2]);i++)
		{
			ans=ans*i;
		}
		printf("FACTORIAL of %d is : %d\n",(yyvsp[-2]),ans);
		printf("\n---------------------------------------------------\n");

		
		}
#line 1708 "main.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 208 "main.y" /* yacc.c:1646  */
    {
		printf("Odd Even Number detection \n");

		if((yyvsp[-2]) %2 ==0){
			printf("Number : %d is -> Even\n",(yyvsp[-2]));
		}
		else{
			printf("Number is :%d is -> Odd\n",(yyvsp[-2]));
		}
		printf("\n---------------------------------------------------\n");
		
		}
#line 1725 "main.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 220 "main.y" /* yacc.c:1646  */
    {
							printf("\nPrint Expression %d\n",(yyvsp[-2]));
							printf("\n---------------------------------------------------\n");
						}
#line 1734 "main.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 225 "main.y" /* yacc.c:1646  */
    {
		printf("FUNCTION found :  \n");
		printf("Function with no parameter has been called\n");
		printf("Function internal block statement : %d\n",(yyvsp[-1]));
		printf("\n---------------------------------------------------\n");
	}
#line 1745 "main.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 232 "main.y" /* yacc.c:1646  */
    {
		printf("FUNCTION found :  \n");
		printf("Function Parameter : %d\n",(yyvsp[-4]));
		printf("Function internal block statement : %d\n",(yyvsp[-1]));
		printf("\n---------------------------------------------------\n");
	}
#line 1756 "main.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 239 "main.y" /* yacc.c:1646  */
    {
		printf("FUNCTION with two parameters found!  \n");
		printf("First parameter of this function is : %d\n",(yyvsp[-6]));
		printf("Second parameter of this function is : %d\n",(yyvsp[-4]));
		printf("Expression in the body of Function is : %d\n",(yyvsp[-1]));
		printf("\n---------------------------------------------------\n");
	}
#line 1768 "main.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 249 "main.y" /* yacc.c:1646  */
    {
		printf("ARRAY Declaration\n");
		printf("Size of the ARRAY is : %d\n",(yyvsp[-2]));

		printf("\n---------------------------------------------------\n");
	}
#line 1779 "main.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 256 "main.y" /* yacc.c:1646  */
    {
		printf("\nSWITCH CASE Declaration\n");
		printf("\nFinally Choose Case number :-> %d\n",(yyvsp[-4]));
		printf("\n---------------------------------------------------\n");
		
	}
#line 1790 "main.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 263 "main.y" /* yacc.c:1646  */
    {
		printf("\nStruct Declaration\n");
		printf("\nName of the struct is : %c\n",(yyvsp[-3])+'a');
	    printf("\n---------------------------------------------------\n");

	}
#line 1801 "main.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 269 "main.y" /* yacc.c:1646  */
    {
		printf("\nPRIVATE Class Declaration\n");
		printf("\nName of the struct is : %c\n",(yyvsp[-5])+'a');
		printf("Expression : %d\n",(yyvsp[-1]));
		printf("\n---------------------------------------------------\n");

		
	}
#line 1814 "main.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 277 "main.y" /* yacc.c:1646  */
    {
		printf("\PUBLIC Class Declaration\n");
		printf("\nName of the class is : %c\n",(yyvsp[-5])+'a');
		printf("Expression : %d\n",(yyvsp[-1]));
		printf("\n---------------------------------------------------\n");


	}
#line 1827 "main.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 286 "main.y" /* yacc.c:1646  */
    {
		printf("By Default Public Class Declaration\n");
		printf("Expression : %d\n",(yyvsp[-1]));
		printf("Name of the class is : %c\n",(yyvsp[-3])+'a');
		printf("\n---------------------------------------------------\n");

	
	}
#line 1840 "main.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 295 "main.y" /* yacc.c:1646  */
    {

		printf("Declaration of class with inheritance Occur\n");
		printf("class %c is inherited from %c\n",(yyvsp[-5])+'a',(yyvsp[-3])+'a');
		printf("Name of the class is : %c\n",(yyvsp[-5])+'a');
		printf("\n---------------------------------------------------\n");

	}
#line 1853 "main.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 304 "main.y" /* yacc.c:1646  */
    {
	                                int i;
	                                printf("FOR Loop execution");
	                                for(i=(yyvsp[-8]) ; i<(yyvsp[-6]) ; i=i+(yyvsp[-4]) ) 
	                                {printf("\nvalue of the  i: %d expression value : %d\n", i,(yyvsp[-1]));}
									printf("\n---------------------------------------------------\n");

				        
				               }
#line 1867 "main.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 313 "main.y" /* yacc.c:1646  */
    {
	                                int i;
	                                printf("WHILE Loop execution");
	                                for(i=(yyvsp[-6]) ; i<(yyvsp[-4]) ; i++) {printf("\nvalue of the loop: %d expression value: %d\n", i,(yyvsp[-1]));}
									printf("\n---------------------------------------------------\n");
				    
				               }
#line 1879 "main.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 320 "main.y" /* yacc.c:1646  */
    {
		printf("TRY CATCH block found\n");
		printf("TRY Block operation : %d\n",(yyvsp[-8]));
		printf("CATCH Value : %d\n",(yyvsp[-4]));
		printf("Catch Block operation :%d\n",(yyvsp[-1]));
		printf("\n---------------------------------------------------\n");

		
	}
#line 1893 "main.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 335 "main.y" /* yacc.c:1646  */
    {printf("\nvariable Dection\n");
						printf("\n---------------------------------------------------\n");
						}
#line 1901 "main.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 341 "main.y" /* yacc.c:1646  */
    {printf("interger declaration\n");}
#line 1907 "main.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 342 "main.y" /* yacc.c:1646  */
    {printf("float declaration\n");}
#line 1913 "main.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 343 "main.y" /* yacc.c:1646  */
    {printf("char declaration\n");}
#line 1919 "main.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 344 "main.y" /* yacc.c:1646  */
    {printf("bool declaration\n");}
#line 1925 "main.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 361 "main.y" /* yacc.c:1646  */
    {printf("Case No : %d & expression value :%d \n",(yyvsp[-3]),(yyvsp[-1]));}
#line 1931 "main.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 363 "main.y" /* yacc.c:1646  */
    {
 				printf("\nDefault case & expression value : %d",(yyvsp[-1]));
 			}
#line 1939 "main.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 369 "main.y" /* yacc.c:1646  */
    { printf("\nNumber :  %d\n",(yyvsp[0]) ); (yyval) = (yyvsp[0]);  }
#line 1945 "main.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 371 "main.y" /* yacc.c:1646  */
    { (yyval) = sym[(yyvsp[0])]; }
#line 1951 "main.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 373 "main.y" /* yacc.c:1646  */
    {printf("\nAddition :%d+%d = %d \n",(yyvsp[-2]),(yyvsp[0]),(yyvsp[-2])+(yyvsp[0]) );  (yyval) = (yyvsp[-2]) + (yyvsp[0]);}
#line 1957 "main.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 375 "main.y" /* yacc.c:1646  */
    {printf("\nSubtraction :%d-%d = %d \n ",(yyvsp[-2]),(yyvsp[0]),(yyvsp[-2])-(yyvsp[0])); (yyval) = (yyvsp[-2]) - (yyvsp[0]); }
#line 1963 "main.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 377 "main.y" /* yacc.c:1646  */
    {printf("\nMultiplication :%d*%d = %d \n ",(yyvsp[-2]),(yyvsp[0]),(yyvsp[-2])*(yyvsp[0])); (yyval) = (yyvsp[-2]) * (yyvsp[0]); }
#line 1969 "main.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 379 "main.y" /* yacc.c:1646  */
    {printf("\nnBitwise Or operation of : %d|%d is -> %d \n ",(yyvsp[-2]),(yyvsp[0]),(yyvsp[-2])|(yyvsp[0])); (yyval) = (yyvsp[-2]) | (yyvsp[0]);}
#line 1975 "main.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 381 "main.y" /* yacc.c:1646  */
    {printf("\nBitwise AND operation of : %d&%d  -> %d\n",(yyvsp[-2]),(yyvsp[0]),(yyvsp[-2])&(yyvsp[0])); (yyval) = (yyvsp[-2]) & (yyvsp[0]);}
#line 1981 "main.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 383 "main.y" /* yacc.c:1646  */
    {printf("\nBitwise XOR operation of : %d^%d  -> %d\n",(yyvsp[-2]),(yyvsp[0]),(yyvsp[-2])^(yyvsp[0])); (yyval) = (yyvsp[-2]) ^ (yyvsp[0]);}
#line 1987 "main.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 385 "main.y" /* yacc.c:1646  */
    { if((yyvsp[0])){
				     					printf("\nDivision :%d/%d \n ",(yyvsp[-2]),(yyvsp[0]),(yyvsp[-2])/(yyvsp[0]));
				     					(yyval) = (yyvsp[-2]) / (yyvsp[0]);
				     					
				  					}
				  					else{
										(yyval) = 0;
										printf("\ndivision by zero\n\t");
				  					} 	
				    			}
#line 2002 "main.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 395 "main.y" /* yacc.c:1646  */
    { if((yyvsp[0])){
				     					printf("\nMod :%d % %d \n",(yyvsp[-2]),(yyvsp[0]),(yyvsp[-2]) % (yyvsp[0]));
				     					(yyval) = (yyvsp[-2]) % (yyvsp[0]);
				     					
				  					}
				  					else{
										(yyval) = 0;
										printf("\nMOD by zero\n");
				  					} 	
				    			}
#line 2017 "main.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 405 "main.y" /* yacc.c:1646  */
    {printf("\nLess Than :%d < %d \n",(yyvsp[-2]),(yyvsp[0]),(yyvsp[-2]) < (yyvsp[0])); (yyval) = (yyvsp[-2]) < (yyvsp[0]) ; }
#line 2023 "main.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 407 "main.y" /* yacc.c:1646  */
    {printf("\nGreater than :%d > %d \n ",(yyvsp[-2]),(yyvsp[0]),(yyvsp[-2]) > (yyvsp[0])); (yyval) = (yyvsp[-2]) > (yyvsp[0]); }
#line 2029 "main.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 409 "main.y" /* yacc.c:1646  */
    {	 (yyval) = (yyvsp[-1]); }
#line 2035 "main.tab.c" /* yacc.c:1646  */
    break;


#line 2039 "main.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 412 "main.y" /* yacc.c:1906  */



int  yyerror(char *s){
	printf( "%s\n", s);
}
int yywrap()
{
	return 1;
}

int main()
{
	freopen("input.txt","r",stdin);

	freopen("output.txt","w",stdout);
	yyparse();

	printf("\n**********************************\n");

	printf("\nCOMPLETED! \n");

	return 0;
}
