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

#line 67 "src/parser.tab.cpp" /* yacc.c:339  */

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
   by #include "parser.tab.hpp".  */
#ifndef YY_YY_SRC_PARSER_TAB_HPP_INCLUDED
# define YY_YY_SRC_PARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "src/parser.y" /* yacc.c:355  */

  #include "header.hpp"

  #include <cassert>

  extern const Program *g_root; // A way of getting the AST out

  //! This is to fix problems when generating C++
  // We are declaring the functions provided by Flex, so
  // that Bison generated code can call them.
  int yylex(void);
  void yyerror(const char *);

#line 111 "src/parser.tab.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_FOR = 258,
    T_IF = 259,
    T_INT = 260,
    T_RETURN = 261,
    T_WHILE = 262,
    T_NUMBER = 263,
    T_VARIABLE = 264,
    T_ELLIPSIS = 265,
    T_RIGHT_ASSIGN = 266,
    T_LEFT_ASSIGN = 267,
    T_ADD_ASSIGN = 268,
    T_SUB_ASSIGN = 269,
    T_MUL_ASSIGN = 270,
    T_DIV_ASSIGN = 271,
    T_MOD_ASSIGN = 272,
    T_AND_ASSIGN = 273,
    T_XOR_ASSIGN = 274,
    T_OR_ASSIGN = 275,
    T_RIGHT_OP = 276,
    T_LEFT_OP = 277,
    T_INC_OP = 278,
    T_DEC_OP = 279,
    T_PTR_OP = 280,
    T_AND_OP = 281,
    T_OR_OP = 282,
    T_LE_OP = 283,
    T_GE_OP = 284,
    T_EQ_OP = 285,
    T_NE_OP = 286,
    T_INEXCLUS_OR = 287,
    T_EXCLUS_OR = 288,
    T_SIMICOLOUMN = 289,
    T_LCURLYBRACKET = 290,
    T_RCURLYBRACKET = 291,
    T_COMMA = 292,
    T_COLOUMN = 293,
    T_EQUAL = 294,
    T_LBRACKET = 295,
    T_RBRACKET = 296,
    T_LSQUAREBRACKET = 297,
    T_RSQUAREBRACKET = 298,
    T_DOT = 299,
    T_AMPERSAND = 300,
    T_EXCLAMATION = 301,
    T_TILDE = 302,
    T_MINUS = 303,
    T_PLUS = 304,
    T_STAR = 305,
    T_DIVIDE = 306,
    T_MOD = 307,
    T_QUESTIONMARK = 308,
    T_GOTO = 309,
    T_BREAK = 310,
    T_CONTINUE = 311,
    T_DO = 312,
    T_SIZEOF = 313,
    T_ELSE = 315
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "src/parser.y" /* yacc.c:355  */

  const Program *prog;
  std::string *string;
  double number;

