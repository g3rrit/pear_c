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
     NUL = 319,
     access_p = 320
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
#define access_p 320




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
#line 255 "./src/pearlang.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 268 "./src/pearlang.tab.c"

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
#define YYFINAL  95
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1012

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  131
/* YYNRULES -- Number of states.  */
#define YYNSTATES  228

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   320

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
      65
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    11,    14,    17,    20,    24,
      30,    37,    39,    41,    44,    47,    50,    53,    56,    60,
      63,    67,    70,    74,    79,    82,    86,    91,    97,   101,
     104,   107,   111,   113,   116,   119,   129,   135,   141,   145,
     149,   155,   157,   159,   161,   163,   165,   167,   169,   171,
     175,   178,   182,   186,   190,   192,   196,   199,   201,   204,
     207,   209,   211,   213,   215,   219,   223,   227,   231,   235,
     239,   243,   247,   250,   253,   256,   259,   263,   267,   271,
     275,   280,   285,   287,   289,   291,   293,   295,   297,   299,
     301,   303,   305,   307,   309,   314,   319,   324,   327,   330,
     333,   336,   339,   342,   345,   349,   352,   355,   358,   361,
     364,   367,   369,   371,   373,   375,   377,   379,   381,   383,
     385,   387,   389,   391,   393,   395,   398,   401,   404,   408,
     410,   412
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      67,     0,    -1,    67,    93,    -1,    93,    -1,    21,    18,
      -1,    22,    18,    -1,    20,    18,    -1,    23,    18,    -1,
       3,     8,    91,    -1,     3,    16,    17,     8,    91,    -1,
       3,    16,    89,    17,     8,    91,    -1,    75,    -1,    71,
      -1,    61,    71,    -1,    56,     6,    -1,     3,    12,    -1,
      88,    12,    -1,    72,    89,    -1,    72,    10,    89,    -1,
      72,    13,    -1,     3,     8,    12,    -1,    74,    69,    -1,
      74,    10,    69,    -1,    74,    13,     7,    91,    -1,    75,
      80,    -1,    61,    75,    80,    -1,     3,     8,    55,    14,
      -1,    61,     3,     8,    55,    14,    -1,    77,    86,     9,
      -1,    77,    76,    -1,    77,    15,    -1,    78,     8,     3,
      -1,    14,    -1,    79,    87,    -1,    79,    15,    -1,    60,
      12,    89,     9,    89,     9,    89,    13,    80,    -1,    59,
      12,    89,    13,    80,    -1,    57,    12,    89,    13,    80,
      -1,    82,    58,    82,    -1,    82,    58,    80,    -1,    57,
      12,    89,    13,    87,    -1,    28,    -1,    29,    -1,    30,
      -1,    31,    -1,    33,    -1,    34,    -1,    32,    -1,    36,
      -1,    50,    89,     9,    -1,    50,     9,    -1,     3,    18,
      89,    -1,    88,    18,    89,    -1,    69,    18,    89,    -1,
      69,    -1,    89,    68,    89,    -1,    89,     9,    -1,    84,
      -1,    54,     9,    -1,    53,     9,    -1,    81,    -1,    82,
      -1,    76,    -1,    78,    -1,     3,     7,     3,    -1,    88,
       7,     3,    -1,     3,     7,    88,    -1,    88,     7,    88,
      -1,     3,    11,     3,    -1,    88,    11,     3,    -1,     3,
      11,    88,    -1,    88,    11,    88,    -1,    19,     3,    -1,
      19,    88,    -1,    20,     3,    -1,    20,    88,    -1,    12,
       3,    13,    -1,    12,    88,    13,    -1,     3,    16,    17,
      -1,    88,    16,    17,    -1,     3,    16,    89,    17,    -1,
      88,    16,    89,    17,    -1,    73,    -1,    64,    -1,     4,
      -1,     5,    -1,     6,    -1,     3,    -1,    62,    -1,    63,
      -1,     6,    -1,    88,    -1,    86,    -1,    85,    -1,    27,
      12,    91,    13,    -1,    51,     3,    12,    13,    -1,    52,
       3,    12,    13,    -1,    92,    89,    -1,    90,    89,    -1,
      90,    21,    -1,    90,    22,    -1,    22,    89,    -1,    21,
      89,    -1,    35,    89,    -1,    12,    89,    13,    -1,    89,
      21,    -1,    89,    22,    -1,    89,    20,    -1,    89,    23,
      -1,    89,    24,    -1,    89,    83,    -1,    37,    -1,    38,
      -1,    39,    -1,    40,    -1,    41,    -1,    42,    -1,    43,
      -1,    44,    -1,    45,    -1,    46,    -1,    47,    -1,    48,
      -1,    49,    -1,     3,    -1,    91,    20,    -1,    55,    91,
      -1,     3,    20,    -1,    12,    91,    13,    -1,    87,    -1,
      70,    -1,    78,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   115,   115,   116,   120,   121,   122,   123,   127,   128,
     129,   130,   134,   135,   139,   144,   145,   146,   147,   151,
     157,   158,   159,   163,   172,   173,   181,   182,   183,   184,
     188,   189,   193,   194,   198,   206,   207,   211,   212,   213,
     214,   218,   219,   220,   221,   222,   223,   224,   225,   229,
     230,   234,   235,   239,   240,   241,   245,   246,   247,   248,
     249,   250,   251,   252,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   303,   304,   305,   306,   307,
     308,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   332,   336,
     337,   338
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
  "access_p", "$accept", "program", "equals", "declaration", "preproc",
  "include_s", "s_fcall", "fcall", "s_funcdecl", "funcdecl", "func",
  "s_struct", "struct", "block_s", "block", "loop", "condition",
  "conditionalOp", "areturn", "allotment", "assignment", "statement",
  "access", "expression", "s_expression", "type", "typecast", "line", 0
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
     315,   316,   317,   318,   319,   320
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    67,    68,    68,    68,    68,    69,    69,
      69,    69,    70,    70,    71,    72,    72,    72,    72,    73,
      74,    74,    74,    75,    76,    76,    77,    77,    77,    77,
      78,    78,    79,    79,    80,    81,    81,    82,    82,    82,
      82,    83,    83,    83,    83,    83,    83,    83,    83,    84,
      84,    85,    85,    86,    86,    86,    87,    87,    87,    87,
      87,    87,    87,    87,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    90,    90,    90,    90,    90,
      90,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    92,    93,
      93,    93
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     2,     2,     2,     3,     5,
       6,     1,     1,     2,     2,     2,     2,     2,     3,     2,
       3,     2,     3,     4,     2,     3,     4,     5,     3,     2,
       2,     3,     1,     2,     2,     9,     5,     5,     3,     3,
       5,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     3,     3,     3,     1,     3,     2,     1,     2,     2,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     3,     3,     3,     3,
       4,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     2,     2,     2,
       2,     2,     2,     2,     3,     2,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     3,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    87,    84,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    89,    83,     0,    54,   130,    12,     0,
      82,     0,    11,    62,     0,    63,    60,    61,    57,    93,
      92,   129,    91,     0,     0,     0,     3,     0,     0,     0,
      15,     0,     0,    87,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,     0,    11,    91,
       0,     0,    72,     0,    73,    74,    75,    87,   102,   101,
       0,   103,    50,     0,     0,     0,    59,    58,    14,     0,
       0,     0,     0,    13,     0,     1,     2,     0,     0,    19,
      17,     0,     0,     0,    21,    32,     0,    24,    30,     0,
      29,    92,     0,     0,     0,     0,     0,    16,     0,     0,
      56,   107,   105,   106,   108,   109,    41,    42,    43,    44,
      47,    45,    46,    48,     0,   110,    99,   100,    98,    97,
      64,    66,   124,    20,     0,     8,    68,    70,    78,     0,
      51,     0,    76,   127,   126,    77,   104,   128,   125,     0,
       0,     0,     0,    49,     0,     0,     0,     0,     0,     0,
      25,    53,    18,     0,    22,     0,    34,     0,    63,    33,
       0,    28,    31,    39,    38,    65,    67,    69,    71,    79,
       0,    52,     6,     4,     5,     7,    55,    26,     0,    80,
      78,     0,    94,    95,    96,     0,     0,     0,     0,     0,
       0,    23,     0,    81,     9,     0,    80,    37,    40,    36,
       0,    27,     0,    10,     0,     0,     0,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    25,   134,    26,    27,    28,    29,    30,    31,    68,
      33,    34,    35,   106,   107,    36,    37,   135,    38,    39,
      40,    41,    42,    43,    44,   145,    45,    46
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -99
static const yytype_int16 yypact[] =
{
     285,   250,   -99,   -99,   -99,   232,    14,    18,   621,   621,
       3,   621,   493,    13,    19,    22,    23,    29,    42,    52,
      54,    11,   -99,   -99,   -99,   170,    30,   -99,   -99,   429,
     -99,   125,    55,   -99,   455,    60,   -99,    20,   -99,   -99,
     -99,   -99,    63,   127,   647,   621,   -99,    68,   675,    79,
     -99,    38,   621,   188,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   722,   -99,   689,
     821,    32,   123,   103,   177,   123,   177,   739,   976,   976,
     722,   976,   -99,   293,    82,    83,   -99,   -99,   -99,   621,
     621,   621,    64,   -99,    55,   -99,   -99,   621,   621,   -99,
     976,    12,    93,    90,   -99,   -99,   347,   -99,   -99,   100,
     -99,    95,   976,   102,     5,   106,   166,   -99,   519,   621,
     -99,    92,   109,   115,   124,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   621,   -99,   621,   621,   976,   976,
     123,   177,   101,   -99,   694,   104,   123,   177,   133,   905,
     976,   741,   -99,   -99,   104,   -99,   -99,   -99,   -99,   557,
     202,   234,    36,   -99,   130,   131,   843,   865,   782,     6,
     -99,   976,   976,   583,   -99,   722,   -99,   142,    60,   -99,
     138,   -99,   -99,   -99,    20,   123,   177,   123,   177,   -99,
     923,   976,   -99,   -99,   -99,   -99,   976,   -99,   722,   144,
     -99,   941,   -99,   -99,   -99,   367,    55,   621,   139,   133,
     959,   104,   150,   -99,   104,   722,   -99,   -99,   -99,   -99,
     799,   -99,   144,   104,   621,   887,    55,   -99
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -99,   -99,   -99,   -19,   -99,   143,   -99,   -99,   -99,     2,
     132,   -99,   -98,   -99,   -89,   -99,    51,   -99,   -99,   -99,
     146,   -93,     4,    -5,   -99,    -4,   -99,   147
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      70,    71,    32,    78,    79,   170,    81,    83,   178,    69,
      74,    76,   104,   179,    92,    80,    84,    72,   143,   105,
     151,    75,    85,    94,   100,   183,    73,    32,   173,   112,
      73,    86,    87,     6,     7,    88,    32,     6,     7,   138,
     139,    77,     2,     3,     4,   157,   149,   150,    97,   202,
       5,   141,   158,   147,    89,   148,   158,     6,     7,     8,
       9,   208,    18,   154,    90,    10,    91,    17,   113,   105,
     115,   140,   169,    11,   116,   117,   162,   161,   114,   118,
      73,   119,   146,   174,   166,   167,   168,     6,     7,    13,
      14,    73,   171,   172,   164,   165,   101,   175,     6,     7,
      22,    23,    24,   180,   181,   182,   160,   178,    32,   185,
     192,    94,   218,   190,   191,    73,   217,   219,    73,   186,
     188,   153,     6,     7,   158,     6,     7,   193,   101,   196,
      47,    78,    79,   194,    49,   102,   120,   227,   103,   159,
     154,   198,   195,   203,   204,    92,   212,   121,   122,   123,
     124,   125,   215,   221,   201,   126,   127,   128,   129,   130,
     131,   132,   143,   133,    93,   184,   110,     0,   210,   187,
      95,   211,    96,     1,     2,     3,     4,     0,    73,    94,
     111,     0,     5,     0,   115,     6,     7,     0,   116,     6,
       7,     8,     9,   118,   214,    47,   151,    10,     0,    49,
      50,   152,   220,     0,    51,    11,    52,    32,   153,    47,
       0,   223,     0,    49,     0,   152,     0,     0,   159,   225,
      12,    13,    14,    15,    16,     0,    17,    18,     0,    19,
      20,    21,    22,    23,    24,    53,     2,     3,     4,     0,
       0,   115,     0,     0,     5,   116,     0,   155,     0,     0,
     118,     6,     7,     8,     9,     0,     0,    47,    48,    10,
       0,    49,    50,     0,     0,     0,    51,    11,    52,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,     0,    13,    14,     0,     0,    67,     1,     2,
       3,     4,     0,     0,    22,    23,    24,     5,     0,     0,
       0,     0,   163,     0,     6,     7,     8,     9,     0,     0,
       0,     0,    10,   121,   122,   123,   124,   125,     0,     0,
      11,   126,   127,   128,   129,   130,   131,   132,     0,   133,
       0,     0,     0,     0,     0,    12,    13,    14,    15,    16,
       0,    17,    18,     0,    19,    20,    21,    22,    23,    24,
       1,     2,     3,     4,     0,     0,     0,     0,     0,     5,
       0,     0,   176,     0,     0,     0,     6,     7,     8,     9,
       1,     2,     3,     4,    10,     0,     0,     0,     0,     5,
       0,   105,    11,     0,     0,     0,     6,     7,     8,     9,
       0,     0,     0,     0,    10,     0,     0,    12,    13,    14,
      15,    16,    11,     0,    18,     0,    19,    20,   177,    22,
      23,    24,     0,     0,     0,     0,     0,    12,    13,    14,
      15,    16,     0,     0,    18,     0,    19,    20,   177,    22,
      23,    24,    77,     2,     3,     4,     0,     0,     0,    98,
       0,     5,    99,     0,     0,     0,     0,     0,     6,     7,
       8,     9,     0,     0,     0,     0,    10,     0,    77,     2,
       3,     4,     0,     0,    11,     0,     0,     5,     0,     0,
     108,     0,     0,     0,     6,     7,     8,     9,     0,     0,
      13,    14,    10,     0,     0,     0,     0,     0,     0,     0,
      11,    22,    23,    24,     0,     0,    77,     2,     3,     4,
       0,     0,    82,     0,     0,     5,    13,    14,     0,     0,
       0,     0,     6,     7,     8,     9,   109,    22,    23,    24,
      10,     0,    77,     2,     3,     4,     0,     0,    11,     0,
       0,     5,     0,     0,     0,     0,   189,     0,     6,     7,
       8,     9,     0,     0,    13,    14,    10,     0,     0,     0,
       0,     0,     0,     0,    11,    22,    23,    24,     0,     0,
      77,     2,     3,     4,     0,     0,     0,     0,     0,     5,
      13,    14,     0,     0,   200,     0,     6,     7,     8,     9,
       0,    22,    23,    24,    10,     0,    77,     2,     3,     4,
       0,     0,    11,     0,     0,     5,     0,     0,     0,     0,
     209,     0,     6,     7,     8,     9,     0,     0,    13,    14,
      10,     0,     0,     0,     0,     0,     0,     0,    11,    22,
      23,    24,     0,     0,    77,     2,     3,     4,     0,     0,
       0,     0,     0,     5,    13,    14,     0,     0,     0,     0,
       6,     7,     8,     9,     0,    22,    23,    24,    10,     0,
      77,     2,     3,     4,     0,     0,    11,     0,     0,     5,
       0,     0,     0,     0,     0,     0,     6,     7,   136,   137,
       0,     0,    13,    14,    10,     0,     0,     0,   142,     0,
       0,     0,    11,    22,    23,    24,     0,   143,     0,     0,
       0,     0,     0,     0,     0,     0,   115,   142,    13,    14,
     116,   117,   155,     0,     0,   118,     0,   119,   197,    22,
      23,    24,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,   142,     0,     0,     0,     0,
     144,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,   142,     0,    47,   151,     0,    67,
      49,    50,     0,   143,     0,    51,     0,    52,     0,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,     0,     0,     0,     0,     0,    67,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,   207,     0,     0,     0,     0,    67,     0,     0,     0,
       0,     0,   121,   122,   123,   124,   125,     0,   224,     0,
     126,   127,   128,   129,   130,   131,   132,     0,   133,   121,
     122,   123,   124,   125,     0,     0,     0,   126,   127,   128,
     129,   130,   131,   132,   156,   133,     0,     0,     0,     0,
       0,   121,   122,   123,   124,   125,     0,     0,     0,   126,
     127,   128,   129,   130,   131,   132,   205,   133,     0,     0,
       0,     0,     0,   121,   122,   123,   124,   125,     0,     0,
       0,   126,   127,   128,   129,   130,   131,   132,   206,   133,
       0,     0,     0,     0,     0,   121,   122,   123,   124,   125,
       0,     0,     0,   126,   127,   128,   129,   130,   131,   132,
     226,   133,     0,     0,     0,     0,     0,   121,   122,   123,
     124,   125,     0,     0,     0,   126,   127,   128,   129,   130,
     131,   132,   199,   133,     0,   121,   122,   123,   124,   125,
       0,     0,     0,   126,   127,   128,   129,   130,   131,   132,
     213,   133,     0,   121,   122,   123,   124,   125,     0,     0,
       0,   126,   127,   128,   129,   130,   131,   132,   216,   133,
       0,   121,   122,   123,   124,   125,     0,     0,     0,   126,
     127,   128,   129,   130,   131,   132,   222,   133,     0,   121,
     122,   123,   124,   125,     0,     0,     0,   126,   127,   128,
     129,   130,   131,   132,     0,   133,   121,   122,   123,   124,
     125,     0,     0,     0,   126,   127,   128,   129,   130,   131,
     132,     0,   133
};

