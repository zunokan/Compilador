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
     CONJUNTO = 273,
     LISTA = 274,
     PROGRAMA = 275,
     EXCECAO = 276,
     TAD = 277,
     PUBLICO = 278,
     PRIVADO = 279,
     VERDADEIRO = 280,
     FALSO = 281,
     PROCEDIMENTO = 282,
     PARE = 283,
     CONTINUE = 284,
     RETORNE = 285,
     PARA = 286,
     CADA = 287,
     EM = 288,
     ATE = 289,
     ENQUANTO = 290,
     FACA = 291,
     ITERADOR = 292,
     LEIA = 293,
     ESCREVA = 294,
     SE = 295,
     CHAR = 296,
     STRING = 297,
     INTEIRO = 298,
     FLOAT = 299,
     ID = 300,
     IFX = 301,
     SENAO = 302
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
#define CONJUNTO 273
#define LISTA 274
#define PROGRAMA 275
#define EXCECAO 276
#define TAD 277
#define PUBLICO 278
#define PRIVADO 279
#define VERDADEIRO 280
#define FALSO 281
#define PROCEDIMENTO 282
#define PARE 283
#define CONTINUE 284
#define RETORNE 285
#define PARA 286
#define CADA 287
#define EM 288
#define ATE 289
#define ENQUANTO 290
#define FACA 291
#define ITERADOR 292
#define LEIA 293
#define ESCREVA 294
#define SE 295
#define CHAR 296
#define STRING 297
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

    char* valor;
    struct ASTNode* ptr;



/* Line 2068 of yacc.c  */
#line 151 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