#line 189 "src/parser.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_PARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 206 "src/parser.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   306

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  198

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    59,    59,    61,    62,    64,    65,    67,    69,    71,
      72,    74,    75,    76,    77,    79,    80,    82,    83,    84,
      85,    90,    91,    92,    93,    95,    96,    98,    99,   104,
     105,   106,   107,   108,   110,   111,   122,   123,   125,   126,
     132,   133,   134,   136,   138,   141,   144,   145,   148,   149,
     151,   153,   155,   159,   160,   162,   163,   165,   166,   168,
     169,   171,   172,   174,   175,   177,   178,   180,   181,   182,
     184,   185,   186,   188,   189,   190,   192,   193,   194,   196,
     197,   198,   199,   201,   202,   203,   204,   205,   223,   224,
     225,   226,   227,   228,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   244,   245,   246,   247,   248,
     249,   250,   253,   254
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_FOR", "T_IF", "T_INT", "T_RETURN",
  "T_WHILE", "T_NUMBER", "T_VARIABLE", "T_ELLIPSIS", "T_RIGHT_ASSIGN",
  "T_LEFT_ASSIGN", "T_ADD_ASSIGN", "T_SUB_ASSIGN", "T_MUL_ASSIGN",
  "T_DIV_ASSIGN", "T_MOD_ASSIGN", "T_AND_ASSIGN", "T_XOR_ASSIGN",
  "T_OR_ASSIGN", "T_RIGHT_OP", "T_LEFT_OP", "T_INC_OP", "T_DEC_OP",
  "T_PTR_OP", "T_AND_OP", "T_OR_OP", "T_LE_OP", "T_GE_OP", "T_EQ_OP",
  "T_NE_OP", "T_INEXCLUS_OR", "T_EXCLUS_OR", "T_SIMICOLOUMN",
  "T_LCURLYBRACKET", "T_RCURLYBRACKET", "T_COMMA", "T_COLOUMN", "T_EQUAL",
  "T_LBRACKET", "T_RBRACKET", "T_LSQUAREBRACKET", "T_RSQUAREBRACKET",
  "T_DOT", "T_AMPERSAND", "T_EXCLAMATION", "T_TILDE", "T_MINUS", "T_PLUS",
  "T_STAR", "T_DIVIDE", "T_MOD", "T_QUESTIONMARK", "T_GOTO", "T_BREAK",
  "T_CONTINUE", "T_DO", "T_SIZEOF", "\"then\"", "T_ELSE", "$accept",
  "ROOT", "PROGRAM", "ALL_DECLEARARION", "FUNCTION", "COMPOUND_STATEMENT",
  "STATEMENT_LIST", "STATEMENT", "ITERATION_STATEMENT",
  "EXPRESSION_STATEMENT", "IF_STATEMENT", "JUMP_STATEMENT", "EXPRESSION",
  "DECLARATION_LIST", "PARAM_DECLARATION_LIST", "DECLARATION",
  "RE_DECLARATION", "DECLARATION_SPECIFIERS", "INIT_DECLARATOR_LIST",
  "INIT_DECLARATOR", "DECLARATOR", "DIRECT_DECLARATOR", "TYPE_SPECIFIER",
  "INITIALIZER", "ASSIGNMENT_EXPRESSION", "CONDITIONAL_EXPRESSION",
  "LOGICAL_OR_EXPRESSION", "LOGICAL_AND_EXPRESSION",
  "INCLUSIVE_OR_EXPRESSION", "EXCLUSIVE_OR_EXPRESSION", "AND_EXPRESSION",
  "EQUALITY_EXPRESSION", "RELATIONAL_EXPRESSION", "SHIFT_EXPRESSION",
  "ADDITIVE_EXPRESSION", "MULTIPLICATIVE_EXPRESSION", "UNARY_EXPRESSION",
  "OPERATOR", "ASSIGNMENT_OPERATOR", "POSTFIX_EXPRESSION",
  "PRIMARY_EXPRESSION", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315
};
# endif