static const yytype_int16 yycheck[] =
{
       5,     5,     0,     8,     9,    94,    11,    12,   106,     5,
       6,     7,    31,   106,     3,    12,     3,     3,    12,    14,
       8,     3,     3,    21,    29,   114,    12,    25,    16,    34,
      12,     9,     9,    19,    20,     6,    34,    19,    20,    44,
      45,     3,     4,     5,     6,    13,    51,    52,    18,    13,
      12,    47,    20,    49,    12,    17,    20,    19,    20,    21,
      22,    55,    57,    67,    12,    27,    12,    56,     8,    14,
       7,     3,     8,    35,    11,    12,    80,    73,    58,    16,
      12,    18,     3,   102,    89,    90,    91,    19,    20,    51,
      52,    12,    97,    98,    12,    12,     3,     7,    19,    20,
      62,    63,    64,     3,     9,     3,     3,   205,   106,     3,
      18,   109,   205,   118,   119,    12,   205,   206,    12,   115,
     116,    20,    19,    20,    20,    19,    20,    18,     3,   134,
       7,   136,   137,    18,    11,    10,     9,   226,    13,    16,
     144,     8,    18,    13,    13,     3,     8,    20,    21,    22,
      23,    24,     8,    14,   159,    28,    29,    30,    31,    32,
      33,    34,    12,    36,    21,   114,    34,    -1,   173,     3,
       0,   175,    25,     3,     4,     5,     6,    -1,    12,   177,
      34,    -1,    12,    -1,     7,    19,    20,    -1,    11,    19,
      20,    21,    22,    16,   198,     7,     8,    27,    -1,    11,
      12,    13,   207,    -1,    16,    35,    18,   205,    20,     7,
      -1,   215,    -1,    11,    -1,    13,    -1,    -1,    16,   224,
      50,    51,    52,    53,    54,    -1,    56,    57,    -1,    59,
      60,    61,    62,    63,    64,     3,     4,     5,     6,    -1,
      -1,     7,    -1,    -1,    12,    11,    -1,    13,    -1,    -1,
      16,    19,    20,    21,    22,    -1,    -1,     7,     8,    27,
      -1,    11,    12,    -1,    -1,    -1,    16,    35,    18,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,    52,    -1,    -1,    55,     3,     4,
       5,     6,    -1,    -1,    62,    63,    64,    12,    -1,    -1,
      -1,    -1,     9,    -1,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    20,    21,    22,    23,    24,    -1,    -1,
      35,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      -1,    56,    57,    -1,    59,    60,    61,    62,    63,    64,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    15,    -1,    -1,    -1,    19,    20,    21,    22,
       3,     4,     5,     6,    27,    -1,    -1,    -1,    -1,    12,
      -1,    14,    35,    -1,    -1,    -1,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    50,    51,    52,
      53,    54,    35,    -1,    57,    -1,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    -1,    -1,    57,    -1,    59,    60,    61,    62,
      63,    64,     3,     4,     5,     6,    -1,    -1,    -1,    10,
      -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    -1,     3,     4,
       5,     6,    -1,    -1,    35,    -1,    -1,    12,    -1,    -1,
      15,    -1,    -1,    -1,    19,    20,    21,    22,    -1,    -1,
      51,    52,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    62,    63,    64,    -1,    -1,     3,     4,     5,     6,
      -1,    -1,     9,    -1,    -1,    12,    51,    52,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    61,    62,    63,    64,
      27,    -1,     3,     4,     5,     6,    -1,    -1,    35,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    17,    -1,    19,    20,
      21,    22,    -1,    -1,    51,    52,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    62,    63,    64,    -1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      51,    52,    -1,    -1,    17,    -1,    19,    20,    21,    22,
      -1,    62,    63,    64,    27,    -1,     3,     4,     5,     6,
      -1,    -1,    35,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      17,    -1,    19,    20,    21,    22,    -1,    -1,    51,    52,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    62,
      63,    64,    -1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    51,    52,    -1,    -1,    -1,    -1,
      19,    20,    21,    22,    -1,    62,    63,    64,    27,    -1,
       3,     4,     5,     6,    -1,    -1,    35,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      -1,    -1,    51,    52,    27,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    35,    62,    63,    64,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     7,     3,    51,    52,
      11,    12,    13,    -1,    -1,    16,    -1,    18,    14,    62,
      63,    64,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,     3,    -1,    -1,    -1,    -1,
      55,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,     3,    -1,     7,     8,    -1,    55,
      11,    12,    -1,    12,    -1,    16,    -1,    18,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    55,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,     9,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    -1,     9,    -1,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    13,    36,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    23,    24,    -1,    -1,    -1,    28,
      29,    30,    31,    32,    33,    34,    13,    36,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    13,    36,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      13,    36,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    17,    36,    -1,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      17,    36,    -1,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    17,    36,
      -1,    20,    21,    22,    23,    24,    -1,    -1,    -1,    28,
      29,    30,    31,    32,    33,    34,    17,    36,    -1,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    28,    29,    30,    31,    32,    33,
      34,    -1,    36
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    12,    19,    20,    21,    22,
      27,    35,    50,    51,    52,    53,    54,    56,    57,    59,
      60,    61,    62,    63,    64,    67,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    81,    82,    84,    85,
      86,    87,    88,    89,    90,    92,    93,     7,     8,    11,
      12,    16,    18,     3,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    55,    75,    88,
      89,    91,     3,    12,    88,     3,    88,     3,    89,    89,
      12,    89,     9,    89,     3,     3,     9,     9,     6,    12,
      12,    12,     3,    71,    75,     0,    93,    18,    10,    13,
      89,     3,    10,    13,    69,    14,    79,    80,    15,    61,
      76,    86,    89,     8,    58,     7,    11,    12,    16,    18,
       9,    20,    21,    22,    23,    24,    28,    29,    30,    31,
      32,    33,    34,    36,    68,    83,    21,    22,    89,    89,
       3,    88,     3,    12,    55,    91,     3,    88,    17,    89,
      89,     8,    13,    20,    91,    13,    13,    13,    20,    16,
       3,    88,    91,     9,    12,    12,    89,    89,    89,     8,
      80,    89,    89,    16,    69,     7,    15,    61,    78,    87,
       3,     9,     3,    80,    82,     3,    88,     3,    88,    17,
      89,    89,    18,    18,    18,    18,    89,    14,     8,    17,
      17,    89,    13,    13,    13,    13,    13,     9,    55,    17,
      89,    91,     8,    17,    91,     8,    17,    80,    87,    80,
      89,    14,    17,    91,     9,    89,    13,    80
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
#line 115 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 3:
#line 116 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 4:
#line 120 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 5:
#line 121 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 6:
#line 122 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 7:
#line 123 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 8:
#line 127 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 9:
#line 128 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 10:
#line 129 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 11:
#line 130 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 12:
#line 134 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 13:
#line 135 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 14:
#line 139 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 15:
#line 144 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 16:
#line 145 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 17:
#line 146 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 18:
#line 147 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 19:
#line 151 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 20:
#line 157 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 21:
#line 158 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 22:
#line 159 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 23:
#line 163 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 24:
#line 172 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 25:
#line 173 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 26:
#line 181 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 27:
#line 182 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 28:
#line 183 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 29:
#line 184 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 30:
#line 188 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 31:
#line 189 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 32:
#line 193 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 33:
#line 194 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 34:
#line 198 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 35:
#line 206 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 36:
#line 207 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 37:
#line 211 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 38:
#line 212 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 39:
#line 213 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 40:
#line 214 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 41:
#line 218 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 42:
#line 219 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 43:
#line 220 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 44:
#line 221 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 45:
#line 222 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 46:
#line 223 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 47:
#line 224 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 48:
#line 225 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 49:
#line 229 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 50:
#line 230 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 51:
#line 234 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 52:
#line 235 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 53:
#line 239 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 54:
#line 240 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 55:
#line 241 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 56:
#line 245 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 57:
#line 246 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 58:
#line 247 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 59:
#line 248 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 60:
#line 249 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 61:
#line 250 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 62:
#line 251 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 63:
#line 252 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 64:
#line 256 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 65:
#line 257 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 66:
#line 258 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 67:
#line 259 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 68:
#line 260 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 69:
#line 261 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 70:
#line 262 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 71:
#line 263 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 72:
#line 264 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 73:
#line 265 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 74:
#line 266 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 75:
#line 267 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 76:
#line 268 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 77:
#line 269 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 78:
#line 270 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 79:
#line 271 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 80:
#line 272 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 81:
#line 273 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 82:
#line 277 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 83:
#line 278 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 84:
#line 279 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 85:
#line 280 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 86:
#line 281 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 87:
#line 282 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 88:
#line 283 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 89:
#line 284 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 90:
#line 285 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 91:
#line 286 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 92:
#line 287 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 93:
#line 288 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 94:
#line 289 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 95:
#line 290 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 96:
#line 291 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 97:
#line 292 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 98:
#line 293 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 99:
#line 294 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 100:
#line 295 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 101:
#line 296 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 102:
#line 297 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 103:
#line 298 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 104:
#line 299 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 105:
#line 303 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 106:
#line 304 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 107:
#line 305 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 108:
#line 306 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 109:
#line 307 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 110:
#line 308 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 111:
#line 312 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 112:
#line 313 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 113:
#line 314 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 114:
#line 315 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 115:
#line 316 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 116:
#line 317 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 117:
#line 318 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 118:
#line 319 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 119:
#line 320 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 120:
#line 321 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 121:
#line 322 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 122:
#line 323 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 123:
#line 324 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 124:
#line 325 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 125:
#line 326 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 126:
#line 327 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 127:
#line 328 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 128:
#line 332 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 129:
#line 336 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 130:
#line 337 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;

  case 131:
#line 338 "./lexyacc/pearlang.y"
    { printf("reduction\n"); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2486 "./src/pearlang.tab.c"
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


#line 343 "./lexyacc/pearlang.y"


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

