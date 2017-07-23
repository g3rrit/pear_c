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
     EQUAL = 271,
     ADDRESS = 272,
     TIMES = 273,
     PLUS = 274,
     MINUS = 275,
     DIVIDED = 276,
     MODULO = 277,
     HASH = 278,
     QUOTATION = 279,
     GREATER = 280,
     LESS = 281,
     GREQ = 282,
     LEEQ = 283,
     SAME = 284,
     AND = 285,
     OR = 286,
     NOT = 287,
     NOTEQ = 288,
     VOID = 289,
     I8 = 290,
     I16 = 291,
     I32 = 292,
     I64 = 293,
     U8 = 294,
     U16 = 295,
     U32 = 296,
     U64 = 297,
     F32 = 298,
     F64 = 299,
     BOOL = 300,
     INT = 301,
     RETURN = 302,
     NEW = 303,
     CRT = 304,
     BREAK = 305,
     CONTINUE = 306,
     STRUCT = 307,
     INCLUDE = 308,
     IF = 309,
     ELSE = 310,
     WHILE = 311,
     FOR = 312,
     LOCAL = 313,
     TRUE = 314,
     FALSE = 315,
     NUL = 316
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
#define EQUAL 271
#define ADDRESS 272
#define TIMES 273
#define PLUS 274
#define MINUS 275
#define DIVIDED 276
#define MODULO 277
#define HASH 278
#define QUOTATION 279
#define GREATER 280
#define LESS 281
#define GREQ 282
#define LEEQ 283
#define SAME 284
#define AND 285
#define OR 286
#define NOT 287
#define NOTEQ 288
#define VOID 289
#define I8 290
#define I16 291
#define I32 292
#define I64 293
#define U8 294
#define U16 295
#define U32 296
#define U64 297
#define F32 298
#define F64 299
#define BOOL 300
#define INT 301
#define RETURN 302
#define NEW 303
#define CRT 304
#define BREAK 305
#define CONTINUE 306
#define STRUCT 307
#define INCLUDE 308
#define IF 309
#define ELSE 310
#define WHILE 311
#define FOR 312
#define LOCAL 313
#define TRUE 314
#define FALSE 315
#define NUL 316




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

#define YYDEBUG 1