#define YYPACT_NINF -121

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-121)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,  -121,  -121,    10,    22,     8,  -121,  -121,  -121,  -121,
       7,    -6,  -121,   -13,  -121,  -121,  -121,  -121,  -121,  -121,
       1,     9,  -121,   248,     4,  -121,    18,  -121,  -121,   248,
     248,  -121,  -121,  -121,  -121,  -121,  -121,   248,  -121,  -121,
    -121,   -15,    16,    12,    20,     6,    49,    32,    77,    52,
     -20,   174,   248,    53,  -121,    34,    42,     2,    34,    55,
    -121,  -121,  -121,   230,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,   248,  -121,  -121,  -121,    62,    76,   230,    66,    85,
    -121,    34,    82,  -121,    34,   248,    91,  -121,    12,  -121,
      12,    20,     6,    49,    32,    32,    77,    77,    52,    52,
     -20,   -20,  -121,  -121,  -121,  -121,  -121,  -121,    88,  -121,
      97,   103,   172,   113,  -121,   140,   126,   127,    30,  -121,
     121,  -121,  -121,  -121,  -121,   109,  -121,     7,   128,  -121,
     163,  -121,   129,   248,  -121,   192,   230,  -121,   135,   230,
     137,  -121,  -121,   165,  -121,  -121,  -121,   148,  -121,  -121,
    -121,  -121,  -121,   192,   139,   133,  -121,   138,  -121,   142,
    -121,   225,  -121,    30,    30,   230,    30,   156,   147,  -121,
     157,  -121,    30,    30,   175,  -121,  -121,  -121
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    51,    50,     0,     0,     2,     3,     6,     5,    42,
       0,     0,    45,    46,    49,    44,    48,     1,     4,    40,
       0,    46,    43,     0,     0,    41,     0,   113,   112,     0,
       0,    93,    88,    89,    90,    91,    92,     0,    47,    52,
      53,    55,    57,    59,    61,    63,    65,    67,    70,    73,
      76,    79,     0,    83,   105,     0,     0,     0,     0,     0,
      85,    86,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     101,   100,    98,    99,    95,    96,    97,   102,   103,   104,
      94,     0,    84,   110,   111,     0,     0,     0,     0,     0,
      10,     0,    38,     8,     0,     0,     0,    34,    60,    79,
      58,    62,    64,    66,    68,    69,    71,    72,    75,    74,
      78,    77,    80,    81,    82,    54,   109,   107,     0,   108,
       0,     0,     0,     0,    11,     0,     0,     0,     0,    17,
       0,    15,    20,    18,    19,     0,    36,     0,    46,     9,
       0,     7,     0,     0,   106,     0,     0,    29,     0,     0,
       0,    32,    33,     0,    13,    16,    12,     0,    37,    39,
      35,    56,    25,     0,     0,     0,    30,     0,    31,     0,
      14,     0,    26,     0,     0,     0,     0,     0,    27,    21,
       0,    23,     0,     0,     0,    24,    28,    22
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -121,  -121,  -121,   194,  -121,   -34,    63,  -120,  -121,    41,
    -121,  -121,   -51,  -121,   -24,   -95,  -121,     3,    -9,  -121,
       5,   207,  -121,   195,   -66,    64,  -121,  -121,    39,   153,
     158,   159,    37,    51,    73,    35,   -23,  -121,  -121,  -121,
    -121
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,   139,   140,   141,   142,   173,
     143,   144,   174,   145,    56,     8,     9,    57,    11,    12,
     148,    14,    15,   107,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,   109,    52,    91,    53,
      54
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      51,    20,    59,    10,   146,    13,    60,    61,    10,     1,
      13,     2,   106,     1,    62,    21,     2,     2,   163,     2,
     165,   100,    17,     1,   103,   125,    23,    24,    22,    92,
      77,    78,    79,   130,   131,    25,   132,   133,    63,   152,
      51,    19,    64,    65,    66,    55,   128,   165,    23,    26,
     168,    68,     3,    67,   122,   123,   124,     3,     3,    58,
      71,    72,   102,   188,   189,    99,   191,   149,    51,    99,
     151,   126,   195,   196,    51,   129,    93,    94,    95,    69,
      70,   158,    51,   101,   135,   136,   137,   138,   130,   131,
       1,   132,   133,    96,     2,    97,   104,    98,    73,    74,
      75,    76,   147,   108,   110,   175,   114,   115,   177,    51,
     120,   121,   130,   131,     1,   132,   133,   127,     2,   150,
      99,   134,   116,   117,   130,   131,   169,   132,   133,   153,
     187,   154,    51,    51,   190,     3,    51,   155,    20,   135,
     136,   137,   138,   156,    99,   166,   118,   119,   147,   160,
      51,   130,   131,   159,   132,   133,    99,   164,    51,     3,
     161,   162,    51,   135,   136,   137,   138,    23,     1,   176,
     170,   178,   179,   182,   183,   135,   136,   137,   138,   184,
      27,    28,   185,    99,   180,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    29,    30,   192,   194,    18,
      27,    28,   135,   136,   137,   138,   157,   193,   167,   197,
      16,    31,   105,    90,   181,    29,    30,   171,    38,   111,
      32,    33,    34,    35,    36,   112,   172,   113,     0,     0,
      37,    31,   105,    27,    28,     0,     0,     0,    27,    28,
      32,    33,    34,    35,    36,     0,     0,     0,    29,    30,
      37,     0,     0,    29,    30,     0,    27,    28,     0,     0,
       0,     0,     0,     0,    31,   105,   186,     0,     0,    31,
     105,    29,    30,    32,    33,    34,    35,    36,    32,    33,
      34,    35,    36,    37,     0,     0,     0,    31,    37,     0,
       0,     0,     0,     0,     0,     0,    32,    33,    34,    35,
      36,     0,     0,     0,     0,     0,    37
};

