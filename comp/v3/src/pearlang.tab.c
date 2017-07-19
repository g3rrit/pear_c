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
     TIMES = 272,
     PLUS = 273,
     MINUS = 274,
     DIVIDED = 275,
     MODULO = 276,
     HASH = 277,
     QUOTATION = 278,
     GREATER = 279,
     LESS = 280,
     GREQ = 281,
     LEEQ = 282,
     SAME = 283,
     AND = 284,
     OR = 285,
     NOT = 286,
     VOID = 287,
     I8 = 288,
     I16 = 289,
     I32 = 290,
     I64 = 291,
     U8 = 292,
     U16 = 293,
     U32 = 294,
     U64 = 295,
     F32 = 296,
     F64 = 297,
     BOOL = 298,
     INT = 299,
     RETURN = 300,
     NEW = 301,
     CRT = 302,
     BREAK = 303,
     CONTINUE = 304,
     STRUCT = 305,
     INCLUDE = 306,
     IF = 307,
     ELSE = 308,
     WHILE = 309,
     FOR = 310,
     LOCAL = 311,
     TRUE = 312,
     FALSE = 313,
     NUL = 314
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
#define TIMES 272
#define PLUS 273
#define MINUS 274
#define DIVIDED 275
#define MODULO 276
#define HASH 277
#define QUOTATION 278
#define GREATER 279
#define LESS 280
#define GREQ 281
#define LEEQ 282
#define SAME 283
#define AND 284
#define OR 285
#define NOT 286
#define VOID 287
#define I8 288
#define I16 289
#define I32 290
#define I64 291
#define U8 292
#define U16 293
#define U32 294
#define U64 295
#define F32 296
#define F64 297
#define BOOL 298
#define INT 299
#define RETURN 300
#define NEW 301
#define CRT 302
#define BREAK 303
#define CONTINUE 304
#define STRUCT 305
#define INCLUDE 306
#define IF 307
#define ELSE 308
#define WHILE 309
#define FOR 310
#define LOCAL 311
#define TRUE 312
#define FALSE 313
#define NUL 314




/* Copy the first part of user declarations.  */
#line 1 "./lexyacc/pearlang.y"

