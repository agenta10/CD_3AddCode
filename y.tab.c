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
#line 1 "sol.y" /* yacc.c:339  */

	#include<stdio.h> 
	#include<stdlib.h>
	#include "requredfunc/str.h"
	int error=1; 
	int nd=0;
	int varc=0;
	void yyerror(const char *str);

#line 76 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    AND = 258,
    ASSIGN = 259,
    COLON = 260,
    COMMA = 261,
    DEF = 262,
    DIV = 263,
    DOT = 264,
    ELSE = 265,
    END = 266,
    EQ = 267,
    EXITLOOP = 268,
    FLOAT = 269,
    FLOAT_CONST = 270,
    FORMAT = 271,
    FROM = 272,
    FUN = 273,
    GE = 274,
    GLOBAL = 275,
    GT = 276,
    ID = 277,
    IF = 278,
    INT = 279,
    INT_CONST = 280,
    LEFT_PAREN = 281,
    LEFT_SQ_BKT = 282,
    LE = 283,
    LT = 284,
    MINUS = 285,
    MOD = 286,
    MULT = 287,
    NE = 288,
    NOT = 289,
    NUL = 290,
    OR = 291,
    PLUS = 292,
    PRINT = 293,
    PRODUCT = 294,
    READ = 295,
    RETURN = 296,
    RETURNS = 297,
    RIGHT_PAREN = 298,
    RIGHT_SQ_BKT = 299,
    SEMICOLON = 300,
    SKIP = 301,
    STEP = 302,
    STRING = 303,
    TO = 304,
    WHILE = 305,
    UMINUS = 306,
    UPLUS = 307
  };
#endif
/* Tokens.  */
#define AND 258
#define ASSIGN 259
#define COLON 260
#define COMMA 261
#define DEF 262
#define DIV 263
#define DOT 264
#define ELSE 265
#define END 266
#define EQ 267
#define EXITLOOP 268
#define FLOAT 269
#define FLOAT_CONST 270
#define FORMAT 271
#define FROM 272
#define FUN 273
#define GE 274
#define GLOBAL 275
#define GT 276
#define ID 277
#define IF 278
#define INT 279
#define INT_CONST 280
#define LEFT_PAREN 281
#define LEFT_SQ_BKT 282
#define LE 283
#define LT 284
#define MINUS 285
#define MOD 286
#define MULT 287
#define NE 288
#define NOT 289
#define NUL 290
#define OR 291
#define PLUS 292
#define PRINT 293
#define PRODUCT 294
#define READ 295
#define RETURN 296
#define RETURNS 297
#define RIGHT_PAREN 298
#define RIGHT_SQ_BKT 299
#define SEMICOLON 300
#define SKIP 301
#define STEP 302
#define STRING 303
#define TO 304
#define WHILE 305
#define UMINUS 306
#define UPLUS 307

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 10 "sol.y" /* yacc.c:355  */
clss *ptr;

#line 223 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 240 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   272

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  189

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    26,    26,    28,    31,    33,    33,    35,    35,    35,
      37,    37,    39,    41,    41,    43,    43,    45,    45,    45,
      45,    45,    45,    46,    48,    50,    52,    52,    54,    54,
      56,    56,    58,    60,    62,    64,    66,    70,    74,    77,
      77,    77,    80,    80,    80,    80,    80,    80,    82,    93,
      96,    98,   100,   100,   102,   102,   102,   110,   115,   119,
     121,   123,   123,   125,   127,   129,   129,   131,   133,   135,
     140,   140,   142,   142,   144,   144,   144,   144,   144,   159,
     159,   159,   159,   159,   159,   161,   163,   165,   167,   169,
     171,   172,   172,   172,   174,   176,   177,   182,   187,   187,
     189,   189
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AND", "ASSIGN", "COLON", "COMMA", "DEF",
  "DIV", "DOT", "ELSE", "END", "EQ", "EXITLOOP", "FLOAT", "FLOAT_CONST",
  "FORMAT", "FROM", "FUN", "GE", "GLOBAL", "GT", "ID", "IF", "INT",
  "INT_CONST", "LEFT_PAREN", "LEFT_SQ_BKT", "LE", "LT", "MINUS", "MOD",
  "MULT", "NE", "NOT", "NUL", "OR", "PLUS", "PRINT", "PRODUCT", "READ",
  "RETURN", "RETURNS", "RIGHT_PAREN", "RIGHT_SQ_BKT", "SEMICOLON", "SKIP",
  "STEP", "STRING", "TO", "WHILE", "UMINUS", "UPLUS", "$accept", "prog",
  "declList", "decl", "typeList", "varList", "var", "sizeListO",
  "sizeList", "type", "typeDef", "funDef", "funID", "fParamListO",
  "fParamList", "pList", "idP", "funBody", "stmtListO", "stmtList", "stmt",
  "assignmentStmt", "dotId", "readStmt", "printStmt", "ifStmt", "$@1",
  "$@2", "elsePart", "whileStmt", "loopStmt", "stepPart", "callStmt",
  "returnStmt", "expO", "exitLoop", "skip", "id", "indxListO", "indxList",
  "bExp", "relOP", "exp", "actParamListO", "actParamList", YY_NULLPTR
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
     305,   306,   307
};
# endif