extern int yylex();
extern int yyparse();
extern FILE *yyin;

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
#line 20 "./lexyacc/pearlang.y"
{
    char *str;
    Func *func;
    Assign *assign;
    Sassign *sassign;
    Struc *struc;
}
/* Line 193 of yacc.c.  */
#line 245 "./src/pearlang.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 258 "./src/pearlang.tab.c"

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
#define YYFINAL  59
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   806

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNRULES -- Number of states.  */
#define YYNSTATES  178

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

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
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    11,    13,    16,    19,    22,
      25,    29,    32,    36,    41,    47,    52,    55,    58,    61,
      65,    70,    76,    79,    82,    84,    87,    90,    99,   105,
     111,   115,   119,   125,   127,   129,   131,   133,   135,   137,
     139,   141,   145,   152,   159,   167,   172,   174,   179,   182,
     184,   186,   188,   190,   192,   194,   196,   198,   200,   202,
     204,   206,   208,   210,   212,   217,   222,   225,   229,   233,
     237,   241,   245,   249,   253,   257,   260,   263,   266,   270,
     274,   278,   281,   283,   285,   287,   289,   291,   293,   295,
     297,   299,   301,   303,   305,   307,   309,   311
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      63,     0,    -1,    63,    85,    -1,    85,    -1,    63,    63,
      -1,    65,    -1,    58,    65,    -1,    53,     6,    -1,     3,
      12,    -1,    66,    83,    -1,    66,    10,    83,    -1,    66,
      13,    -1,     3,     8,    12,    -1,    68,     3,     8,    84,
      -1,    68,    10,     3,     8,    84,    -1,    68,    13,     7,
      84,    -1,    69,    14,    -1,    70,    82,    -1,    70,    15,
      -1,    58,    70,    15,    -1,     3,     8,    52,    14,    -1,
      58,     3,     8,    52,    14,    -1,    72,    80,    -1,    72,
      15,    -1,    14,    -1,    74,    82,    -1,    74,    15,    -1,
      57,    12,    80,    83,     9,    83,    13,    75,    -1,    56,
      12,    83,    13,    75,    -1,    54,    12,    83,    13,    75,
      -1,    77,    55,    77,    -1,    77,    55,    75,    -1,    54,
      12,    83,    13,    82,    -1,    25,    -1,    26,    -1,    27,
      -1,    28,    -1,    30,    -1,    31,    -1,    29,    -1,    33,
      -1,    47,    83,     9,    -1,     3,     8,    84,    16,    83,
       9,    -1,     3,     8,     3,    16,    83,     9,    -1,     3,
       8,     3,    18,    16,    83,     9,    -1,     3,     8,    84,
       9,    -1,    71,    -1,     3,    16,    83,     9,    -1,    83,
       9,    -1,    79,    -1,    81,    -1,    80,    -1,    76,    -1,
      77,    -1,    71,    -1,    73,    -1,    67,    -1,    61,    -1,
       4,    -1,     5,    -1,     6,    -1,     3,    -1,    59,    -1,
      60,    -1,    48,     3,    12,    13,    -1,    49,     3,    12,
      13,    -1,    17,    83,    -1,    83,    11,    83,    -1,    83,
       7,    83,    -1,    12,    83,    13,    -1,    83,    19,    83,
      -1,    83,    20,    83,    -1,    83,    18,    83,    -1,    83,
      21,    83,    -1,    83,    22,    83,    -1,    20,    83,    -1,
      19,    83,    -1,    32,    83,    -1,    83,    20,    20,    -1,
      83,    19,    19,    -1,    83,    78,    83,    -1,    84,    18,
      -1,    34,    -1,    35,    -1,    36,    -1,    37,    -1,    38,
      -1,    39,    -1,    40,    -1,    41,    -1,    42,    -1,    43,
      -1,    44,    -1,    45,    -1,    46,    -1,     3,    -1,    82,
      -1,    64,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   106,   106,   107,   108,   112,   115,   122,   135,   140,
     145,   154,   164,   183,   190,   200,   210,   215,   225,   243,
     261,   269,   277,   287,   307,   311,   319,   330,   335,   343,
     348,   353,   358,   366,   367,   368,   369,   370,   371,   372,
     373,   377,   386,   404,   418,   435,   448,   464,   472,   476,
     477,   478,   482,   483,   484,   487,   493,   494,   495,   496,
     497,   498,   499,   500,   501,   509,   517,   521,   526,   531,
     536,   541,   546,   551,   556,   561,   565,   569,   573,   578,
     583,   591,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   612,   615
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "NUMBER", "FLOAT", "STRING", "AR",
  "COLON", "SEMICOLON", "COMMA", "DOT", "L_BRACE", "R_BRACE", "L_GBRACE",
  "R_GBRACE", "EQUAL", "ADDRESS", "TIMES", "PLUS", "MINUS", "DIVIDED",
  "MODULO", "HASH", "QUOTATION", "GREATER", "LESS", "GREQ", "LEEQ", "SAME",
  "AND", "OR", "NOT", "NOTEQ", "VOID", "I8", "I16", "I32", "I64", "U8",
  "U16", "U32", "U64", "F32", "F64", "BOOL", "INT", "RETURN", "NEW", "CRT",
  "BREAK", "CONTINUE", "STRUCT", "INCLUDE", "IF", "ELSE", "WHILE", "FOR",
  "LOCAL", "TRUE", "FALSE", "NUL", "$accept", "program", "preproc",
  "include_s", "s_fcall", "fcall", "s_funcdef", "funcdef", "s_func",
  "func", "s_struct", "struct", "block_s", "block", "loop", "condition",
  "conditionalOp", "areturn", "assignment", "allotment", "statement",
  "expression", "type", "line", 0
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
     315,   316
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    63,    63,    64,    64,    65,    66,    66,
      66,    67,    68,    68,    68,    69,    70,    70,    71,    71,
      72,    72,    72,    73,    74,    74,    75,    76,    76,    77,
      77,    77,    77,    78,    78,    78,    78,    78,    78,    78,
      78,    79,    80,    80,    80,    80,    80,    81,    82,    82,
      82,    82,    82,    82,    82,    82,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    85,    85
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     2,     2,     2,     2,
       3,     2,     3,     4,     5,     4,     2,     2,     2,     3,
       4,     5,     2,     2,     1,     2,     2,     8,     5,     5,
       3,     3,     5,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     6,     6,     7,     4,     1,     4,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     3,     3,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    61,    58,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    62,    63,
      57,     0,    97,     5,     0,    56,     0,     0,     0,    46,
       0,    55,    52,    53,    49,    51,    50,    96,     0,     3,
       0,     8,     0,    61,     0,    66,    76,    75,    77,     0,
       0,     0,     7,     0,     0,     0,     0,     6,     0,     1,
       4,     2,     0,    11,     9,     0,     0,     0,    16,    18,
       0,    17,     0,    23,     0,    46,    22,     0,     0,    48,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
      39,    37,    38,    40,     0,    95,    12,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
       0,     0,     0,    69,    41,     0,     0,     0,     0,     0,
       0,    19,    10,     0,     0,     0,     0,     0,    24,     0,
      31,    30,    68,    67,    72,    79,    70,    78,    71,    73,
      74,    80,     0,     0,    20,    45,     0,    81,    47,    64,
      65,     0,     0,     0,     0,    95,    13,     0,    15,     0,
      26,    25,     0,     0,     0,    29,    32,    28,     0,    21,
      14,    43,     0,    42,     0,    44,     0,    27
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    60,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,   129,   130,    32,    33,    94,    34,    35,    36,
      37,    38,   111,    61
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -131
static const yytype_int16 yypact[] =
{
      91,    74,  -131,  -131,  -131,   323,   323,   323,   323,   323,
     323,     9,    15,    28,    27,    29,    32,    21,  -131,  -131,
    -131,    11,  -131,  -131,   305,  -131,    22,    31,   150,  -131,
       5,  -131,  -131,    -3,  -131,  -131,  -131,  -131,   498,  -131,
     414,  -131,   323,    42,   523,   773,   773,   773,   773,   548,
      43,    44,  -131,   323,   323,    23,    75,  -131,   168,  -131,
      91,  -131,   323,  -131,   773,    77,    84,    81,  -131,  -131,
      88,  -131,    85,  -131,    89,  -131,  -131,    -7,   323,  -131,
     323,   323,   327,   386,   323,   323,  -131,  -131,  -131,  -131,
    -131,  -131,  -131,  -131,   323,    35,  -131,  -131,  -131,  -131,
    -131,  -131,  -131,  -131,  -131,  -131,  -131,  -131,  -131,  -131,
      86,    24,   573,  -131,  -131,    92,    93,   598,   623,   323,
      -2,  -131,   773,   437,    90,   437,   458,    94,  -131,   227,
    -131,    -3,   773,   773,   773,   323,   773,   323,   773,   773,
     773,   773,   323,    83,  -131,  -131,   323,  -131,  -131,  -131,
    -131,   246,    87,   648,    98,  -131,    95,   437,    95,   103,
    -131,  -131,   673,   323,   698,  -131,  -131,  -131,   323,  -131,
      95,  -131,   723,  -131,   748,  -131,    87,  -131
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -131,   104,  -131,    99,  -131,  -131,  -131,  -131,    -8,   -17,
    -131,  -131,  -131,  -130,  -131,    40,  -131,  -131,    54,  -131,
     -22,    -5,   -96,   118
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      44,    45,    46,    47,    48,    49,    71,   128,    72,    58,
      96,    59,    50,    75,     1,     2,     3,     4,    51,    64,
      73,   165,   167,     5,    56,    65,    72,   156,     6,   158,
       7,     8,    66,   145,    52,    67,    71,   112,    75,    53,
     146,    54,   147,     9,    55,    68,   177,    14,   117,   118,
     154,   142,    77,   143,    41,   115,   116,   122,    10,    11,
      12,   170,    58,    74,    13,    14,    58,    15,    16,    17,
      18,    19,    20,   132,    13,   133,   134,   136,   138,   139,
     140,    74,    40,   120,    76,   123,    41,   124,   125,   141,
      42,    56,   127,   126,     1,     2,     3,     4,   157,   163,
     144,   128,   159,     5,    21,   149,   150,   161,     6,   119,
       7,     8,   169,   147,   153,    96,    57,   131,    39,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,   166,
      46,     0,    47,     0,     0,     0,     0,   162,    10,    11,
      12,   164,     0,     0,    13,    14,     0,    15,    16,    17,
      18,    19,    20,     1,     2,     3,     4,     0,   172,     0,
       0,     0,     5,   174,     0,    69,     0,     6,     0,     7,
       8,     1,     2,     3,     4,     0,     0,     0,     0,     0,
       5,     0,     9,   121,     0,     6,     0,     7,     8,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,    12,
       9,     0,     0,     0,    14,     0,    15,    16,    70,    18,
      19,    20,     0,     0,     0,    10,    11,    12,     0,     0,
       0,     0,    14,     0,    15,    16,    70,    18,    19,    20,
       1,     2,     3,     4,     0,     0,     0,     0,     0,     5,
       0,     0,   160,     0,     6,     0,     7,     8,     0,     1,
       2,     3,     4,     0,     0,     0,     0,     0,     5,     9,
     128,     0,     0,     6,     0,     7,     8,     0,     0,     0,
       0,     0,     0,     0,    10,    11,    12,     0,     9,     0,
       0,    14,     0,    15,    16,    70,    18,    19,    20,     0,
       0,     0,     0,    10,    11,    12,     0,     0,     0,     0,
      14,     0,    15,    16,    70,    18,    19,    20,    43,     2,
       3,     4,     0,     0,     0,    62,     0,     5,    63,     0,
       0,     0,     6,     0,     7,     8,    43,     2,     3,     4,
      43,     2,     3,     4,     0,     5,     0,     9,     0,     5,
       6,     0,     7,     8,     6,     0,   135,     8,     0,     0,
       0,     0,     0,    11,    12,     9,     0,     0,     0,     9,
       0,     0,     0,     0,    18,    19,    20,     0,     0,     0,
       0,    11,    12,     0,     0,    11,    12,     0,     0,     0,
       0,     0,    18,    19,    20,     0,    18,    19,    20,    43,
       2,     3,     4,     0,     0,     0,     0,     0,     5,     0,
       0,     0,     0,     6,     0,     7,   137,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    95,     9,     0,
       0,     0,     0,     0,     0,     0,    96,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
     155,     0,     0,     0,     0,    18,    19,    20,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,    95,     0,     0,     0,     0,   110,     0,     0,     0,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,     0,     0,     0,     0,     0,     0,
       0,     0,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,    78,     0,    79,     0,    80,
       0,     0,     0,     0,     0,     0,    81,    82,    83,    84,
      85,     0,     0,    86,    87,    88,    89,    90,    91,    92,
      78,    93,     0,     0,    80,     0,   113,     0,     0,     0,
       0,    81,    82,    83,    84,    85,     0,     0,    86,    87,
      88,    89,    90,    91,    92,    78,    93,   114,     0,    80,
       0,     0,     0,     0,     0,     0,    81,    82,    83,    84,
      85,     0,     0,    86,    87,    88,    89,    90,    91,    92,
      78,    93,   148,     0,    80,     0,     0,     0,     0,     0,
       0,    81,    82,    83,    84,    85,     0,     0,    86,    87,
      88,    89,    90,    91,    92,    78,    93,     0,     0,    80,
       0,   151,     0,     0,     0,     0,    81,    82,    83,    84,
      85,     0,     0,    86,    87,    88,    89,    90,    91,    92,
      78,    93,     0,     0,    80,     0,   152,     0,     0,     0,
       0,    81,    82,    83,    84,    85,     0,     0,    86,    87,
      88,    89,    90,    91,    92,    78,    93,   168,     0,    80,
       0,     0,     0,     0,     0,     0,    81,    82,    83,    84,
      85,     0,     0,    86,    87,    88,    89,    90,    91,    92,
      78,    93,   171,     0,    80,     0,     0,     0,     0,     0,
       0,    81,    82,    83,    84,    85,     0,     0,    86,    87,
      88,    89,    90,    91,    92,    78,    93,   173,     0,    80,
       0,     0,     0,     0,     0,     0,    81,    82,    83,    84,
      85,     0,     0,    86,    87,    88,    89,    90,    91,    92,
      78,    93,   175,     0,    80,     0,     0,     0,     0,     0,
       0,    81,    82,    83,    84,    85,     0,     0,    86,    87,
      88,    89,    90,    91,    92,    78,    93,     0,     0,    80,
       0,   176,     0,     0,     0,     0,    81,    82,    83,    84,
      85,     0,     0,    86,    87,    88,    89,    90,    91,    92,
      78,    93,     0,     0,    80,     0,     0,     0,     0,     0,
       0,    81,    82,    83,    84,    85,     0,     0,    86,    87,
      88,    89,    90,    91,    92,     0,    93
};

