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
#define YYFINAL  95
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   983

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  126
/* YYNRULES -- Number of states.  */
#define YYNSTATES  223

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
       0,     0,     3,     6,     8,    12,    18,    25,    27,    29,
      32,    35,    38,    41,    44,    48,    51,    55,    58,    62,
      67,    70,    74,    79,    85,    89,    92,    95,    99,   101,
     104,   107,   117,   123,   129,   133,   137,   143,   145,   147,
     149,   151,   153,   155,   157,   159,   163,   166,   170,   174,
     178,   182,   184,   187,   189,   192,   195,   197,   199,   201,
     203,   207,   211,   215,   219,   223,   227,   231,   235,   238,
     241,   244,   247,   251,   255,   259,   263,   268,   273,   275,
     277,   279,   281,   283,   285,   287,   289,   291,   293,   295,
     300,   305,   310,   313,   316,   319,   322,   325,   328,   331,
     335,   338,   341,   344,   347,   350,   353,   356,   358,   360,
     362,   364,   366,   368,   370,   372,   374,   376,   378,   380,
     382,   384,   387,   390,   393,   397,   399
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      68,     0,    -1,    68,    93,    -1,    93,    -1,     3,     8,
      91,    -1,     3,    16,    17,     8,    91,    -1,     3,    16,
      89,    17,     8,    91,    -1,    75,    -1,    71,    -1,    62,
      71,    -1,    57,     6,    -1,     3,    12,    -1,    88,    12,
      -1,    72,    89,    -1,    72,    10,    89,    -1,    72,    13,
      -1,     3,     8,    12,    -1,    74,    69,    -1,    74,    10,
      69,    -1,    74,    13,     7,    91,    -1,    75,    80,    -1,
      62,    75,    80,    -1,     3,     8,    56,    14,    -1,    62,
       3,     8,    56,    14,    -1,    77,    86,     9,    -1,    77,
      76,    -1,    77,    15,    -1,    78,     8,     3,    -1,    14,
      -1,    79,    87,    -1,    79,    15,    -1,    61,    12,    89,
       9,    89,     9,    89,    13,    80,    -1,    60,    12,    89,
      13,    80,    -1,    58,    12,    89,    13,    80,    -1,    82,
      59,    82,    -1,    82,    59,    80,    -1,    58,    12,    89,
      13,    87,    -1,    28,    -1,    29,    -1,    30,    -1,    31,
      -1,    33,    -1,    34,    -1,    32,    -1,    36,    -1,    51,
      89,     9,    -1,    51,     9,    -1,     3,    18,    89,    -1,
      88,    18,    89,    -1,    90,    18,    89,    -1,    69,    18,
      89,    -1,    69,    -1,    89,     9,    -1,    84,    -1,    55,
       9,    -1,    54,     9,    -1,    81,    -1,    82,    -1,    76,
      -1,    78,    -1,     3,     7,     3,    -1,    88,     7,     3,
      -1,     3,     7,    88,    -1,    88,     7,    88,    -1,     3,
      11,     3,    -1,    88,    11,     3,    -1,     3,    11,    88,
      -1,    88,    11,    88,    -1,    19,     3,    -1,    19,    88,
      -1,    20,     3,    -1,    20,    88,    -1,    12,     3,    13,
      -1,    12,    88,    13,    -1,     3,    16,    17,    -1,    88,
      16,    17,    -1,     3,    16,    89,    17,    -1,    88,    16,
      89,    17,    -1,    73,    -1,    65,    -1,     4,    -1,     5,
      -1,     6,    -1,     3,    -1,    63,    -1,    64,    -1,    88,
      -1,    86,    -1,    85,    -1,    27,    12,    91,    13,    -1,
      52,     3,    12,    13,    -1,    53,     3,    12,    13,    -1,
      92,    89,    -1,    90,    89,    -1,    90,    21,    -1,    90,
      22,    -1,    22,    89,    -1,    21,    89,    -1,    35,    89,
      -1,    12,    89,    13,    -1,    89,    21,    -1,    89,    22,
      -1,    89,    20,    -1,    89,    23,    -1,    89,    37,    -1,
      89,    24,    -1,    89,    83,    -1,    38,    -1,    39,    -1,
      40,    -1,    41,    -1,    42,    -1,    43,    -1,    44,    -1,
      45,    -1,    46,    -1,    47,    -1,    48,    -1,    49,    -1,
      50,    -1,     3,    -1,    91,    20,    -1,    56,    91,    -1,
       3,    20,    -1,    12,    91,    13,    -1,    87,    -1,    70,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   119,   119,   120,   124,   136,   150,   164,   212,   216,
     224,   237,   242,   275,   280,   289,   308,   331,   336,   345,
     363,   377,   391,   399,   407,   413,   432,   445,   453,   458,
     468,   480,   486,   495,   501,   507,   513,   522,   523,   524,
     525,   526,   527,   528,   529,   533,   539,   547,   553,   559,
     568,   579,   592,   597,   598,   603,   608,   609,   610,   611,
     615,   621,   627,   633,   639,   645,   651,   657,   663,   668,
     673,   678,   683,   689,   695,   701,   707,   713,   722,   723,
     724,   725,   726,   727,   728,   729,   730,   731,   732,   733,
     739,   748,   757,   762,   767,   772,   777,   782,   787,   792,
     801,   806,   811,   816,   821,   827,   832,   840,   841,   842,
     843,   844,   845,   846,   847,   848,   849,   850,   851,   852,
     853,   854,   859,   865,   873,   882,   883
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
     315,   316,   317,   318,   319,   320,   321
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    67,    68,    68,    69,    69,    69,    69,    70,    70,
      71,    72,    72,    72,    72,    73,    74,    74,    74,    75,
      76,    76,    77,    77,    77,    77,    78,    78,    79,    79,
      80,    81,    81,    82,    82,    82,    82,    83,    83,    83,
      83,    83,    83,    83,    83,    84,    84,    85,    85,    85,
      86,    86,    87,    87,    87,    87,    87,    87,    87,    87,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      90,    90,    90,    90,    90,    90,    90,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    92,    93,    93
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     5,     6,     1,     1,     2,
       2,     2,     2,     2,     3,     2,     3,     2,     3,     4,
       2,     3,     4,     5,     3,     2,     2,     3,     1,     2,
       2,     9,     5,     5,     3,     3,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     3,     3,     3,
       3,     1,     2,     1,     2,     2,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     3,     3,     3,     3,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     2,     2,     2,     2,     2,     2,     2,     3,
       2,     2,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     3,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    83,    80,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,    85,    79,     0,    51,   126,     8,     0,
      78,     0,     7,    58,     0,    59,    56,    57,    53,    88,
      87,   125,    86,     0,     0,     0,     3,     0,     0,     0,
      11,     0,     0,    83,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,     0,     7,    86,
       0,     0,    68,     0,    69,    70,    71,    83,    97,    96,
       0,    98,    46,     0,     0,     0,    55,    54,    10,     0,
       0,     0,     0,     9,     0,     1,     2,     0,     0,    15,
      13,     0,     0,     0,    17,    28,     0,    20,    26,     0,
      25,     0,     0,     0,     0,     0,    12,     0,     0,    52,
     102,   100,   101,   103,   105,    37,    38,    39,    40,    43,
      41,    42,    44,   104,   106,     0,    94,    95,    93,    92,
      60,    62,   120,    16,     0,     4,    64,    66,    74,     0,
      47,     0,    72,   123,   122,    73,    99,   124,   121,     0,
       0,     0,     0,    45,     0,     0,     0,     0,     0,     0,
      21,    50,    14,     0,    18,     0,    30,     0,    29,     0,
      24,    27,    35,    34,    61,    63,    65,    67,    75,     0,
      48,    49,    22,     0,    76,    74,     0,    89,    90,    91,
       0,     0,     0,     0,     0,     0,    19,     0,    77,     5,
       0,    76,    33,    36,    32,     0,    23,     0,     6,     0,
       0,     0,    31
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    25,    26,    27,    28,    29,    30,    31,    68,    33,
      34,    35,   106,   107,    36,    37,   134,    38,    39,    40,
      41,    42,    43,    44,   145,    45,    46
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -102
static const yytype_int16 yypact[] =
{
     242,   473,  -102,  -102,  -102,   188,    18,    63,   603,   603,
       4,   603,   372,    12,    17,    13,    22,    26,    21,    23,
      43,    11,  -102,  -102,  -102,   123,    46,  -102,  -102,    38,
    -102,    16,    20,  -102,    10,    61,  -102,    35,  -102,  -102,
    -102,  -102,   547,   250,   435,   603,  -102,    68,   631,    86,
    -102,   455,   603,   393,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,  -102,   679,  -102,   206,
     780,    36,    93,   136,   130,    93,   130,   485,   936,   936,
     679,   936,  -102,   313,    58,    65,  -102,  -102,  -102,   603,
     603,   603,    73,  -102,    20,  -102,  -102,   603,   603,  -102,
     936,    37,    92,    89,  -102,  -102,   305,  -102,  -102,    94,
    -102,    98,   107,     3,   150,   192,  -102,   509,   603,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,   603,   603,   603,   936,   936,
      93,   130,    97,  -102,   650,   101,    93,   130,   106,   864,
     946,   698,  -102,  -102,   101,  -102,  -102,  -102,  -102,   529,
     401,   564,    54,  -102,   105,   109,   802,   824,   740,     6,
    -102,   946,   936,   583,  -102,   679,  -102,   121,  -102,   117,
    -102,  -102,  -102,    35,    93,   130,    93,   130,  -102,   882,
     946,   946,  -102,   679,   125,  -102,   900,  -102,  -102,  -102,
     368,    20,   603,   120,   106,   918,   101,   126,  -102,   101,
     679,  -102,  -102,  -102,  -102,   758,  -102,   125,   101,   603,
     846,    20,  -102
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -102,  -102,   -23,  -102,   128,  -102,  -102,  -102,     2,   113,
    -102,  -102,  -102,   -85,  -102,    39,  -102,  -102,  -102,   127,
    -101,     5,    -5,  -102,    -4,  -102,   132
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      70,    71,    32,    78,    79,   178,    81,    83,   104,   170,
      69,    74,    76,   101,    92,    84,    80,   105,   143,   101,
      85,    72,    86,    94,   100,   108,   102,    32,   182,   103,
      73,    87,    88,    89,   105,    90,    32,     6,     7,   138,
     139,    77,     2,     3,     4,   151,   149,   150,    98,   157,
       5,    99,   141,   173,   147,    91,   158,     6,     7,     8,
       9,    18,   203,   154,    97,    10,    75,   197,    17,   112,
     164,   140,   109,    11,   158,    73,   162,   165,   161,   174,
      73,   169,     6,     7,   166,   167,   168,     6,     7,   146,
      13,    14,   171,   172,   113,   101,   175,   179,    73,   213,
      47,    22,    23,    24,    49,     6,     7,   180,    32,   159,
     181,    94,   189,   190,   193,   212,   214,   153,   198,   185,
     187,   158,   199,    95,    92,   207,     1,     2,     3,     4,
     191,    78,    79,   210,   216,     5,   222,   114,   143,   160,
     154,   115,     6,     7,     8,     9,   117,   110,    73,    93,
      10,     0,   183,   184,   196,     6,     7,    96,    11,     0,
       0,   111,    73,     0,     0,     0,     0,     0,   205,     6,
       7,   206,     0,     0,    12,    13,    14,    15,    16,    94,
      17,    18,     0,    19,    20,    21,    22,    23,    24,   209,
       0,    53,     2,     3,     4,   186,     0,   215,     0,     0,
       5,     0,    32,     0,    73,     0,   218,     6,     7,     8,
       9,     6,     7,   114,   220,    10,     0,   115,   116,   155,
       0,     0,   117,    11,   118,     0,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,     0,
      13,    14,     0,     0,    67,     1,     2,     3,     4,     0,
       0,    22,    23,    24,     5,     0,     0,     0,     0,   119,
       0,     6,     7,     8,     9,     0,     0,     0,     0,    10,
     120,   121,   122,   123,   124,     0,     0,    11,   125,   126,
     127,   128,   129,   130,   131,     0,   132,   133,     0,     0,
       0,     0,     0,    12,    13,    14,    15,    16,     0,    17,
      18,     0,    19,    20,    21,    22,    23,    24,     1,     2,
       3,     4,     0,     0,     0,     0,     0,     5,     0,     0,
     176,     0,   163,     0,     6,     7,     8,     9,     0,     0,
       0,     0,    10,   120,   121,   122,   123,   124,     0,     0,
      11,   125,   126,   127,   128,   129,   130,   131,     0,   132,
     133,     0,     0,     0,     0,     0,    12,    13,    14,    15,
      16,     0,     0,    18,     0,    19,    20,   177,    22,    23,
      24,     1,     2,     3,     4,    77,     2,     3,     4,     0,
       5,    82,   105,     0,     5,     0,     0,     6,     7,     8,
       9,     6,     7,     8,     9,    10,     0,     0,     0,    10,
      47,   151,     0,    11,    49,    50,   152,    11,    47,    51,
       0,    52,    49,   153,   152,     0,     0,   159,     0,    12,
      13,    14,    15,    16,    13,    14,    18,     0,    19,    20,
     177,    22,    23,    24,     0,    22,    23,    24,    77,     2,
       3,     4,     0,     0,     0,     0,     0,     5,     0,     0,
       0,     0,     0,   135,     6,     7,   136,   137,    77,     2,
       3,     4,    10,     0,     0,     0,     0,     5,     0,     0,
      11,     0,   148,     0,     6,     7,     8,     9,     0,     0,
      47,    48,    10,     0,    49,    50,     0,    13,    14,    51,
      11,    52,    47,   151,     0,     0,    49,    50,    22,    23,
      24,    51,     0,    52,     0,     0,     0,    13,    14,     0,
       0,     0,    77,     2,     3,     4,     0,     0,    22,    23,
      24,     5,     0,     0,     0,     0,   188,     0,     6,     7,
       8,     9,    77,     2,     3,     4,    10,     0,     0,     0,
       0,     5,     0,     0,    11,     0,   195,     0,     6,     7,
       8,     9,     0,     0,   114,     0,    10,     0,   115,   116,
       0,    13,    14,   117,    11,   118,     0,     0,     0,     0,
       0,   114,    22,    23,    24,   115,     0,   155,     0,     0,
     117,    13,    14,     0,     0,     0,    77,     2,     3,     4,
       0,     0,    22,    23,    24,     5,     0,     0,     0,     0,
     204,     0,     6,     7,     8,     9,    77,     2,     3,     4,
      10,     0,     0,     0,     0,     5,     0,     0,    11,     0,
       0,     0,     6,     7,     8,     9,     0,     0,     0,     0,
      10,     0,     0,     0,   142,    13,    14,     0,    11,     0,
       0,     0,     0,   143,     0,     0,    22,    23,    24,     0,
       0,     0,     0,   142,     0,    13,    14,     0,     0,     0,
       0,     0,     0,     0,   192,     0,    22,    23,    24,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,   142,     0,     0,     0,     0,   144,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,   142,     0,     0,     0,     0,    67,     0,     0,     0,
     143,     0,     0,     0,     0,     0,     0,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
       0,     0,     0,     0,     0,    67,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,   202,
       0,     0,     0,     0,    67,     0,     0,     0,     0,     0,
     120,   121,   122,   123,   124,     0,     0,   219,   125,   126,
     127,   128,   129,   130,   131,     0,   132,   133,   120,   121,
     122,   123,   124,     0,     0,     0,   125,   126,   127,   128,
     129,   130,   131,   156,   132,   133,     0,     0,     0,     0,
     120,   121,   122,   123,   124,     0,     0,     0,   125,   126,
     127,   128,   129,   130,   131,   200,   132,   133,     0,     0,
       0,     0,   120,   121,   122,   123,   124,     0,     0,     0,
     125,   126,   127,   128,   129,   130,   131,   201,   132,   133,
       0,     0,     0,     0,   120,   121,   122,   123,   124,     0,
       0,     0,   125,   126,   127,   128,   129,   130,   131,   221,
     132,   133,     0,     0,     0,     0,   120,   121,   122,   123,
     124,     0,     0,     0,   125,   126,   127,   128,   129,   130,
     131,   194,   132,   133,   120,   121,   122,   123,   124,     0,
       0,     0,   125,   126,   127,   128,   129,   130,   131,   208,
     132,   133,   120,   121,   122,   123,   124,     0,     0,     0,
     125,   126,   127,   128,   129,   130,   131,   211,   132,   133,
     120,   121,   122,   123,   124,     0,     0,     0,   125,   126,
     127,   128,   129,   130,   131,   217,   132,   133,   120,   121,
     122,   123,   124,     0,     0,     0,   125,   126,   127,   128,
     129,   130,   131,     0,   132,   133,   120,   121,   122,   123,
     124,     0,     0,     0,   125,   126,   127,   128,   129,   130,
     131,     0,   132,   133,   125,   126,   127,   128,   129,   130,
     131,     0,   132,   133
};