#define YYPACT_NINF -148

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-148)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -6,     9,    21,     0,    44,    66,     9,  -148,     4,    17,
      29,    13,  -148,  -148,    94,    89,  -148,    91,    -4,   209,
      92,    77,   104,   229,  -148,   209,   115,    84,  -148,  -148,
     126,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,
     123,  -148,    95,   110,  -148,   109,  -148,   117,    46,   117,
    -148,   113,    99,    97,    12,  -148,   141,   229,  -148,   120,
    -148,  -148,   215,   229,   209,   229,  -148,    36,   182,   143,
     229,  -148,   229,   235,  -148,   196,    64,  -148,    66,   229,
      91,     0,   102,   127,   113,   148,  -148,   150,  -148,  -148,
    -148,  -148,  -148,  -148,  -148,    46,    89,    46,    89,   229,
      87,   229,     8,     7,   156,   119,  -148,   119,   209,   209,
     151,   229,   229,  -148,  -148,  -148,  -148,  -148,   229,   229,
     229,  -148,   229,   229,   229,   196,   196,    78,    66,  -148,
     196,  -148,    18,  -148,   111,    46,     9,    71,  -148,  -148,
      16,  -148,   129,   229,  -148,  -148,  -148,  -148,    66,   153,
     154,   119,   153,   153,   119,   196,   196,    14,    19,  -148,
    -148,  -148,    66,  -148,    46,   229,  -148,   124,   163,    84,
     229,  -148,  -148,  -148,  -148,    24,  -148,   160,   196,   229,
     166,    66,   161,   196,    66,    84,  -148,   167,  -148
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,     0,     0,    35,     4,     1,    14,     0,
       0,    11,     9,    25,     0,    27,    67,     0,    71,     0,
       0,     0,     0,    66,    68,     0,     0,    34,    37,    38,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      49,     3,     0,     0,    12,    13,     5,     0,     0,     0,
       6,    14,     0,    26,     0,    31,     0,     0,    69,    70,
      97,    96,     0,     0,     0,     0,    94,    54,     0,     0,
       0,    52,     0,     0,    64,    65,     0,     2,     0,     0,
       0,     0,     0,     0,    14,     0,    18,    22,    17,    20,
      19,     8,    21,    10,    32,     0,     0,     0,     0,     0,
       0,     0,    71,     0,     0,    90,    76,    91,     0,     0,
       0,     0,     0,    79,    82,    83,    80,    81,     0,     0,
       0,    84,     0,     0,     0,    53,    51,     0,     0,    36,
      48,    50,     0,    16,     0,     0,     4,     0,    29,    30,
       0,    73,     0,    99,    77,    93,    75,    74,     0,    88,
      92,    86,    89,    87,    85,    78,   101,     0,     0,    23,
      15,     7,    35,    24,     0,     0,    72,     0,    98,    55,
       0,    63,    59,    33,    28,    62,    95,    58,   100,     0,
       0,     0,     0,    61,    35,    57,    56,     0,    60
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -148,  -148,    -3,  -148,    93,   -38,  -148,   130,  -148,   -90,
       1,  -148,  -148,  -148,  -148,    86,    82,  -148,  -147,  -122,
     105,  -148,   112,  -148,  -148,  -148,  -148,  -148,  -148,  -148,
    -148,  -148,  -148,  -148,  -148,  -148,  -148,    -5,  -148,  -148,
     -24,  -148,   -21,  -148,    52
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     5,     6,     9,    10,    11,    44,    45,    91,
      92,    14,    15,    52,    53,    54,    55,   163,    26,    27,
      28,    29,    30,    31,    32,    33,   110,   177,   182,    34,
      35,   180,    36,    37,    74,    38,    39,    66,    58,    59,
      67,   123,    68,   167,   157
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      40,    76,    75,    41,    12,   136,   158,   138,    42,    85,
     108,    93,    56,   143,     1,   173,     3,    97,    98,    49,
     170,     7,     8,    57,   111,   112,   169,     4,    46,   159,
     172,    43,   111,   112,    48,    57,   100,   187,   103,   108,
     106,   104,   105,   109,   107,   161,   118,   119,   120,   125,
     144,   126,   127,   122,   118,   119,   120,   171,   130,   185,
      86,   122,    47,    47,    78,   165,    13,   108,    87,   128,
      88,   179,   109,    40,   174,    40,   164,    98,   140,    16,
     142,    89,    12,    17,   146,   147,   111,   112,    18,    19,
     149,   150,    20,    70,    90,   111,   112,   151,   152,   153,
     109,   154,   155,   156,    21,    50,    22,    23,   118,   119,
     120,    51,    24,    18,    69,   122,    25,   118,   119,   120,
      72,   145,   156,    40,   122,    71,    77,   111,   112,    78,
      79,   141,    80,   162,    81,    82,    83,   111,   112,    84,
      43,    95,    96,    40,   175,    99,   133,   101,   124,   178,
     119,   120,   134,   135,    42,   160,   148,    40,   183,   118,
     119,   120,   112,    -1,   111,   112,   122,   176,   113,   170,
     181,   184,   186,   166,   132,   114,    40,   115,   188,    40,
     139,    94,   137,   129,   116,   117,   118,   119,   120,   121,
     111,   112,   131,   122,   113,   168,     0,     0,     0,   145,
       0,   114,     0,   115,   111,   112,     0,     0,     0,     0,
     116,   117,   118,   119,   120,   121,     0,     0,     0,   122,
       0,     0,     0,     0,    60,     0,   118,   119,   120,     0,
      60,    18,     0,   122,    61,    62,     0,   102,     0,    63,
      61,    62,     0,    64,    60,    63,    65,     0,     0,    64,
      60,    18,    65,     0,    61,    73,     0,   102,     0,    63,
      61,    73,     0,     0,     0,    63,    65,     0,     0,     0,
       0,     0,    65
};