#include<stdio.h>
#include<stdlib.h>
#include"fileprod.h"
#include"string.h"
#include"dir.h"

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
#line 17 "./lexyacc/pearlang.y"
{
    char *str;
    Func *func;
    Assign *assign;
    Sassign *sassign;
    Struc *struc;
}
/* Line 193 of yacc.c.  */
#line 238 "./src/pearlang.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 251 "./src/pearlang.tab.c"

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
#define YYFINAL  54
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   623

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNRULES -- Number of states.  */
#define YYNSTATES  167

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

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
      55,    56,    57,    58,    59
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    13,    16,    19,    22,
      26,    29,    33,    38,    44,    49,    52,    55,    58,    62,
      67,    70,    73,    77,    79,    82,    85,    94,   100,   106,
     110,   114,   116,   118,   120,   122,   124,   126,   128,   132,
     139,   146,   154,   159,   161,   163,   165,   167,   169,   171,
     173,   178,   183,   187,   191,   195,   199,   203,   207,   211,
     215,   218,   221,   224,   228,   232,   236,   239,   241,   243,
     245,   247,   249,   251,   254,   256,   258,   260,   262,   264,
     266,   268,   270,   272,   274,   276,   278,   280,   282,   284
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      61,     0,    -1,    82,    -1,    61,    82,    -1,    63,    -1,
      56,    63,    -1,    51,     6,    -1,     3,    12,    -1,    64,
      79,    -1,    64,    10,    79,    -1,    64,    13,    -1,     3,
       8,    12,    -1,    66,     3,     8,    81,    -1,    66,    10,
       3,     8,    81,    -1,    66,    13,     7,    81,    -1,    67,
      14,    -1,    68,    80,    -1,    68,    15,    -1,    56,    68,
      15,    -1,     3,     8,    50,    14,    -1,    70,    78,    -1,
      70,    15,    -1,    56,    70,    15,    -1,    14,    -1,    72,
      80,    -1,    72,    15,    -1,    55,    12,    78,    79,     9,
      79,    13,    73,    -1,    54,    12,    79,    13,    73,    -1,
      52,    12,    79,    13,    73,    -1,    75,    53,    75,    -1,
      75,    53,    73,    -1,    24,    -1,    25,    -1,    26,    -1,
      27,    -1,    29,    -1,    30,    -1,    28,    -1,    45,    79,
       9,    -1,     3,     8,    81,    16,    79,     9,    -1,     3,
       8,     3,    16,    79,     9,    -1,     3,     8,     3,    17,
      16,    79,     9,    -1,     3,     8,    81,     9,    -1,    69,
      -1,    65,    -1,    59,    -1,     4,    -1,     5,    -1,     6,
      -1,     3,    -1,    46,     3,    12,    13,    -1,    47,     3,
      12,    13,    -1,    79,    11,    79,    -1,    79,     7,    79,
      -1,    12,    79,    13,    -1,    79,    18,    79,    -1,    79,
      19,    79,    -1,    79,    17,    79,    -1,    79,    20,    79,
      -1,    79,    21,    79,    -1,    19,    79,    -1,    18,    79,
      -1,    31,    79,    -1,    79,    19,    19,    -1,    79,    18,
      18,    -1,    79,    76,    79,    -1,    79,     9,    -1,    77,
      -1,    78,    -1,    74,    -1,    75,    -1,    69,    -1,    71,
      -1,    81,    17,    -1,    32,    -1,    33,    -1,    34,    -1,
      35,    -1,    36,    -1,    37,    -1,    38,    -1,    39,    -1,
      40,    -1,    41,    -1,    42,    -1,    43,    -1,    44,    -1,
       3,    -1,    80,    -1,    62,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   101,   101,   102,   106,   110,   117,   130,   135,   140,
     149,   159,   167,   174,   184,   194,   201,   211,   221,   238,
     245,   255,   260,   272,   276,   284,   295,   300,   308,   313,
     318,   326,   327,   328,   329,   330,   331,   332,   336,   345,
     363,   377,   394,   407,   422,   423,   424,   425,   426,   427,
     428,   436,   444,   449,   454,   459,   464,   469,   474,   479,
     484,   488,   492,   496,   501,   506,   514,   518,   519,   523,
     524,   525,   528,   535,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   556,   559
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "NUMBER", "FLOAT", "STRING", "AR",
  "COLON", "SEMICOLON", "COMMA", "DOT", "L_BRACE", "R_BRACE", "L_GBRACE",
  "R_GBRACE", "EQUAL", "TIMES", "PLUS", "MINUS", "DIVIDED", "MODULO",
  "HASH", "QUOTATION", "GREATER", "LESS", "GREQ", "LEEQ", "SAME", "AND",
  "OR", "NOT", "VOID", "I8", "I16", "I32", "I64", "U8", "U16", "U32",
  "U64", "F32", "F64", "BOOL", "INT", "RETURN", "NEW", "CRT", "BREAK",
  "CONTINUE", "STRUCT", "INCLUDE", "IF", "ELSE", "WHILE", "FOR", "LOCAL",
  "TRUE", "FALSE", "NUL", "$accept", "program", "preproc", "include_s",
  "s_fcall", "fcall", "s_funcdef", "funcdef", "s_func", "func", "s_struct",
  "struct", "block_s", "block", "loop", "condition", "conditionalOp",
  "areturn", "assignment", "expression", "statement", "type", "line", 0
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    61,    62,    62,    63,    64,    64,    64,
      65,    66,    66,    66,    67,    68,    68,    69,    69,    70,
      70,    71,    71,    72,    72,    73,    74,    74,    75,    75,
      75,    76,    76,    76,    76,    76,    76,    76,    77,    78,
      78,    78,    78,    78,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    80,    80,    80,    80,
      80,    80,    80,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    82,    82
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     2,     2,     3,
       2,     3,     4,     5,     4,     2,     2,     2,     3,     4,
       2,     2,     3,     1,     2,     2,     8,     5,     5,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     6,
       6,     7,     4,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     3,     3,     3,     2,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    49,    46,    47,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    45,     0,    89,
       4,     0,    44,     0,     0,     0,    43,     0,    72,    69,
      70,    67,    68,     0,    88,     2,     0,     7,    49,     0,
      61,    60,    62,     0,     0,     0,     6,     0,     0,     0,
       0,     5,     0,     0,     1,     3,     0,    10,     8,     0,
       0,     0,    15,    17,     0,    16,     0,    21,     0,    43,
      20,     0,     0,    66,     0,     0,     0,     0,     0,     0,
      31,    32,    33,    34,    37,    35,    36,     0,    87,    11,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,     0,     0,    54,    38,     0,     0,     0,
       0,     0,     0,    18,    22,     9,     0,     0,     0,     0,
       0,    23,     0,    30,    29,    53,    52,    57,    64,    55,
      63,    56,    58,    59,    65,     0,     0,    19,    42,     0,
      73,    50,    51,     0,     0,     0,    87,    12,     0,    14,
       0,    25,    24,     0,     0,     0,    28,    27,     0,    13,
      40,     0,    39,     0,    41,     0,    26
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,   122,   123,    29,    30,    87,    31,    32,    33,
      34,   104,    35
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -99
static const yytype_int16 yypact[] =
{
      81,    33,   -99,   -99,   -99,   218,   218,   218,   218,   218,
      11,    26,    28,    34,    64,    68,     6,   -99,     7,   -99,
     -99,    18,   -99,   100,    77,   139,   -99,    12,   -99,   -99,
     -13,   -99,   -99,   377,   -99,   -99,   297,   -99,    82,   277,
     593,   593,   593,   401,    83,    84,   -99,   218,   218,    36,
      40,   -99,   156,    32,   -99,   -99,   218,   -99,   593,    90,
     101,   109,   -99,   -99,   105,   -99,   110,   -99,   114,   -99,
     -99,     3,   218,   -99,   218,   218,   223,   268,   218,   218,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   218,    62,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   106,    98,   -99,   -99,   108,   111,   425,
     449,   218,    -6,   -99,   -99,   593,   339,   121,   339,   316,
     123,   -99,   201,   -99,   -13,   593,   593,   593,   218,   593,
     218,   593,   593,   593,   593,   218,   103,   -99,   -99,   218,
     -99,   -99,   -99,   124,   124,   473,   -99,   122,   339,   122,
     129,   -99,   -99,   497,   218,   521,   -99,   -99,   218,   122,
     -99,   545,   -99,   569,   -99,   124,   -99
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -99,   -99,   -99,   130,   -99,   -99,   -99,   -99,    -8,    48,
      17,   -99,   -99,   -54,   -99,    51,   -99,   -99,    56,    -5,
     -20,   -98,   132
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      39,    40,    41,    42,    43,    65,    89,    54,    52,    50,
       1,     2,     3,     4,    44,    66,    58,   121,   147,     5,
     149,    38,     2,     3,     4,     6,     7,    67,    56,    45,
       5,    57,    65,    53,    46,    66,     6,     7,     8,    66,
      71,    36,   109,   110,   103,    37,    47,   114,   112,     8,
     159,   115,     9,    10,    11,    13,    52,    12,    12,    13,
      52,    14,    15,    16,    10,    11,    17,   125,    68,   126,
     127,   129,   131,   132,   133,    69,    48,    17,   135,   136,
      49,    53,   134,    70,     1,     2,     3,     4,    68,   156,
     157,    62,    68,     5,    37,   107,   108,    69,   116,     6,
       7,    69,   152,    59,   117,   111,   145,   138,    50,    70,
      60,   166,     8,    61,   139,   140,   118,   120,   119,   154,
     137,   141,   124,    40,   142,    41,     9,    10,    11,   148,
     153,   150,    12,    13,   155,    14,    15,    16,   121,   140,
      17,    89,     1,     2,     3,     4,    51,     0,     0,   161,
      55,     5,     0,   163,    63,     0,     0,     6,     7,     1,
       2,     3,     4,     0,     0,     0,     0,     0,     5,     0,
       8,   113,     0,     0,     6,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    10,    11,     8,     0,     0,
       0,    13,     0,    14,    15,    64,     0,     0,    17,     0,
       0,     9,    10,    11,     1,     2,     3,     4,    13,     0,
      14,    15,    64,     5,     0,    17,   151,     0,     0,     6,
       7,    38,     2,     3,     4,     0,    38,     2,     3,     4,
       5,     0,     8,     0,     0,     5,     6,     7,     0,     0,
       0,   128,     7,     0,     0,     0,     9,    10,    11,     8,
       0,     0,     0,    13,     8,    14,    15,    64,     0,     0,
      17,     0,     0,     0,    10,    11,     0,     0,     0,    10,
      11,    38,     2,     3,     4,     0,     0,    17,     0,     0,
       5,     0,    17,     0,    72,     0,     6,   130,    74,     0,
     105,     0,     0,     0,    75,    76,    77,    78,    79,     8,
      88,    80,    81,    82,    83,    84,    85,    86,     0,    89,
       0,     0,     0,     0,    10,    11,     0,     0,     0,    88,
       0,     0,     0,     0,     0,     0,     0,    17,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   146,     0,     0,     0,     0,   103,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,    72,     0,    73,     0,    74,     0,
       0,     0,     0,     0,    75,    76,    77,    78,    79,     0,
       0,    80,    81,    82,    83,    84,    85,    86,    72,     0,
     106,     0,    74,     0,     0,     0,     0,     0,    75,    76,
      77,    78,    79,     0,     0,    80,    81,    82,    83,    84,
      85,    86,    72,     0,     0,     0,    74,     0,   143,     0,
       0,     0,    75,    76,    77,    78,    79,     0,     0,    80,
      81,    82,    83,    84,    85,    86,    72,     0,     0,     0,
      74,     0,   144,     0,     0,     0,    75,    76,    77,    78,
      79,     0,     0,    80,    81,    82,    83,    84,    85,    86,
      72,     0,   158,     0,    74,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,     0,     0,    80,    81,    82,
      83,    84,    85,    86,    72,     0,   160,     0,    74,     0,
       0,     0,     0,     0,    75,    76,    77,    78,    79,     0,
       0,    80,    81,    82,    83,    84,    85,    86,    72,     0,
     162,     0,    74,     0,     0,     0,     0,     0,    75,    76,
      77,    78,    79,     0,     0,    80,    81,    82,    83,    84,
      85,    86,    72,     0,   164,     0,    74,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,     0,     0,    80,
      81,    82,    83,    84,    85,    86,    72,     0,     0,     0,
      74,     0,   165,     0,     0,     0,    75,    76,    77,    78,
      79,     0,     0,    80,    81,    82,    83,    84,    85,    86,
      72,     0,     0,     0,    74,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,     0,     0,    80,    81,    82,
      83,    84,    85,    86
};

