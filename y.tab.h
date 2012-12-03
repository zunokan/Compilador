/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     FIM = 258,
     ERRO = 259,
     GE = 260,
     LE = 261,
     IGUAL = 262,
     DIFERENTE = 263,
     AND = 264,
     OR = 265,
     IMPLICA = 266,
     BIIMPLICA = 267,
     TIPO_BOOLEANO = 268,
     TIPO_FLOAT = 269,
     TIPO_CHAR = 270,
     TIPO_STRING = 271,
     TIPO_INTEIRO = 272,
     LISTA = 273,
     PROGRAMA = 274,
     TAD = 275,
     VERDADEIRO = 276,
     FALSO = 277,
     PROCEDIMENTO = 278,
     RETORNE = 279,
     EM = 280,
     ATE = 281,
     ENQUANTO = 282,
     FACA = 283,
     LEIA = 284,
     ESCREVA = 285,
     SE = 286,
     CHAR = 287,
     STRING = 288,
     INTEIRO = 289,
     FLOAT = 290,
     ID = 291,
     IFX = 292,
     SENAO = 293
   };
#endif
/* Tokens.  */
#define FIM 258
#define ERRO 259
#define GE 260
#define LE 261
#define IGUAL 262
#define DIFERENTE 263
#define AND 264
#define OR 265
#define IMPLICA 266
#define BIIMPLICA 267
#define TIPO_BOOLEANO 268
#define TIPO_FLOAT 269
#define TIPO_CHAR 270
#define TIPO_STRING 271
#define TIPO_INTEIRO 272
#define LISTA 273
#define PROGRAMA 274
#define TAD 275
#define VERDADEIRO 276
#define FALSO 277
#define PROCEDIMENTO 278
#define RETORNE 279
#define EM 280
#define ATE 281
#define ENQUANTO 282
#define FACA 283
#define LEIA 284
#define ESCREVA 285
#define SE 286
#define CHAR 287
#define STRING 288
#define INTEIRO 289
#define FLOAT 290
#define ID 291
#define IFX 292
#define SENAO 293




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 2068 of yacc.c  */
#line 12 "yacc.y"

    char* valor;
    struct ASTNode* ptr;



/* Line 2068 of yacc.c  */
#line 133 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


