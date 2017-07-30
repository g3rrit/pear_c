/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     NUMBER = 259,
     FLOAT = 260,
     STRING = 261,
     AR = 262,
     COLON = 263,
     SEMICOLON = 264,
     COMMA = 265,
     DOT = 266,
     L_BRACE = 267,
     R_BRACE = 268,
     L_GBRACE = 269,
     R_GBRACE = 270,
     L_ABRACE = 271,
     R_ABRACE = 272,
     EQUAL = 273,
     ADDRESS = 274,
     TIMES = 275,
     PLUS = 276,
     MINUS = 277,
     DIVIDED = 278,
     MODULO = 279,
     HASH = 280,
     QUOTATION = 281,
     SIZEOF = 282,
     GREATER = 283,
     LESS = 284,
     GREQ = 285,
     LEEQ = 286,
     SAME = 287,
     AND = 288,
     OR = 289,
     NOT = 290,
     NOTEQ = 291,
     VOID = 292,
     I8 = 293,
     I16 = 294,
     I32 = 295,
     I64 = 296,
     U8 = 297,
     U16 = 298,
     U32 = 299,
     U64 = 300,
     F32 = 301,
     F64 = 302,
     BOOL = 303,
     INT = 304,
     RETURN = 305,
     NEW = 306,
     CRT = 307,
     BREAK = 308,
     CONTINUE = 309,
     STRUCT = 310,
     INCLUDE = 311,
     IF = 312,
     ELSE = 313,
     WHILE = 314,
     FOR = 315,
     LOCAL = 316,
     TRUE = 317,
     FALSE = 318,
     NUL = 319
   };
#endif
/* Tokens.  */
#define ID 258
#define NUMBER 259
#define FLOAT 260
#define STRING 261
#define AR 262
#define COLON 263
#define SEMICOLON 264
#define COMMA 265
#define DOT 266
#define L_BRACE 267
#define R_BRACE 268
#define L_GBRACE 269
#define R_GBRACE 270
#define L_ABRACE 271
#define R_ABRACE 272
#define EQUAL 273
#define ADDRESS 274
#define TIMES 275
#define PLUS 276
#define MINUS 277
#define DIVIDED 278
#define MODULO 279
#define HASH 280
#define QUOTATION 281
#define SIZEOF 282
#define GREATER 283
#define LESS 284
#define GREQ 285
#define LEEQ 286
#define SAME 287
#define AND 288
#define OR 289
#define NOT 290
#define NOTEQ 291
#define VOID 292
#define I8 293
#define I16 294
#define I32 295
#define I64 296
#define U8 297
#define U16 298
#define U32 299
#define U64 300
#define F32 301
#define F64 302
#define BOOL 303
#define INT 304
#define RETURN 305
#define NEW 306
#define CRT 307
#define BREAK 308
#define CONTINUE 309
#define STRUCT 310
#define INCLUDE 311
#define IF 312
#define ELSE 313
#define WHILE 314
#define FOR 315
#define LOCAL 316
#define TRUE 317
#define FALSE 318
#define NUL 319




/* Copy the first part of user declarations.  */
#line 1 "./lexyacc/pearlang.y"

#include<stdio.h>
#include<stdlib.h>
#include"fileprod.h"
#include"filealloc.h"
#include"string.h"
#include"dir.h"
#include"globals.h"
#include"stdbool.h"
#include"compiler.h"

#define YYDEBUG 1

extern int yylex();
extern int yyparse();
extern FILE *yyin;
extern int lineNum;