static const yytype_int16 yycheck[] =
{
       5,    25,    23,     6,     3,    95,   128,    97,     4,    47,
       3,    49,    17,     5,    20,   162,     7,     5,     6,     6,
       6,     0,    22,    27,     8,     9,   148,    18,    11,    11,
      11,    27,     8,     9,     5,    27,    57,   184,    62,     3,
      64,    62,    63,    36,    65,   135,    30,    31,    32,    70,
      43,    72,    73,    37,    30,    31,    32,    43,    79,   181,
      14,    37,    45,    45,    45,    49,    22,     3,    22,     5,
      24,    47,    36,    78,   164,    80,     5,     6,    99,    13,
     101,    35,    81,    17,   108,   109,     8,     9,    22,    23,
     111,   112,    26,    16,    48,     8,     9,   118,   119,   120,
      36,   122,   123,   124,    38,    11,    40,    41,    30,    31,
      32,    22,    46,    22,    22,    37,    50,    30,    31,    32,
      16,    43,   143,   128,    37,    48,    11,     8,     9,    45,
       4,    44,     9,   136,    39,    25,    27,     8,     9,    22,
      27,    42,    45,   148,   165,     4,    44,    27,     5,   170,
      31,    32,    25,     5,     4,    44,     5,   162,   179,    30,
      31,    32,     9,     9,     8,     9,    37,    43,    12,     6,
      10,     5,    11,    44,    81,    19,   181,    21,    11,   184,
      98,    51,    96,    78,    28,    29,    30,    31,    32,    33,
       8,     9,    80,    37,    12,   143,    -1,    -1,    -1,    43,
      -1,    19,    -1,    21,     8,     9,    -1,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    15,    -1,    30,    31,    32,    -1,
      15,    22,    -1,    37,    25,    26,    -1,    22,    -1,    30,
      25,    26,    -1,    34,    15,    30,    37,    -1,    -1,    34,
      15,    22,    37,    -1,    25,    26,    -1,    22,    -1,    30,
      25,    26,    -1,    -1,    -1,    30,    37,    -1,    -1,    -1,
      -1,    -1,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    20,    54,     7,    18,    55,    56,     0,    22,    57,
      58,    59,    63,    22,    64,    65,    13,    17,    22,    23,
      26,    38,    40,    41,    46,    50,    71,    72,    73,    74,
      75,    76,    77,    78,    82,    83,    85,    86,    88,    89,
      90,    55,     4,    27,    60,    61,    11,    45,     5,     6,
      11,    22,    66,    67,    68,    69,    90,    27,    91,    92,
      15,    25,    26,    30,    34,    37,    90,    93,    95,    22,
      16,    48,    16,    26,    87,    95,    93,    11,    45,     4,
       9,    39,    25,    27,    22,    58,    14,    22,    24,    35,
      48,    62,    63,    58,    60,    42,    45,     5,     6,     4,
      95,    27,    22,    93,    95,    95,    93,    95,     3,    36,
      79,     8,     9,    12,    19,    21,    28,    29,    30,    31,
      32,    33,    37,    94,     5,    95,    95,    95,     5,    73,
      95,    75,    57,    44,    25,     5,    62,    68,    62,    69,
      95,    44,    95,     5,    43,    43,    93,    93,     5,    95,
      95,    95,    95,    95,    95,    95,    95,    97,    72,    11,
      44,    62,    55,    70,     5,    49,    44,    96,    97,    72,
       6,    43,    11,    71,    62,    95,    43,    80,    95,    47,
      84,    10,    81,    95,     5,    72,    11,    71,    11
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    55,    56,    56,    57,    57,    57,
      58,    58,    59,    60,    60,    61,    61,    62,    62,    62,
      62,    62,    62,    63,    64,    65,    66,    66,    67,    67,
      68,    68,    69,    70,    71,    71,    72,    72,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    74,    75,
      75,    76,    77,    77,    79,    80,    78,    81,    81,    82,
      83,    84,    84,    85,    86,    87,    87,    88,    89,    90,
      91,    91,    92,    92,    93,    93,    93,    93,    93,    94,
      94,    94,    94,    94,    94,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    96,    96,
      97,    97
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     2,     0,     3,     3,     5,     3,     1,
       3,     1,     2,     1,     0,     4,     3,     1,     1,     1,
       1,     1,     1,     5,     5,     1,     1,     0,     5,     3,
       3,     1,     2,     2,     1,     0,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       3,     3,     2,     3,     0,     0,     8,     2,     0,     5,
      10,     2,     0,     5,     2,     1,     0,     1,     1,     2,
       1,     0,     4,     3,     3,     3,     2,     3,     3,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       2,     2,     3,     3,     1,     5,     1,     1,     1,     0,
       3,     1
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
        case 3:
#line 29 "sol.y" /* yacc.c:1646  */
    {	printf("hi declist");
			}
#line 1474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 63 "sol.y" /* yacc.c:1646  */
    {	printf("success");
		}
#line 1481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 67 "sol.y" /* yacc.c:1646  */
    {	char * code;
			(yyval.ptr)=createnode(code, (yyvsp[-2].ptr)->st_ln, (yyvsp[-2].ptr)->no_ln+(yyvsp[0].ptr)->no_ln);
		}
#line 1489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 71 "sol.y" /* yacc.c:1646  */
    {	(yyval.ptr)=(yyvsp[0].ptr);
		}
#line 1496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 75 "sol.y" /* yacc.c:1646  */
    {	(yyval.ptr)=(yyvsp[0].ptr);
	}
#line 1503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 78 "sol.y" /* yacc.c:1646  */
    {	(yyval.ptr)=(yyvsp[0].ptr);
	}
#line 1510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 83 "sol.y" /* yacc.c:1646  */
    {	char *code;
	nd++;
	code=funadd5(in_tos(nd)," ",(yyvsp[-2].ptr)->code," = ",(yyvsp[0].ptr)->evar);
	printf("%s\n",code);
	if((yyvsp[0].ptr)->st_ln==0)
		(yyval.ptr)=createnode(code,nd,1+(yyvsp[0].ptr)->no_ln);
	else
		(yyval.ptr)=createnode(code,(yyvsp[0].ptr)->st_ln,1+(yyvsp[0].ptr)->no_ln);
}
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 94 "sol.y" /* yacc.c:1646  */
    {	(yyval.ptr) = (yyvsp[0].ptr);
	}
#line 1531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 102 "sol.y" /* yacc.c:1646  */
    {nd++;}
#line 1537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 102 "sol.y" /* yacc.c:1646  */
    {nd++;}
#line 1543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 103 "sol.y" /* yacc.c:1646  */
    {	char * code=funadd5(in_tos((yyvsp[-6].ptr)->st_ln+(yyvsp[-6].ptr)->no_ln)," jmpn ",(yyvsp[-6].ptr)->evar," ",in_tos((yyvsp[-1].ptr)->st_ln));
		printf("%s\n",code);
		(yyval.ptr)=createnode(code,(yyvsp[-6].ptr)->st_ln,(yyvsp[-6].ptr)->no_ln+(yyvsp[-3].ptr)->no_ln+(yyvsp[-1].ptr)->no_ln+1);
		printf("%d goto %d\n",(yyvsp[-3].ptr)->st_ln+(yyvsp[-3].ptr)->no_ln,(yyvsp[-1].ptr)->st_ln+(yyvsp[-1].ptr)->no_ln);
		//$$=createnode("",$2->st_ln,$2->no_ln+$5->no_ln+$6->no_ln+1);
	}
#line 1554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 111 "sol.y" /* yacc.c:1646  */
    {	(yyval.ptr)=(yyvsp[0].ptr);
			//printf("hi");
		}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 115 "sol.y" /* yacc.c:1646  */
    {	(yyval.ptr)=createnode("",0,0);
		}
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 136 "sol.y" /* yacc.c:1646  */
    {	(yyval.ptr)=yylval.ptr;
		(yyval.ptr)->evar=(yyval.ptr)->code;
	}
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 145 "sol.y" /* yacc.c:1646  */
    {	char *code;
	varc++;
	nd++;
	code=funadd5(in_tos(nd)," var",in_tos(varc)," = ",(yyvsp[-2].ptr)->evar);
	code=funadd3(code," <> ",(yyvsp[0].ptr)->evar);
	printf("%s\n",code);
	if((yyvsp[-2].ptr)->st_ln!=0)
		(yyval.ptr)=createnode(code,(yyvsp[-2].ptr)->st_ln,1+(yyvsp[-2].ptr)->no_ln+(yyvsp[0].ptr)->no_ln);
	else
		(yyval.ptr)=createnode(code,nd,1+(yyvsp[-2].ptr)->no_ln+(yyvsp[0].ptr)->no_ln);
	(yyval.ptr)->evar=funadd2("var",in_tos(varc));
}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 162 "sol.y" /* yacc.c:1646  */
    { (yyval.ptr)=expr2((yyvsp[-2].ptr) ,(yyvsp[0].ptr)," + ",&nd,&varc);}
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 164 "sol.y" /* yacc.c:1646  */
    { (yyval.ptr)=expr2((yyvsp[-2].ptr) ,(yyvsp[0].ptr)," - ",&nd,&varc);}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 166 "sol.y" /* yacc.c:1646  */
    { (yyval.ptr)=expr2((yyvsp[-2].ptr) ,(yyvsp[0].ptr)," * ",&nd,&varc);}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 168 "sol.y" /* yacc.c:1646  */
    { (yyval.ptr)=expr2((yyvsp[-2].ptr) ,(yyvsp[0].ptr)," / ",&nd,&varc);}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 170 "sol.y" /* yacc.c:1646  */
    { (yyval.ptr)=expr2((yyvsp[-2].ptr) ,(yyvsp[0].ptr)," % ",&nd,&varc);}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 173 "sol.y" /* yacc.c:1646  */
    { (yyval.ptr)=(yyvsp[-1].ptr);}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 175 "sol.y" /* yacc.c:1646  */
    { (yyval.ptr)=(yyvsp[0].ptr);}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 178 "sol.y" /* yacc.c:1646  */
    {	//printf("%s",yylval.ptr->code);
	(yyval.ptr) = yylval.ptr;
	(yyval.ptr)->evar=(yyval.ptr)->code;
}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 183 "sol.y" /* yacc.c:1646  */
    {	(yyval.ptr) = yylval.ptr;
	(yyval.ptr)->evar=(yyval.ptr)->code;
}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1657 "y.tab.c" /* yacc.c:1646  */
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
#line 191 "sol.y" /* yacc.c:1906  */
 

#include "lex.yy.c" 
extern int yylex();
extern int yyparse();
extern int line_num;

int main() 
{ 
	extern FILE *yyin;  
	yyin = fopen("sampleInput/input3.txt","r");
	yyparse(); 
	if(error!=1) 
		printf("\nInValid Program..!!!!\n\n"); 

	return 0;
} 

void yyerror(const char *str) 
{ 
	fprintf(stderr, "Error at line %d: %s\n", yylineno, str);
	error=0; 
} 
