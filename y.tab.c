/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 2 "yacc.y"

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "dados.h"

void yyerror(char* s);
extern void msgErro();


/* Line 268 of yacc.c  */
#line 82 "y.tab.c"

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

/* Line 293 of yacc.c  */
#line 12 "yacc.y"

    char* valor;
    struct ASTNode* ptr;



/* Line 293 of yacc.c  */
#line 201 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 213 "y.tab.c"

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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   262

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNRULES -- Number of states.  */
#define YYNSTATES  168

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,     2,     2,     2,    54,     2,     2,
      41,    42,    52,    50,    43,    51,     2,    53,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    44,
      48,    45,    49,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    46,     2,    47,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    39,     2,    40,     2,     2,     2,     2,
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
      35,    36,    37,    38
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    14,    16,    18,    20,    22,    24,
      26,    29,    31,    33,    40,    47,    48,    51,    56,    57,
      60,    62,    66,    72,    79,    90,    93,    99,   107,   113,
     121,   125,   131,   137,   141,   143,   147,   149,   152,   154,
     156,   160,   162,   166,   168,   172,   174,   176,   180,   182,
     186,   188,   192,   196,   198,   202,   206,   210,   214,   216,
     220,   224,   226,   230,   234,   238,   240,   242,   245,   248,
     251,   253,   255,   258,   262,   263,   267,   268,   270,   274,
     276,   278,   280,   282,   284
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      57,     0,    -1,    59,    19,    39,    64,    40,    -1,    19,
      39,    64,    40,    -1,    13,    -1,    14,    -1,    15,    -1,
      16,    -1,    17,    -1,    60,    -1,    59,    60,    -1,    61,
      -1,    62,    -1,    58,    36,    41,    63,    42,    65,    -1,
      23,    36,    41,    63,    42,    65,    -1,    -1,    58,    36,
      -1,    63,    43,    58,    36,    -1,    -1,    64,    65,    -1,
      44,    -1,    58,    36,    44,    -1,    58,    36,    45,    68,
      44,    -1,    58,    36,    46,    34,    47,    44,    -1,    58,
      36,    46,    34,    47,    45,    39,    66,    40,    44,    -1,
      68,    44,    -1,    27,    41,    68,    42,    65,    -1,    28,
      65,    27,    41,    68,    42,    44,    -1,    31,    41,    68,
      42,    65,    -1,    31,    41,    68,    42,    65,    38,    65,
      -1,    39,    67,    40,    -1,    30,    41,    68,    42,    44,
      -1,    29,    41,    36,    42,    44,    -1,    24,    68,    44,
      -1,    85,    -1,    66,    43,    85,    -1,    65,    -1,    67,
      65,    -1,    69,    -1,    70,    -1,    80,    45,    69,    -1,
      71,    -1,    70,    12,    71,    -1,    72,    -1,    71,    11,
      72,    -1,    73,    -1,    74,    -1,    73,    10,    74,    -1,
      75,    -1,    74,     9,    75,    -1,    76,    -1,    75,     7,
      76,    -1,    75,     8,    76,    -1,    77,    -1,    76,    48,
      77,    -1,    76,    49,    77,    -1,    76,     5,    77,    -1,
      76,     6,    77,    -1,    78,    -1,    77,    50,    78,    -1,
      77,    51,    78,    -1,    79,    -1,    78,    52,    79,    -1,
      78,    53,    79,    -1,    78,    54,    79,    -1,    80,    -1,
      81,    -1,    50,    79,    -1,    51,    79,    -1,    55,    79,
      -1,    82,    -1,    85,    -1,    36,    83,    -1,    41,    68,
      42,    -1,    -1,    41,    84,    42,    -1,    -1,    68,    -1,
      84,    43,    68,    -1,    34,    -1,    33,    -1,    32,    -1,
      35,    -1,    21,    -1,    22,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    70,    70,    76,    85,    86,    87,    88,    89,    93,
      94,    98,    99,   103,   107,   110,   112,   113,   117,   118,
     123,   124,   125,   126,   127,   129,   131,   133,   135,   137,
     139,   141,   143,   145,   150,   151,   157,   158,   164,   168,
     170,   176,   178,   183,   184,   189,   193,   194,   199,   200,
     205,   207,   209,   214,   215,   217,   219,   221,   226,   227,
     229,   235,   236,   238,   240,   245,   249,   250,   251,   252,
     256,   260,   261,   262,   266,   267,   271,   272,   273,   277,
     278,   279,   280,   281,   282
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FIM", "ERRO", "GE", "LE", "IGUAL",
  "DIFERENTE", "AND", "OR", "IMPLICA", "BIIMPLICA", "TIPO_BOOLEANO",
  "TIPO_FLOAT", "TIPO_CHAR", "TIPO_STRING", "TIPO_INTEIRO", "LISTA",
  "PROGRAMA", "TAD", "VERDADEIRO", "FALSO", "PROCEDIMENTO", "RETORNE",
  "EM", "ATE", "ENQUANTO", "FACA", "LEIA", "ESCREVA", "SE", "CHAR",
  "STRING", "INTEIRO", "FLOAT", "ID", "IFX", "SENAO", "'{'", "'}'", "'('",
  "')'", "','", "';'", "'='", "'['", "']'", "'<'", "'>'", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'!'", "$accept", "programa_completo", "tipo",
  "lista_declaracoes", "declaracao", "declaracao_funcao",
  "declaracao_procedimento", "lista_argumentos", "programa", "comandos",
  "lista_inicializacao_vetor", "lista_de_comandos", "expressao",
  "expressao_atribuicao", "expressao_biimplica", "expressao_implica",
  "expressao_condicional", "expressao_ou_logico", "expressao_e_logico",
  "expressao_igualdade", "expressao_relacional", "expressao_aditiva",
  "expressao_multiplicativa", "expressao_de_cast", "expressao_unaria",
  "expressao_posfixa", "expressao_primaria", "chamada_funcao",
  "lista_expressoes", "literal", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   123,
     125,    40,    41,    44,    59,    61,    91,    93,    60,    62,
      43,    45,    42,    47,    37,    33
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    57,    58,    58,    58,    58,    58,    59,
      59,    60,    60,    61,    62,    63,    63,    63,    64,    64,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    66,    66,    67,    67,    68,    69,
      69,    70,    70,    71,    71,    72,    73,    73,    74,    74,
      75,    75,    75,    76,    76,    76,    76,    76,    77,    77,
      77,    78,    78,    78,    78,    79,    80,    80,    80,    80,
      81,    82,    82,    82,    83,    83,    84,    84,    84,    85,
      85,    85,    85,    85,    85
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     4,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     6,     6,     0,     2,     4,     0,     2,
       1,     3,     5,     6,    10,     2,     5,     7,     5,     7,
       3,     5,     5,     3,     1,     3,     1,     2,     1,     1,
       3,     1,     3,     1,     3,     1,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     1,     2,     2,     2,
       1,     1,     2,     3,     0,     3,     0,     1,     3,     1,
       1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       0,     9,    11,    12,    18,     0,     1,     0,     0,    10,
       0,    15,    15,    18,    83,    84,     0,     0,     0,     0,
       0,     0,    81,    80,    79,    82,    74,     0,     3,     0,
      20,     0,     0,     0,     0,    19,     0,    38,    39,    41,
      43,    45,    46,    48,    50,    53,    58,    61,    65,    66,
      70,    71,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,    72,    36,     0,     0,    67,    65,    68,
      69,     0,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    16,
       0,     0,     0,     2,    33,     0,     0,     0,     0,     0,
      77,     0,    30,    37,    73,    21,     0,     0,    42,    44,
      47,    49,    51,    52,    56,    57,    54,    55,    59,    60,
      62,    63,    64,    40,    14,     0,    13,     0,     0,     0,
       0,     0,    75,     0,     0,     0,    17,    26,     0,    32,
      31,    28,    78,    22,     0,     0,     0,    23,     0,    27,
      29,     0,     0,    34,     0,     0,    24,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,    44,    10,    11,    12,    13,    63,    20,    45,
     162,    75,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    73,   111,    61
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -160
static const yytype_int16 yypact[] =
{
      16,  -160,  -160,  -160,  -160,  -160,   -36,   -31,    10,     0,
      84,  -160,  -160,  -160,  -160,    -3,  -160,     5,    30,  -160,
     109,    27,    27,  -160,  -160,  -160,    55,    32,   205,    34,
      54,    63,  -160,  -160,  -160,  -160,    67,   205,  -160,    55,
    -160,    55,    55,    55,    91,  -160,    76,  -160,   117,   121,
    -160,   151,   157,     8,    22,    35,    -1,  -160,   122,  -160,
    -160,  -160,   142,    50,    69,   141,   135,    55,   156,   148,
      55,    55,    55,  -160,  -160,   173,   168,  -160,  -160,  -160,
    -160,    73,  -160,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,  -160,
     205,    27,   205,  -160,  -160,   169,   152,   174,   183,   188,
    -160,    72,  -160,  -160,  -160,  -160,    55,   164,   121,  -160,
     157,     8,    22,    22,    35,    35,    35,    35,    -1,    -1,
    -160,  -160,  -160,  -160,  -160,   163,  -160,   205,    55,   171,
     187,   205,  -160,    55,   198,   196,  -160,  -160,   203,  -160,
    -160,   209,  -160,  -160,    90,   204,   205,  -160,   211,  -160,
    -160,   -14,    -6,  -160,   207,   -14,  -160,  -160
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -160,  -160,     1,  -160,   242,  -160,  -160,   231,   234,   -28,
    -160,  -160,   -22,   160,  -160,   176,   170,  -160,   177,   175,
      59,    -8,    58,   -17,   -29,  -160,  -160,  -160,  -160,  -159
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      68,     9,   163,    14,    66,    15,   167,    24,    25,    74,
      16,     9,    78,    78,    78,    87,    88,    76,    32,    33,
      34,    35,    62,    62,    77,    79,    80,    89,    90,     1,
       2,     3,     4,     5,   164,     6,    17,   165,    21,     7,
       1,     2,     3,     4,     5,   105,    22,   113,   108,   109,
     110,    95,    96,    97,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    23,
      91,    92,   134,    67,   136,    69,    24,    25,   130,   131,
     132,   124,   125,   126,   127,    93,    94,    32,    33,    34,
      35,    36,   100,   101,   144,    70,    39,     1,     2,     3,
       4,     5,   135,    18,    71,    41,    42,     7,    72,   147,
      43,   102,   101,   151,   142,   143,   148,   115,   116,   117,
      82,   152,     1,     2,     3,     4,     5,    81,   160,    83,
      24,    25,    84,    26,   157,   158,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,   122,   123,    37,    38,
      39,   128,   129,    40,     1,     2,     3,     4,     5,    41,
      42,    85,    24,    25,    43,    26,    86,    98,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    99,   104,
      37,   103,    39,   106,   107,    40,     1,     2,     3,     4,
       5,    41,    42,   138,    24,    25,    43,    26,   145,   146,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
     114,   137,    37,   112,    39,   149,   139,    40,     1,     2,
       3,     4,     5,    41,    42,   140,    24,    25,    43,    26,
     141,   150,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,   153,   154,    37,   155,    39,   156,   159,    40,
     161,   166,    19,    64,   119,    41,    42,    65,   133,   118,
      43,   121,   120
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-160))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_uint8 yycheck[] =
{
      28,     0,   161,    39,    26,    36,   165,    21,    22,    37,
       0,    10,    41,    42,    43,     7,     8,    39,    32,    33,
      34,    35,    21,    22,    41,    42,    43,     5,     6,    13,
      14,    15,    16,    17,    40,    19,    36,    43,    41,    23,
      13,    14,    15,    16,    17,    67,    41,    75,    70,    71,
      72,    52,    53,    54,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    39,
      48,    49,   100,    41,   102,    41,    21,    22,    95,    96,
      97,    89,    90,    91,    92,    50,    51,    32,    33,    34,
      35,    36,    42,    43,   116,    41,    41,    13,    14,    15,
      16,    17,   101,    19,    41,    50,    51,    23,    41,   137,
      55,    42,    43,   141,    42,    43,   138,    44,    45,    46,
      44,   143,    13,    14,    15,    16,    17,    36,   156,    12,
      21,    22,    11,    24,    44,    45,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    87,    88,    39,    40,
      41,    93,    94,    44,    13,    14,    15,    16,    17,    50,
      51,    10,    21,    22,    55,    24,     9,    45,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    36,    44,
      39,    40,    41,    27,    36,    44,    13,    14,    15,    16,
      17,    50,    51,    41,    21,    22,    55,    24,    34,    36,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      42,    42,    39,    40,    41,    44,    42,    44,    13,    14,
      15,    16,    17,    50,    51,    42,    21,    22,    55,    24,
      42,    44,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    44,    47,    39,    42,    41,    38,    44,    44,
      39,    44,    10,    22,    84,    50,    51,    23,    98,    83,
      55,    86,    85
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    13,    14,    15,    16,    17,    19,    23,    57,    58,
      59,    60,    61,    62,    39,    36,     0,    36,    19,    60,
      64,    41,    41,    39,    21,    22,    24,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    39,    40,    41,
      44,    50,    51,    55,    58,    65,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    85,    58,    63,    63,    64,    68,    41,    65,    41,
      41,    41,    41,    83,    65,    67,    68,    79,    80,    79,
      79,    36,    44,    12,    11,    10,     9,     7,     8,     5,
       6,    48,    49,    50,    51,    52,    53,    54,    45,    36,
      42,    43,    42,    40,    44,    68,    27,    36,    68,    68,
      68,    84,    40,    65,    42,    44,    45,    46,    71,    72,
      74,    75,    76,    76,    77,    77,    77,    77,    78,    78,
      79,    79,    79,    69,    65,    58,    65,    42,    41,    42,
      42,    42,    42,    43,    68,    34,    36,    65,    68,    44,
      44,    65,    68,    44,    47,    42,    38,    44,    45,    44,
      65,    39,    66,    85,    40,    43,    44,    85
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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

/* Line 1806 of yacc.c  */
#line 71 "yacc.y"
    { struct ASTNode* prog = opr(AST_DECL_MAIN, (yyvsp[(1) - (5)].ptr), (yyvsp[(4) - (5)].ptr), NULL);
          gerar_codigo(prog);
          liberar(prog);
          printf("sucesso\n");
        }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 77 "yacc.y"
    { struct ASTNode* prog = opr(AST_DECL_MAIN, NULL, (yyvsp[(3) - (4)].ptr), NULL);
          gerar_codigo(prog);
          liberar(prog);
          printf("sucesso\n");
        }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 85 "yacc.y"
    { (yyval.ptr) = opr(AST_TIPO_BOOLEANO, NULL, NULL, NULL); }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 86 "yacc.y"
    { (yyval.ptr) = opr(AST_TIPO_FLOAT, NULL, NULL, NULL); }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 87 "yacc.y"
    { (yyval.ptr) = opr(AST_TIPO_CHAR, NULL, NULL, NULL); }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 88 "yacc.y"
    { (yyval.ptr) = opr(AST_TIPO_STRING, NULL, NULL, NULL); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 89 "yacc.y"
    { (yyval.ptr) = opr(AST_TIPO_INTEIRO, NULL, NULL, NULL); }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 93 "yacc.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 94 "yacc.y"
    { (yyval.ptr) = opr('@', (yyvsp[(1) - (2)].ptr), (yyvsp[(2) - (2)].ptr), NULL); }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 98 "yacc.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 99 "yacc.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 103 "yacc.y"
    { (yyval.ptr) = NULL; }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 107 "yacc.y"
    { (yyval.ptr) = NULL; }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 117 "yacc.y"
    { (yyval.ptr) = NULL; }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 118 "yacc.y"
    { (yyval.ptr) = opr(';', (yyvsp[(1) - (2)].ptr), (yyvsp[(2) - (2)].ptr), NULL); }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 123 "yacc.y"
    { (yyval.ptr) = opr(';', NULL, NULL, NULL); }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 124 "yacc.y"
    { (yyval.ptr) = NULL; }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 125 "yacc.y"
    { (yyval.ptr) = NULL; }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 126 "yacc.y"
    { (yyval.ptr) = NULL; }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 128 "yacc.y"
    { (yyval.ptr) = NULL; }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 130 "yacc.y"
    { (yyval.ptr) = (yyvsp[(1) - (2)].ptr); }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 132 "yacc.y"
    { (yyval.ptr) = opr(AST_WHILE, (yyvsp[(3) - (5)].ptr), (yyvsp[(5) - (5)].ptr), NULL); }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 134 "yacc.y"
    { (yyval.ptr) = opr(AST_DO_WHILE, (yyvsp[(2) - (7)].ptr), (yyvsp[(5) - (7)].ptr), NULL); }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 136 "yacc.y"
    { (yyval.ptr) = opr(AST_IF, (yyvsp[(3) - (5)].ptr), (yyvsp[(5) - (5)].ptr), NULL); }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 138 "yacc.y"
    { (yyval.ptr) = opr(AST_IF, (yyvsp[(3) - (7)].ptr), (yyvsp[(5) - (7)].ptr), (yyvsp[(7) - (7)].ptr)); }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 140 "yacc.y"
    { (yyval.ptr) = (yyvsp[(2) - (3)].ptr); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 142 "yacc.y"
    { (yyval.ptr) = opr(AST_ESCREVA, (yyvsp[(3) - (5)].ptr), NULL, NULL); }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 144 "yacc.y"
    { (yyval.ptr) = opr(AST_LEIA, lit(AST_ID, (yyvsp[(3) - (5)].valor)), NULL, NULL); }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 146 "yacc.y"
    { (yyval.ptr) = opr(AST_RETORNE, (yyvsp[(2) - (3)].ptr), NULL, NULL); }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 150 "yacc.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 152 "yacc.y"
    { (yyval.ptr) = opr(',' , (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr), NULL); }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 157 "yacc.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 159 "yacc.y"
    { (yyval.ptr) = opr(';', (yyvsp[(1) - (2)].ptr), (yyvsp[(2) - (2)].ptr), NULL); }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 164 "yacc.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 169 "yacc.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 171 "yacc.y"
    { (yyval.ptr) = opr('=', (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr), NULL); }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 177 "yacc.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 179 "yacc.y"
    { (yyval.ptr) = opr(AST_BIIMPLICA, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr), NULL); }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 183 "yacc.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 185 "yacc.y"
    { (yyval.ptr) = opr(AST_IMPLICA, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr), NULL); }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 189 "yacc.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 193 "yacc.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 195 "yacc.y"
    { (yyval.ptr) = opr(AST_DISJUNCAO, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr), NULL); }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 199 "yacc.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 201 "yacc.y"
    { (yyval.ptr) = opr(AST_CONJUNCAO, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr), NULL); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 206 "yacc.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 208 "yacc.y"
    { (yyval.ptr) = opr(AST_IGUAL, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr), NULL);}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 210 "yacc.y"
    { (yyval.ptr) = opr(AST_DIFERENTE, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr), NULL);}
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 214 "yacc.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 216 "yacc.y"
    { (yyval.ptr) = opr('<', (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr), NULL); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 218 "yacc.y"
    { (yyval.ptr) = opr('>', (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr), NULL); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 220 "yacc.y"
    { (yyval.ptr) = opr(AST_GE, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr), NULL); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 222 "yacc.y"
    { (yyval.ptr) = opr(AST_LE, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr), NULL);}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 226 "yacc.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 228 "yacc.y"
    { (yyval.ptr) = opr('+', (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr), NULL); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 230 "yacc.y"
    { (yyval.ptr) = opr('-', (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr), NULL); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 235 "yacc.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 237 "yacc.y"
    { (yyval.ptr) = opr('*', (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr), NULL); }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 239 "yacc.y"
    { (yyval.ptr) = opr('/', (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr), NULL); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 241 "yacc.y"
    { (yyval.ptr) = opr('%', (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr), NULL); }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 245 "yacc.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 249 "yacc.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 250 "yacc.y"
    { (yyval.ptr) = (yyvsp[(2) - (2)].ptr); }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 251 "yacc.y"
    { (yyval.ptr) = opr(AST_UMINUS, (yyvsp[(2) - (2)].ptr), NULL, NULL); }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 252 "yacc.y"
    { (yyval.ptr) = opr('!', (yyvsp[(2) - (2)].ptr), NULL, NULL); }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 256 "yacc.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 260 "yacc.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 261 "yacc.y"
    { (yyval.ptr) = no_chamada_funcao((yyvsp[(1) - (2)].valor), (yyvsp[(2) - (2)].ptr));}
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 262 "yacc.y"
    { (yyval.ptr) = (yyvsp[(2) - (3)].ptr); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 266 "yacc.y"
    { (yyval.ptr) = NULL; }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 267 "yacc.y"
    { (yyval.ptr) = (yyvsp[(2) - (3)].ptr); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 271 "yacc.y"
    { (yyval.ptr) = NULL; }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 272 "yacc.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 273 "yacc.y"
    { (yyval.ptr) = opr(',', (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr), NULL); }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 277 "yacc.y"
    { (yyval.ptr) = lit(AST_INTEIRO, (yyvsp[(1) - (1)].valor));}
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 278 "yacc.y"
    { (yyval.ptr) = lit(AST_STRING, (yyvsp[(1) - (1)].valor));}
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 279 "yacc.y"
    { (yyval.ptr) = lit(AST_CHAR, (yyvsp[(1) - (1)].valor));}
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 280 "yacc.y"
    { (yyval.ptr) = lit(AST_FLOAT, (yyvsp[(1) - (1)].valor));}
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 281 "yacc.y"
    { (yyval.ptr) = lit(AST_VERDADEIRO, NULL);}
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 282 "yacc.y"
    { (yyval.ptr) = lit(AST_FALSO, NULL); }
    break;



/* Line 1806 of yacc.c  */
#line 2178 "y.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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
      if (!yypact_value_is_default (yyn))
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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



/* Line 2067 of yacc.c  */
#line 287 "yacc.y"


void yyerror(char* s) {
    fprintf(stdout, "%s\n", s);
    msgErro();
}

int main(void) {
    yyparse();
    return 0;
}