static const yytype_int16 yycheck[] =
{
      23,    10,    26,     0,    99,     0,    29,    30,     5,     5,
       5,     9,    63,     5,    37,    10,     9,     9,   138,     9,
     140,    55,     0,     5,    58,    91,    39,    40,    34,    52,
      50,    51,    52,     3,     4,    34,     6,     7,    53,   105,
      63,    34,    26,    27,    32,    41,    97,   167,    39,    40,
     145,    45,    50,    33,    77,    78,    79,    50,    50,    41,
      28,    29,    57,   183,   184,    35,   186,   101,    91,    35,
     104,     9,   192,   193,    97,     9,    23,    24,    25,    30,
      31,   132,   105,    41,    54,    55,    56,    57,     3,     4,
       5,     6,     7,    40,     9,    42,    41,    44,    21,    22,
      48,    49,    99,    64,    65,   156,    69,    70,   159,   132,
      75,    76,     3,     4,     5,     6,     7,    41,     9,    37,
      35,    36,    71,    72,     3,     4,   150,     6,     7,    38,
     181,    43,   155,   156,   185,    50,   159,    40,   147,    54,
      55,    56,    57,    40,    35,    36,    73,    74,   145,     9,
     173,     3,     4,    40,     6,     7,    35,    36,   181,    50,
      34,    34,   185,    54,    55,    56,    57,    39,     5,    34,
      41,    34,     7,    34,    41,    54,    55,    56,    57,    41,
       8,     9,    40,    35,    36,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    23,    24,    41,    41,     5,
       8,     9,    54,    55,    56,    57,    34,    60,   145,    34,
       3,    39,    40,    39,   173,    23,    24,   153,    23,    66,
      48,    49,    50,    51,    52,    67,    34,    68,    -1,    -1,
      58,    39,    40,     8,     9,    -1,    -1,    -1,     8,     9,
      48,    49,    50,    51,    52,    -1,    -1,    -1,    23,    24,
      58,    -1,    -1,    23,    24,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    39,
      40,    23,    24,    48,    49,    50,    51,    52,    48,    49,
      50,    51,    52,    58,    -1,    -1,    -1,    39,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     9,    50,    62,    63,    64,    65,    76,    77,
      78,    79,    80,    81,    82,    83,    82,     0,    64,    34,
      79,    81,    34,    39,    40,    34,    40,     8,     9,    23,
      24,    39,    48,    49,    50,    51,    52,    58,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,   100,   101,    41,    75,    78,    41,    75,
      97,    97,    97,    53,    26,    27,    32,    33,    45,    30,
      31,    28,    29,    21,    22,    48,    49,    50,    51,    52,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      39,    99,    97,    23,    24,    25,    40,    42,    44,    35,
      66,    41,    81,    66,    41,    40,    73,    84,    89,    97,
      89,    90,    91,    92,    93,    93,    94,    94,    95,    95,
      96,    96,    97,    97,    97,    85,     9,    41,    73,     9,
       3,     4,     6,     7,    36,    54,    55,    56,    57,    66,
      67,    68,    69,    71,    72,    74,    76,    78,    81,    66,
      37,    66,    85,    38,    43,    40,    40,    34,    73,    40,
       9,    34,    34,    68,    36,    68,    36,    67,    76,    75,
      41,    86,    34,    70,    73,    73,    34,    73,    34,     7,
      36,    70,    34,    41,    41,    40,    41,    73,    68,    68,
      73,    68,    41,    60,    41,    68,    68,    34
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    63,    63,    64,    64,    65,    65,    65,
      65,    66,    66,    66,    66,    67,    67,    68,    68,    68,
      68,    69,    69,    69,    69,    70,    70,    71,    71,    72,
      72,    72,    72,    72,    73,    73,    74,    74,    75,    75,
      76,    76,    76,    77,    78,    79,    80,    80,    81,    81,
      82,    83,    84,    85,    85,    86,    86,    87,    87,    88,
      88,    89,    89,    90,    90,    91,    91,    92,    92,    92,
      93,    93,    93,    94,    94,    94,    95,    95,    95,    96,
      96,    96,    96,    97,    97,    97,    97,    97,    98,    98,
      98,    98,    98,    98,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,   100,   100,   100,   100,   100,
     100,   100,   101,   101
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     6,     5,     5,
       4,     2,     3,     3,     4,     1,     2,     1,     1,     1,
       1,     5,     7,     6,     7,     1,     2,     5,     7,     2,
       3,     3,     2,     2,     1,     3,     1,     2,     2,     4,
       2,     3,     1,     2,     1,     1,     1,     3,     2,     1,
       1,     1,     1,     1,     3,     1,     5,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     3,     3,
       2,     2,     1,     1
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
#line 59 "src/parser.y" /* yacc.c:1646  */
    { g_root = (yyvsp[0].prog); }
#line 1464 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 61 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = (yyvsp[0].prog);}
#line 1470 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 62 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new Program_call((yyvsp[-1].prog),(yyvsp[0].prog));}
#line 1476 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 64 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = (yyvsp[0].prog);}
#line 1482 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 65 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = (yyvsp[0].prog); }
#line 1488 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 68 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new Function((yyvsp[-4].prog),(yyvsp[-2].prog),(yyvsp[0].prog));}
#line 1494 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 70 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new FunctionNoParam((yyvsp[-3].prog),(yyvsp[0].prog));}
#line 1500 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 71 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new Function((yyvsp[-4].prog),(yyvsp[-2].prog),(yyvsp[0].prog));}
#line 1506 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 72 "src/parser.y" /* yacc.c:1646  */
    {(yyval.prog) = new FunctionNoParam((yyvsp[-3].prog),(yyvsp[0].prog));}
#line 1512 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 74 "src/parser.y" /* yacc.c:1646  */
    {(yyval.prog) = new EmptyScope();}
#line 1518 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 75 "src/parser.y" /* yacc.c:1646  */
    {(yyval.prog) = new Scope((yyvsp[-1].prog));}
#line 1524 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 76 "src/parser.y" /* yacc.c:1646  */
    {(yyval.prog) = new Scope((yyvsp[-1].prog));}
#line 1530 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 77 "src/parser.y" /* yacc.c:1646  */
    {(yyval.prog) = new DoubleScope((yyvsp[-2].prog),(yyvsp[-1].prog));}
#line 1536 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 79 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = (yyvsp[0].prog); }
#line 1542 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 80 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new Program_call((yyvsp[-1].prog),(yyvsp[0].prog)); }
#line 1548 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 82 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = (yyvsp[0].prog);}
#line 1554 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 83 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = (yyvsp[0].prog);}
#line 1560 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 84 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = (yyvsp[0].prog);}
#line 1566 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 85 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = (yyvsp[0].prog);}
#line 1572 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 90 "src/parser.y" /* yacc.c:1646  */
    {(yyval.prog) = new Scope((yyvsp[0].prog));}
#line 1578 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 91 "src/parser.y" /* yacc.c:1646  */
    {(yyval.prog) = new Scope((yyvsp[-5].prog));}
#line 1584 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 92 "src/parser.y" /* yacc.c:1646  */
    {(yyval.prog) = new Scope((yyvsp[0].prog));}
#line 1590 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 93 "src/parser.y" /* yacc.c:1646  */
    {(yyval.prog) = new Scope((yyvsp[0].prog));}
#line 1596 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 95 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new Empty();}
#line 1602 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 96 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = (yyvsp[-1].prog);}
#line 1608 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 98 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new If((yyvsp[-2].prog),(yyvsp[0].prog));}
#line 1614 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 100 "src/parser.y" /* yacc.c:1646  */
    {(yyval.prog) = new IfElse((yyvsp[-4].prog),(yyvsp[-2].prog),(yyvsp[0].prog));}
#line 1620 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 104 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new Empty();}
#line 1626 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 105 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new Empty();}
#line 1632 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 106 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new Empty();}
#line 1638 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 107 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new Empty();}
#line 1644 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 108 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new Empty();}
#line 1650 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 110 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = (yyvsp[0].prog);}
#line 1656 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 111 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = (yyvsp[-1].prog);}
#line 1662 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 122 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = (yyvsp[0].prog); }
#line 1668 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 123 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new Program_call((yyvsp[-1].prog),(yyvsp[0].prog)); }
#line 1674 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 125 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new parameter((yyvsp[0].prog)); }
#line 1680 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 127 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new MutiplyParameter((yyvsp[-2].prog),(yyvsp[0].prog)); }
#line 1686 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 132 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new Empty();}
#line 1692 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 133 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new declaration((yyvsp[-1].prog));}
#line 1698 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 134 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = (yyvsp[0].prog);}
#line 1704 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 136 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new Empty();}
#line 1710 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 138 "src/parser.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string);}
#line 1716 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 141 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = (yyvsp[0].prog);}
#line 1722 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 144 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = (yyvsp[0].prog); }
#line 1728 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 145 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new init_declartor((yyvsp[-2].prog),(yyvsp[0].prog)); }
#line 1734 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 148 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = (yyvsp[0].prog);}
#line 1740 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 149 "src/parser.y" /* yacc.c:1646  */
    {(yyval.prog) = (yyvsp[0].prog);}
#line 1746 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 151 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new Variable(*(yyvsp[0].string));}
#line 1752 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 153 "src/parser.y" /* yacc.c:1646  */
    { (yyval.string) = new std::string("int"); }
#line 1758 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 155 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = (yyvsp[0].prog);}
#line 1764 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 159 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = (yyvsp[0].prog);}
#line 1770 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 160 "src/parser.y" /* yacc.c:1646  */
    { new Program_call((yyvsp[-2].prog),(yyvsp[0].prog));}
#line 1776 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 162 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = (yyvsp[0].prog);}
#line 1782 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 163 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new Empty();}
#line 1788 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 165 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = (yyvsp[0].prog);}
#line 1794 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 166 "src/parser.y" /* yacc.c:1646  */
    { new Program_call((yyvsp[-2].prog),(yyvsp[0].prog));}
#line 1800 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 168 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = (yyvsp[0].prog);}
#line 1806 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 169 "src/parser.y" /* yacc.c:1646  */
    { new Program_call((yyvsp[-2].prog),(yyvsp[0].prog));}
#line 1812 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 171 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = (yyvsp[0].prog);}
#line 1818 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 172 "src/parser.y" /* yacc.c:1646  */
    { new Program_call((yyvsp[-2].prog),(yyvsp[0].prog));}
#line 1824 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 174 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = (yyvsp[0].prog);}
#line 1830 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 175 "src/parser.y" /* yacc.c:1646  */
    { new Program_call((yyvsp[-2].prog),(yyvsp[0].prog));}
#line 1836 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 177 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = (yyvsp[0].prog);}
#line 1842 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 178 "src/parser.y" /* yacc.c:1646  */
    { new Program_call((yyvsp[-2].prog),(yyvsp[0].prog));}
#line 1848 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 180 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = (yyvsp[0].prog);}
#line 1854 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 181 "src/parser.y" /* yacc.c:1646  */
    { new Program_call((yyvsp[-2].prog),(yyvsp[0].prog));}
#line 1860 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 182 "src/parser.y" /* yacc.c:1646  */
    { new Program_call((yyvsp[-2].prog),(yyvsp[0].prog));}
#line 1866 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 184 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = (yyvsp[0].prog);}
#line 1872 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 185 "src/parser.y" /* yacc.c:1646  */
    { new Program_call((yyvsp[-2].prog),(yyvsp[0].prog));}
#line 1878 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 186 "src/parser.y" /* yacc.c:1646  */
    { new Program_call((yyvsp[-2].prog),(yyvsp[0].prog));}
#line 1884 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 188 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = (yyvsp[0].prog);}
#line 1890 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 189 "src/parser.y" /* yacc.c:1646  */
    { new Program_call((yyvsp[-2].prog),(yyvsp[0].prog));}
#line 1896 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 190 "src/parser.y" /* yacc.c:1646  */
    { new Program_call((yyvsp[-2].prog),(yyvsp[0].prog));}
#line 1902 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 192 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = (yyvsp[0].prog);}
#line 1908 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 193 "src/parser.y" /* yacc.c:1646  */
    { new Program_call((yyvsp[-2].prog),(yyvsp[0].prog));}
#line 1914 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 194 "src/parser.y" /* yacc.c:1646  */
    { new Program_call((yyvsp[-2].prog),(yyvsp[0].prog));}
#line 1920 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 196 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = (yyvsp[0].prog);}
#line 1926 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 197 "src/parser.y" /* yacc.c:1646  */
    { new Program_call((yyvsp[-2].prog),(yyvsp[0].prog));}
#line 1932 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 198 "src/parser.y" /* yacc.c:1646  */
    { new Program_call((yyvsp[-2].prog),(yyvsp[0].prog));}
#line 1938 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 199 "src/parser.y" /* yacc.c:1646  */
    { new Program_call((yyvsp[-2].prog),(yyvsp[0].prog));}
#line 1944 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 201 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = (yyvsp[0].prog); }
#line 1950 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 202 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new unary_expression((yyvsp[0].prog));}
#line 1956 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 203 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new unary_expression((yyvsp[0].prog));}
#line 1962 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 204 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new unary_expression((yyvsp[0].prog));}
#line 1968 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 205 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = (yyvsp[0].prog); }
#line 1974 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 223 "src/parser.y" /* yacc.c:1646  */
    {(yyval.string) = new std::string("-");}
#line 1980 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 224 "src/parser.y" /* yacc.c:1646  */
    {(yyval.string) = new std::string("+");}
#line 1986 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 225 "src/parser.y" /* yacc.c:1646  */
    {(yyval.string) = new std::string("*");}
#line 1992 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 226 "src/parser.y" /* yacc.c:1646  */
    {(yyval.string) = new std::string("/");}
#line 1998 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 227 "src/parser.y" /* yacc.c:1646  */
    {(yyval.string) = new std::string("%%");}
#line 2004 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 228 "src/parser.y" /* yacc.c:1646  */
    {(yyval.string) = new std::string("=");}
#line 2010 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 230 "src/parser.y" /* yacc.c:1646  */
    {(yyval.string) = new std::string("=");}
#line 2016 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 231 "src/parser.y" /* yacc.c:1646  */
    {(yyval.string) = new std::string("*=");}
#line 2022 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 232 "src/parser.y" /* yacc.c:1646  */
    {(yyval.string) = new std::string("/=");}
#line 2028 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 233 "src/parser.y" /* yacc.c:1646  */
    {(yyval.string) = new std::string("%%=");}
#line 2034 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 234 "src/parser.y" /* yacc.c:1646  */
    {(yyval.string) = new std::string("+=");}
#line 2040 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 235 "src/parser.y" /* yacc.c:1646  */
    {(yyval.string) = new std::string("-=");}
#line 2046 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 236 "src/parser.y" /* yacc.c:1646  */
    {(yyval.string) = new std::string("<<=");}
#line 2052 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 237 "src/parser.y" /* yacc.c:1646  */
    {(yyval.string) = new std::string(">>=");}
#line 2058 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 238 "src/parser.y" /* yacc.c:1646  */
    {(yyval.string) = new std::string("&=");}
#line 2064 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 239 "src/parser.y" /* yacc.c:1646  */
    {(yyval.string) = new std::string("^=");}
#line 2070 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 240 "src/parser.y" /* yacc.c:1646  */
    {(yyval.string) = new std::string("|=");}
#line 2076 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 244 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = (yyvsp[0].prog); }
#line 2082 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 245 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new PostFix((yyvsp[-3].prog)); }
#line 2088 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 246 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new PostFix((yyvsp[-2].prog)); }
#line 2094 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 247 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new PostFix((yyvsp[-2].prog)); }
#line 2100 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 248 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new PostFix((yyvsp[-2].prog)); }
#line 2106 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 249 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new PostFix((yyvsp[-1].prog)); }
#line 2112 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 250 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new PostFix((yyvsp[-1].prog)); }
#line 2118 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 253 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new Variable(*(yyvsp[0].string)); }
#line 2124 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 254 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new Number((yyvsp[0].number));}
#line 2130 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 2134 "src/parser.tab.cpp" /* yacc.c:1646  */
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
#line 260 "src/parser.y" /* yacc.c:1906  */

const Program *g_root; // Definition of variable (to match declaration earlier)
const Program *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