static const yytype_int16 yycheck[] =
{
       5,     5,     0,     8,     9,   106,    11,    12,    31,    94,
       5,     6,     7,     3,     3,     3,    12,    14,    12,     3,
       3,     3,     9,    21,    29,    15,    10,    25,   113,    13,
      12,     9,     6,    12,    14,    12,    34,    19,    20,    44,
      45,     3,     4,     5,     6,     8,    51,    52,    10,    13,
      12,    13,    47,    16,    49,    12,    20,    19,    20,    21,
      22,    58,    56,    67,    18,    27,     3,    13,    57,     8,
      12,     3,    62,    35,    20,    12,    80,    12,    73,   102,
      12,     8,    19,    20,    89,    90,    91,    19,    20,     3,
      52,    53,    97,    98,    59,     3,     7,     3,    12,   200,
       7,    63,    64,    65,    11,    19,    20,     9,   106,    16,
       3,   109,   117,   118,     8,   200,   201,    20,    13,   114,
     115,    20,    13,     0,     3,     8,     3,     4,     5,     6,
     135,   136,   137,     8,    14,    12,   221,     7,    12,     3,
     144,    11,    19,    20,    21,    22,    16,    34,    12,    21,
      27,    -1,   113,     3,   159,    19,    20,    25,    35,    -1,
      -1,    34,    12,    -1,    -1,    -1,    -1,    -1,   173,    19,
      20,   175,    -1,    -1,    51,    52,    53,    54,    55,   177,
      57,    58,    -1,    60,    61,    62,    63,    64,    65,   193,
      -1,     3,     4,     5,     6,     3,    -1,   202,    -1,    -1,
      12,    -1,   200,    -1,    12,    -1,   210,    19,    20,    21,
      22,    19,    20,     7,   219,    27,    -1,    11,    12,    13,
      -1,    -1,    16,    35,    18,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,    53,    -1,    -1,    56,     3,     4,     5,     6,    -1,
      -1,    63,    64,    65,    12,    -1,    -1,    -1,    -1,     9,
      -1,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,
      20,    21,    22,    23,    24,    -1,    -1,    35,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    37,    -1,    -1,
      -1,    -1,    -1,    51,    52,    53,    54,    55,    -1,    57,
      58,    -1,    60,    61,    62,    63,    64,    65,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      15,    -1,     9,    -1,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    20,    21,    22,    23,    24,    -1,    -1,
      35,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      37,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    -1,    -1,    58,    -1,    60,    61,    62,    63,    64,
      65,     3,     4,     5,     6,     3,     4,     5,     6,    -1,
      12,     9,    14,    -1,    12,    -1,    -1,    19,    20,    21,
      22,    19,    20,    21,    22,    27,    -1,    -1,    -1,    27,
       7,     8,    -1,    35,    11,    12,    13,    35,     7,    16,
      -1,    18,    11,    20,    13,    -1,    -1,    16,    -1,    51,
      52,    53,    54,    55,    52,    53,    58,    -1,    60,    61,
      62,    63,    64,    65,    -1,    63,    64,    65,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    18,    19,    20,    21,    22,     3,     4,
       5,     6,    27,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      35,    -1,    17,    -1,    19,    20,    21,    22,    -1,    -1,
       7,     8,    27,    -1,    11,    12,    -1,    52,    53,    16,
      35,    18,     7,     8,    -1,    -1,    11,    12,    63,    64,
      65,    16,    -1,    18,    -1,    -1,    -1,    52,    53,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    63,    64,
      65,    12,    -1,    -1,    -1,    -1,    17,    -1,    19,    20,
      21,    22,     3,     4,     5,     6,    27,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    35,    -1,    17,    -1,    19,    20,
      21,    22,    -1,    -1,     7,    -1,    27,    -1,    11,    12,
      -1,    52,    53,    16,    35,    18,    -1,    -1,    -1,    -1,
      -1,     7,    63,    64,    65,    11,    -1,    13,    -1,    -1,
      16,    52,    53,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,    -1,    63,    64,    65,    12,    -1,    -1,    -1,    -1,
      17,    -1,    19,    20,    21,    22,     3,     4,     5,     6,
      27,    -1,    -1,    -1,    -1,    12,    -1,    -1,    35,    -1,
      -1,    -1,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,     3,    52,    53,    -1,    35,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    63,    64,    65,    -1,
      -1,    -1,    -1,     3,    -1,    52,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    14,    -1,    63,    64,    65,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,     3,    -1,    -1,    -1,    -1,    56,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,     3,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    -1,    -1,    -1,    56,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,     9,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    -1,    -1,     9,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    37,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    34,    13,    36,    37,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    33,    34,    13,    36,    37,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    34,    13,    36,    37,
      -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    34,    13,
      36,    37,    -1,    -1,    -1,    -1,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    28,    29,    30,    31,    32,    33,
      34,    17,    36,    37,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    34,    17,
      36,    37,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    34,    17,    36,    37,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    33,    34,    17,    36,    37,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    37,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    37,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    37
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    12,    19,    20,    21,    22,
      27,    35,    51,    52,    53,    54,    55,    57,    58,    60,
      61,    62,    63,    64,    65,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    81,    82,    84,    85,
      86,    87,    88,    89,    90,    92,    93,     7,     8,    11,
      12,    16,    18,     3,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    56,    75,    88,
      89,    91,     3,    12,    88,     3,    88,     3,    89,    89,
      12,    89,     9,    89,     3,     3,     9,     9,     6,    12,
      12,    12,     3,    71,    75,     0,    93,    18,    10,    13,
      89,     3,    10,    13,    69,    14,    79,    80,    15,    62,
      76,    86,     8,    59,     7,    11,    12,    16,    18,     9,
      20,    21,    22,    23,    24,    28,    29,    30,    31,    32,
      33,    34,    36,    37,    83,    18,    21,    22,    89,    89,
       3,    88,     3,    12,    56,    91,     3,    88,    17,    89,
      89,     8,    13,    20,    91,    13,    13,    13,    20,    16,
       3,    88,    91,     9,    12,    12,    89,    89,    89,     8,
      80,    89,    89,    16,    69,     7,    15,    62,    87,     3,
       9,     3,    80,    82,     3,    88,     3,    88,    17,    89,
      89,    89,    14,     8,    17,    17,    89,    13,    13,    13,
      13,    13,     9,    56,    17,    89,    91,     8,    17,    91,
       8,    17,    80,    87,    80,    89,    14,    17,    91,     9,
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
#line 150 "./lexyacc/pearlang.y"
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
#line 164 "./lexyacc/pearlang.y"
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

  case 8:
#line 212 "./lexyacc/pearlang.y"
    { 
                    printf("preproc\n"); 
                    appendStrF(&(activeFT.htdef),1, &(yyvsp[(1) - (1)].str));
                ;}
    break;

  case 9:
#line 216 "./lexyacc/pearlang.y"
    { 
                            printf("preproc\n"); 
                            appendStrF(&(activeFT.stdef),1,&(yyvsp[(2) - (2)].str));
                            free((yyvsp[(1) - (2)].str));
                        ;}
    break;

  case 10:
#line 224 "./lexyacc/pearlang.y"
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

  case 11:
#line 237 "./lexyacc/pearlang.y"
    { 
                    printf("s_fcall\n"); 
                    appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                    (yyval.str) = (yyvsp[(1) - (2)].str);
                ;}
    break;

  case 12:
#line 242 "./lexyacc/pearlang.y"
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

  case 13:
#line 275 "./lexyacc/pearlang.y"
    { 
                            printf("s_fcall\n"); 
                            appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                            (yyval.str) = (yyvsp[(1) - (2)].str);           
                        ;}
    break;

  case 14:
#line 280 "./lexyacc/pearlang.y"
    { 
                                    printf("s_fcall\n"); 
                                    char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                                    appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                                    (yyval.str) = (yyvsp[(1) - (3)].str);
                                ;}
    break;

  case 15:
#line 289 "./lexyacc/pearlang.y"
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

  case 16:
#line 308 "./lexyacc/pearlang.y"
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

  case 17:
#line 331 "./lexyacc/pearlang.y"
    { 
                                    printf("s_funcdecl\n"); 
                                    appendStrF(&((yyvsp[(1) - (2)].func)->def),1, &((yyvsp[(2) - (2)].decl)->def));
                                    (yyval.func) = (yyvsp[(1) - (2)].func);
                                ;}
    break;

  case 18:
#line 336 "./lexyacc/pearlang.y"
    { 
                                        printf("s_funcdecl\n");     
                                        char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].decl)->def};
                                        appendStrF(&((yyvsp[(1) - (3)].func)->def), 2, arr);
                                        (yyval.func) = (yyvsp[(1) - (3)].func);
                                    ;}
    break;

  case 19:
#line 345 "./lexyacc/pearlang.y"
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

  case 20:
#line 363 "./lexyacc/pearlang.y"
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

  case 21:
#line 377 "./lexyacc/pearlang.y"
    { 
                                printf("func\n"); 
                                (yyvsp[(2) - (3)].func)->body = (yyvsp[(3) - (3)].str);
                                (yyval.func) = (yyvsp[(2) - (3)].func);
                                addFuncToFile((yyvsp[(2) - (3)].func),1);
                                gsExitFunc();
                            ;}
    break;

  case 22:
#line 391 "./lexyacc/pearlang.y"
    { 
                                    printf("s_struct\n"); 
                                    gsEnterStruct(createStr((yyvsp[(1) - (4)].str)), false);
                                    Struc *struc = createStruct(); 
                                    struc->id = (yyvsp[(1) - (4)].str);
                                    (yyval.struc) = struc;
                                    free((yyvsp[(2) - (4)].str));
                                ;}
    break;

  case 23:
#line 399 "./lexyacc/pearlang.y"
    { 
                                            printf("s_struct\n"); 
                                            gsEnterStruct(createStr((yyvsp[(1) - (5)].str)), true);
                                            Struc *struc = createStruct(); 
                                            struc->id = (yyvsp[(2) - (5)].str);
                                            (yyval.struc) = struc;
                                            free((yyvsp[(2) - (5)].str));
                                        ;}
    break;

  case 24:
#line 407 "./lexyacc/pearlang.y"
    { 
                                            printf("s_struct\n"); 
                                            appendAssignStruct((yyvsp[(1) - (3)].struc),(yyvsp[(2) - (3)].assign)); 
                                            (yyval.struc) = (yyvsp[(1) - (3)].struc);
                                            free((yyvsp[(3) - (3)].str));
                                        ;}
    break;

  case 25:
#line 413 "./lexyacc/pearlang.y"
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

  case 26:
#line 432 "./lexyacc/pearlang.y"
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

  case 27:
#line 445 "./lexyacc/pearlang.y"
    { 
                            printf("struct\n"); 
                            addSingleToFile((yyvsp[(1) - (3)].struc),(yyvsp[(3) - (3)].str),globalS->lastLocal);
                            free((yyvsp[(2) - (3)].str));
                        ;}
    break;

  case 28:
#line 453 "./lexyacc/pearlang.y"
    {  
                    printf("block_s\n"); 
                    (yyval.str) = createStr("{\n");
                    free((yyvsp[(1) - (1)].str));
                ;}
    break;

  case 29:
#line 458 "./lexyacc/pearlang.y"
    { 
                                printf("block_s\n"); 
                                printf("sta: %s\n", (yyvsp[(2) - (2)].str));
                                char *arr[] = { (yyvsp[(2) - (2)].str), createStr("\n")};
                                appendStrF(&(yyvsp[(1) - (2)].str),2,arr);
                                (yyval.str) = (yyvsp[(1) - (2)].str); 
                            ;}
    break;

  case 30:
#line 468 "./lexyacc/pearlang.y"
    { 
                        printf("block\n"); 
                        appendStrF(&(yyvsp[(1) - (2)].str), 1, &(yyvsp[(2) - (2)].str));
                        (yyval.str) = (yyvsp[(1) - (2)].str);
                    ;}
    break;

  case 31:
#line 480 "./lexyacc/pearlang.y"
    { 
                                                                                        printf("loop\n"); 
                                                                                        char *arr[] = { (yyvsp[(2) - (9)].str),(yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),(yyvsp[(5) - (9)].str),(yyvsp[(6) - (9)].str),(yyvsp[(7) - (9)].str),(yyvsp[(8) - (9)].str),(yyvsp[(9) - (9)].str) };
                                                                                        appendStrF(&(yyvsp[(1) - (9)].str),8,arr);
                                                                                        (yyval.str) = (yyvsp[(1) - (9)].str); 
                                                                                    ;}
    break;

  case 32:
#line 486 "./lexyacc/pearlang.y"
    { 
                                                printf("loop\n"); 
                                                char *arr[] = { (yyvsp[(2) - (5)].str),(yyvsp[(3) - (5)].str),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str) };
                                                appendStrF(&(yyvsp[(1) - (5)].str),4,arr);
                                                (yyval.str) = (yyvsp[(1) - (5)].str);
                                            ;}
    break;

  case 33:
