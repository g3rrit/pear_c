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
/* Line 1529 of yacc.c.  */
#line 179 "./src/pearlang.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