void yyerror(const char* s);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 22 "./lexyacc/pearlang.y"
{
    char *str;
    Func *func;
    Assign *assign;
    Sassign *sassign;
    Struc *struc;
}
/* Line 193 of yacc.c.  */
#line 253 "./src/pearlang.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 266 "./src/pearlang.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  89
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1368

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNRULES -- Number of states.  */
#define YYNSTATES  230

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   319

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    11,    14,    17,    20,    23,
      25,    28,    31,    34,    37,    40,    44,    47,    51,    54,
      58,    63,    66,    69,    72,    76,    81,    87,    90,    93,
      97,    99,   102,   105,   114,   120,   126,   130,   134,   140,
     142,   144,   146,   148,   150,   152,   154,   156,   160,   163,
     170,   177,   185,   190,   192,   196,   198,   203,   208,   213,
     216,   218,   221,   224,   226,   228,   230,   232,   234,   236,
     240,   245,   250,   254,   258,   262,   264,   266,   268,   270,
     272,   274,   276,   278,   280,   282,   287,   292,   297,   300,
     303,   306,   310,   314,   318,   322,   326,   330,   334,   338,
     341,   344,   347,   351,   355,   359,   361,   363,   365,   367,
     369,   371,   373,   375,   377,   379,   381,   383,   385,   387,
     390,   393,   396,   400,   402,   404
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      66,     0,    -1,    66,    92,    -1,    92,    -1,    66,    66,
      -1,    21,    18,    -1,    22,    18,    -1,    20,    18,    -1,
      23,    18,    -1,    69,    -1,    61,    69,    -1,    56,     6,
      -1,     3,    12,    -1,    88,    12,    -1,    70,    89,    -1,
      70,    10,    89,    -1,    70,    13,    -1,     3,     8,    12,
      -1,    72,    85,    -1,    72,    10,    85,    -1,    72,    13,
       7,    90,    -1,    73,    14,    -1,    74,    87,    -1,    74,
      15,    -1,    61,    74,    15,    -1,     3,     8,    55,    14,
      -1,    61,     3,     8,    55,    14,    -1,    76,    84,    -1,
      76,    15,    -1,    77,     8,     3,    -1,    14,    -1,    78,
      87,    -1,    78,    15,    -1,    60,    12,    84,    89,     9,
      89,    13,    79,    -1,    59,    12,    89,    13,    79,    -1,
      57,    12,    89,    13,    79,    -1,    81,    58,    81,    -1,
      81,    58,    79,    -1,    57,    12,    89,    13,    87,    -1,
      28,    -1,    29,    -1,    30,    -1,    31,    -1,    33,    -1,
      34,    -1,    32,    -1,    36,    -1,    50,    89,     9,    -1,
      50,     9,    -1,     3,     8,    90,    18,    89,     9,    -1,
       3,     8,     3,    18,    89,     9,    -1,     3,     8,     3,
      20,    18,    89,     9,    -1,     3,     8,    90,     9,    -1,
      75,    -1,     3,     8,    90,    -1,    73,    -1,     3,    18,
      89,     9,    -1,    89,    18,    89,     9,    -1,    89,    67,
      89,     9,    -1,    89,     9,    -1,    83,    -1,    54,     9,
      -1,    53,     9,    -1,    86,    -1,    84,    -1,    80,    -1,
      81,    -1,    75,    -1,    77,    -1,     3,     7,     3,    -1,
       3,    16,    89,    17,    -1,    88,    16,    89,    17,    -1,
       3,    11,     3,    -1,    88,    11,     3,    -1,    88,     7,
       3,    -1,    71,    -1,    64,    -1,     4,    -1,     5,    -1,
       6,    -1,     3,    -1,    62,    -1,    63,    -1,     6,    -1,
      88,    -1,    27,    12,    90,    13,    -1,    51,     3,    12,
      13,    -1,    52,     3,    12,    13,    -1,    20,    89,    -1,
      19,    89,    -1,    91,    89,    -1,    89,    11,    89,    -1,
      89,     7,    89,    -1,    12,    89,    13,    -1,    89,    21,
      89,    -1,    89,    22,    89,    -1,    89,    20,    89,    -1,
      89,    23,    89,    -1,    89,    24,    89,    -1,    22,    89,
      -1,    21,    89,    -1,    35,    89,    -1,    89,    22,    22,
      -1,    89,    21,    21,    -1,    89,    82,    89,    -1,    37,
      -1,    38,    -1,    39,    -1,    40,    -1,    41,    -1,    42,
      -1,    43,    -1,    44,    -1,    45,    -1,    46,    -1,    47,
      -1,    48,    -1,    49,    -1,     3,    -1,    90,    20,    -1,
      55,    90,    -1,     3,    20,    -1,    12,    90,    13,    -1,
      87,    -1,    68,    -1,    77,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   110,   110,   111,   112,   116,   120,   124,   128,   135,
     138,   145,   159,   164,   169,   174,   183,   193,   212,   217,
     226,   236,   241,   251,   269,   287,   295,   303,   313,   326,
     337,   341,   349,   360,   365,   373,   378,   383,   388,   396,
     397,   398,   399,   400,   401,   402,   403,   407,   413,   420,
     439,   454,   472,   486,   503,   509,   525,   530,   535,   543,
     547,   548,   552,   556,   557,   561,   562,   563,   566,   572,
     577,   582,   587,   592,   597,   605,   606,   607,   608,   609,
     610,   611,   612,   613,   614,   615,   620,   628,   636,   640,
     644,   648,   653,   658,   663,   668,   673,   678,   683,   688,
     692,   696,   700,   705,   710,   719,   720,   721,   722,   723,
     724,   725,   726,   727,   728,   729,   730,   731,   732,   733,
     737,   742,   749,   757,   760,   761
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "NUMBER", "FLOAT", "STRING", "AR",
  "COLON", "SEMICOLON", "COMMA", "DOT", "L_BRACE", "R_BRACE", "L_GBRACE",
  "R_GBRACE", "L_ABRACE", "R_ABRACE", "EQUAL", "ADDRESS", "TIMES", "PLUS",
  "MINUS", "DIVIDED", "MODULO", "HASH", "QUOTATION", "SIZEOF", "GREATER",
  "LESS", "GREQ", "LEEQ", "SAME", "AND", "OR", "NOT", "NOTEQ", "VOID",
  "I8", "I16", "I32", "I64", "U8", "U16", "U32", "U64", "F32", "F64",
  "BOOL", "INT", "RETURN", "NEW", "CRT", "BREAK", "CONTINUE", "STRUCT",
  "INCLUDE", "IF", "ELSE", "WHILE", "FOR", "LOCAL", "TRUE", "FALSE", "NUL",
  "$accept", "program", "equals", "preproc", "include_s", "s_fcall",
  "fcall", "s_funcdef", "funcdef", "s_func", "func", "s_struct", "struct",
  "block_s", "block", "loop", "condition", "conditionalOp", "areturn",
  "assignment", "declaration", "allotment", "statement", "access",
  "expression", "type", "typecast", "line", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    66,    66,    67,    67,    67,    67,    68,
      68,    69,    70,    70,    70,    70,    71,    72,    72,    72,
      73,    74,    74,    75,    75,    76,    76,    76,    77,    77,
      78,    78,    79,    80,    80,    81,    81,    81,    81,    82,
      82,    82,    82,    82,    82,    82,    82,    83,    83,    84,
      84,    84,    84,    84,    85,    85,    86,    86,    86,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    88,
      88,    88,    88,    88,    88,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    91,    92,    92,    92
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     2,     2,     2,     2,     1,
       2,     2,     2,     2,     2,     3,     2,     3,     2,     3,
       4,     2,     2,     2,     3,     4,     5,     2,     2,     3,
       1,     2,     2,     8,     5,     5,     3,     3,     5,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     6,
       6,     7,     4,     1,     3,     1,     4,     4,     4,     2,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     3,
       4,     4,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     3,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    80,    77,    78,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,    82,    76,     0,   124,     9,     0,    75,
       0,     0,     0,    53,     0,    68,    65,    66,    60,    64,
      63,   123,    84,     0,     0,     3,     0,     0,     0,    12,
       0,     0,    80,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,     0,     0,     0,    80,
      89,    88,   100,    99,     0,   101,    48,     0,     0,     0,
      62,    61,    11,     0,     0,     0,     0,    10,     0,     1,
       4,     2,     0,    16,    14,     0,     0,     0,    55,    18,
      21,    23,     0,    68,    22,     0,    28,     0,    53,    27,
       0,     0,     0,     0,    13,     0,     0,    59,     0,     0,
       0,     0,     0,     0,     0,    39,    40,    41,    42,    45,
      43,    44,    46,     0,     0,    90,    69,   118,    17,     0,
       0,    72,     0,     0,   121,   118,   120,    93,     0,     0,
       0,     0,   122,   119,     0,    47,     0,     0,     0,     0,
       0,     0,    24,    15,     0,    19,     0,     0,     0,    29,
      30,     0,    37,    36,    74,    73,     0,    92,    91,     0,
       7,    96,     5,   103,    94,     6,   102,    95,     8,    97,
      98,     0,   104,     0,   121,    25,    52,     0,    70,    56,
      85,    86,    87,     0,     0,     0,     0,    54,    20,     0,
      32,    31,    71,    57,    58,     0,     0,     0,    35,    38,
      34,     0,    26,    50,     0,    49,     0,    51,     0,    33
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    90,   133,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   103,   171,   172,    36,    37,   134,    38,    39,
      99,    40,    41,    42,    43,   140,    44,    91
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -177
static const yytype_int16 yypact[] =
{
     308,   124,  -177,  -177,  -177,   255,   703,   703,   703,   703,
       5,   703,   576,    17,    18,    23,    26,    32,    37,    41,
      43,    12,  -177,  -177,  -177,   193,  -177,  -177,    38,  -177,
      27,    42,   370,  -177,    10,    61,  -177,    24,  -177,  -177,
    -177,  -177,    69,   912,   703,  -177,    67,   756,    72,  -177,
     703,   703,   114,  -177,  -177,  -177,  -177,  -177,  -177,  -177,
    -177,  -177,  -177,  -177,  -177,  -177,   850,   940,    16,    81,
    1332,  1332,  1332,  1332,   850,  1332,  -177,   968,    71,    74,
    -177,  -177,  -177,   703,   703,    11,    76,  -177,   432,  -177,
     308,  -177,   703,  -177,  1332,    86,    92,    91,  -177,  -177,
    -177,  -177,   100,    61,  -177,    96,  -177,   102,  -177,  -177,
     103,     4,   104,   105,  -177,   703,   703,  -177,   703,   703,
     155,   596,   649,   669,   703,  -177,  -177,  -177,  -177,  -177,
    -177,  -177,  -177,   703,   703,  1332,  -177,     6,  -177,   803,
      13,  -177,   996,  1024,  -177,    89,   107,  -177,   703,   723,
     757,   703,  -177,  -177,    34,  -177,    99,   109,  1052,  1080,
     703,     7,  -177,  1332,   822,  -177,   850,   869,   112,  -177,
    -177,   494,  -177,    24,  -177,  -177,  1108,  1332,  1332,  1136,
    -177,  1332,  -177,   703,  1332,  -177,   703,  1332,  -177,  1332,
    1332,  1164,  1332,   703,   106,  -177,  -177,   703,  -177,  -177,
    -177,  -177,  -177,   514,   119,  1192,   123,   107,   107,   111,
    -177,  -177,  -177,  -177,  -177,  1220,   703,  1248,  -177,  -177,
    -177,   703,  -177,  -177,  1276,  -177,  1304,  -177,   119,  -177
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -177,   138,  -177,  -177,   120,  -177,  -177,  -177,   -19,   -11,
     -22,  -177,     9,  -177,  -176,  -177,    39,  -177,  -177,   -18,
      52,  -177,   -24,  -177,    -5,     0,  -177,   149
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      67,    70,    71,    72,    73,    68,    75,    77,   104,    35,
      88,    98,   108,   105,   105,    86,   109,    74,   170,   138,
      78,    79,   196,    94,   193,   106,   194,   218,   220,   152,
      95,   197,    80,   153,    35,    81,   153,    96,    82,   135,
      97,    69,     2,     3,     4,   142,   143,   200,    92,    83,
       5,    93,   229,    84,   153,    85,   100,     6,     7,     8,
       9,    18,   206,   108,   104,    10,   146,   160,    17,   110,
     136,   107,   107,    11,   154,   141,   112,    98,   158,   159,
     113,   114,   111,   156,   161,   115,   157,   163,    46,    13,
      14,    88,    48,    49,   164,    95,    88,    50,   166,    35,
      22,    23,    24,    86,   167,   168,   169,   174,   175,   144,
     176,   177,   201,   178,   179,   181,   184,   187,   189,   190,
     209,    46,   202,   138,   216,    48,    49,   153,   191,   192,
      50,    46,    47,   170,   144,    48,    49,   222,    25,   146,
      50,    87,    51,   181,   184,   187,   189,   211,   165,    45,
     173,     0,     0,     0,     0,   205,     0,     0,    69,     2,
       3,     4,     0,     0,   207,     0,   208,     5,     0,     0,
       0,     0,     0,   180,     6,     7,     8,     9,    72,   219,
       0,    73,    10,     0,     0,     0,     0,     0,   215,     0,
      11,     0,   217,    89,     0,     0,     1,     2,     3,     4,
       0,     0,     0,     0,     0,     5,    13,    14,     0,     0,
       0,   224,     6,     7,     8,     9,   226,    22,    23,    24,
      10,     0,     0,     0,     0,     0,     0,     0,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,    14,    15,    16,     0,    17,
      18,     0,    19,    20,    21,    22,    23,    24,    52,     2,
       3,     4,     0,     0,     0,     0,     0,     5,     0,     0,
       0,     0,     0,     0,     6,     7,     8,     9,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,     0,     0,
      11,     0,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     0,    13,    14,     0,     0,
      66,     1,     2,     3,     4,     0,     0,    22,    23,    24,
       5,     0,     0,     0,     0,     0,     0,     6,     7,     8,
       9,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,    18,     0,    19,    20,    21,
      22,    23,    24,     1,     2,     3,     4,     0,     0,     0,
       0,     0,     5,     0,     0,   101,     0,     0,     0,     6,
       7,     8,     9,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,    14,    15,    16,     0,     0,    18,     0,    19,
      20,   102,    22,    23,    24,     1,     2,     3,     4,     0,
       0,     0,     0,     0,     5,     0,     0,   162,     0,     0,
       0,     6,     7,     8,     9,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,    14,    15,    16,     0,     0,    18,
       0,    19,    20,   102,    22,    23,    24,     1,     2,     3,
       4,     0,     0,     0,     0,     0,     5,     0,     0,   210,
       0,     0,     0,     6,     7,     8,     9,     1,     2,     3,
       4,    10,     0,     0,     0,     0,     5,     0,   170,    11,
       0,     0,     0,     6,     7,     8,     9,     0,     0,     0,
       0,    10,     0,     0,    12,    13,    14,    15,    16,    11,
       0,    18,     0,    19,    20,   102,    22,    23,    24,     0,
       0,     0,     0,     0,    12,    13,    14,    15,    16,     0,
       0,    18,     0,    19,    20,   102,    22,    23,    24,    69,
       2,     3,     4,     0,     0,    76,     0,     0,     5,     0,
       0,     0,     0,     0,     0,     6,     7,     8,     9,    69,
       2,     3,     4,    10,     0,     0,     0,     0,     5,     0,
       0,    11,     0,     0,   182,     6,     7,   183,     9,     0,
       0,     0,     0,    10,     0,     0,     0,    13,    14,     0,
       0,    11,     0,     0,     0,     0,     0,     0,    22,    23,
      24,     0,     0,     0,     0,     0,     0,    13,    14,     0,
       0,     0,    69,     2,     3,     4,     0,     0,    22,    23,
      24,     5,     0,     0,     0,     0,     0,   185,     6,     7,
       8,   186,    69,     2,     3,     4,    10,     0,     0,     0,
       0,     5,     0,     0,    11,     0,     0,   188,     6,     7,
       8,     9,     0,     0,     0,     0,    10,     0,     0,     0,
      13,    14,     0,     0,    11,     0,    69,     2,     3,     4,
       0,    22,    23,    24,     0,     5,     0,     0,     0,     0,
      13,    14,     6,     7,     8,     9,    69,     2,     3,     4,
      10,    22,    23,    24,     0,     5,     0,     0,    11,     0,
       0,     0,     6,     7,   183,     9,     0,     0,     0,     0,
      10,     0,     0,     0,    13,    14,     0,     0,    11,   137,
      69,     2,     3,     4,     0,    22,    23,    24,   138,     5,
       0,     0,     0,     0,    13,    14,     6,     7,     8,   186,
       0,     0,     0,     0,    10,    22,    23,    24,     0,     0,
       0,     0,    11,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,   145,     0,    13,    14,
       0,   139,     0,     0,     0,     0,     0,   195,     0,    22,
      23,    24,     0,     0,     0,   145,     0,     0,     0,     0,
       0,     0,     0,     0,   138,     0,     0,     0,     0,     0,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,   145,     0,     0,     0,     0,    66,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,   137,     0,     0,     0,     0,    66,     0,     0,
       0,   138,     0,     0,     0,     0,     0,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
       0,     0,     0,     0,     0,    66,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,   116,
       0,   117,     0,   118,    66,     0,     0,     0,     0,     0,
     119,     0,   120,   121,   122,   123,   124,     0,     0,     0,
     125,   126,   127,   128,   129,   130,   131,   116,   132,     0,
       0,   118,     0,   147,     0,     0,     0,     0,     0,     0,
     148,   149,   150,   151,   124,     0,     0,     0,   125,   126,
     127,   128,   129,   130,   131,   116,   132,   155,     0,   118,
       0,     0,     0,     0,     0,     0,     0,     0,   148,   149,
     150,   151,   124,     0,     0,     0,   125,   126,   127,   128,
     129,   130,   131,   116,   132,     0,     0,   118,     0,     0,
       0,     0,     0,   198,     0,     0,   148,   149,   150,   151,
     124,     0,     0,     0,   125,   126,   127,   128,   129,   130,
     131,   116,   132,   199,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,   148,   149,   150,   151,   124,     0,
       0,     0,   125,   126,   127,   128,   129,   130,   131,   116,
     132,     0,     0,   118,     0,   203,     0,     0,     0,     0,
       0,     0,   148,   149,   150,   151,   124,     0,     0,     0,
     125,   126,   127,   128,   129,   130,   131,   116,   132,     0,
       0,   118,     0,   204,     0,     0,     0,     0,     0,     0,
     148,   149,   150,   151,   124,     0,     0,     0,   125,   126,
     127,   128,   129,   130,   131,   116,   132,     0,     0,   118,
       0,     0,     0,     0,     0,   212,     0,     0,   148,   149,
     150,   151,   124,     0,     0,     0,   125,   126,   127,   128,
     129,   130,   131,   116,   132,   213,     0,   118,     0,     0,
       0,     0,     0,     0,     0,     0,   148,   149,   150,   151,
     124,     0,     0,     0,   125,   126,   127,   128,   129,   130,
     131,   116,   132,   214,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,   148,   149,   150,   151,   124,     0,
       0,     0,   125,   126,   127,   128,   129,   130,   131,   116,
     132,   221,     0,   118,     0,     0,     0,     0,     0,     0,
       0,     0,   148,   149,   150,   151,   124,     0,     0,     0,
     125,   126,   127,   128,   129,   130,   131,   116,   132,   223,
       0,   118,     0,     0,     0,     0,     0,     0,     0,     0,
     148,   149,   150,   151,   124,     0,     0,     0,   125,   126,
     127,   128,   129,   130,   131,   116,   132,   225,     0,   118,
       0,     0,     0,     0,     0,     0,     0,     0,   148,   149,
     150,   151,   124,     0,     0,     0,   125,   126,   127,   128,
     129,   130,   131,   116,   132,   227,     0,   118,     0,     0,
       0,     0,     0,     0,     0,     0,   148,   149,   150,   151,
     124,     0,     0,     0,   125,   126,   127,   128,   129,   130,
     131,   116,   132,     0,     0,   118,     0,   228,     0,     0,
       0,     0,     0,     0,   148,   149,   150,   151,   124,     0,
       0,     0,   125,   126,   127,   128,   129,   130,   131,   116,
     132,     0,     0,   118,     0,     0,     0,     0,     0,     0,
       0,     0,   148,   149,   150,   151,   124,     0,     0,     0,
     125,   126,   127,   128,   129,   130,   131,     0,   132
};