static const yytype_int16 yycheck[] =
{
       5,     6,     7,     8,     9,    25,    12,     0,    16,     3,
       3,     4,     5,     6,     3,     3,    21,    14,   116,    12,
     118,     3,     4,     5,     6,    18,    19,    15,    10,     3,
      12,    13,    52,    16,     6,     3,    18,    19,    31,     3,
      53,     8,    47,    48,    50,    12,    12,    15,     8,    31,
     148,    56,    45,    46,    47,    52,    64,    51,    51,    52,
      68,    54,    55,    56,    46,    47,    59,    72,    56,    74,
      75,    76,    77,    78,    79,    27,    12,    59,    16,    17,
      12,    64,    87,    27,     3,     4,     5,     6,    56,   143,
     144,    14,    56,    12,    12,    12,    12,    49,     8,    18,
      19,    53,   122,     3,     3,    49,   111,     9,     3,    53,
      10,   165,    31,    13,    16,    17,     7,     3,     8,    16,
      14,    13,    71,   128,    13,   130,    45,    46,    47,     8,
     135,     8,    51,    52,   139,    54,    55,    56,    14,    17,
      59,    12,     3,     4,     5,     6,    16,    -1,    -1,   154,
      18,    12,    -1,   158,    15,    -1,    -1,    18,    19,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    -1,
      31,    15,    -1,    -1,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    31,    -1,    -1,
      -1,    52,    -1,    54,    55,    56,    -1,    -1,    59,    -1,
      -1,    45,    46,    47,     3,     4,     5,     6,    52,    -1,
      54,    55,    56,    12,    -1,    59,    15,    -1,    -1,    18,
      19,     3,     4,     5,     6,    -1,     3,     4,     5,     6,
      12,    -1,    31,    -1,    -1,    12,    18,    19,    -1,    -1,
      -1,    18,    19,    -1,    -1,    -1,    45,    46,    47,    31,
      -1,    -1,    -1,    52,    31,    54,    55,    56,    -1,    -1,
      59,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    46,
      47,     3,     4,     5,     6,    -1,    -1,    59,    -1,    -1,
      12,    -1,    59,    -1,     7,    -1,    18,    19,    11,    -1,
      13,    -1,    -1,    -1,    17,    18,    19,    20,    21,    31,
       3,    24,    25,    26,    27,    28,    29,    30,    -1,    12,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    12,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,     3,    -1,    -1,    -1,    -1,    50,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,     7,    -1,     9,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,     7,    -1,
       9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,     7,    -1,    -1,    -1,    11,    -1,    13,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,     7,    -1,    -1,    -1,
      11,    -1,    13,    -1,    -1,    -1,    17,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
       7,    -1,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,     7,    -1,     9,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,     7,    -1,
       9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,     7,    -1,     9,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,     7,    -1,    -1,    -1,
      11,    -1,    13,    -1,    -1,    -1,    17,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
       7,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    12,    18,    19,    31,    45,
      46,    47,    51,    52,    54,    55,    56,    59,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    74,
      75,    77,    78,    79,    80,    82,     8,    12,     3,    79,
      79,    79,    79,    79,     3,     3,     6,    12,    12,    12,
       3,    63,    68,    70,     0,    82,    10,    13,    79,     3,
      10,    13,    14,    15,    56,    80,     3,    15,    56,    69,
      78,    53,     7,     9,    11,    17,    18,    19,    20,    21,
      24,    25,    26,    27,    28,    29,    30,    76,     3,    12,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    50,    81,    13,     9,    12,    12,    79,
      79,    78,     8,    15,    15,    79,     8,     3,     7,     8,
       3,    14,    72,    73,    75,    79,    79,    79,    18,    79,
      19,    79,    79,    79,    79,    16,    17,    14,     9,    16,
      17,    13,    13,    13,    13,    79,     3,    81,     8,    81,
       8,    15,    80,    79,    16,    79,    73,    73,     9,    81,
       9,    79,     9,    79,     9,    13,    73
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
        case 4:
#line 106 "./lexyacc/pearlang.y"
    {
            appendStr(&activeHeadT, 1, &(yyvsp[(1) - (1)].str));
            appendStrF(&activeSourceDecT, 1, &(yyvsp[(1) - (1)].str));
        ;}
    break;

  case 5:
#line 110 "./lexyacc/pearlang.y"
    {
            appendStrF(&activeSourceDecT, 1, &(yyvsp[(2) - (2)].str));
            free((yyvsp[(1) - (2)].str));
        ;}
    break;

  case 6:
#line 117 "./lexyacc/pearlang.y"
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

  case 7:
#line 130 "./lexyacc/pearlang.y"
    {
            printf("fcall \n");
            appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
            (yyval.str) = (yyvsp[(1) - (2)].str);
        ;}
    break;

  case 8:
#line 135 "./lexyacc/pearlang.y"
    {
            printf("fcall \n");
            appendStrF(&(yyvsp[(1) - (2)].str), 1,&(yyvsp[(2) - (2)].str));
            (yyval.str) = (yyvsp[(1) - (2)].str);
        ;}
    break;

  case 9:
#line 140 "./lexyacc/pearlang.y"
    {
            printf("fcall \n");
            char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
            appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
            (yyval.str) = (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 10:
#line 149 "./lexyacc/pearlang.y"
    {
            printf("fcall \n");
            appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
            (yyval.str) = (yyvsp[(1) - (2)].str);
        ;}
    break;

  case 11:
#line 159 "./lexyacc/pearlang.y"
    {
            printf("s_funcdef \n");
            Func *func = malloc(sizeof(Func));
            func->id = (yyvsp[(1) - (3)].str);
            func->def = (yyvsp[(3) - (3)].str);
            (yyval.func) = func;
            free((yyvsp[(2) - (3)].str));
        ;}
    break;

  case 12:
#line 167 "./lexyacc/pearlang.y"
    {
            printf("s_funcdef \n");
            char *arr[] = { (yyvsp[(4) - (4)].str),(yyvsp[(2) - (4)].str)};
            appendStrF(&((yyvsp[(1) - (4)].func)->def),1, arr);
            (yyval.func) = (yyvsp[(1) - (4)].func);
            free((yyvsp[(3) - (4)].str));
        ;}
    break;

  case 13:
#line 174 "./lexyacc/pearlang.y"
    {
            printf("s_funcdef \n");
            char *arr[] = { (yyvsp[(2) - (5)].str), (yyvsp[(5) - (5)].str), (yyvsp[(3) - (5)].str)};
            appendStrF(&((yyvsp[(1) - (5)].func)->def), 3, arr);
            (yyval.func) = (yyvsp[(1) - (5)].func);
            free((yyvsp[(4) - (5)].str));
        ;}
    break;

  case 14:
#line 184 "./lexyacc/pearlang.y"
    {
            printf("funcdef \n");
            appendStrF(&((yyvsp[(1) - (4)].func)->def),1,&(yyvsp[(2) - (4)].str));
            (yyvsp[(1) - (4)].func)->type = (yyvsp[(4) - (4)].str);
            (yyval.func) = (yyvsp[(1) - (4)].func);
            free((yyvsp[(3) - (4)].str));
        ;}
    break;

  case 15:
#line 194 "./lexyacc/pearlang.y"
    {
            printf("s_func \n");
            char *snl = "\n";
            appendStr(&(yyvsp[(2) - (2)].str),1,&snl);
            (yyvsp[(1) - (2)].func)->body = (yyvsp[(2) - (2)].str);
            (yyval.func) = (yyvsp[(1) - (2)].func);
        ;}
    break;

  case 16:
#line 201 "./lexyacc/pearlang.y"
    {
            printf("s_func \n");
            char *snl = "\n";
            appendStr(&((yyvsp[(1) - (2)].func)->body),1,&snl);
            appendStrF(&((yyvsp[(1) - (2)].func)->body), 1,&(yyvsp[(2) - (2)].str));
            (yyval.func) = (yyvsp[(1) - (2)].func);
        ;}
    break;

  case 17:
#line 211 "./lexyacc/pearlang.y"
    {
        printf("func \n");
        appendStrF(&((yyvsp[(1) - (2)].func)->body),1,&(yyvsp[(2) - (2)].str));
        char *snl = "\n";
        appendStr(&((yyvsp[(1) - (2)].func)->body),1,&snl);
        (yyval.func) = (yyvsp[(1) - (2)].func);
  
        printf("function finished: \n type: %s \n id: %s \n def:  %s \n body: \n %s \n", (yyvsp[(1) - (2)].func)->type, (yyvsp[(1) - (2)].func)->id, (yyvsp[(1) - (2)].func)->def, (yyvsp[(1) - (2)].func)->body);
        addFuncToFile((yyvsp[(1) - (2)].func),0);  
    ;}
    break;

  case 18:
#line 221 "./lexyacc/pearlang.y"
    {
        printf("local func \n");
        appendStrF(&((yyvsp[(2) - (3)].func)->body),1,&(yyvsp[(3) - (3)].str));
        char *snl = "\n";
        appendStr(&((yyvsp[(2) - (3)].func)->body),1,&snl);
        (yyval.func) = (yyvsp[(2) - (3)].func);
  
        printf("function finished: \n type: %s \n id: %s \n def:  %s \n body: \n %s \n", (yyvsp[(2) - (3)].func)->type, (yyvsp[(2) - (3)].func)->id, (yyvsp[(2) - (3)].func)->def, (yyvsp[(2) - (3)].func)->body);
        addFuncToFile((yyvsp[(2) - (3)].func),1);
    ;}
    break;

  case 19:
#line 238 "./lexyacc/pearlang.y"
    {
            printf("s_struct \n");
            Struc *struc = createStruct(); 
            struc->id = (yyvsp[(1) - (4)].str);
            (yyval.struc) = struc;
            free((yyvsp[(2) - (4)].str));              
        ;}
    break;

  case 20:
#line 245 "./lexyacc/pearlang.y"
    {
            printf("s_struct \n");
            appendAssignStruct((yyvsp[(1) - (2)].struc),(yyvsp[(2) - (2)].assign)); 
            (yyval.struc) = (yyvsp[(1) - (2)].struc);

            printStruct((yyvsp[(1) - (2)].struc));
        ;}
    break;

  case 21:
#line 255 "./lexyacc/pearlang.y"
    {
            printf("struct \n");
            addStructToFile((yyvsp[(1) - (2)].struc),0);
            (yyval.struc) = (yyvsp[(1) - (2)].struc);
        ;}
    break;

  case 22:
#line 260 "./lexyacc/pearlang.y"
    {
            printf("struct \n");
            addStructToFile((yyvsp[(2) - (3)].struc),1);
            (yyval.struc) = (yyvsp[(2) - (3)].struc);
        ;}
    break;

  case 23:
#line 272 "./lexyacc/pearlang.y"
    { 
            (yyval.str) = createStr("{\n");
            free((yyvsp[(1) - (1)].str));
        ;}
    break;

  case 24:
#line 276 "./lexyacc/pearlang.y"
    {
            char *arr[] = { (yyvsp[(2) - (2)].str), createStr("\n")};
            appendStrF(&(yyvsp[(1) - (2)].str),2,arr);
            (yyval.str) = (yyvsp[(1) - (2)].str);
        ;}
    break;

  case 25:
#line 284 "./lexyacc/pearlang.y"
    {
            appendStrF(&(yyvsp[(1) - (2)].str), 1, &(yyvsp[(2) - (2)].str));
            (yyval.str) = (yyvsp[(1) - (2)].str);
        ;}
    break;

  case 26:
#line 295 "./lexyacc/pearlang.y"
    {
            char *arr[] = { (yyvsp[(2) - (8)].str), createStrAssign((yyvsp[(3) - (8)].assign)), (yyvsp[(4) - (8)].str), (yyvsp[(5) - (8)].str), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str) };           
            appendStrF(&(yyvsp[(1) - (8)].str),7, arr);
            (yyval.str) = (yyvsp[(1) - (8)].str);
        ;}
    break;

  case 27:
#line 300 "./lexyacc/pearlang.y"
    {
            char *arr[] = { (yyvsp[(2) - (5)].str), (yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].str), (yyvsp[(5) - (5)].str)};
            appendStrF(&(yyvsp[(1) - (5)].str), 4, arr);
            (yyval.str) = (yyvsp[(1) - (5)].str);
        ;}
    break;

  case 28:
#line 308 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (5)].str), (yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].str), (yyvsp[(5) - (5)].str)};
                appendStrF(&(yyvsp[(1) - (5)].str), 4, arr);
                (yyval.str) = (yyvsp[(1) - (5)].str);
            ;}
    break;

  case 29:
#line 313 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 30:
#line 318 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str) };
                appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 31:
#line 326 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 32:
#line 327 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 33:
#line 328 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 34:
#line 329 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 35:
#line 330 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 36:
#line 331 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 37:
#line 332 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);}
    break;

  case 38:
#line 336 "./lexyacc/pearlang.y"
    {
            printf("areturn \n");
            char *arr[] = {createStr(" "),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
            appendStrF(&(yyvsp[(1) - (3)].str),3,arr);
            (yyval.str) = (yyvsp[(1) - (3)].str);
       ;}
    break;

  case 39:
#line 345 "./lexyacc/pearlang.y"
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

  case 40:
#line 363 "./lexyacc/pearlang.y"
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

  case 41:
#line 377 "./lexyacc/pearlang.y"
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

  case 42:
#line 394 "./lexyacc/pearlang.y"
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

  case 43:
#line 407 "./lexyacc/pearlang.y"
    {
                Assign *assign = malloc(sizeof(Assign));
                assign->id = (yyvsp[(1) - (1)].func)->id; 
                assign->type = (yyvsp[(1) - (1)].func)->type;
                assign->def = createStr((yyvsp[(1) - (1)].func)->type);
                char *arr[] = { " (*", createStr((yyvsp[(1) - (1)].func)->id), ")", createStr((yyvsp[(1) - (1)].func)->def)};
                appendStr(&assign->def,4,arr);
                char *val = createStr("&");
                appendStr(&val, 1, &((yyvsp[(1) - (1)].func)->id));
                assign->value = val;
                (yyval.assign) = assign;
            ;}
    break;

  case 44:
#line 422 "./lexyacc/pearlang.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 45:
#line 423 "./lexyacc/pearlang.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 46:
#line 424 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 47:
#line 425 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 48:
#line 426 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 49:
#line 427 "./lexyacc/pearlang.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 50:
#line 428 "./lexyacc/pearlang.y"
    {
                char *res = createStr("__");
                char *arr[] = { (yyvsp[(1) - (4)].str), createStr("_"), (yyvsp[(2) - (4)].str), createStr("()")};
                appendStrF(&res, 4, arr);
                (yyval.str) = res;
                free((yyvsp[(3) - (4)].str));
                free((yyvsp[(4) - (4)].str));
            ;}
    break;

  case 51:
#line 436 "./lexyacc/pearlang.y"
    {
                char *res = createStr("__");
                char *arr[] = { (yyvsp[(1) - (4)].str), createStr("_"), (yyvsp[(2) - (4)].str), createStr("()")};
                appendStrF(&res, 4, arr);
                (yyval.str) = res;
                free((yyvsp[(3) - (4)].str));
                free((yyvsp[(4) - (4)].str));
            ;}
    break;

  case 52:
#line 444 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 53:
#line 449 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str), 2, arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 54:
#line 454 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                (yyval.str) = (yyvsp[(1) - (3)].str); 
            ;}
    break;

  case 55:
#line 459 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 56:
#line 464 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 57:
#line 469 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 58:
#line 474 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 59:
#line 479 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 60:
#line 484 "./lexyacc/pearlang.y"
    {
                appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                (yyval.str) = (yyvsp[(1) - (2)].str);
            ;}
    break;

  case 61:
#line 488 "./lexyacc/pearlang.y"
    {
                appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                (yyval.str) = (yyvsp[(1) - (2)].str);
            ;}
    break;

  case 62:
#line 492 "./lexyacc/pearlang.y"
    {
                appendStrF(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                (yyval.str) = (yyvsp[(1) - (2)].str);
            ;}
    break;

  case 63:
#line 496 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 64:
#line 501 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 65:
#line 506 "./lexyacc/pearlang.y"
    {
                char *arr[] = { (yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)};
                appendStrF(&(yyvsp[(1) - (3)].str),2,arr);
                (yyval.str) = (yyvsp[(1) - (3)].str);
            ;}
    break;

  case 66:
#line 514 "./lexyacc/pearlang.y"
    {
                appendStr(&(yyvsp[(1) - (2)].str),1,&(yyvsp[(2) - (2)].str));
                (yyval.str) = (yyvsp[(1) - (2)].str);
            ;}
    break;

  case 67:
#line 518 "./lexyacc/pearlang.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 68:
#line 519 "./lexyacc/pearlang.y"
    { 
                char *res = createStrAssign((yyvsp[(1) - (1)].assign));
                (yyval.str) = res;
            ;}
    break;

  case 69:
#line 523 "./lexyacc/pearlang.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 70:
#line 524 "./lexyacc/pearlang.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 71:
#line 525 "./lexyacc/pearlang.y"
    {
                printf("function \n");
            ;}
    break;

  case 72:
#line 528 "./lexyacc/pearlang.y"
    {
                printf("struct \n");
            ;}
    break;

  case 73:
#line 535 "./lexyacc/pearlang.y"
    { 
        appendStrF(&(yyvsp[(1) - (2)].str), 1, &(yyvsp[(2) - (2)].str));
        (yyval.str) = (yyvsp[(1) - (2)].str);
    ;}
    break;

  case 74:
#line 539 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 75:
#line 540 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 76:
#line 541 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 77:
#line 542 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 78:
#line 543 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 79:
#line 544 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 80:
#line 545 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 81:
#line 546 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 82:
#line 547 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 83:
#line 548 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 84:
#line 549 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 85:
#line 550 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 86:
#line 551 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 87:
#line 552 "./lexyacc/pearlang.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 88:
#line 556 "./lexyacc/pearlang.y"
    {
        printf("statement \n");
    ;}
    break;

  case 89:
#line 559 "./lexyacc/pearlang.y"
    {;}
    break;


/* Line 1267 of yacc.c.  */
#line 2408 "./src/pearlang.tab.c"
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


#line 563 "./lexyacc/pearlang.y"


#include"stdio.h"

int yydebug = 1;

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
    }

    printf("finished compiling \n");

    return 0;
}

void yyerror(const char* s)
{
    printf("hello");
    fprintf(stderr, "parse error: %s \n", s);
    printf("error sis: %s", s);
    close(0);
}

