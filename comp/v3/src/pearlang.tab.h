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
     ADDRESS = 272,
     TIMES = 273,
     PLUS = 274,
     MINUS = 275,
     DIVIDED = 276,
     MODULO = 277,
     HASH = 278,
     QUOTATION = 279,
     SIZEOF = 280,
     GREATER = 281,
     LESS = 282,
     GREQ = 283,
     LEEQ = 284,
     SAME = 285,
     AND = 286,
     OR = 287,
     NOT = 288,
     NOTEQ = 289,
     VOID = 290,
     I8 = 291,
     I16 = 292,
     I32 = 293,
     I64 = 294,
     U8 = 295,
     U16 = 296,
     U32 = 297,
     U64 = 298,
     F32 = 299,
     F64 = 300,
     BOOL = 301,
     INT = 302,
     RETURN = 303,
     NEW = 304,
     CRT = 305,
     BREAK = 306,
     CONTINUE = 307,
     STRUCT = 308,
     INCLUDE = 309,
     IF = 310,
     ELSE = 311,
     WHILE = 312,
     FOR = 313,
     LOCAL = 314,
     TRUE = 315,
     FALSE = 316,
     NUL = 317
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
#define SIZEOF 280
#define GREATER 281
#define LESS 282
#define GREQ 283
#define LEEQ 284
#define SAME 285
#define AND 286
#define OR 287
#define NOT 288
#define NOTEQ 289
#define VOID 290
#define I8 291
#define I16 292
#define I32 293
#define I64 294
#define U8 295
#define U16 296
#define U32 297
#define U64 298
#define F32 299
#define F64 300
#define BOOL 301
#define INT 302
#define RETURN 303
#define NEW 304
#define CRT 305
#define BREAK 306
#define CONTINUE 307
#define STRUCT 308
#define INCLUDE 309
#define IF 310
#define ELSE 311
#define WHILE 312
#define FOR 313
#define LOCAL 314
#define TRUE 315
#define FALSE 316
#define NUL 317




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
/* Line 1529 of yacc.c.  */
#line 181 "./src/pearlang.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