#line 495 "./lexyacc/pearlang.y"
    { 
                                                printf("condition\n"); 
                                                char *arr[] = { (yyvsp[(2) - (5)].str), (yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].str), (yyvsp[(5) - (5)].str)};
                                                appendStrF(&(yyvsp[(1) - (5)].str), 4, arr);
                                                (yyval.str) = (yyvsp[(1) - (5)].str);
                                            ;}
    break;

  case 34:
#line 501 "./lexyacc/pearlang.y"
    { 
                                        printf("condition\n"); 
                                        char *arr[] = { (yyvsp[(2) - (3)].str), createStr(" "), (yyvsp[(3) - (3)].str)};
                                        appendStrF(&(yyvsp[(1) - (3)].str), 3, arr);
                                        (yyval.str) = (yyvsp[(1) - (3)].str);
                                    ;}
    break;

  case 35:
#line 507 "./lexyacc/pearlang.y"
    { 
                                    printf("condition\n"); 
                                    char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str) };
                                    appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                                    (yyval.str) = (yyvsp[(1) - (3)].str);
                                ;}
    break;

  case 36:
#line 513 "./lexyacc/pearlang.y"
    { 
                                                        printf("condition\n"); 
                                                        char *arr[] = { (yyvsp[(2) - (5)].str), (yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].str), (yyvsp[(5) - (5)].str)};
                                                        appendStrF(&(yyvsp[(1) - (5)].str), 4, arr);
                                                        (yyval.str) = (yyvsp[(1) - (5)].str);
                                                    ;}
    break;

  case 37:
#line 522 "./lexyacc/pearlang.y"
    { printf("conditionalOp\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 38:
#line 523 "./lexyacc/pearlang.y"
    { printf("conditionalOp\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 39:
#line 524 "./lexyacc/pearlang.y"
    { printf("conditionalOp\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 40:
#line 525 "./lexyacc/pearlang.y"
    { printf("conditionalOp\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 41:
#line 526 "./lexyacc/pearlang.y"
    { printf("conditionalOp\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 42:
#line 527 "./lexyacc/pearlang.y"
    { printf("conditionalOp\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 43:
#line 528 "./lexyacc/pearlang.y"
    { printf("conditionalOp\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 44:
#line 529 "./lexyacc/pearlang.y"
    { printf("conditionalOp\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 45:
#line 533 "./lexyacc/pearlang.y"
    { 
                                        printf("areturn\n"); 
                                        char *arr[] = {createStr(" "),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
                                        appendStrF(&(yyvsp[(1) - (3)].str),3,arr);
                                        (yyval.str) = (yyvsp[(1) - (3)].str);
                                    ;}
    break;

  case 46:
#line 539 "./lexyacc/pearlang.y"
    { 
                            printf("areturn\n"); 
                            appendStr(&(yyvsp[(1) - (2)].str), 1, &(yyvsp[(2) - (2)].str));
                            (yyval.str) = (yyvsp[(1) - (2)].str);  
                        ;}
    break;

  case 47:
#line 547 "./lexyacc/pearlang.y"
    { 
                                printf("allotment\n"); 
                                char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str) };
                                appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                                (yyval.str) = (yyvsp[(1) - (3)].str);
                            ;}
    break;

  case 48:
#line 553 "./lexyacc/pearlang.y"
    { 
                                        printf("allotment\n"); 
                                        char *arr[]  = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str) };
                                        appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                                        (yyval.str) = (yyvsp[(1) - (3)].str);
                                    ;}
    break;

  case 49:
#line 559 "./lexyacc/pearlang.y"
    {
                                            printf("allotment\n");
                                            char *arr[]  = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str) };
                                            appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                                            (yyval.str) = (yyvsp[(1) - (3)].str);
                                        ;}
    break;

  case 50:
#line 568 "./lexyacc/pearlang.y"
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

  case 51:
#line 579 "./lexyacc/pearlang.y"
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

  case 52:
#line 592 "./lexyacc/pearlang.y"
    { 
                                printf("statement\n"); 
                                appendStr(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                (yyval.str) = (yyvsp[(1) - (2)].str);
                            ;}
    break;

  case 53:
#line 597 "./lexyacc/pearlang.y"
    { printf("statement\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 54:
#line 598 "./lexyacc/pearlang.y"
    { 
                                printf("statement\n"); 
                                appendStr(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                (yyval.str) = (yyvsp[(1) - (2)].str);
                            ;}
    break;

  case 55:
#line 603 "./lexyacc/pearlang.y"
    { 
                                printf("statement\n");  
                                appendStr(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                (yyval.str) = (yyvsp[(1) - (2)].str);
                            ;}
    break;

  case 56:
#line 608 "./lexyacc/pearlang.y"
    { printf("statement\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 57:
#line 609 "./lexyacc/pearlang.y"
    { printf("statement\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 58:
#line 610 "./lexyacc/pearlang.y"
    { printf("statement\n"); ;}
    break;

  case 59:
#line 611 "./lexyacc/pearlang.y"
    { printf("statement\n"); ;}
    break;

  case 60:
#line 615 "./lexyacc/pearlang.y"
    { 
                    printf("access\n"); 
                    char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                    appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                    (yyval.str) = (yyvsp[(1) - (3)].str);
                ;}
    break;

  case 61:
#line 621 "./lexyacc/pearlang.y"
    { 
                        printf("access\n"); 
                        char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                        appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                        (yyval.str) = (yyvsp[(1) - (3)].str);
                    ;}
    break;

  case 62:
#line 627 "./lexyacc/pearlang.y"
    { 
                        printf("access\n"); 
                        char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                        appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                        (yyval.str) = (yyvsp[(1) - (3)].str);
                    ;}
    break;

  case 63:
#line 633 "./lexyacc/pearlang.y"
    { 
                            printf("access\n"); 
                            char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                            appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                            (yyval.str) = (yyvsp[(1) - (3)].str);
                        ;}
    break;

  case 64:
#line 639 "./lexyacc/pearlang.y"
    { 
                    printf("access\n"); 
                    char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                    appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                    (yyval.str) = (yyvsp[(1) - (3)].str);
                ;}
    break;

  case 65:
#line 645 "./lexyacc/pearlang.y"
    { 
                        printf("access\n"); 
                        char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                        appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                        (yyval.str) = (yyvsp[(1) - (3)].str);
                    ;}
    break;

  case 66:
#line 651 "./lexyacc/pearlang.y"
    { 
                        printf("access\n"); 
                        char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                        appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                        (yyval.str) = (yyvsp[(1) - (3)].str);
                    ;}
    break;

  case 67:
#line 657 "./lexyacc/pearlang.y"
    { 
                            printf("access\n"); 
                            char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                            appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                            (yyval.str) = (yyvsp[(1) - (3)].str);
                        ;}
    break;

  case 68:
#line 663 "./lexyacc/pearlang.y"
    { 
                        printf("access\n"); 
                        appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                        (yyval.str) = (yyvsp[(1) - (2)].str);
                    ;}
    break;

  case 69:
#line 668 "./lexyacc/pearlang.y"
    { 
                            printf("access\n"); 
                            appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                            (yyval.str) = (yyvsp[(1) - (2)].str);
                        ;}
    break;

  case 70:
#line 673 "./lexyacc/pearlang.y"
    { 
                    printf("access\n"); 
                    appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                    (yyval.str) = (yyvsp[(1) - (2)].str);
                ;}
    break;

  case 71:
#line 678 "./lexyacc/pearlang.y"
    { 
                        printf("access\n"); 
                        appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                        (yyval.str) = (yyvsp[(1) - (2)].str);
                    ;}
    break;

  case 72:
#line 683 "./lexyacc/pearlang.y"
    { 
                                printf("access\n"); 
                                char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                                appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                                (yyval.str) = (yyvsp[(1) - (3)].str);
                            ;}
    break;

  case 73:
#line 689 "./lexyacc/pearlang.y"
    { 
                                    printf("access\n"); 
                                    char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                                    appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                                    (yyval.str) = (yyvsp[(1) - (3)].str);
                                ;}
    break;

  case 74:
#line 695 "./lexyacc/pearlang.y"
    { 
                                printf("access\n"); 
                                char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                                appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                                (yyval.str) = (yyvsp[(1) - (3)].str);
                            ;}
    break;

  case 75:
#line 701 "./lexyacc/pearlang.y"
    { 
                                    printf("access\n"); 
                                    char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                                    appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                                    (yyval.str) = (yyvsp[(1) - (3)].str);
                                ;}
    break;

  case 76:
#line 707 "./lexyacc/pearlang.y"
    { 
                                            printf("access\n"); 
                                            char *arr[] = { (yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].str)};
                                            appendStrF(&(yyvsp[(1) - (4)].str), 3, arr);
                                            (yyval.str) = (yyvsp[(1) - (4)].str);
                                        ;}
    break;

  case 77:
#line 713 "./lexyacc/pearlang.y"
    { 
                                                printf("access\n"); 
                                                char *arr[] = { (yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].str)};
                                                appendStrF(&(yyvsp[(1) - (4)].str), 3, arr);
                                                (yyval.str) = (yyvsp[(1) - (4)].str);
                                            ;}
    break;

  case 78:
#line 722 "./lexyacc/pearlang.y"
    { printf("expression\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 79:
#line 723 "./lexyacc/pearlang.y"
    { printf("expression\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 80:
#line 724 "./lexyacc/pearlang.y"
    { printf("expression\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 81:
#line 725 "./lexyacc/pearlang.y"
    { printf("expression\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 82:
#line 726 "./lexyacc/pearlang.y"
    { printf("expression\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 83:
#line 727 "./lexyacc/pearlang.y"
    { printf("expression\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 84:
#line 728 "./lexyacc/pearlang.y"
    { printf("expression\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 85:
#line 729 "./lexyacc/pearlang.y"
    { printf("expression\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 86:
#line 730 "./lexyacc/pearlang.y"
    { printf("expression\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 87:
#line 731 "./lexyacc/pearlang.y"
    { printf("expression\n"); (yyval.str)=createStrAssign((yyvsp[(1) - (1)].assign));;}
    break;

  case 88:
#line 732 "./lexyacc/pearlang.y"
    { printf("expression\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 89:
#line 733 "./lexyacc/pearlang.y"
    { 
                                            printf("expression\n"); 
                                            char *arr[] = { (yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str)};
                                            appendStr(&(yyvsp[(1) - (4)].str),3,arr);
                                            (yyval.str) = (yyvsp[(1) - (4)].str);
                                        ;}
    break;

  case 90:
#line 739 "./lexyacc/pearlang.y"
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

  case 91:
#line 748 "./lexyacc/pearlang.y"
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

  case 92:
#line 757 "./lexyacc/pearlang.y"
    { 
                                    printf("expression\n"); 
                                    appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                    (yyval.str) = (yyvsp[(1) - (2)].str);
                                ;}
    break;

  case 93:
#line 762 "./lexyacc/pearlang.y"
    { 
                                        printf("expression\n"); 
                                        appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                        (yyval.str) = (yyvsp[(1) - (2)].str);
                                    ;}
    break;

  case 94:
#line 767 "./lexyacc/pearlang.y"
    { 
                                printf("expression\n"); 
                                appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                (yyval.str) = (yyvsp[(1) - (2)].str);
                            ;}
    break;

  case 95:
#line 772 "./lexyacc/pearlang.y"
    { 
                                    printf("expression\n"); 
                                    appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                    (yyval.str) = (yyvsp[(1) - (2)].str);
                                ;}
    break;

  case 96:
#line 777 "./lexyacc/pearlang.y"
    { 
                                printf("expression\n"); 
                                appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                (yyval.str) = (yyvsp[(1) - (2)].str);
                            ;}
    break;

  case 97:
#line 782 "./lexyacc/pearlang.y"
    { 
                                printf("expression\n"); 
                                appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                (yyval.str) = (yyvsp[(1) - (2)].str);
                            ;}
    break;

  case 98:
#line 787 "./lexyacc/pearlang.y"
    { 
                                printf("expression\n"); 
                                appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                (yyval.str) = (yyvsp[(1) - (2)].str);
                            ;}
    break;

  case 99:
#line 792 "./lexyacc/pearlang.y"
    { 
                                            printf("expression\n"); 
                                            char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                                            appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                                            (yyval.str) = (yyvsp[(1) - (3)].str);
                                        ;}
    break;

  case 100:
#line 801 "./lexyacc/pearlang.y"
    { 
                                printf("s_expression\n"); 
                                appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                (yyval.str) = (yyvsp[(1) - (2)].str);
                            ;}
    break;

  case 101:
#line 806 "./lexyacc/pearlang.y"
    { 
                                    printf("s_expression\n"); 
                                    appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                    (yyval.str) = (yyvsp[(1) - (2)].str);
                                ;}
    break;

  case 102:
#line 811 "./lexyacc/pearlang.y"
    { 
                                    printf("s_expression\n"); 
                                    appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                    (yyval.str) = (yyvsp[(1) - (2)].str);
                                ;}
    break;

  case 103:
#line 816 "./lexyacc/pearlang.y"
    { 
                                    printf("s_expression\n"); 
                                    appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                    (yyval.str) = (yyvsp[(1) - (2)].str);
                                ;}
    break;

  case 104:
#line 821 "./lexyacc/pearlang.y"
    { 
                                    printf("s_expression\n"); 
                                    appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                    (yyval.str) = (yyvsp[(1) - (2)].str);
                                ;}
    break;

  case 105:
#line 827 "./lexyacc/pearlang.y"
    { 
                                    printf("s_expression\n"); 
                                    appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                    (yyval.str) = (yyvsp[(1) - (2)].str);
                                ;}
    break;

  case 106:
#line 832 "./lexyacc/pearlang.y"
    { 
                                            printf("s_expression\n"); 
                                            appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                                            (yyval.str) = (yyvsp[(1) - (2)].str);
                                        ;}
    break;

  case 107:
#line 840 "./lexyacc/pearlang.y"
    { printf("type\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 108:
#line 841 "./lexyacc/pearlang.y"
    { printf("type\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 109:
#line 842 "./lexyacc/pearlang.y"
    { printf("type\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 110:
#line 843 "./lexyacc/pearlang.y"
    { printf("type\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 111:
#line 844 "./lexyacc/pearlang.y"
    { printf("type\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 112:
#line 845 "./lexyacc/pearlang.y"
    { printf("type\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 113:
#line 846 "./lexyacc/pearlang.y"
    { printf("type\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 114:
#line 847 "./lexyacc/pearlang.y"
    { printf("type\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 115:
#line 848 "./lexyacc/pearlang.y"
    { printf("type\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 116:
#line 849 "./lexyacc/pearlang.y"
    { printf("type\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 117:
#line 850 "./lexyacc/pearlang.y"
    { printf("type\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 118:
#line 851 "./lexyacc/pearlang.y"
    { printf("type\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 119:
#line 852 "./lexyacc/pearlang.y"
    { printf("type\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 120:
#line 853 "./lexyacc/pearlang.y"
    { printf("typen\n"); (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 121:
#line 854 "./lexyacc/pearlang.y"
    { 
                    printf("type\n"); 
                    appendStrF(&(yyvsp[(1) - (2)].str), 1, &(yyvsp[(2) - (2)].str));
                    (yyval.str) = (yyvsp[(1) - (2)].str);
                ;}
    break;

  case 122:
#line 859 "./lexyacc/pearlang.y"
    { 
                    printf("type\n"); 
                    char *arr[] = { createStr(" "), (yyvsp[(2) - (2)].str)};
                    appendStr(&(yyvsp[(1) - (2)].str),2, arr);
                    (yyval.str) = (yyvsp[(1) - (2)].str);
                ;}
    break;

  case 123:
#line 865 "./lexyacc/pearlang.y"
    { 
                    printf("type\n"); 
                    appendStrF(&(yyvsp[(1) - (2)].str), 1, &(yyvsp[(2) - (2)].str));
                    (yyval.str) = (yyvsp[(1) - (2)].str);
                ;}
    break;

  case 124:
#line 873 "./lexyacc/pearlang.y"
    { 
                                printf("typecast\n"); 
                                char *arr[] = { (yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
                                appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                                (yyval.str) = (yyvsp[(1) - (3)].str);   
                            ;}
    break;

  case 125:
#line 882 "./lexyacc/pearlang.y"
    { printf("line\n"); ;}
    break;

  case 126:
#line 883 "./lexyacc/pearlang.y"
    { printf("line\n"); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3006 "./src/pearlang.tab.c"
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


#line 888 "./lexyacc/pearlang.y"


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