static const yytype_int16 yycheck[] =
{
       5,     6,     7,     8,     9,     5,    11,    12,    32,     0,
      21,    30,    34,     3,     3,     3,    34,    12,    14,    12,
       3,     3,     9,    28,    18,    15,    20,   203,   204,    13,
       3,    18,     9,    20,    25,     9,    20,    10,     6,    44,
      13,     3,     4,     5,     6,    50,    51,    13,    10,    12,
      12,    13,   228,    12,    20,    12,    14,    19,    20,    21,
      22,    57,    55,    85,    88,    27,    66,    85,    56,     8,
       3,    61,    61,    35,    74,     3,     7,    96,    83,    84,
      11,    12,    58,    12,     8,    16,    12,    92,     7,    51,
      52,   102,    11,    12,     8,     3,   107,    16,     7,    90,
      62,    63,    64,     3,     8,     3,     3,     3,     3,    20,
     115,   116,    13,   118,   119,   120,   121,   122,   123,   124,
       8,     7,    13,    12,    18,    11,    12,    20,   133,   134,
      16,     7,     8,    14,    20,    11,    12,    14,     0,   139,
      16,    21,    18,   148,   149,   150,   151,   171,    96,     0,
     111,    -1,    -1,    -1,    -1,   160,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,   164,    -1,   166,    12,    -1,    -1,
      -1,    -1,    -1,    18,    19,    20,    21,    22,   183,   203,
      -1,   186,    27,    -1,    -1,    -1,    -1,    -1,   193,    -1,
      35,    -1,   197,     0,    -1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    51,    52,    -1,    -1,
      -1,   216,    19,    20,    21,    22,   221,    62,    63,    64,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    -1,    56,
      57,    -1,    59,    60,    61,    62,    63,    64,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    51,    52,    -1,    -1,
      55,     3,     4,     5,     6,    -1,    -1,    62,    63,    64,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    -1,    56,    57,    -1,    59,    60,    61,
      62,    63,    64,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    52,    53,    54,    -1,    -1,    57,    -1,    59,
      60,    61,    62,    63,    64,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    15,    -1,    -1,
      -1,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    52,    53,    54,    -1,    -1,    57,
      -1,    59,    60,    61,    62,    63,    64,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    15,
      -1,    -1,    -1,    19,    20,    21,    22,     3,     4,     5,
       6,    27,    -1,    -1,    -1,    -1,    12,    -1,    14,    35,
      -1,    -1,    -1,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    50,    51,    52,    53,    54,    35,
      -1,    57,    -1,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,    -1,
      -1,    57,    -1,    59,    60,    61,    62,    63,    64,     3,
       4,     5,     6,    -1,    -1,     9,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,     3,
       4,     5,     6,    27,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    35,    -1,    -1,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    51,    52,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    62,    63,
      64,    12,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,
      21,    22,     3,     4,     5,     6,    27,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    35,    -1,    -1,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      51,    52,    -1,    -1,    35,    -1,     3,     4,     5,     6,
      -1,    62,    63,    64,    -1,    12,    -1,    -1,    -1,    -1,
      51,    52,    19,    20,    21,    22,     3,     4,     5,     6,
      27,    62,    63,    64,    -1,    12,    -1,    -1,    35,    -1,
      -1,    -1,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    51,    52,    -1,    -1,    35,     3,
       3,     4,     5,     6,    -1,    62,    63,    64,    12,    12,
      -1,    -1,    -1,    -1,    51,    52,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    62,    63,    64,    -1,    -1,
      -1,    -1,    35,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,     3,    -1,    51,    52,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    14,    -1,    62,
      63,    64,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,     3,    -1,    -1,    -1,    -1,    55,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,     3,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    55,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,     7,
      -1,     9,    -1,    11,    55,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    34,     7,    36,    -1,
      -1,    11,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    33,    34,     7,    36,     9,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    34,     7,    36,    -1,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    17,    -1,    -1,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    28,    29,    30,    31,    32,    33,
      34,     7,    36,     9,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    34,     7,
      36,    -1,    -1,    11,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    34,     7,    36,    -1,
      -1,    11,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    33,    34,     7,    36,    -1,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    34,     7,    36,     9,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    28,    29,    30,    31,    32,    33,
      34,     7,    36,     9,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    34,     7,
      36,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    34,     7,    36,     9,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    33,    34,     7,    36,     9,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    34,     7,    36,     9,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    28,    29,    30,    31,    32,    33,
      34,     7,    36,    -1,    -1,    11,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    34,     7,
      36,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    34,    -1,    36
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    12,    19,    20,    21,    22,
      27,    35,    50,    51,    52,    53,    54,    56,    57,    59,
      60,    61,    62,    63,    64,    66,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    80,    81,    83,    84,
      86,    87,    88,    89,    91,    92,     7,     8,    11,    12,
      16,    18,     3,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    55,    89,    90,     3,
      89,    89,    89,    89,    12,    89,     9,    89,     3,     3,
       9,     9,     6,    12,    12,    12,     3,    69,    74,     0,
      66,    92,    10,    13,    89,     3,    10,    13,    73,    85,
      14,    15,    61,    77,    87,     3,    15,    61,    75,    84,
       8,    58,     7,    11,    12,    16,     7,     9,    11,    18,
      20,    21,    22,    23,    24,    28,    29,    30,    31,    32,
      33,    34,    36,    67,    82,    89,     3,     3,    12,    55,
      90,     3,    89,    89,    20,     3,    90,    13,    20,    21,
      22,    23,    13,    20,    90,     9,    12,    12,    89,    89,
      84,     8,    15,    89,     8,    85,     7,     8,     3,     3,
      14,    78,    79,    81,     3,     3,    89,    89,    89,    89,
      18,    89,    18,    21,    89,    18,    22,    89,    18,    89,
      89,    89,    89,    18,    20,    14,     9,    18,    17,     9,
      13,    13,    13,    13,    13,    89,    55,    90,    90,     8,
      15,    87,    17,     9,     9,    89,    18,    89,    79,    87,
      79,     9,    14,     9,    89,     9,    89,     9,    13,    79
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 5:
#line 116 "./lexyacc/pearlang.y"
    {
            appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
            (yyval.str)=(yyvsp[(1) - (2)].str);
        ;}
    break;

  case 6:
#line 120 "./lexyacc/pearlang.y"
    {
            appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
            (yyval.str)=(yyvsp[(1) - (2)].str);
        ;}
    break;

  case 7:
#line 124 "./lexyacc/pearlang.y"
    {
            appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
            (yyval.str)=(yyvsp[(1) - (2)].str);
        ;}
    break;

  case 8:
#line 128 "./lexyacc/pearlang.y"
    {
            appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
            (yyval.str)=(yyvsp[(1) - (2)].str);
        ;}
    break;

  case 9:
#line 135 "./lexyacc/pearlang.y"
    {
            appendStrF(&(activeFT.htdef), 1, &(yyvsp[(1) - (1)].str));
        ;}
    break;

  case 10:
#line 138 "./lexyacc/pearlang.y"
    {
            appendStrF(&activeFT.stdef, 1, &(yyvsp[(2) - (2)].str));
            free((yyvsp[(1) - (2)].str));
        ;}
    break;

  case 11:
#line 145 "./lexyacc/pearlang.y"
    {
            printf("include_s");
            char *incC = (yyvsp[(2) - (2)].str);
            //free(&incC[strlen(incC)]);
            incC[strlen(incC) - 1] = 0;
            char *arr[] = { (yyvsp[(1) - (2)].str), incC, createStr(".h\"\n")};
            char *res = createStr("#");
            appendStrF(&res, 3, arr);
            (yyval.str) = res;
        ;}
    break;

  case 12:
#line 159 "./lexyacc/pearlang.y"
    {
            printf("fcall \n");
            appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
            (yyval.str) = (yyvsp[(1) - (2)].str);
        ;}
    break;

  case 13:
#line 164 "./lexyacc/pearlang.y"
    {
            printf("fcall \n");
            appendStrF(&(yyvsp[(1) - (2)].str), 1,&(yyvsp[(2) - (2)].str));
            (yyval.str) = (yyvsp[(1) - (2)].str);
        ;}
    break;

  case 14:
#line 169 "./lexyacc/pearlang.y"
    {
            printf("fcall \n");
            appendStrF(&(yyvsp[(1) - (2)].str), 1,&(yyvsp[(2) - (2)].str));
            (yyval.str) = (yyvsp[(1) - (2)].str);
        ;}
    break;

  case 15:
#line 174 "./lexyacc/pearlang.y"
    {
            printf("fcall \n");
            char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
            appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
            (yyval.str) = (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 16:
#line 183 "./lexyacc/pearlang.y"
    {
            printf("fcall \n");
            appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
            (yyval.str) = (yyvsp[(1) - (2)].str);
        ;}
    break;

  case 17:
#line 193 "./lexyacc/pearlang.y"
    {
            printf("s_funcdef \n");
            gsEnterFunc(createStr((yyvsp[(1) - (3)].str)));
            Func *func = malloc(sizeof(Func));
            if(globalS->inStruct)
            {
                char *arr[] = { createStr(globalS->structName), createStr("_")};
                func->idpre = createStr("__");
                appendStrF(&func->idpre, 2, arr);
            }
            else
            {
                func->idpre = createStr("");
            }
            func->id = (yyvsp[(1) - (3)].str);
            func->def = (yyvsp[(3) - (3)].str);
            (yyval.func) = func;
            free((yyvsp[(2) - (3)].str));
        ;}
    break;

  case 18:
#line 212 "./lexyacc/pearlang.y"
    {
            printf("s_funcdef \n");
            appendStrF(&((yyvsp[(1) - (2)].func)->def),1, &(yyvsp[(2) - (2)].str));
            (yyval.func) = (yyvsp[(1) - (2)].func);
        ;}
    break;

  case 19:
#line 217 "./lexyacc/pearlang.y"
    {
            printf("s_funcdef \n");
            char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
            appendStrF(&((yyvsp[(1) - (3)].func)->def), 2, arr);
            (yyval.func) = (yyvsp[(1) - (3)].func);
        ;}
    break;

  case 20:
#line 226 "./lexyacc/pearlang.y"
    {
            printf("funcdef \n");
            appendStrF(&((yyvsp[(1) - (4)].func)->def),1,&(yyvsp[(2) - (4)].str));
            (yyvsp[(1) - (4)].func)->type = (yyvsp[(4) - (4)].str);
            (yyval.func) = (yyvsp[(1) - (4)].func);
            free((yyvsp[(3) - (4)].str));
        ;}
    break;

  case 21:
#line 236 "./lexyacc/pearlang.y"
    {
            printf("s_func \n");
            (yyvsp[(1) - (2)].func)->body = (yyvsp[(2) - (2)].str);
            (yyval.func) = (yyvsp[(1) - (2)].func);
        ;}
    break;

  case 22:
#line 241 "./lexyacc/pearlang.y"
    {
            printf("s_func \n");
            char *snl = "\n";
            appendStr(&((yyvsp[(1) - (2)].func)->body),1,&snl);
            appendStrF(&((yyvsp[(1) - (2)].func)->body), 1,&(yyvsp[(2) - (2)].str));
            (yyval.func) = (yyvsp[(1) - (2)].func);
        ;}
    break;

  case 23:
#line 251 "./lexyacc/pearlang.y"
    {
        printf("func \n");
        appendStrF(&((yyvsp[(1) - (2)].func)->body),1,&(yyvsp[(2) - (2)].str));
        char *snl = "\n";
        appendStr(&((yyvsp[(1) - (2)].func)->body),1,&snl);
        (yyval.func) = (yyvsp[(1) - (2)].func);
  
        //printf("function finished: \n type: %s \n id: %s \n def:  %s \n body: \n %s \n", $1->type, $1->id, $1->def, $1->body);
        if(globalS->inStruct)
        {
            addFuncToFile((yyvsp[(1) - (2)].func),1);
        }
        else
        {
            addFuncToFile((yyvsp[(1) - (2)].func),0);
        }
        gsExitFunc();
    ;}
    break;

  case 24:
#line 269 "./lexyacc/pearlang.y"
    {
        printf("local func \n");
        appendStrF(&((yyvsp[(2) - (3)].func)->body),1,&(yyvsp[(3) - (3)].str));
        char *snl = "\n";
        appendStr(&((yyvsp[(2) - (3)].func)->body),1,&snl);
        (yyval.func) = (yyvsp[(2) - (3)].func);
  
        //printf("function finished: \n type: %s \n id: %s \n def:  %s \n body: \n %s \n", $2->type, $2->id, $2->def, $2->body);
        addFuncToFile((yyvsp[(2) - (3)].func),1);
        gsExitFunc();
    ;}
    break;

  case 25:
#line 287 "./lexyacc/pearlang.y"
    {
            printf("s_struct \n");
            gsEnterStruct(createStr((yyvsp[(1) - (4)].str)), false);
            Struc *struc = createStruct(); 
            struc->id = (yyvsp[(1) - (4)].str);
            (yyval.struc) = struc;
            free((yyvsp[(2) - (4)].str));              
        ;}
    break;

  case 26:
#line 295 "./lexyacc/pearlang.y"
    {
            printf("s_struct \n");
            gsEnterStruct(createStr((yyvsp[(1) - (5)].str)), true);
            Struc *struc = createStruct(); 
            struc->id = (yyvsp[(2) - (5)].str);
            (yyval.struc) = struc;
            free((yyvsp[(2) - (5)].str));              
        ;}
    break;

  case 27:
#line 303 "./lexyacc/pearlang.y"
    {
            printf("s_struct \n");
            appendAssignStruct((yyvsp[(1) - (2)].struc),(yyvsp[(2) - (2)].assign)); 
            (yyval.struc) = (yyvsp[(1) - (2)].struc);

            printStruct((yyvsp[(1) - (2)].struc));
        ;}
    break;

  case 28:
#line 313 "./lexyacc/pearlang.y"
    {
            printf("struct \n");
            if(globalS->localS)
            {
                addStructToFile((yyvsp[(1) - (2)].struc),1);
            }
            else
            {
                addStructToFile((yyvsp[(1) - (2)].struc),0);
            }
            (yyval.struc) = (yyvsp[(1) - (2)].struc);
            gsExitStruct();
        ;}
    break;

  case 29:
#line 326 "./lexyacc/pearlang.y"
    {
            addSingleToFile((yyvsp[(1) - (3)].struc),(yyvsp[(3) - (3)].str),globalS->lastLocal);
            free((yyvsp[(2) - (3)].str));
        ;}
    break;

  case 30:
#line 337 "./lexyacc/pearlang.y"
    { 
            (yyval.str) = createStr("{\n");
            free((yyvsp[(1) - (1)].str));
        ;}
    break;

  case 31:
#line 341 "./lexyacc/pearlang.y"
    {
            char *arr[] = { (yyvsp[(2) - (2)].str), createStr("\n")};
            appendStrF(&(yyvsp[(1) - (2)].str),2,arr);
            (yyval.str) = (yyvsp[(1) - (2)].str);
        ;}
    break;

  case 32:
#line 349 "./lexyacc/pearlang.y"
    {
            appendStrF(&(yyvsp[(1) - (2)].str), 1, &(yyvsp[(2) - (2)].str));
            (yyval.str) = (yyvsp[(1) - (2)].str);
        ;}
    break;

  case 33:
#line 360 "./lexyacc/pearlang.y"
    {
            char *arr[] = { (yyvsp[(2) - (8)].str), createStrAssign((yyvsp[(3) - (8)].assign)), (yyvsp[(4) - (8)].str), (yyvsp[(5) - (8)].str), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str) };           
            appendStrF(&(yyvsp[(1) - (8)].str),7, arr);
            (yyval.str) = (yyvsp[(1) - (8)].str);
        ;}
    break;

  case 34:
#line 365 "./lexyacc/pearlang.y"
    {
            char *arr[] = { (yyvsp[(2) - (5)].str), (yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].str), (yyvsp[(5) - (5)].str)};
            appendStrF(&(yyvsp[(1) - (5)].str), 4, arr);
            (yyval.str) = (yyvsp[(1) - (5)].str);
        ;}
    break;

  case 35:
#line 373 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (5)].str), (yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].str), (yyvsp[(5) - (5)].str)};
                appendStrF(&(yyvsp[(1) - (5)].str), 4, arr);
                (yyval.str) = (yyvsp[(1) - (5)].str);
            ;}
    break;

  case 36:
