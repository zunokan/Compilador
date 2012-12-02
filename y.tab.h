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
     CHAR = 258,
     FIM = 259,
     ERRO = 260,
     STRING = 261,
     GE = 262,
     LE = 263,
     IGUAL = 264,
     DIFERENTE = 265,
     AND = 266,
     OR = 267,
     IMPLICA = 268,
     BIIMPLICA = 269,
     TIPO_BOOLEANO = 270,
     TIPO_FLOAT = 271,
     TIPO_CHAR = 272,
     TIPO_STRING = 273,
     TIPO_INTEIRO = 274,
     CONJUNTO = 275,
     LISTA = 276,
     PROGRAMA = 277,
     EXCECAO = 278,
     TAD = 279,
     PUBLICO = 280,
     PRIVADO = 281,
     VERDADEIRO = 282,
     FALSO = 283,
     PROCEDIMENTO = 284,
     PARE = 285,
     CONTINUE = 286,
     RETORNE = 287,
     PARA = 288,
     CADA = 289,
     EM = 290,
     ATE = 291,
     ENQUANTO = 292,
     FACA = 293,
     ITERADOR = 294,
     LEIA = 295,
     ESCREVA = 296,
     SE = 297,
     INTEIRO = 298,
     FLOAT = 299,
     ID = 300,
     IFX = 301,
     SENAO = 302
   };
#endif
/* Tokens.  */
#define CHAR 258
#define FIM 259
#define ERRO 260
#define STRING 261
#define GE 262
#define LE 263
#define IGUAL 264
#define DIFERENTE 265
#define AND 266
#define OR 267
#define IMPLICA 268
#define BIIMPLICA 269
#define TIPO_BOOLEANO 270
#define TIPO_FLOAT 271
#define TIPO_CHAR 272
#define TIPO_STRING 273
#define TIPO_INTEIRO 274
#define CONJUNTO 275
#define LISTA 276
#define PROGRAMA 277
#define EXCECAO 278
#define TAD 279
#define PUBLICO 280
#define PRIVADO 281
#define VERDADEIRO 282
#define FALSO 283
#define PROCEDIMENTO 284
#define PARE 285
#define CONTINUE 286
#define RETORNE 287
#define PARA 288
#define CADA 289
#define EM 290
#define ATE 291
#define ENQUANTO 292
#define FACA 293
#define ITERADOR 294
#define LEIA 295
#define ESCREVA 296
#define SE 297
#define INTEIRO 298
#define FLOAT 299
#define ID 300
#define IFX 301
#define SENAO 302




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 2068 of yacc.c  */
#line 12 "yacc.y"

    struct ASTNode* ptr;



/* Line 2068 of yacc.c  */
#line 150 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


