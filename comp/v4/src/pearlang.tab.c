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
     BITOR = 292,
     VOID = 293,
     I8 = 294,
     I16 = 295,
     I32 = 296,
     I64 = 297,
     U8 = 298,
     U16 = 299,
     U32 = 300,
     U64 = 301,
     F32 = 302,
     F64 = 303,
     BOOL = 304,
     INT = 305,
     RETURN = 306,
     NEW = 307,
     CRT = 308,
     BREAK = 309,
     CONTINUE = 310,
     STRUCT = 311,
     INCLUDE = 312,
     IF = 313,
     ELSE = 314,
     WHILE = 315,
     FOR = 316,
     LOCAL = 317,
     TRUE = 318,
     FALSE = 319,
     NUL = 320,
     access_p = 321
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
#define BITOR 292
#define VOID 293
#define I8 294
#define I16 295
#define I32 296
#define I64 297
#define U8 298
#define U16 299
#define U32 300
#define U64 301
#define F32 302
#define F64 303
#define BOOL 304
#define INT 305
#define RETURN 306
#define NEW 307
#define CRT 308
#define BREAK 309
#define CONTINUE 310
#define STRUCT 311
#define INCLUDE 312
#define IF 313
#define ELSE 314
#define WHILE 315
#define FOR 316
#define LOCAL 317
#define TRUE 318
#define FALSE 319
#define NUL 320
#define access_p 321




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
    Decl *decl;
}
/* Line 193 of yacc.c.  */
#line 258 "./src/pearlang.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 271 "./src/pearlang.tab.c"

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
#define YYFINAL  100
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1172

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  135
/* YYNRULES -- Number of states.  */
#define YYNSTATES  243

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    12,    18,    25,    32,    34,
      36,    39,    42,    45,    48,    51,    55,    58,    62,    65,
      69,    74,    77,    81,    86,    92,    96,    99,   102,   106,
     108,   111,   114,   124,   130,   136,   140,   144,   150,   152,
     154,   156,   158,   160,   162,   164,   166,   170,   173,   177,
     181,   185,   189,   191,   194,   196,   199,   202,   204,   206,
     208,   210,   214,   218,   222,   226,   230,   234,   238,   242,
     245,   248,   251,   254,   258,   262,   266,   270,   275,   280,
     282,   284,   286,   288,   290,   292,   294,   296,   298,   300,
     302,   304,   309,   314,   319,   322,   325,   328,   331,   334,
     337,   340,   343,   346,   350,   353,   356,   359,   362,   365,
     368,   371,   374,   377,   380,   383,   386,   388,   390,   392,
     394,   396,   398,   400,   402,   404,   406,   408,   410,   412,
     414,   417,   420,   423,   427,   429
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      68,     0,    -1,    68,    95,    -1,    95,    -1,     3,     8,
      93,    -1,     3,    16,    17,     8,    93,    -1,     3,    16,
      89,    17,     8,    93,    -1,    88,    16,    89,    17,     8,
      93,    -1,    75,    -1,    71,    -1,    62,    71,    -1,    57,
       6,    -1,     3,    12,    -1,    88,    12,    -1,    72,    89,
      -1,    72,    10,    89,    -1,    72,    13,    -1,     3,     8,
      12,    -1,    74,    69,    -1,    74,    10,    69,    -1,    74,
      13,     7,    93,    -1,    75,    80,    -1,    62,    75,    80,
      -1,     3,     8,    56,    14,    -1,    62,     3,     8,    56,
      14,    -1,    77,    86,     9,    -1,    77,    76,    -1,    77,
      15,    -1,    78,     8,     3,    -1,    14,    -1,    79,    87,
      -1,    79,    15,    -1,    61,    12,    89,     9,    89,     9,
      89,    13,    80,    -1,    60,    12,    89,    13,    80,    -1,
      58,    12,    89,    13,    80,    -1,    82,    59,    82,    -1,
      82,    59,    80,    -1,    58,    12,    89,    13,    87,    -1,
      28,    -1,    29,    -1,    30,    -1,    31,    -1,    33,    -1,
      34,    -1,    32,    -1,    36,    -1,    51,    89,     9,    -1,
      51,     9,    -1,     3,    18,    89,    -1,    88,    18,    89,
      -1,    90,    18,    89,    -1,    69,    18,    89,    -1,    69,
      -1,    89,     9,    -1,    84,    -1,    55,     9,    -1,    54,
       9,    -1,    81,    -1,    82,    -1,    76,    -1,    78,    -1,
       3,     7,     3,    -1,    88,     7,     3,    -1,     3,     7,
      88,    -1,    88,     7,    88,    -1,     3,    11,     3,    -1,
      88,    11,     3,    -1,     3,    11,    88,    -1,    88,    11,
      88,    -1,    19,     3,    -1,    19,    88,    -1,    20,     3,
      -1,    20,    88,    -1,    12,     3,    13,    -1,    12,    88,
      13,    -1,     3,    16,    17,    -1,    88,    16,    17,    -1,
       3,    16,    89,    17,    -1,    88,    16,    89,    17,    -1,
      73,    -1,    65,    -1,     4,    -1,     5,    -1,     6,    -1,
       3,    -1,    63,    -1,    64,    -1,    88,    -1,    86,    -1,
      85,    -1,    91,    -1,    27,    12,    93,    13,    -1,    52,
       3,    12,    13,    -1,    53,     3,    12,    13,    -1,    94,
      89,    -1,    90,    89,    -1,    90,    21,    -1,    90,    22,
      -1,    20,    89,    -1,    19,    89,    -1,    22,    89,    -1,
      21,    89,    -1,    35,    89,    -1,    12,    89,    13,    -1,
      89,    21,    -1,    89,    22,    -1,    89,    20,    -1,    89,
      23,    -1,    89,    37,    -1,    89,    24,    -1,    89,    83,
      -1,    92,    15,    -1,    79,    15,    -1,    79,    89,    -1,
      92,    89,    -1,    92,    10,    -1,    38,    -1,    39,    -1,
      40,    -1,    41,    -1,    42,    -1,    43,    -1,    44,    -1,
      45,    -1,    46,    -1,    47,    -1,    48,    -1,    49,    -1,
      50,    -1,     3,    -1,    93,    20,    -1,    56,    93,    -1,
       3,    20,    -1,    12,    93,    13,    -1,    87,    -1,    70,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   119,   119,   120,   124,   136,   151,   165,   179,   227,
     231,   239,   252,   257,   290,   295,   304,   323,   346,   351,
     360,   378,   392,   406,   414,   422,   428,   447,   460,   468,
     473,   483,   495,   501,   510,   516,   522,   528,   537,   538,
     539,   540,   541,   542,   543,   544,   548,   554,   562,   568,
     574,   583,   594,   607,   612,   613,   618,   623,   624,   625,
     626,   630,   636,   642,   648,   654,   660,   666,   672,   678,
     683,   688,   693,   698,   704,   710,   716,   722,   728,   737,
     738,   739,   740,   741,   742,   743,   744,   745,   746,   747,
     748,   749,   755,   764,   773,   778,   783,   788,   793,   798,
     803,   808,   813,   818,   827,   832,   837,   842,   847,   853,
     858,   866,   871,   879,   884,   889,   897,   898,   899,   900,
     901,   902,   903,   904,   905,   906,   907,   908,   909,   910,
     911,   916,   922,   930,   939,   940
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
  "LESS", "GREQ", "LEEQ", "SAME", "AND", "OR", "NOT", "NOTEQ", "BITOR",
  "VOID", "I8", "I16", "I32", "I64", "U8", "U16", "U32", "U64", "F32",
  "F64", "BOOL", "INT", "RETURN", "NEW", "CRT", "BREAK", "CONTINUE",
  "STRUCT", "INCLUDE", "IF", "ELSE", "WHILE", "FOR", "LOCAL", "TRUE",
  "FALSE", "NUL", "access_p", "$accept", "program", "declaration",
  "preproc", "include_s", "s_fcall", "fcall", "s_funcdecl", "funcdecl",
  "func", "s_struct", "struct", "block_s", "block", "loop", "condition",
  "conditionalOp", "areturn", "allotment", "assignment", "statement",
  "access", "expression", "s_expression", "array", "array_s", "type",
  "typecast", "line", 0
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
     315,   316,   317,   318,   319,   320,   321
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    67,    68,    68,    69,    69,    69,    69,    69,    70,
      70,    71,    72,    72,    72,    72,    73,    74,    74,    74,
      75,    76,    76,    77,    77,    77,    77,    78,    78,    79,
      79,    80,    81,    81,    82,    82,    82,    82,    83,    83,
      83,    83,    83,    83,    83,    83,    84,    84,    85,    85,
      85,    86,    86,    87,    87,    87,    87,    87,    87,    87,
      87,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    90,    90,    90,    90,    90,    90,
      90,    91,    91,    92,    92,    92,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    94,    95,    95
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     5,     6,     6,     1,     1,
       2,     2,     2,     2,     2,     3,     2,     3,     2,     3,
       4,     2,     3,     4,     5,     3,     2,     2,     3,     1,
       2,     2,     9,     5,     5,     3,     3,     5,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     3,     3,
       3,     3,     1,     2,     1,     2,     2,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     3,     3,     3,     3,     4,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     3,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    84,    81,    82,    83,     0,    29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,    86,    80,     0,    52,   135,     9,
       0,    79,     0,     8,    59,     0,    60,     0,    57,    58,
      54,    89,    88,   134,    87,     0,     0,    90,     0,     0,
       3,     0,     0,     0,    12,     0,     0,    84,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,     0,     8,    87,     0,     0,    69,    70,    99,    71,
      72,    98,    84,   101,   100,     0,   102,    47,     0,     0,
       0,    56,    55,    11,     0,     0,     0,     0,    10,     0,
       1,     2,     0,     0,    16,    14,     0,     0,     0,     0,
       0,     0,    18,     0,     0,    21,    27,     0,    26,     0,
       0,   112,     0,    30,   113,     0,     0,     0,    13,     0,
       0,    53,   106,   104,   105,   107,   109,    38,    39,    40,
      41,    44,    42,    43,    45,   108,   110,     0,    96,    97,
      95,   115,   111,   114,    94,    61,    63,   129,    17,     0,
       4,    65,    67,    75,     0,    48,     0,    73,   132,   131,
      74,   103,   133,   130,     0,    46,     0,     0,     0,     0,
       0,     0,    22,    51,    15,    19,     0,     0,     0,    69,
      70,    71,    72,    31,     0,    25,    28,    36,    35,    62,
      64,    66,    68,    76,     0,    49,    50,     0,     0,    23,
       0,    77,    91,    92,    93,     0,     0,     0,     0,    20,
       0,    78,    75,     0,     0,     5,     0,     0,    34,    37,
      33,     0,    24,     0,    77,    78,     6,    31,     0,     7,
       0,     0,    32
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    26,    27,    28,    29,    30,    31,    32,    72,    34,
      35,    36,    37,   115,    38,    39,   146,    40,    41,    42,
     123,    44,    45,    46,    47,    48,   160,    49,    50
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -90
static const yytype_int16 yypact[] =
{
     311,   738,   -90,   -90,   -90,   257,   -90,   829,   849,   884,
     884,     2,   884,   646,    12,    13,    10,    28,    15,    14,
      30,    36,     8,   -90,   -90,   -90,   194,    34,   -90,   -90,
     101,   -90,    82,    26,   -90,    19,    47,   374,   -90,     7,
     -90,   -90,   -90,   -90,   676,   319,   700,   -90,   626,   884,
     -90,    44,   883,    97,   -90,   720,   884,   664,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   912,   -90,   812,   969,     0,   750,   676,  1125,   750,
     676,  1125,   750,  1125,  1125,   912,  1125,   -90,   382,    56,
      57,   -90,   -90,   -90,   884,   884,   884,    51,   -90,    26,
     -90,   -90,   884,   884,   -90,  1125,    63,   138,   198,    69,
     216,   220,   -90,    17,   437,   -90,   -90,    74,   -90,    71,
      75,   -90,    79,   -90,   319,     3,   261,   263,   -90,   774,
     884,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   884,   884,   884,
    1125,   -90,   -90,  1125,  1125,    92,   140,    64,   -90,   132,
      68,    92,   140,    88,  1053,  1135,   931,   -90,   -90,    68,
     -90,   -90,   -90,   -90,    33,   -90,    70,    99,   991,  1013,
     445,     6,   -90,  1135,  1125,   -90,   179,   180,   912,    92,
     140,    92,   140,   -90,   102,   -90,   -90,   -90,     7,    92,
     140,    92,   140,   -90,  1071,  1135,  1135,   794,   774,   -90,
     912,   110,   -90,   -90,   -90,   563,    26,   884,   105,    68,
     119,   126,   -90,  1089,  1107,    68,   912,   500,   -90,   -90,
     -90,   508,   -90,   912,   -90,   -90,    68,   571,   884,    68,
    1035,    26,   -90
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -90,   -90,   -20,   -90,   116,   -90,   -90,   -90,    23,   104,
     -90,   -90,   -32,   -89,   -90,    37,   -90,   -90,   -90,   120,
       9,    22,    -5,   -90,   -90,   -90,     1,   -90,   133
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -113
static const yytype_int16 yytable[] =
{
      74,   114,    78,    81,    83,    84,    75,    86,    88,    43,
     182,    97,   112,   172,    85,    89,    90,     6,   158,    91,
     173,    93,   106,    33,   126,   105,    94,    73,   127,    77,
      80,   108,   124,   129,   116,    43,   197,    92,   110,   111,
       6,   150,    95,   153,   154,    99,   212,   155,    96,    33,
     164,   165,   102,   173,   113,   120,   108,   113,    33,   181,
      33,    19,   218,   110,   111,    18,   125,   114,   176,   177,
      51,   166,   169,   156,    53,   162,   188,   194,   196,    55,
     195,   117,    97,   213,   168,   106,   174,   185,   173,   178,
     179,   180,   107,   114,   108,   109,   210,   183,   184,    51,
     161,   110,   111,    53,    82,     2,     3,     4,   207,   108,
     220,   103,   214,     5,   104,     6,   110,   111,   226,   232,
       7,     8,     9,    10,   204,   205,   228,   230,    11,   113,
     187,   158,   190,   192,   233,   157,    12,    33,    98,   118,
      99,   106,   206,    83,    84,    99,   209,   126,   200,   202,
     108,   127,   242,    14,    15,   119,   208,   110,   111,   101,
     169,     0,   198,     0,    23,    24,    25,     0,     0,     0,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,   227,   114,     0,    51,   126,    71,   219,
      53,   127,   167,   170,   100,   207,   208,     1,     2,     3,
       4,   186,   223,   224,     0,     0,     5,     0,     6,   114,
     108,   225,   231,     7,     8,     9,    10,   110,   111,   189,
       0,    11,   124,   191,   229,     0,     0,   236,   108,    12,
       0,     0,   108,   240,   239,   110,   111,     0,    33,   110,
     111,     0,     0,     0,     0,    13,    14,    15,    16,    17,
      33,    18,    19,     0,    20,    21,    22,    23,    24,    25,
      57,     2,     3,     4,   199,     0,   201,     0,     0,     5,
       0,     6,     0,   108,     0,   108,     7,     8,     9,    10,
     110,   111,   110,   111,    11,     0,     0,     0,     0,     0,
       0,     0,    12,     0,     0,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,     0,    14,
      15,     0,     0,    71,     1,     2,     3,     4,     0,     0,
      23,    24,    25,     5,     0,     6,     0,     0,   131,     0,
       7,     8,     9,    10,     0,     0,     0,     0,    11,   132,
     133,   134,   135,   136,     0,     0,    12,   137,   138,   139,
     140,   141,   142,   143,     0,   144,   145,     0,     0,     0,
       0,     0,    13,    14,    15,    16,    17,     0,    18,    19,
       0,    20,    21,    22,    23,    24,    25,     1,     2,     3,
       4,     0,     0,     0,     0,     0,     5,     0,     6,   121,
       0,   175,     0,     7,     8,     9,    10,     0,     0,     0,
       0,    11,   132,   133,   134,   135,   136,     0,     0,    12,
     137,   138,   139,   140,   141,   142,   143,     0,   144,   145,
       0,     0,     0,     0,     0,    13,    14,    15,    16,    17,
       0,     0,    19,     0,    20,    21,   122,    23,    24,    25,
       1,     2,     3,     4,     0,     0,     0,     0,     0,     5,
       0,     6,   193,     0,   217,     0,     7,     8,     9,    10,
       0,     0,     0,     0,    11,   132,   133,   134,   135,   136,
       0,     0,    12,   137,   138,   139,   140,   141,   142,   143,
       0,   144,   145,     0,     0,     0,     0,     0,    13,    14,
      15,    16,    17,     0,     0,    19,     0,    20,    21,   122,
      23,    24,    25,     1,     2,     3,     4,     0,     0,     0,
       0,     0,     5,     0,     6,   237,     0,   238,     0,     7,
       8,     9,    10,     0,     0,     0,     0,    11,   132,   133,
     134,   135,   136,     0,     0,    12,   137,   138,   139,   140,
     141,   142,   143,     0,   144,   145,     0,     0,     0,     0,
       0,    13,    14,    15,    16,    17,     0,     0,    19,     0,
      20,    21,   122,    23,    24,    25,     1,     2,     3,     4,
       0,     0,     0,     0,     0,     5,     0,     6,     0,     0,
    -112,     0,     7,     8,     9,    10,     0,     0,     0,     0,
      11,     0,     0,     0,  -112,  -112,     0,     0,    12,  -112,
    -112,  -112,  -112,  -112,  -112,  -112,     0,  -112,  -112,     0,
       0,     0,     0,     0,    13,    14,    15,    16,    17,     0,
       0,    19,     0,    20,    21,   122,    23,    24,    25,    82,
       2,     3,     4,     0,     0,     0,   151,     0,     5,     0,
       6,   152,     0,     0,     0,     7,     8,     9,    10,    82,
       2,     3,     4,    11,     0,    87,     0,     0,     5,     0,
       6,    12,     0,     0,     0,     7,     8,     9,    10,     0,
       0,    51,   166,    11,     0,    53,    54,   167,    14,    15,
      55,    12,    56,   126,   168,     0,     0,   127,   128,    23,
      24,    25,   129,     0,   130,     0,     0,     0,    14,    15,
       0,     0,     0,    82,     2,     3,     4,     0,     0,    23,
      24,    25,     5,     0,     6,     0,     0,     0,   147,     7,
       8,   148,   149,    82,     2,     3,     4,    11,     0,     0,
       0,     0,     5,     0,     6,    12,     0,   163,     0,     7,
       8,     9,    10,     0,     0,    51,    52,    11,     0,    53,
      54,     0,    14,    15,    55,    12,    56,    51,   166,     0,
       0,    53,    54,    23,    24,    25,    55,     0,    56,     0,
       0,     0,    14,    15,     0,     0,     0,    82,     2,     3,
       4,     0,     0,    23,    24,    25,     5,     0,     6,     0,
       0,   203,     0,     7,     8,     9,    10,    82,     2,     3,
       4,    11,     0,     0,     0,     0,     5,     0,     6,    12,
       0,   222,     0,     7,     8,     9,    10,     0,     0,   126,
       0,    11,     0,   127,   128,   170,    14,    15,   129,    12,
     130,     0,    76,     2,     3,     4,     0,    23,    24,    25,
       0,     5,     0,     6,     0,     0,    14,    15,     7,     8,
       9,    10,    79,     2,     3,     4,    11,    23,    24,    25,
       0,     5,     0,     6,    12,     0,     0,     0,     7,     8,
       9,    10,     0,     0,     0,     0,    11,     0,     0,     0,
       0,    14,    15,     0,    12,     0,   157,    82,     2,     3,
       4,     0,    23,    24,    25,   158,     5,     0,     6,     0,
       0,    14,    15,     7,     8,     9,    10,     0,     0,     0,
       0,    11,    23,    24,    25,   157,     0,     0,     0,    12,
       0,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,   157,     0,    14,    15,     0,   159,
       0,     0,     0,   158,     0,     0,     0,    23,    24,    25,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,     0,     0,     0,     0,     0,    71,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,   171,     0,     0,     0,     0,    71,     0,   132,
     133,   134,   135,   136,     0,     0,     0,   137,   138,   139,
     140,   141,   142,   143,   215,   144,   145,     0,     0,     0,
       0,   132,   133,   134,   135,   136,     0,     0,     0,   137,
     138,   139,   140,   141,   142,   143,   216,   144,   145,     0,
       0,     0,     0,   132,   133,   134,   135,   136,     0,     0,
       0,   137,   138,   139,   140,   141,   142,   143,   241,   144,
     145,     0,     0,     0,     0,   132,   133,   134,   135,   136,
       0,     0,     0,   137,   138,   139,   140,   141,   142,   143,
     211,   144,   145,   132,   133,   134,   135,   136,     0,     0,
       0,   137,   138,   139,   140,   141,   142,   143,   221,   144,
     145,   132,   133,   134,   135,   136,     0,     0,     0,   137,
     138,   139,   140,   141,   142,   143,   234,   144,   145,   132,
     133,   134,   135,   136,     0,     0,     0,   137,   138,   139,
     140,   141,   142,   143,   235,   144,   145,   132,   133,   134,
     135,   136,     0,     0,     0,   137,   138,   139,   140,   141,
     142,   143,     0,   144,   145,   132,   133,   134,   135,   136,
       0,     0,     0,   137,   138,   139,   140,   141,   142,   143,
       0,   144,   145,   137,   138,   139,   140,   141,   142,   143,
       0,   144,   145
};

static const yytype_int16 yycheck[] =
{
       5,    33,     7,     8,     9,    10,     5,    12,    13,     0,
      99,     3,    32,    13,    12,     3,     3,    14,    12,     9,
      20,     6,     3,     0,     7,    30,    12,     5,    11,     7,
       8,    12,    37,    16,    15,    26,   125,     9,    19,    20,
      14,    46,    12,    48,    49,    22,    13,     3,    12,    26,
      55,    56,    18,    20,    32,     8,    12,    35,    35,     8,
      37,    58,    56,    19,    20,    57,    59,    99,    12,    12,
       7,     8,    71,    51,    11,    53,     7,     3,     3,    16,
       9,    62,     3,    13,    20,     3,    85,   107,    20,    94,
      95,    96,    10,   125,    12,    13,     8,   102,   103,     7,
       3,    19,    20,    11,     3,     4,     5,     6,    16,    12,
       8,    10,    13,    12,    13,    14,    19,    20,     8,    14,
      19,    20,    21,    22,   129,   130,   215,   216,    27,   107,
     108,    12,   110,   111,     8,     3,    35,   114,    22,    35,
     117,     3,   147,   148,   149,   122,    14,     7,   126,   127,
      12,    11,   241,    52,    53,    35,    16,    19,    20,    26,
     159,    -1,   125,    -1,    63,    64,    65,    -1,    -1,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,   215,   216,    -1,     7,     7,    56,   188,
      11,    11,    13,    13,     0,    16,    16,     3,     4,     5,
       6,     3,   207,   208,    -1,    -1,    12,    -1,    14,   241,
      12,   210,   217,    19,    20,    21,    22,    19,    20,     3,
      -1,    27,   227,     3,   215,    -1,    -1,   226,    12,    35,
      -1,    -1,    12,   238,   233,    19,    20,    -1,   215,    19,
      20,    -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,
     227,    57,    58,    -1,    60,    61,    62,    63,    64,    65,
       3,     4,     5,     6,     3,    -1,     3,    -1,    -1,    12,
      -1,    14,    -1,    12,    -1,    12,    19,    20,    21,    22,
      19,    20,    19,    20,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    52,
      53,    -1,    -1,    56,     3,     4,     5,     6,    -1,    -1,
      63,    64,    65,    12,    -1,    14,    -1,    -1,     9,    -1,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    20,
      21,    22,    23,    24,    -1,    -1,    35,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    37,    -1,    -1,    -1,
      -1,    -1,    51,    52,    53,    54,    55,    -1,    57,    58,
      -1,    60,    61,    62,    63,    64,    65,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    -1,    12,    -1,    14,    15,
      -1,     9,    -1,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    20,    21,    22,    23,    24,    -1,    -1,    35,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    37,
      -1,    -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,
      -1,    -1,    58,    -1,    60,    61,    62,    63,    64,    65,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    14,    15,    -1,     9,    -1,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    20,    21,    22,    23,    24,
      -1,    -1,    35,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    51,    52,
      53,    54,    55,    -1,    -1,    58,    -1,    60,    61,    62,
      63,    64,    65,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    12,    -1,    14,    15,    -1,     9,    -1,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    27,    20,    21,
      22,    23,    24,    -1,    -1,    35,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    37,    -1,    -1,    -1,    -1,
      -1,    51,    52,    53,    54,    55,    -1,    -1,    58,    -1,
      60,    61,    62,    63,    64,    65,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    -1,    14,    -1,    -1,
       9,    -1,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    23,    24,    -1,    -1,    35,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    37,    -1,
      -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    60,    61,    62,    63,    64,    65,     3,
       4,     5,     6,    -1,    -1,    -1,    10,    -1,    12,    -1,
      14,    15,    -1,    -1,    -1,    19,    20,    21,    22,     3,
       4,     5,     6,    27,    -1,     9,    -1,    -1,    12,    -1,
      14,    35,    -1,    -1,    -1,    19,    20,    21,    22,    -1,
      -1,     7,     8,    27,    -1,    11,    12,    13,    52,    53,
      16,    35,    18,     7,    20,    -1,    -1,    11,    12,    63,
      64,    65,    16,    -1,    18,    -1,    -1,    -1,    52,    53,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,    63,
      64,    65,    12,    -1,    14,    -1,    -1,    -1,    18,    19,
      20,    21,    22,     3,     4,     5,     6,    27,    -1,    -1,
      -1,    -1,    12,    -1,    14,    35,    -1,    17,    -1,    19,
      20,    21,    22,    -1,    -1,     7,     8,    27,    -1,    11,
      12,    -1,    52,    53,    16,    35,    18,     7,     8,    -1,
      -1,    11,    12,    63,    64,    65,    16,    -1,    18,    -1,
      -1,    -1,    52,    53,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,    -1,    63,    64,    65,    12,    -1,    14,    -1,
      -1,    17,    -1,    19,    20,    21,    22,     3,     4,     5,
       6,    27,    -1,    -1,    -1,    -1,    12,    -1,    14,    35,
      -1,    17,    -1,    19,    20,    21,    22,    -1,    -1,     7,
      -1,    27,    -1,    11,    12,    13,    52,    53,    16,    35,
      18,    -1,     3,     4,     5,     6,    -1,    63,    64,    65,
      -1,    12,    -1,    14,    -1,    -1,    52,    53,    19,    20,
      21,    22,     3,     4,     5,     6,    27,    63,    64,    65,
      -1,    12,    -1,    14,    35,    -1,    -1,    -1,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    52,    53,    -1,    35,    -1,     3,     3,     4,     5,
       6,    -1,    63,    64,    65,    12,    12,    -1,    14,    -1,
      -1,    52,    53,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    63,    64,    65,     3,    -1,    -1,    -1,    35,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,     3,    -1,    52,    53,    -1,    56,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    63,    64,    65,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    -1,    -1,    -1,    -1,    56,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    13,    -1,    -1,    -1,    -1,    56,    -1,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    13,    36,    37,    -1,    -1,    -1,
      -1,    20,    21,    22,    23,    24,    -1,    -1,    -1,    28,
      29,    30,    31,    32,    33,    34,    13,    36,    37,    -1,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    13,    36,
      37,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      17,    36,    37,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    17,    36,
      37,    20,    21,    22,    23,    24,    -1,    -1,    -1,    28,
      29,    30,    31,    32,    33,    34,    17,    36,    37,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    17,    36,    37,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    37,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    37,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    37
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    12,    14,    19,    20,    21,
      22,    27,    35,    51,    52,    53,    54,    55,    57,    58,
      60,    61,    62,    63,    64,    65,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    81,    82,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    94,
      95,     7,     8,    11,    12,    16,    18,     3,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    56,    75,    88,    89,    93,     3,    88,    89,     3,
      88,    89,     3,    89,    89,    12,    89,     9,    89,     3,
       3,     9,     9,     6,    12,    12,    12,     3,    71,    75,
       0,    95,    18,    10,    13,    89,     3,    10,    12,    13,
      19,    20,    69,    88,    79,    80,    15,    62,    76,    86,
       8,    15,    62,    87,    89,    59,     7,    11,    12,    16,
      18,     9,    20,    21,    22,    23,    24,    28,    29,    30,
      31,    32,    33,    34,    36,    37,    83,    18,    21,    22,
      89,    10,    15,    89,    89,     3,    88,     3,    12,    56,
      93,     3,    88,    17,    89,    89,     8,    13,    20,    93,
      13,    13,    13,    20,    93,     9,    12,    12,    89,    89,
      89,     8,    80,    89,    89,    69,     3,    88,     7,     3,
      88,     3,    88,    15,     3,     9,     3,    80,    82,     3,
      88,     3,    88,    17,    89,    89,    89,    16,    16,    14,
       8,    17,    13,    13,    13,    13,    13,     9,    56,    93,
       8,    17,    17,    89,    89,    93,     8,    79,    80,    87,
      80,    89,    14,     8,    17,    17,    93,    15,     9,    93,
      89,    13,    80
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
        case 2:
#line 119 "./lexyacc/pearlang.y"
    { printf("program\n"); ;}
    break;

  case 3:
#line 120 "./lexyacc/pearlang.y"
    { printf("program\n"); ;}
    break;

  case 4:
#line 124 "./lexyacc/pearlang.y"
    { 
                            printf("declaration\n"); 
                            Decl *res = malloc(sizeof(Decl));
                            res->fun = false;
                            res->id = (yyvsp[(1) - (3)].str);
                            res->type = (yyvsp[(3) - (3)].str);
                            res->def = createStr((yyvsp[(3) - (3)].str));
                            char *arr[] = { createStr(" "), createStr((yyvsp[(1) - (3)].str)) };
                            appendStrF(&(res->def),2, arr);
                            (yyval.decl) = res;
                            free((yyvsp[(2) - (3)].str));
                        ;}
    break;

  case 5:
#line 136 "./lexyacc/pearlang.y"
    { 
                                                printf("declaration\n"); 
                                                Decl *res = malloc(sizeof(Decl));
                                                res->fun = false;
                                                res->id = createStr((yyvsp[(1) - (5)].str));
                                                res->type = (yyvsp[(5) - (5)].str);
                                                char *iarr[] = { createStr((yyvsp[(2) - (5)].str)), createStr((yyvsp[(3) - (5)].str)) };
                                                appendStrF(&(res->id),2,iarr);
                                                res->def = createStr((yyvsp[(5) - (5)].str));
                                                char *arr[] = { createStr(" "), (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (yyvsp[(3) - (5)].str) };
                                                appendStrF(&(res->def),4, arr);
                                                (yyval.decl) = res;
                                                free((yyvsp[(4) - (5)].str));
                                            ;}
    break;

  case 6:
#line 151 "./lexyacc/pearlang.y"
    { 
                                                            printf("declaration\n"); 
                                                            Decl *res = malloc(sizeof(Decl));
                                                            res->fun = false;
                                                            res->id = createStr((yyvsp[(1) - (6)].str));   
                                                            res->type = (yyvsp[(6) - (6)].str);
                                                            char *iarr[] = { createStr((yyvsp[(2) - (6)].str)), createStr((yyvsp[(3) - (6)].str)), createStr((yyvsp[(4) - (6)].str)) };
                                                            appendStrF(&(res->id),3,iarr);
                                                            res->def = createStr((yyvsp[(6) - (6)].str));
                                                            char *arr[] = { createStr(" "), (yyvsp[(1) - (6)].str), (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].str) };
                                                            appendStrF(&(res->def),5, arr);
                                                            (yyval.decl) = res;
                                                            free((yyvsp[(5) - (6)].str));
                                                        ;}
    break;

  case 7:
#line 165 "./lexyacc/pearlang.y"
    { 
                                                            printf("declaration\n"); 
                                                            Decl *res = malloc(sizeof(Decl));
                                                            res->fun = false;
                                                            res->id = createStr((yyvsp[(1) - (6)].str));   
                                                            res->type = (yyvsp[(6) - (6)].str);
                                                            char *iarr[] = { createStr((yyvsp[(2) - (6)].str)), createStr((yyvsp[(3) - (6)].str)), createStr((yyvsp[(4) - (6)].str)) };
                                                            appendStrF(&(res->id),3,iarr);
                                                            res->def = createStr((yyvsp[(6) - (6)].str));
                                                            char *arr[] = { createStr(" "), (yyvsp[(1) - (6)].str), (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].str) };
                                                            appendStrF(&(res->def),5, arr);
                                                            (yyval.decl) = res;
                                                            free((yyvsp[(5) - (6)].str));
                                                        ;}
    break;

  case 8:
#line 179 "./lexyacc/pearlang.y"
    { 
                        printf("declaration\n"); 
                        //addFuncDeclToFile($1); 
                        Decl *res = malloc(sizeof(Decl));
                        res->fun = true;
                        res->id = (yyvsp[(1) - (1)].func)->id;
                        res->type = (yyvsp[(1) - (1)].func)->type;
                        res->def = createStr((yyvsp[(1) - (1)].func)->type);
                        char *funcdef = createStr((yyvsp[(1) - (1)].func)->def);

                        //TODO experimental
                        if(globalS->inStruct && globalS->indentlvl <= 2)
                        {
                            char *resdef = createStr("(");
                            char *resdefo;
                            if(strchr((yyvsp[(1) - (1)].func)->def,',') == NULL)
                            {
                                resdefo = (strchr((yyvsp[(1) - (1)].func)->def, ')'));    
                            }
                            else
                            {
                                resdefo = &(strchr((yyvsp[(1) - (1)].func)->def, ','))[1];
                            }
                            appendStr(&resdef,1,&resdefo);
                            free(funcdef);
                            funcdef = resdef;
                        }
                        //

                        char *arr[] = { createStr(" (*"), createStr(res->id), createStr(")"), funcdef };
                        appendStrF(&(res->def),4,arr);

                        /*
                        res->def = createStr("__");
                        char *resapp = createStr("_");
                        if(globalS->inFunc)
                            appendStr(&(res->def),1, &(globalS->lastFuncName));
                        appendStrF(&(res->def),1,&resapp);
                        char *arr[] = { $1->id, " ", $1->id};
                        appendStr(&(res->def),3, arr);
                        */
                        (yyval.decl) = res;
                        gsExitFuncDec();
                        //TODO free func
                    ;}
    break;

  case 9:
#line 227 "./lexyacc/pearlang.y"
    { 
                    printf("preproc\n"); 
                    appendStrF(&(activeFT.htdef),1, &(yyvsp[(1) - (1)].str));
                ;}
    break;

  case 10:
#line 231 "./lexyacc/pearlang.y"
    { 
                            printf("preproc\n"); 
                            appendStrF(&(activeFT.stdef),1,&(yyvsp[(2) - (2)].str));
                            free((yyvsp[(1) - (2)].str));
                        ;}
    break;

  case 11:
#line 239 "./lexyacc/pearlang.y"
    { 
                        printf("include_s\n"); 
                        char *incC = (yyvsp[(2) - (2)].str);
                        incC[strlen(incC) - 1] = 0;
                        char *arr[] = { (yyvsp[(1) - (2)].str), incC, createStr(".h\"\n") };
                        char *res = createStr("#");
                        appendStrF(&res,3,arr);
                        (yyval.str) = res;
                    ;}
    break;

  case 12:
#line 252 "./lexyacc/pearlang.y"
    { 
                    printf("s_fcall\n"); 
                    appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                    (yyval.str) = (yyvsp[(1) - (2)].str);
                ;}
    break;

  case 13:
#line 257 "./lexyacc/pearlang.y"
    { 
                        printf("s_fcall\n"); 
                        appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                        char *acc = createStr((yyvsp[(1) - (2)].str));
                        char *va = strrchr(acc,'.');
                        char *po = strrchr(acc,'-');
                        printf("acc: %s\n", acc);
                        int len = 0;
                        if(po != NULL && va != NULL)
                            len = strlen(po) - strlen(va); 

                        if(po == NULL && va == NULL)
                        {
                            printf("normal fcall\n");
                        }
                        else if(po == NULL || (va != NULL && po == NULL) || len > 0)
                        {
                            printf("value\n");
                            printf("acc: %s\n", acc);
                            *va = '\0';                             
                            char *arr[] = { createStr("&"), acc , createStr(",") };
                            appendStrF(&(yyvsp[(1) - (2)].str),3,arr);
                        }   
                        else
                        {
                            printf("pointer\n");
                            printf("acc: %s\n", acc);
                            *po = '\0';
                            char *arr[] = { acc, createStr(",") };
                            appendStrF(&(yyvsp[(1) - (2)].str),2,arr);
                        }
                        (yyval.str) = (yyvsp[(1) - (2)].str);
                    ;}
    break;

  case 14:
#line 290 "./lexyacc/pearlang.y"
    { 
                            printf("s_fcall\n"); 
                            appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                            (yyval.str) = (yyvsp[(1) - (2)].str);           
                        ;}
    break;

  case 15:
#line 295 "./lexyacc/pearlang.y"
    { 
                                    printf("s_fcall\n"); 
                                    char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                                    appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                                    (yyval.str) = (yyvsp[(1) - (3)].str);
                                ;}
    break;

  case 16:
#line 304 "./lexyacc/pearlang.y"
    { 
                        printf("fcall\n"); 
                        printf("lastc: %s\n", &(yyvsp[(1) - (2)].str)[strlen((yyvsp[(1) - (2)].str))-1]);
                        if((yyvsp[(1) - (2)].str)[strlen((yyvsp[(1) - (2)].str))-1] == ',')
                        {
                            (yyvsp[(1) - (2)].str)[strlen((yyvsp[(1) - (2)].str))-1] = ')';
                            free((yyvsp[(2) - (2)].str));
                        }
                        else
                        {
                            appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                        }
                        (yyval.str) = (yyvsp[(1) - (2)].str);
                    ;}
    break;

  case 17:
#line 323 "./lexyacc/pearlang.y"
    { 
                            printf("s_funcdecl\n"); 
                            gsEnterFunc(createStr((yyvsp[(1) - (3)].str)));
                            Func *func = malloc(sizeof(Func));
                            func->def = (yyvsp[(3) - (3)].str);
                            if(globalS->inStruct && (globalS->indentlvl <= 2))
                            {
                                char *arr[] = { createStr(globalS->structName), createStr("_")};
                                func->idpre = createStr("__");
                                appendStrF(&func->idpre, 2, arr);

                                //add this : struct to func
                                char *arr1[] = { createStr(globalS->structName), createStr(" *this,") };
                                appendStrF(&(func->def), 2, arr1);
                            }
                            else
                            {
                                func->idpre = createStr("");
                            }
                            func->id = (yyvsp[(1) - (3)].str);
                            (yyval.func) = func;
                            free((yyvsp[(2) - (3)].str));
                        ;}
    break;

  case 18:
#line 346 "./lexyacc/pearlang.y"
    { 
                                    printf("s_funcdecl\n"); 
                                    appendStrF(&((yyvsp[(1) - (2)].func)->def),1, &((yyvsp[(2) - (2)].decl)->def));
                                    (yyval.func) = (yyvsp[(1) - (2)].func);
                                ;}
    break;

  case 19:
#line 351 "./lexyacc/pearlang.y"
    { 
                                        printf("s_funcdecl\n");     
                                        char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].decl)->def};
                                        appendStrF(&((yyvsp[(1) - (3)].func)->def), 2, arr);
                                        (yyval.func) = (yyvsp[(1) - (3)].func);
                                    ;}
    break;

  case 20:
#line 360 "./lexyacc/pearlang.y"
    { 
                                    printf("funcdecl\n"); 
                                    if((yyvsp[(1) - (4)].func)->def[strlen((yyvsp[(1) - (4)].func)->def)-1] == ',')
                                    {
                                        (yyvsp[(1) - (4)].func)->def[strlen((yyvsp[(1) - (4)].func)->def)-1] = ')';
                                        free((yyvsp[(2) - (4)].str));
                                    }
                                    else
                                    {
                                        appendStrF(&((yyvsp[(1) - (4)].func)->def),1,&(yyvsp[(2) - (4)].str));
                                    }
                                    (yyvsp[(1) - (4)].func)->type = (yyvsp[(4) - (4)].str);
                                    (yyval.func) = (yyvsp[(1) - (4)].func);
                                    free((yyvsp[(3) - (4)].str));
                                ;}
    break;

  case 21:
#line 378 "./lexyacc/pearlang.y"
    { 
                        printf("func\n"); 
                        (yyvsp[(1) - (2)].func)->body = (yyvsp[(2) - (2)].str);
                        (yyval.func) = (yyvsp[(1) - (2)].func);
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

  case 22:
#line 392 "./lexyacc/pearlang.y"
    { 
                                printf("func\n"); 
                                (yyvsp[(2) - (3)].func)->body = (yyvsp[(3) - (3)].str);
                                (yyval.func) = (yyvsp[(2) - (3)].func);
                                addFuncToFile((yyvsp[(2) - (3)].func),1);
                                gsExitFunc();
                            ;}
    break;

  case 23:
#line 406 "./lexyacc/pearlang.y"
    { 
                                    printf("s_struct\n"); 
                                    gsEnterStruct(createStr((yyvsp[(1) - (4)].str)), false);
                                    Struc *struc = createStruct(); 
                                    struc->id = (yyvsp[(1) - (4)].str);
                                    (yyval.struc) = struc;
                                    free((yyvsp[(2) - (4)].str));
                                ;}
    break;

  case 24:
#line 414 "./lexyacc/pearlang.y"
    { 
                                            printf("s_struct\n"); 
                                            gsEnterStruct(createStr((yyvsp[(1) - (5)].str)), true);
                                            Struc *struc = createStruct(); 
                                            struc->id = (yyvsp[(2) - (5)].str);
                                            (yyval.struc) = struc;
                                            free((yyvsp[(2) - (5)].str));
                                        ;}
    break;

  case 25:
#line 422 "./lexyacc/pearlang.y"
    { 
                                            printf("s_struct\n"); 
                                            appendAssignStruct((yyvsp[(1) - (3)].struc),(yyvsp[(2) - (3)].assign)); 
                                            (yyval.struc) = (yyvsp[(1) - (3)].struc);
                                            free((yyvsp[(3) - (3)].str));
                                        ;}
    break;

  case 26:
#line 428 "./lexyacc/pearlang.y"
    { 
                            printf("s_struct\n"); 
                            Assign *assign = malloc(sizeof(Assign));
                            assign->id = (yyvsp[(2) - (2)].func)->id; 
                            assign->type = (yyvsp[(2) - (2)].func)->type;
                            assign->def = createStr((yyvsp[(2) - (2)].func)->type);
                            char *arr[] = { " (*", createStr((yyvsp[(2) - (2)].func)->id), ")", createStr((yyvsp[(2) - (2)].func)->def)};
                            appendStr(&assign->def,4,arr);
                            char *val = createStr("&");
                            appendStr(&val, 1, &((yyvsp[(2) - (2)].func)->idpre));
                            appendStr(&val, 1, &((yyvsp[(2) - (2)].func)->id));
                            assign->value = val;
                            assign->init = true;
                            appendAssignStruct((yyvsp[(1) - (2)].struc),assign);
                            (yyval.struc) = (yyvsp[(1) - (2)].struc);
                        ;}
    break;

  case 27:
#line 447 "./lexyacc/pearlang.y"
    { 
                            printf("struct\n"); 
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

  case 28:
#line 460 "./lexyacc/pearlang.y"
    { 
                            printf("struct\n"); 
                            addSingleToFile((yyvsp[(1) - (3)].struc),(yyvsp[(3) - (3)].str),globalS->lastLocal);
                            free((yyvsp[(2) - (3)].str));
                        ;}
    break;

  case 29:
#line 468 "./lexyacc/pearlang.y"
    {  
                    printf("block_s\n"); 
                    (yyval.str) = createStr("{\n");
                    free((yyvsp[(1) - (1)].str));
                ;}
    break;

  case 30:
#line 473 "./lexyacc/pearlang.y"
    { 
                                printf("block_s\n"); 
                                printf("sta: %s\n", (yyvsp[(2) - (2)].str));
                                char *arr[] = { (yyvsp[(2) - (2)].str), createStr("\n")};
                                appendStrF(&(yyvsp[(1) - (2)].str),2,arr);
                                (yyval.str) = (yyvsp[(1) - (2)].str); 
                            ;}
    break;

  case 31:
#line 483 "./lexyacc/pearlang.y"
    { 
                        printf("block\n"); 
                        appendStrF(&(yyvsp[(1) - (2)].str), 1, &(yyvsp[(2) - (2)].str));
                        (yyval.str) = (yyvsp[(1) - (2)].str);
                    ;}
    break;

  case 32:
#line 495 "./lexyacc/pearlang.y"
    { 
                                                                                        printf("loop\n"); 
                                                                                        char *arr[] = { (yyvsp[(2) - (9)].str),(yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),(yyvsp[(5) - (9)].str),(yyvsp[(6) - (9)].str),(yyvsp[(7) - (9)].str),(yyvsp[(8) - (9)].str),(yyvsp[(9) - (9)].str) };
                                                                                        appendStrF(&(yyvsp[(1) - (9)].str),8,arr);
                                                                                        (yyval.str) = (yyvsp[(1) - (9)].str); 
                                                                                    ;}
    break;

  case 33:
#line 501 "./lexyacc/pearlang.y"
    { 
                                                printf("loop\n"); 
                                                char *arr[] = { (yyvsp[(2) - (5)].str),(yyvsp[(3) - (5)].str),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str) };
                                                appendStrF(&(yyvsp[(1) - (5)].str),4,arr);
                                                (yyval.str) = (yyvsp[(1) - (5)].str);
                                            ;}
    break;

  case 34:
#line 510 "./lexyacc/pearlang.y"
    { 
                                                printf("condition\n"); 
                                                char *arr[] = { (yyvsp[(2) - (5)].str), (yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].str), (yyvsp[(5) - (5)].str)};
                                                appendStrF(&(yyvsp[(1) - (5)].str), 4, arr);
                                                (yyval.str) = (yyvsp[(1) - (5)].str);
                                            ;}
    break;

  case 35:
#line 516 "./lexyacc/pearlang.y"
    { 
                                        printf("condition\n"); 
                                        char *arr[] = { (yyvsp[(2) - (3)].str), createStr(" "), (yyvsp[(3) - (3)].str)};
                                        appendStrF(&(yyvsp[(1) - (3)].str), 3, arr);
                                        (yyval.str) = (yyvsp[(1) - (3)].str);
                                    ;}
    break;

  case 36:
#line 522 "./lexyacc/pearlang.y"
    { 
                                    printf("condition\n"); 
                                    char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str) };
                                    appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                                    (yyval.str) = (yyvsp[(1) - (3)].str);
                                ;}
    break;

  case 37:
#line 528 "./lexyacc/pearlang.y"
    { 
                                                        printf("condition\n"); 
                                                        char *arr[] = { (yyvsp[(2) - (5)].str), (yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].str), (yyvsp[(5) - (5)].str)};
                                                        appendStrF(&(yyvsp[(1) - (5)].str), 4, arr);
                                                        (yyval.str) = (yyvsp[(1) - (5)].str);
                                                    ;}
    break;

  case 38:
#line 537 "./lexyacc/pearlang.y"
    { printf("conditionalOp\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 39:
#line 538 "./lexyacc/pearlang.y"
    { printf("conditionalOp\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 40:
#line 539 "./lexyacc/pearlang.y"
    { printf("conditionalOp\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 41:
#line 540 "./lexyacc/pearlang.y"
    { printf("conditionalOp\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 42:
#line 541 "./lexyacc/pearlang.y"
    { printf("conditionalOp\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 43:
#line 542 "./lexyacc/pearlang.y"
    { printf("conditionalOp\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 44:
#line 543 "./lexyacc/pearlang.y"
    { printf("conditionalOp\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 45:
#line 544 "./lexyacc/pearlang.y"
    { printf("conditionalOp\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 46:
#line 548 "./lexyacc/pearlang.y"
    { 
                                        printf("areturn\n"); 
                                        char *arr[] = {createStr(" "),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
                                        appendStrF(&(yyvsp[(1) - (3)].str),3,arr);
                                        (yyval.str) = (yyvsp[(1) - (3)].str);
                                    ;}
    break;

  case 47:
#line 554 "./lexyacc/pearlang.y"
    { 
                            printf("areturn\n"); 
                            appendStr(&(yyvsp[(1) - (2)].str), 1, &(yyvsp[(2) - (2)].str));
                            (yyval.str) = (yyvsp[(1) - (2)].str);  
                        ;}
    break;

  case 48:
#line 562 "./lexyacc/pearlang.y"
    { 
                                printf("allotment\n"); 
                                char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str) };
                                appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                                (yyval.str) = (yyvsp[(1) - (3)].str);
                            ;}
    break;

  case 49:
#line 568 "./lexyacc/pearlang.y"
    { 
                                        printf("allotment\n"); 
                                        char *arr[]  = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str) };
                                        appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                                        (yyval.str) = (yyvsp[(1) - (3)].str);
                                    ;}
    break;

  case 50:
#line 574 "./lexyacc/pearlang.y"
    {
                                            printf("allotment\n");
                                            char *arr[]  = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str) };
                                            appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                                            (yyval.str) = (yyvsp[(1) - (3)].str);
                                        ;}
    break;

  case 51:
#line 583 "./lexyacc/pearlang.y"
    { 
                                            printf("assignment\n"); 
                                            Assign *assign = malloc(sizeof(Assign));
                                            assign->id = (yyvsp[(1) - (3)].decl)->id;
                                            assign->type = (yyvsp[(1) - (3)].decl)->type;
                                            assign->def = (yyvsp[(1) - (3)].decl)->def;
                                            assign->value = (yyvsp[(3) - (3)].str);
                                            assign->init = true;
                                            (yyval.assign) = assign;
                                            free((yyvsp[(2) - (3)].str));
                                        ;}
    break;

  case 52:
#line 594 "./lexyacc/pearlang.y"
    { 
                            printf("assignment\n"); 
                            Assign *assign = malloc(sizeof(Assign));
                            assign->id = (yyvsp[(1) - (1)].decl)->id;
                            assign->type = (yyvsp[(1) - (1)].decl)->type;
                            assign->def = (yyvsp[(1) - (1)].decl)->def;
                            assign->value = createStr("NULL");
                            assign->init = false;
                            (yyval.assign) = assign;
                        ;}
    break;

  case 53:
#line 607 "./lexyacc/pearlang.y"
    { 
                                printf("statement\n"); 
                                appendStr(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                (yyval.str) = (yyvsp[(1) - (2)].str);
                            ;}
    break;

  case 54:
#line 612 "./lexyacc/pearlang.y"
    { printf("statement\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 55:
#line 613 "./lexyacc/pearlang.y"
    { 
                                printf("statement\n"); 
                                appendStr(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                (yyval.str) = (yyvsp[(1) - (2)].str);
                            ;}
    break;

  case 56:
#line 618 "./lexyacc/pearlang.y"
    { 
                                printf("statement\n");  
                                appendStr(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                (yyval.str) = (yyvsp[(1) - (2)].str);
                            ;}
    break;

  case 57:
#line 623 "./lexyacc/pearlang.y"
    { printf("statement\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 58:
#line 624 "./lexyacc/pearlang.y"
    { printf("statement\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 59:
#line 625 "./lexyacc/pearlang.y"
    { printf("statement\n"); ;}
    break;

  case 60:
#line 626 "./lexyacc/pearlang.y"
    { printf("statement\n"); ;}
    break;

  case 61:
#line 630 "./lexyacc/pearlang.y"
    { 
                    printf("access\n"); 
                    char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                    appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                    (yyval.str) = (yyvsp[(1) - (3)].str);
                ;}
    break;

  case 62:
#line 636 "./lexyacc/pearlang.y"
    { 
                        printf("access\n"); 
                        char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                        appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                        (yyval.str) = (yyvsp[(1) - (3)].str);
                    ;}
    break;

  case 63:
#line 642 "./lexyacc/pearlang.y"
    { 
                        printf("access\n"); 
                        char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                        appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                        (yyval.str) = (yyvsp[(1) - (3)].str);
                    ;}
    break;

  case 64:
#line 648 "./lexyacc/pearlang.y"
    { 
                            printf("access\n"); 
                            char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                            appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                            (yyval.str) = (yyvsp[(1) - (3)].str);
                        ;}
    break;

  case 65:
#line 654 "./lexyacc/pearlang.y"
    { 
                    printf("access\n"); 
                    char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                    appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                    (yyval.str) = (yyvsp[(1) - (3)].str);
                ;}
    break;

  case 66:
#line 660 "./lexyacc/pearlang.y"
    { 
                        printf("access\n"); 
                        char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                        appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                        (yyval.str) = (yyvsp[(1) - (3)].str);
                    ;}
    break;

  case 67:
#line 666 "./lexyacc/pearlang.y"
    { 
                        printf("access\n"); 
                        char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                        appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                        (yyval.str) = (yyvsp[(1) - (3)].str);
                    ;}
    break;

  case 68:
#line 672 "./lexyacc/pearlang.y"
    { 
                            printf("access\n"); 
                            char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                            appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                            (yyval.str) = (yyvsp[(1) - (3)].str);
                        ;}
    break;

  case 69:
#line 678 "./lexyacc/pearlang.y"
    { 
                        printf("access\n"); 
                        appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                        (yyval.str) = (yyvsp[(1) - (2)].str);
                    ;}
    break;

  case 70:
#line 683 "./lexyacc/pearlang.y"
    { 
                            printf("access\n"); 
                            appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                            (yyval.str) = (yyvsp[(1) - (2)].str);
                        ;}
    break;

  case 71:
#line 688 "./lexyacc/pearlang.y"
    { 
                    printf("access\n"); 
                    appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                    (yyval.str) = (yyvsp[(1) - (2)].str);
                ;}
    break;

  case 72:
#line 693 "./lexyacc/pearlang.y"
    { 
                        printf("access\n"); 
                        appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                        (yyval.str) = (yyvsp[(1) - (2)].str);
                    ;}
    break;

  case 73:
#line 698 "./lexyacc/pearlang.y"
    { 
                                printf("access\n"); 
                                char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                                appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                                (yyval.str) = (yyvsp[(1) - (3)].str);
                            ;}
    break;

  case 74:
#line 704 "./lexyacc/pearlang.y"
    { 
                                    printf("access\n"); 
                                    char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                                    appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                                    (yyval.str) = (yyvsp[(1) - (3)].str);
                                ;}
    break;

  case 75:
#line 710 "./lexyacc/pearlang.y"
    { 
                                printf("access\n"); 
                                char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                                appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                                (yyval.str) = (yyvsp[(1) - (3)].str);
                            ;}
    break;

  case 76:
#line 716 "./lexyacc/pearlang.y"
    { 
                                    printf("access\n"); 
                                    char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                                    appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                                    (yyval.str) = (yyvsp[(1) - (3)].str);
                                ;}
    break;

  case 77:
#line 722 "./lexyacc/pearlang.y"
    { 
                                            printf("access\n"); 
                                            char *arr[] = { (yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].str)};
                                            appendStrF(&(yyvsp[(1) - (4)].str), 3, arr);
                                            (yyval.str) = (yyvsp[(1) - (4)].str);
                                        ;}
    break;

  case 78:
#line 728 "./lexyacc/pearlang.y"
    { 
                                                printf("access\n"); 
                                                char *arr[] = { (yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].str)};
                                                appendStrF(&(yyvsp[(1) - (4)].str), 3, arr);
                                                (yyval.str) = (yyvsp[(1) - (4)].str);
                                            ;}
    break;

  case 79:
#line 737 "./lexyacc/pearlang.y"
    { printf("expression\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 80:
#line 738 "./lexyacc/pearlang.y"
    { printf("expression\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 81:
#line 739 "./lexyacc/pearlang.y"
    { printf("expression\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 82:
#line 740 "./lexyacc/pearlang.y"
    { printf("expression\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 83:
#line 741 "./lexyacc/pearlang.y"
    { printf("expression\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 84:
#line 742 "./lexyacc/pearlang.y"
    { printf("expression\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 85:
#line 743 "./lexyacc/pearlang.y"
    { printf("expression\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 86:
#line 744 "./lexyacc/pearlang.y"
    { printf("expression\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 87:
#line 745 "./lexyacc/pearlang.y"
    { printf("expression\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 88:
#line 746 "./lexyacc/pearlang.y"
    { printf("expression\n"); (yyval.str)=createStrAssign((yyvsp[(1) - (1)].assign));;}
    break;

  case 89:
#line 747 "./lexyacc/pearlang.y"
    { printf("expression\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 90:
#line 748 "./lexyacc/pearlang.y"
    { printf("array\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 91:
#line 749 "./lexyacc/pearlang.y"
    { 
                                            printf("expression\n"); 
                                            char *arr[] = { (yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str)};
                                            appendStr(&(yyvsp[(1) - (4)].str),3,arr);
                                            (yyval.str) = (yyvsp[(1) - (4)].str);
                                        ;}
    break;

  case 92:
#line 755 "./lexyacc/pearlang.y"
    { 
                                        printf("expression\n"); 
                                        char *res = createStr("__");
                                        char *arr[] = { (yyvsp[(1) - (4)].str), createStr("_"), (yyvsp[(2) - (4)].str), createStr("()")};
                                        appendStrF(&res, 4, arr);
                                        (yyval.str) = res;
                                        free((yyvsp[(3) - (4)].str));
                                        free((yyvsp[(4) - (4)].str));
                                    ;}
    break;

  case 93:
#line 764 "./lexyacc/pearlang.y"
    { 
                                        printf("expression\n"); 
                                        char *res = createStr("__");
                                        char *arr[] = { (yyvsp[(1) - (4)].str), createStr("_"), (yyvsp[(2) - (4)].str), createStr("()")};
                                        appendStrF(&res, 4, arr);
                                        (yyval.str) = res;
                                        free((yyvsp[(3) - (4)].str));
                                        free((yyvsp[(4) - (4)].str));
                                    ;}
    break;

  case 94:
#line 773 "./lexyacc/pearlang.y"
    { 
                                    printf("expression\n"); 
                                    appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                    (yyval.str) = (yyvsp[(1) - (2)].str);
                                ;}
    break;

  case 95:
#line 778 "./lexyacc/pearlang.y"
    { 
                                        printf("expression\n"); 
                                        appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                        (yyval.str) = (yyvsp[(1) - (2)].str);
                                    ;}
    break;

  case 96:
#line 783 "./lexyacc/pearlang.y"
    { 
                                printf("expression\n"); 
                                appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                (yyval.str) = (yyvsp[(1) - (2)].str);
                            ;}
    break;

  case 97:
#line 788 "./lexyacc/pearlang.y"
    { 
                                    printf("expression\n"); 
                                    appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                    (yyval.str) = (yyvsp[(1) - (2)].str);
                                ;}
    break;

  case 98:
#line 793 "./lexyacc/pearlang.y"
    {
                                printf("expression\n"); 
                                appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                (yyval.str) = (yyvsp[(1) - (2)].str);
                            ;}
    break;

  case 99:
#line 798 "./lexyacc/pearlang.y"
    {
                                    printf("expression\n"); 
                                    appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                    (yyval.str) = (yyvsp[(1) - (2)].str);
                                ;}
    break;

  case 100:
#line 803 "./lexyacc/pearlang.y"
    { 
                                printf("expression\n"); 
                                appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                (yyval.str) = (yyvsp[(1) - (2)].str);
                            ;}
    break;

  case 101:
#line 808 "./lexyacc/pearlang.y"
    { 
                                printf("expression\n"); 
                                appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                (yyval.str) = (yyvsp[(1) - (2)].str);
                            ;}
    break;

  case 102:
#line 813 "./lexyacc/pearlang.y"
    { 
                                printf("expression\n"); 
                                appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                (yyval.str) = (yyvsp[(1) - (2)].str);
                            ;}
    break;

  case 103:
#line 818 "./lexyacc/pearlang.y"
    { 
                                            printf("expression\n"); 
                                            char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                                            appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                                            (yyval.str) = (yyvsp[(1) - (3)].str);
                                        ;}
    break;

  case 104:
#line 827 "./lexyacc/pearlang.y"
    { 
                                printf("s_expression\n"); 
                                appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                (yyval.str) = (yyvsp[(1) - (2)].str);
                            ;}
    break;

  case 105:
#line 832 "./lexyacc/pearlang.y"
    { 
                                    printf("s_expression\n"); 
                                    appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                    (yyval.str) = (yyvsp[(1) - (2)].str);
                                ;}
    break;

  case 106:
#line 837 "./lexyacc/pearlang.y"
    { 
                                    printf("s_expression\n"); 
                                    appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                    (yyval.str) = (yyvsp[(1) - (2)].str);
                                ;}
    break;

  case 107:
#line 842 "./lexyacc/pearlang.y"
    { 
                                    printf("s_expression\n"); 
                                    appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                    (yyval.str) = (yyvsp[(1) - (2)].str);
                                ;}
    break;

  case 108:
#line 847 "./lexyacc/pearlang.y"
    { 
                                    printf("s_expression\n"); 
                                    appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                    (yyval.str) = (yyvsp[(1) - (2)].str);
                                ;}
    break;

  case 109:
#line 853 "./lexyacc/pearlang.y"
    { 
                                    printf("s_expression\n"); 
                                    appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                    (yyval.str) = (yyvsp[(1) - (2)].str);
                                ;}
    break;

  case 110:
#line 858 "./lexyacc/pearlang.y"
    { 
                                            printf("s_expression\n"); 
                                            appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                            (yyval.str) = (yyvsp[(1) - (2)].str);
                                        ;}
    break;

  case 111:
#line 866 "./lexyacc/pearlang.y"
    {
                            printf("array\n");
                            appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                            (yyval.str) = (yyvsp[(1) - (2)].str);
                    ;}
    break;

  case 112:
#line 871 "./lexyacc/pearlang.y"
    {
                            printf("array\n");
                            appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                            (yyval.str) = (yyvsp[(1) - (2)].str);
                        ;}
    break;

  case 113:
#line 879 "./lexyacc/pearlang.y"
    {
                                    printf("array_s\n");
                                    appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                    (yyval.str) = (yyvsp[(1) - (2)].str);
                                ;}
    break;

  case 114:
#line 884 "./lexyacc/pearlang.y"
    {
                                printf("array_s\n");
                                appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                (yyval.str) = (yyvsp[(1) - (2)].str);
                            ;}
    break;

  case 115:
#line 889 "./lexyacc/pearlang.y"
    {
                            printf("array_s\n");
                            appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                            (yyval.str) = (yyvsp[(1) - (2)].str);
                        ;}
    break;

  case 116:
#line 897 "./lexyacc/pearlang.y"
    { printf("type\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 117:
#line 898 "./lexyacc/pearlang.y"
    { printf("type\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 118:
#line 899 "./lexyacc/pearlang.y"
    { printf("type\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 119:
#line 900 "./lexyacc/pearlang.y"
    { printf("type\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 120:
#line 901 "./lexyacc/pearlang.y"
    { printf("type\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 121:
#line 902 "./lexyacc/pearlang.y"
    { printf("type\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 122:
#line 903 "./lexyacc/pearlang.y"
    { printf("type\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 123:
#line 904 "./lexyacc/pearlang.y"
    { printf("type\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 124:
#line 905 "./lexyacc/pearlang.y"
    { printf("type\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 125:
#line 906 "./lexyacc/pearlang.y"
    { printf("type\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 126:
#line 907 "./lexyacc/pearlang.y"
    { printf("type\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 127:
#line 908 "./lexyacc/pearlang.y"
    { printf("type\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 128:
#line 909 "./lexyacc/pearlang.y"
    { printf("type\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 129:
#line 910 "./lexyacc/pearlang.y"
    { printf("typen\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 130:
#line 911 "./lexyacc/pearlang.y"
    { 
                    printf("type\n"); 
                    appendStrF(&(yyvsp[(1) - (2)].str), 1, &(yyvsp[(2) - (2)].str));
                    (yyval.str) = (yyvsp[(1) - (2)].str);
                ;}
    break;

  case 131:
#line 916 "./lexyacc/pearlang.y"
    { 
                    printf("type\n"); 
                    char *arr[] = { createStr(" "), (yyvsp[(2) - (2)].str)};
                    appendStr(&(yyvsp[(1) - (2)].str),2, arr);
                    (yyval.str) = (yyvsp[(1) - (2)].str);
                ;}
    break;

  case 132:
#line 922 "./lexyacc/pearlang.y"
    { 
                    printf("type\n"); 
                    appendStrF(&(yyvsp[(1) - (2)].str), 1, &(yyvsp[(2) - (2)].str));
                    (yyval.str) = (yyvsp[(1) - (2)].str);
                ;}
    break;

  case 133:
#line 930 "./lexyacc/pearlang.y"
    { 
                                printf("typecast\n"); 
                                char *arr[] = { (yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
                                appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                                (yyval.str) = (yyvsp[(1) - (3)].str);   
                            ;}
    break;

  case 134:
#line 939 "./lexyacc/pearlang.y"
    { printf("line\n"); ;}
    break;

  case 135:
#line 940 "./lexyacc/pearlang.y"
    { printf("line\n"); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3144 "./src/pearlang.tab.c"
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


#line 945 "./lexyacc/pearlang.y"


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