#line 378 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str), createStr(" "), (yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str), 3, arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 37:
#line 383 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str) };
                appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 38:
#line 388 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (5)].str), (yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].str), (yyvsp[(5) - (5)].str)};
                appendStrF(&(yyvsp[(1) - (5)].str), 4, arr);
                (yyval.str) = (yyvsp[(1) - (5)].str);
            ;}
    break;

  case 39:
#line 396 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 40:
#line 397 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 41:
#line 398 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 42:
#line 399 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 43:
#line 400 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 44:
#line 401 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 45:
#line 402 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 46:
#line 403 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 47:
#line 407 "./lexyacc/pearlang.y"
    {
            printf("areturn \n");
            char *arr[] = {createStr(" "),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
            appendStrF(&(yyvsp[(1) - (3)].str),3,arr);
            (yyval.str) = (yyvsp[(1) - (3)].str);
       ;}
    break;

  case 48:
#line 413 "./lexyacc/pearlang.y"
    {
            appendStr(&(yyvsp[(1) - (2)].str), 1, &(yyvsp[(2) - (2)].str));
            (yyval.str) = (yyvsp[(1) - (2)].str);
        ;}
    break;

  case 49:
#line 420 "./lexyacc/pearlang.y"
    {
                printf("assignment \n");
                /*char *arr[] = {$1, $4, $5,$6};
                appendStrF(&$3,3,arr);
                $$ = $3;
                free($2);*/
                Assign *assign = malloc(sizeof(Assign));
                assign->id = (yyvsp[(1) - (6)].str);
                assign->type = createStr((yyvsp[(3) - (6)].str));
                assign->def = (yyvsp[(3) - (6)].str);
                char *arr[] = { " ", (yyvsp[(1) - (6)].str)};
                appendStr(&(assign->def), 2,arr);
                assign->value = (yyvsp[(5) - (6)].str);
                assign->init = true;
                (yyval.assign) = assign;
                free((yyvsp[(2) - (6)].str));
                free((yyvsp[(4) - (6)].str));
                free((yyvsp[(6) - (6)].str));
            ;}
    break;

  case 50:
#line 439 "./lexyacc/pearlang.y"
    {
                printf("assignment \n");
                Assign *assign = malloc(sizeof(Assign));
                assign->id = (yyvsp[(1) - (6)].str);
                assign->type = createStr((yyvsp[(3) - (6)].str));
                assign->def = (yyvsp[(3) - (6)].str);
                char *arr[] = { " ", (yyvsp[(1) - (6)].str)};
                appendStr(&(assign->def), 2,arr);
                assign->value = (yyvsp[(5) - (6)].str);
                assign->init = true;
                (yyval.assign) = assign;
                free((yyvsp[(2) - (6)].str));
                free((yyvsp[(4) - (6)].str));
                free((yyvsp[(6) - (6)].str));
            ;}
    break;

  case 51:
#line 454 "./lexyacc/pearlang.y"
    {
                printf("assignment \n");
                Assign *assign = malloc(sizeof(Assign));
                assign->id = (yyvsp[(1) - (7)].str);
                char *spoint = "*";
                appendStr(&(yyvsp[(3) - (7)].str),1,&spoint);
                assign->type = createStr((yyvsp[(3) - (7)].str));
                assign->def = (yyvsp[(3) - (7)].str);
                char *arr[] = { " " , (yyvsp[(1) - (7)].str)};
                appendStr(&(assign->def), 2,arr);
                assign->value = (yyvsp[(6) - (7)].str);
                assign->init = true;
                (yyval.assign) = assign;
                free((yyvsp[(2) - (7)].str));
                free((yyvsp[(4) - (7)].str));
                free((yyvsp[(5) - (7)].str));
                free((yyvsp[(7) - (7)].str));
            ;}
    break;

  case 52:
#line 472 "./lexyacc/pearlang.y"
    {
                printf("assignment \n");
                Assign *assign = malloc(sizeof(Assign));
                assign->id = (yyvsp[(1) - (4)].str);
                assign->type = createStr((yyvsp[(3) - (4)].str));
                assign->def = (yyvsp[(3) - (4)].str);
                char *arr[] = { " ", (yyvsp[(1) - (4)].str)};
                appendStr(&(assign->def), 2, arr);
                assign->value = createStr("NULL");
                assign->init = false;
                (yyval.assign) = assign;
                free((yyvsp[(2) - (4)].str));
                free((yyvsp[(4) - (4)].str));
            ;}
    break;

  case 53:
#line 486 "./lexyacc/pearlang.y"
    {
                Assign *assign = malloc(sizeof(Assign));
                assign->id = (yyvsp[(1) - (1)].func)->id; 
                assign->type = (yyvsp[(1) - (1)].func)->type;
                assign->def = createStr((yyvsp[(1) - (1)].func)->type);
                char *arr[] = { " (*", createStr((yyvsp[(1) - (1)].func)->id), ")", createStr((yyvsp[(1) - (1)].func)->def)};
                appendStr(&assign->def,4,arr);
                char *val = createStr("&");
                appendStr(&val, 1, &((yyvsp[(1) - (1)].func)->idpre));
                appendStr(&val, 1, &((yyvsp[(1) - (1)].func)->id));
                assign->value = val;
                assign->init = true;
                (yyval.assign) = assign;
            ;}
    break;

  case 54:
#line 503 "./lexyacc/pearlang.y"
    {
                char *arr[] = { createStr(" "), (yyvsp[(1) - (3)].str) };
                appendStrF(&(yyvsp[(3) - (3)].str), 2, arr);
                (yyval.str) = (yyvsp[(3) - (3)].str);
                free((yyvsp[(2) - (3)].str));
            ;}
    break;

  case 55:
#line 509 "./lexyacc/pearlang.y"
    {
                addFuncDecToFile((yyvsp[(1) - (1)].func)); 
                //TODO free func
                char *res = createStr("__");
                char *resapp = createStr("_");
                if(globalS->inFunc)
                    appendStr(&res,1, &(globalS->lastFuncName));
                appendStrF(&res,1,&resapp);
                char *arr[] = { (yyvsp[(1) - (1)].func)->id, " ", (yyvsp[(1) - (1)].func)->id};
                appendStr(&res, 3, arr);
                (yyval.str) = res;
                gsExitFuncDec();
            ;}
    break;

  case 56:
#line 525 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str)};
                appendStrF(&(yyvsp[(1) - (4)].str),3,arr);
                (yyval.str) = (yyvsp[(1) - (4)].str);
            ;}
    break;

  case 57:
#line 530 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str)};
                appendStrF(&(yyvsp[(1) - (4)].str),3,arr);
                (yyval.str) = (yyvsp[(1) - (4)].str);
            ;}
    break;

  case 58:
#line 535 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str)};
                appendStrF(&(yyvsp[(1) - (4)].str),3,arr);
                (yyval.str) = (yyvsp[(1) - (4)].str);
            ;}
    break;

  case 59:
#line 543 "./lexyacc/pearlang.y"
    {
                appendStr(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                (yyval.str) = (yyvsp[(1) - (2)].str);
            ;}
    break;

  case 60:
#line 547 "./lexyacc/pearlang.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 61:
#line 548 "./lexyacc/pearlang.y"
    {
                appendStr(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                (yyval.str) = (yyvsp[(1) - (2)].str);
            ;}
    break;

  case 62:
#line 552 "./lexyacc/pearlang.y"
    {
                appendStr(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                (yyval.str) = (yyvsp[(1) - (2)].str);
            ;}
    break;

  case 63:
#line 556 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 64:
#line 557 "./lexyacc/pearlang.y"
    { 
                char *res = createStrAssign((yyvsp[(1) - (1)].assign));
                (yyval.str) = res;
            ;}
    break;

  case 65:
#line 561 "./lexyacc/pearlang.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 66:
#line 562 "./lexyacc/pearlang.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 67:
#line 563 "./lexyacc/pearlang.y"
    {
                printf("function \n");
            ;}
    break;

  case 68:
#line 566 "./lexyacc/pearlang.y"
    {
                printf("struct \n");
            ;}
    break;

  case 69:
#line 572 "./lexyacc/pearlang.y"
    {
            char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
            appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
            (yyval.str) = (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 70:
#line 577 "./lexyacc/pearlang.y"
    {
            char *arr[] = { (yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].str)};
            appendStrF(&(yyvsp[(1) - (4)].str), 3, arr);
            (yyval.str) = (yyvsp[(1) - (4)].str);
        ;}
    break;

  case 71:
#line 582 "./lexyacc/pearlang.y"
    {
            char *arr[] = { (yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].str)};
            appendStrF(&(yyvsp[(1) - (4)].str), 3, arr);
            (yyval.str) = (yyvsp[(1) - (4)].str);
        ;}
    break;

  case 72:
#line 587 "./lexyacc/pearlang.y"
    {
            char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
            appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
            (yyval.str) = (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 73:
#line 592 "./lexyacc/pearlang.y"
    {
            char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
            appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
            (yyval.str) = (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 74:
#line 597 "./lexyacc/pearlang.y"
    {
            char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
            appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
            (yyval.str) = (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 75:
#line 605 "./lexyacc/pearlang.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 76:
#line 606 "./lexyacc/pearlang.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 77:
#line 607 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 78:
#line 608 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 79:
#line 609 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 80:
#line 610 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 81:
#line 611 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 82:
#line 612 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 83:
#line 613 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 84:
#line 614 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 85:
#line 615 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str)};
                appendStr(&(yyvsp[(1) - (4)].str),3,arr);
                (yyval.str) = (yyvsp[(1) - (4)].str);
            ;}
    break;

  case 86:
#line 620 "./lexyacc/pearlang.y"
    {
                char *res = createStr("__");
                char *arr[] = { (yyvsp[(1) - (4)].str), createStr("_"), (yyvsp[(2) - (4)].str), createStr("()")};
                appendStrF(&res, 4, arr);
                (yyval.str) = res;
                free((yyvsp[(3) - (4)].str));
                free((yyvsp[(4) - (4)].str));
            ;}
    break;

  case 87:
#line 628 "./lexyacc/pearlang.y"
    {
                char *res = createStr("__");
                char *arr[] = { (yyvsp[(1) - (4)].str), createStr("_"), (yyvsp[(2) - (4)].str), createStr("()")};
                appendStrF(&res, 4, arr);
                (yyval.str) = res;
                free((yyvsp[(3) - (4)].str));
                free((yyvsp[(4) - (4)].str));
            ;}
    break;

  case 88:
#line 636 "./lexyacc/pearlang.y"
    {
                appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                (yyval.str) = (yyvsp[(1) - (2)].str);
            ;}
    break;

  case 89:
#line 640 "./lexyacc/pearlang.y"
    {
                appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                (yyval.str) = (yyvsp[(1) - (2)].str);
            ;}
    break;

  case 90:
#line 644 "./lexyacc/pearlang.y"
    {
                appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                (yyval.str) = (yyvsp[(1) - (2)].str);
            ;}
    break;

  case 91:
#line 648 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 92:
#line 653 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 93:
#line 658 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                (yyval.str) = (yyvsp[(1) - (3)].str); 
            ;}
    break;

  case 94:
#line 663 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 95:
#line 668 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 96:
#line 673 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 97:
#line 678 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 98:
#line 683 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 99:
#line 688 "./lexyacc/pearlang.y"
    {
                appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                (yyval.str) = (yyvsp[(1) - (2)].str);
            ;}
    break;

  case 100:
#line 692 "./lexyacc/pearlang.y"
    {
                appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                (yyval.str) = (yyvsp[(1) - (2)].str);
            ;}
    break;

  case 101:
#line 696 "./lexyacc/pearlang.y"
    {
                appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                (yyval.str) = (yyvsp[(1) - (2)].str);
            ;}
    break;

  case 102:
#line 700 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 103:
#line 705 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 104:
#line 710 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 105:
#line 719 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 106:
#line 720 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 107:
#line 721 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 108:
#line 722 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 109:
#line 723 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 110:
#line 724 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 111:
#line 725 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 112:
#line 726 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 113:
#line 727 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 114:
#line 728 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 115:
#line 729 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 116:
#line 730 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 117:
#line 731 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 118:
#line 732 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 119:
#line 733 "./lexyacc/pearlang.y"
    { 
        appendStrF(&(yyvsp[(1) - (2)].str), 1, &(yyvsp[(2) - (2)].str));
        (yyval.str) = (yyvsp[(1) - (2)].str);
    ;}
    break;

  case 120:
#line 737 "./lexyacc/pearlang.y"
    {
        char *arr[] = { createStr(" "), (yyvsp[(2) - (2)].str)};
        appendStr(&(yyvsp[(1) - (2)].str),2, arr);
        (yyval.str) = (yyvsp[(1) - (2)].str);
    ;}
    break;

  case 121:
#line 742 "./lexyacc/pearlang.y"
    {
            appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
            (yyval.str) = (yyvsp[(1) - (2)].str);
        ;}
    break;

  case 122:
#line 749 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 123:
#line 757 "./lexyacc/pearlang.y"
    {
        printf("statement \n");
    ;}
    break;

  case 124:
#line 760 "./lexyacc/pearlang.y"
    {;}
    break;

  case 125:
#line 761 "./lexyacc/pearlang.y"
    {;}
    break;


/* Line 1267 of yacc.c.  */
#line 2937 "./src/pearlang.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 766 "./lexyacc/pearlang.y"


#include"stdio.h"

int yydebug = 1;

int main(int argc, char *argv[])
{
    //INITIALIZE COMPILER
    compInit(argc, argv); 

    //char *gccarr[fileCount];

    compile(); 

    compCleanUp();

    printf("finished compiling \n");

    //compileToOut(fileCount, gccarr);

    return 0;
}



void yyerror(const char* s)
{
    fprintf(stderr, "parse error: %s \n", s);
    fprintf(stderr, "in line: %i\n", lineNum);
    globalS->exit = true;
    close(0);
}