static const yytype_int16 yycheck[] =
{
       5,     6,     7,     8,     9,    10,    28,    14,     3,    17,
      12,     0,     3,    30,     3,     4,     5,     6,     3,    24,
      15,   151,   152,    12,     3,     3,     3,   123,    17,   125,
      19,    20,    10,     9,     6,    13,    58,    42,    55,    12,
      16,    12,    18,    32,    12,    14,   176,    54,    53,    54,
      52,    16,    55,    18,    12,    12,    12,    62,    47,    48,
      49,   157,    70,    58,    53,    54,    74,    56,    57,    58,
      59,    60,    61,    78,    53,    80,    81,    82,    83,    84,
      85,    58,     8,     8,    30,     8,    12,     3,     7,    94,
      16,     3,     3,     8,     3,     4,     5,     6,     8,    16,
      14,    14,     8,    12,     0,    13,    13,   129,    17,    55,
      19,    20,    14,    18,   119,    12,    17,    77,     0,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,   151,
     135,    -1,   137,    -1,    -1,    -1,    -1,   142,    47,    48,
      49,   146,    -1,    -1,    53,    54,    -1,    56,    57,    58,
      59,    60,    61,     3,     4,     5,     6,    -1,   163,    -1,
      -1,    -1,    12,   168,    -1,    15,    -1,    17,    -1,    19,
      20,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    -1,    32,    15,    -1,    17,    -1,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      32,    -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    -1,    -1,    -1,    47,    48,    49,    -1,    -1,
      -1,    -1,    54,    -1,    56,    57,    58,    59,    60,    61,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    15,    -1,    17,    -1,    19,    20,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    32,
      14,    -1,    -1,    17,    -1,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    49,    -1,    32,    -1,
      -1,    54,    -1,    56,    57,    58,    59,    60,    61,    -1,
      -1,    -1,    -1,    47,    48,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59,    60,    61,     3,     4,
       5,     6,    -1,    -1,    -1,    10,    -1,    12,    13,    -1,
      -1,    -1,    17,    -1,    19,    20,     3,     4,     5,     6,
       3,     4,     5,     6,    -1,    12,    -1,    32,    -1,    12,
      17,    -1,    19,    20,    17,    -1,    19,    20,    -1,    -1,
      -1,    -1,    -1,    48,    49,    32,    -1,    -1,    -1,    32,
      -1,    -1,    -1,    -1,    59,    60,    61,    -1,    -1,    -1,
      -1,    48,    49,    -1,    -1,    48,    49,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    -1,    59,    60,    61,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    17,    -1,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    -1,    -1,    59,    60,    61,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,     3,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      12,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,     7,    -1,     9,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      22,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
       7,    33,    -1,    -1,    11,    -1,    13,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,    22,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,     7,    33,     9,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      22,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
       7,    33,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,    22,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,     7,    33,    -1,    -1,    11,
      -1,    13,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      22,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
       7,    33,    -1,    -1,    11,    -1,    13,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,    22,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,     7,    33,     9,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      22,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
       7,    33,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,    22,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,     7,    33,     9,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      22,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
       7,    33,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,    22,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,     7,    33,    -1,    -1,    11,
      -1,    13,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      22,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
       7,    33,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,    22,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    -1,    33
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    12,    17,    19,    20,    32,
      47,    48,    49,    53,    54,    56,    57,    58,    59,    60,
      61,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    76,    77,    79,    80,    81,    82,    83,    85,
       8,    12,    16,     3,    83,    83,    83,    83,    83,    83,
       3,     3,     6,    12,    12,    12,     3,    65,    70,     0,
      63,    85,    10,    13,    83,     3,    10,    13,    14,    15,
      58,    82,     3,    15,    58,    71,    80,    55,     7,     9,
      11,    18,    19,    20,    21,    22,    25,    26,    27,    28,
      29,    30,    31,    33,    78,     3,    12,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      52,    84,    83,    13,     9,    12,    12,    83,    83,    80,
       8,    15,    83,     8,     3,     7,     8,     3,    14,    74,
      75,    77,    83,    83,    83,    19,    83,    20,    83,    83,
      83,    83,    16,    18,    14,     9,    16,    18,     9,    13,
      13,    13,    13,    83,    52,     3,    84,     8,    84,     8,
      15,    82,    83,    16,    83,    75,    82,    75,     9,    14,
      84,     9,    83,     9,    83,     9,    13,    75
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
#line 112 "./lexyacc/pearlang.y"
    {
            appendStrF(&(activeFT.htdef), 1, &(yyvsp[(1) - (1)].str));
        ;}
    break;

  case 6:
#line 115 "./lexyacc/pearlang.y"
    {
            appendStrF(&activeFT.stdef, 1, &(yyvsp[(2) - (2)].str));
            free((yyvsp[(1) - (2)].str));
        ;}
    break;

  case 7:
#line 122 "./lexyacc/pearlang.y"
    {
            printf("include_s");
            char *incC = (yyvsp[(2) - (2)].str);
            //free(&incC[strlen(incC)]);
            incC[strlen(incC) - 1] = 0;
            char *arr[] = { incC, createStr(".h\"\n")};
            appendStrF(&(yyvsp[(1) - (2)].str), 2, arr);
            (yyval.str) = (yyvsp[(1) - (2)].str);
        ;}
    break;

  case 8:
#line 135 "./lexyacc/pearlang.y"
    {
            printf("fcall \n");
            appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
            (yyval.str) = (yyvsp[(1) - (2)].str);
        ;}
    break;

  case 9:
#line 140 "./lexyacc/pearlang.y"
    {
            printf("fcall \n");
            appendStrF(&(yyvsp[(1) - (2)].str), 1,&(yyvsp[(2) - (2)].str));
            (yyval.str) = (yyvsp[(1) - (2)].str);
        ;}
    break;

  case 10:
#line 145 "./lexyacc/pearlang.y"
    {
            printf("fcall \n");
            char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
            appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
            (yyval.str) = (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 11:
#line 154 "./lexyacc/pearlang.y"
    {
            printf("fcall \n");
            appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
            (yyval.str) = (yyvsp[(1) - (2)].str);
        ;}
    break;

  case 12:
#line 164 "./lexyacc/pearlang.y"
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

  case 13:
#line 183 "./lexyacc/pearlang.y"
    {
            printf("s_funcdef \n");
            char *arr[] = { (yyvsp[(4) - (4)].str), createStr(" "), (yyvsp[(2) - (4)].str)};
            appendStrF(&((yyvsp[(1) - (4)].func)->def),3, arr);
            (yyval.func) = (yyvsp[(1) - (4)].func);
            free((yyvsp[(3) - (4)].str));
        ;}
    break;

  case 14:
#line 190 "./lexyacc/pearlang.y"
    {
            printf("s_funcdef \n");
            char *arr[] = { (yyvsp[(2) - (5)].str), (yyvsp[(5) - (5)].str), createStr(" "), (yyvsp[(3) - (5)].str)};
            appendStrF(&((yyvsp[(1) - (5)].func)->def), 4, arr);
            (yyval.func) = (yyvsp[(1) - (5)].func);
            free((yyvsp[(4) - (5)].str));
        ;}
    break;

  case 15:
#line 200 "./lexyacc/pearlang.y"
    {
            printf("funcdef \n");
            appendStrF(&((yyvsp[(1) - (4)].func)->def),1,&(yyvsp[(2) - (4)].str));
            (yyvsp[(1) - (4)].func)->type = (yyvsp[(4) - (4)].str);
            (yyval.func) = (yyvsp[(1) - (4)].func);
            free((yyvsp[(3) - (4)].str));
        ;}
    break;

  case 16:
#line 210 "./lexyacc/pearlang.y"
    {
            printf("s_func \n");
            (yyvsp[(1) - (2)].func)->body = (yyvsp[(2) - (2)].str);
            (yyval.func) = (yyvsp[(1) - (2)].func);
        ;}
    break;

  case 17:
#line 215 "./lexyacc/pearlang.y"
    {
            printf("s_func \n");
            char *snl = "\n";
            appendStr(&((yyvsp[(1) - (2)].func)->body),1,&snl);
            appendStrF(&((yyvsp[(1) - (2)].func)->body), 1,&(yyvsp[(2) - (2)].str));
            (yyval.func) = (yyvsp[(1) - (2)].func);
        ;}
    break;

  case 18:
#line 225 "./lexyacc/pearlang.y"
    {
        printf("func \n");
        appendStrF(&((yyvsp[(1) - (2)].func)->body),1,&(yyvsp[(2) - (2)].str));
        char *snl = "\n";
        appendStr(&((yyvsp[(1) - (2)].func)->body),1,&snl);
        (yyval.func) = (yyvsp[(1) - (2)].func);
  
        printf("function finished: \n type: %s \n id: %s \n def:  %s \n body: \n %s \n", (yyvsp[(1) - (2)].func)->type, (yyvsp[(1) - (2)].func)->id, (yyvsp[(1) - (2)].func)->def, (yyvsp[(1) - (2)].func)->body);
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

  case 19:
#line 243 "./lexyacc/pearlang.y"
    {
        printf("local func \n");
        appendStrF(&((yyvsp[(2) - (3)].func)->body),1,&(yyvsp[(3) - (3)].str));
        char *snl = "\n";
        appendStr(&((yyvsp[(2) - (3)].func)->body),1,&snl);
        (yyval.func) = (yyvsp[(2) - (3)].func);
  
        printf("function finished: \n type: %s \n id: %s \n def:  %s \n body: \n %s \n", (yyvsp[(2) - (3)].func)->type, (yyvsp[(2) - (3)].func)->id, (yyvsp[(2) - (3)].func)->def, (yyvsp[(2) - (3)].func)->body);
        addFuncToFile((yyvsp[(2) - (3)].func),1);
        gsExitFunc();
    ;}
    break;

  case 20:
#line 261 "./lexyacc/pearlang.y"
    {
            printf("s_struct \n");
            gsEnterStruct(createStr((yyvsp[(1) - (4)].str)), false);
            Struc *struc = createStruct(); 
            struc->id = (yyvsp[(1) - (4)].str);
            (yyval.struc) = struc;
            free((yyvsp[(2) - (4)].str));              
        ;}
    break;

  case 21:
#line 269 "./lexyacc/pearlang.y"
    {
            printf("s_struct \n");
            gsEnterStruct(createStr((yyvsp[(1) - (5)].str)), true);
            Struc *struc = createStruct(); 
            struc->id = (yyvsp[(2) - (5)].str);
            (yyval.struc) = struc;
            free((yyvsp[(2) - (5)].str));              
        ;}
    break;

  case 22:
#line 277 "./lexyacc/pearlang.y"
    {
            printf("s_struct \n");
            appendAssignStruct((yyvsp[(1) - (2)].struc),(yyvsp[(2) - (2)].assign)); 
            (yyval.struc) = (yyvsp[(1) - (2)].struc);

            printStruct((yyvsp[(1) - (2)].struc));
        ;}
    break;

  case 23:
#line 287 "./lexyacc/pearlang.y"
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

  case 24:
#line 307 "./lexyacc/pearlang.y"
    { 
            (yyval.str) = createStr("{\n");
            free((yyvsp[(1) - (1)].str));
        ;}
    break;

  case 25:
#line 311 "./lexyacc/pearlang.y"
    {
            char *arr[] = { (yyvsp[(2) - (2)].str), createStr("\n")};
            appendStrF(&(yyvsp[(1) - (2)].str),2,arr);
            (yyval.str) = (yyvsp[(1) - (2)].str);
        ;}
    break;

  case 26:
#line 319 "./lexyacc/pearlang.y"
    {
            appendStrF(&(yyvsp[(1) - (2)].str), 1, &(yyvsp[(2) - (2)].str));
            (yyval.str) = (yyvsp[(1) - (2)].str);
        ;}
    break;

  case 27:
#line 330 "./lexyacc/pearlang.y"
    {
            char *arr[] = { (yyvsp[(2) - (8)].str), createStrAssign((yyvsp[(3) - (8)].assign)), (yyvsp[(4) - (8)].str), (yyvsp[(5) - (8)].str), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str) };           
            appendStrF(&(yyvsp[(1) - (8)].str),7, arr);
            (yyval.str) = (yyvsp[(1) - (8)].str);
        ;}
    break;

  case 28:
#line 335 "./lexyacc/pearlang.y"
    {
            char *arr[] = { (yyvsp[(2) - (5)].str), (yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].str), (yyvsp[(5) - (5)].str)};
            appendStrF(&(yyvsp[(1) - (5)].str), 4, arr);
            (yyval.str) = (yyvsp[(1) - (5)].str);
        ;}
    break;

  case 29:
#line 343 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (5)].str), (yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].str), (yyvsp[(5) - (5)].str)};
                appendStrF(&(yyvsp[(1) - (5)].str), 4, arr);
                (yyval.str) = (yyvsp[(1) - (5)].str);
            ;}
    break;

  case 30:
#line 348 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str), createStr(" "), (yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str), 3, arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 31:
#line 353 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str) };
                appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 32:
#line 358 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (5)].str), (yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].str), (yyvsp[(5) - (5)].str)};
                appendStrF(&(yyvsp[(1) - (5)].str), 4, arr);
                (yyval.str) = (yyvsp[(1) - (5)].str);
            ;}
    break;

  case 33:
#line 366 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 34:
#line 367 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 35:
#line 368 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 36:
#line 369 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 37:
#line 370 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 38:
#line 371 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 39:
#line 372 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 40:
#line 373 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 41:
#line 377 "./lexyacc/pearlang.y"
    {
            printf("areturn \n");
            char *arr[] = {createStr(" "),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
            appendStrF(&(yyvsp[(1) - (3)].str),3,arr);
            (yyval.str) = (yyvsp[(1) - (3)].str);
       ;}
    break;

  case 42:
#line 386 "./lexyacc/pearlang.y"
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
                (yyval.assign) = assign;
                free((yyvsp[(2) - (6)].str));
                free((yyvsp[(4) - (6)].str));
                free((yyvsp[(6) - (6)].str));
            ;}
    break;

  case 43:
#line 404 "./lexyacc/pearlang.y"
    {
                printf("assignment \n");
                Assign *assign = malloc(sizeof(Assign));
                assign->id = (yyvsp[(1) - (6)].str);
                assign->type = createStr((yyvsp[(3) - (6)].str));
                assign->def = (yyvsp[(3) - (6)].str);
                char *arr[] = { " ", (yyvsp[(1) - (6)].str)};
                appendStr(&(assign->def), 2,arr);
                assign->value = (yyvsp[(5) - (6)].str);
                (yyval.assign) = assign;
                free((yyvsp[(2) - (6)].str));
                free((yyvsp[(4) - (6)].str));
                free((yyvsp[(6) - (6)].str));
            ;}
    break;

  case 44:
#line 418 "./lexyacc/pearlang.y"
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
                (yyval.assign) = assign;
                free((yyvsp[(2) - (7)].str));
                free((yyvsp[(4) - (7)].str));
                free((yyvsp[(5) - (7)].str));
                free((yyvsp[(7) - (7)].str));
            ;}
    break;

  case 45:
#line 435 "./lexyacc/pearlang.y"
    {
                printf("assignment \n");
                Assign *assign = malloc(sizeof(Assign));
                assign->id = (yyvsp[(1) - (4)].str);
                assign->type = createStr((yyvsp[(3) - (4)].str));
                assign->def = (yyvsp[(3) - (4)].str);
                char *arr[] = { " ", (yyvsp[(1) - (4)].str)};
                appendStr(&(assign->def), 2, arr);
                assign->value = createStr("NULL");
                (yyval.assign) = assign;
                free((yyvsp[(2) - (4)].str));
                free((yyvsp[(4) - (4)].str));
            ;}
    break;

  case 46:
#line 448 "./lexyacc/pearlang.y"
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
                (yyval.assign) = assign;
            ;}
    break;

  case 47:
#line 464 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str)};
                appendStrF(&(yyvsp[(1) - (4)].str),3,arr);
                (yyval.str) = (yyvsp[(1) - (4)].str);
            ;}
    break;

  case 48:
#line 472 "./lexyacc/pearlang.y"
    {
                appendStr(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                (yyval.str) = (yyvsp[(1) - (2)].str);
            ;}
    break;

  case 49:
#line 476 "./lexyacc/pearlang.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 50:
#line 477 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 51:
#line 478 "./lexyacc/pearlang.y"
    { 
                char *res = createStrAssign((yyvsp[(1) - (1)].assign));
                (yyval.str) = res;
            ;}
    break;

  case 52:
#line 482 "./lexyacc/pearlang.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 53:
#line 483 "./lexyacc/pearlang.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 54:
#line 484 "./lexyacc/pearlang.y"
    {
                printf("function \n");
            ;}
    break;

  case 55:
#line 487 "./lexyacc/pearlang.y"
    {
                printf("struct \n");
            ;}
    break;

  case 56:
#line 493 "./lexyacc/pearlang.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 57:
#line 494 "./lexyacc/pearlang.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 58:
#line 495 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 59:
#line 496 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 60:
#line 497 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 61:
#line 498 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 62:
#line 499 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 63:
#line 500 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 64:
#line 501 "./lexyacc/pearlang.y"
    {
                char *res = createStr("__");
                char *arr[] = { (yyvsp[(1) - (4)].str), createStr("_"), (yyvsp[(2) - (4)].str), createStr("()")};
                appendStrF(&res, 4, arr);
                (yyval.str) = res;
                free((yyvsp[(3) - (4)].str));
                free((yyvsp[(4) - (4)].str));
            ;}
    break;

  case 65:
#line 509 "./lexyacc/pearlang.y"
    {
                char *res = createStr("__");
                char *arr[] = { (yyvsp[(1) - (4)].str), createStr("_"), (yyvsp[(2) - (4)].str), createStr("()")};
                appendStrF(&res, 4, arr);
                (yyval.str) = res;
                free((yyvsp[(3) - (4)].str));
                free((yyvsp[(4) - (4)].str));
            ;}
    break;

  case 66:
#line 517 "./lexyacc/pearlang.y"
    {
                appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                (yyval.str) = (yyvsp[(1) - (2)].str);
            ;}
    break;

  case 67:
#line 521 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 68:
#line 526 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 69:
#line 531 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                (yyval.str) = (yyvsp[(1) - (3)].str); 
            ;}
    break;

  case 70:
#line 536 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 71:
#line 541 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 72:
#line 546 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 73:
#line 551 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 74:
#line 556 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 75:
#line 561 "./lexyacc/pearlang.y"
    {
                appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                (yyval.str) = (yyvsp[(1) - (2)].str);
            ;}
    break;

  case 76:
#line 565 "./lexyacc/pearlang.y"
    {
                appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                (yyval.str) = (yyvsp[(1) - (2)].str);
            ;}
    break;

  case 77:
#line 569 "./lexyacc/pearlang.y"
    {
                appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                (yyval.str) = (yyvsp[(1) - (2)].str);
            ;}
    break;

  case 78:
#line 573 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 79:
#line 578 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 80:
#line 583 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 81:
#line 591 "./lexyacc/pearlang.y"
    { 
        appendStrF(&(yyvsp[(1) - (2)].str), 1, &(yyvsp[(2) - (2)].str));
        (yyval.str) = (yyvsp[(1) - (2)].str);
    ;}
    break;

  case 82:
#line 595 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 83:
#line 596 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 84:
#line 597 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 85:
#line 598 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 86:
#line 599 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 87:
#line 600 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 88:
#line 601 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 89:
#line 602 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 90:
#line 603 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 91:
#line 604 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 92:
#line 605 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 93:
#line 606 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 94:
#line 607 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 95:
#line 608 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 96:
#line 612 "./lexyacc/pearlang.y"
    {
        printf("statement \n");
    ;}
    break;

  case 97:
#line 615 "./lexyacc/pearlang.y"
    {;}
    break;


/* Line 1267 of yacc.c.  */
#line 2539 "./src/pearlang.tab.c"
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


#line 619 "./lexyacc/pearlang.y"


#include"stdio.h"

int yydebug = 1;

void compileToOut(int argc, char **argv);

int doCommand(int i, char *argv[])
{
    if(strcmp("--o",argv[i]) == 0)
    {
        i++; 
        printf("output: %s\n",argv[i]); 
    } 
    return i;
}

int main(int argc, char *argv[])
{
    
    //filter commands from file with -- 
    int fileCount = 0;
    char *farr[argc];
    for(int i = 1; i < argc; i++)
    {
        if(strcmp("--", argv[i]) == 0)
        {
            i = doCommand(i, argv);
        }   
        else
        {
            farr[fileCount] = argv[i];
            printf("argv: %s\n", argv[i]);
            fileCount++;
        }
    } 

    char *gccarr[fileCount];

    int compiling = 1;
    //search for all files

    //create stdfile in target dir

    printf("starting compilation \n");

    int count = 0;
    while(compiling)
    {
        printf("farr0: %s\n",farr[count]);
        printf("farr0: %s\n",farr[0]);
        yyin = fopen(farr[count],"r");
        count++;
        if(count >= fileCount)
            compiling = 0;
        
        if(yyin == NULL)
        {
            printf("couldnt open files \n");
            continue;
        }   
        
        initGlobalS();

        char *shs = ".h";
        char *scs = ".c";
        char *shb = "_H";
        char *dotHs = createStr(farr[count - 1]);
        char *dotCs = createStr(farr[count - 1]);
        char *dotHb = createStr(farr[count - 1]);
        dotHb[strlen(dotHb) - 5] = 0;
        dotCs[strlen(dotCs) - 5] = 0;
        dotHs[strlen(dotHs) - 5] = 0;
        appendStr(&dotHs,1,&shs);   
        appendStr(&dotCs,1,&scs);
        appendStr(&dotHb,1,&shb);

        //gcc 
        gccarr[count - 1] = createStr(dotCs);

        //initFiles("test.h", "TEST_H");
        initFiles(dotHs,dotHb);
        //createC("/Users/pear/Desktop/projects/pearlang/example/output/", "test.c","test.h");
        createC("./",dotCs,dotHs);
        free(dotHs);
        free(dotCs);
        free(dotHb);

        do 
        {
            yyparse();
        }while(!feof(yyin));

        finishFiles();
        closeC();
        freeGlobalS();
    }

    printf("finished compiling \n");

    compileToOut(fileCount, gccarr);

    printf("finished compiling to .out\n");

    return 0;
}

void compileToOut(int argc, char **argv)
{
    char *args = createStr("gcc ");
    char *sem = " ";
    for(int i = 0; i < argc; i++)
    {
        printf("%i %s", i, argv[i]);
        appendStr(&args,1,&sem);
        appendStrF(&args,1,&argv[i]);
    }
    printf("args: %s\n", args);
    if(system(args) == -1)
    {
        printf("error compiling to .out\n");
    }  
    else
    {
        printf("finished compiling to .out\n");
    }

    /*for(int i = 0; i < argc; i++)
    {
        printf("count: %i\n",i);
        free(argv[i]);
    }*/
}

void yyerror(const char* s)
{
    printf("hello");
    fprintf(stderr, "parse error: %s \n", s);
    printf("error sis: %s", s);
    close(0);
}

