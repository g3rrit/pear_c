/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
/* Line 1529 of yacc.c.  */
#line 175 "./src/pearlang.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

