
%{
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "dados.h"

void yyerror(char* s);
extern void msgErro();
%}

%union {
    char* valor;
    struct ASTNode* ptr;
};

%token FIM
%token ERRO
%token GE
%token LE
%token IGUAL
%token DIFERENTE
%token AND
%token OR
%token IMPLICA
%token BIIMPLICA
%token TIPO_BOOLEANO
%token TIPO_FLOAT
%token TIPO_CHAR
%token TIPO_STRING
%token TIPO_INTEIRO
%token LISTA
%token PROGRAMA
%token TAD
%token VERDADEIRO
%token FALSO
%token PROCEDIMENTO
%token RETORNE
%token EM
%token ATE
%token ENQUANTO
%token FACA
%token LEIA
%token ESCREVA
%token SE
%token <valor> CHAR
%token <valor> STRING
%token <valor> INTEIRO
%token <valor> FLOAT
%token <valor> ID

%nonassoc IFX
%nonassoc SENAO

%start programa_completo
%type <ptr> literal lista_expressoes chamada_funcao expressao_primaria
%type <ptr> expressao_posfixa expressao_unaria expressao_de_cast
%type <ptr> expressao_multiplicativa expressao_aditiva
%type <ptr> expressao_relacional expressao_igualdade expressao_e_logico
%type <ptr> expressao_ou_logico expressao_condicional expressao_implica
%type <ptr> expressao_biimplica expressao_atribuicao expressao 
%type <ptr> lista_de_comandos lista_inicializacao_vetor comandos
%type <ptr> declaracao lista_declaracoes tipo declaracao_funcao
%type <ptr> programa_completo programa declaracao_procedimento
%type <ptr> lista_argumentos
%%


programa_completo
    : lista_declaracoes PROGRAMA '{' programa '}' 
        { struct ASTNode* prog = no_programa($1, $4);
          gerar_codigo(prog);
          liberar(prog);
          printf("sucesso\n");
        }
    | PROGRAMA '{' programa '}' 
        { struct ASTNode* prog = no_programa(NULL, $3);
          gerar_codigo(prog);
          liberar(prog);
          printf("sucesso\n");
        }
    ;

tipo
    : TIPO_BOOLEANO { $$ = opr(AST_TIPO_BOOLEANO, NULL, NULL, NULL); }
    | TIPO_FLOAT    { $$ = opr(AST_TIPO_FLOAT, NULL, NULL, NULL); }
    | TIPO_CHAR     { $$ = opr(AST_TIPO_CHAR, NULL, NULL, NULL); }
    | TIPO_STRING   { $$ = opr(AST_TIPO_STRING, NULL, NULL, NULL); }
    | TIPO_INTEIRO  { $$ = opr(AST_TIPO_INTEIRO, NULL, NULL, NULL); }
    ;

lista_declaracoes
    : declaracao { $$ = $1; }
    | lista_declaracoes declaracao { $$ = opr('@', $1, $2, NULL); }
    ;

declaracao
    : declaracao_funcao { $$ = $1; }
    | declaracao_procedimento { $$ = $1; }
    ;

declaracao_funcao
    : tipo ID '(' lista_argumentos ')' comandos
    ;

declaracao_procedimento
    : PROCEDIMENTO ID '(' lista_argumentos ')' comandos
    ;

lista_argumentos
    : 
    | tipo ID 
    | lista_argumentos ',' tipo ID 
    ;

programa
    : { $$ = NULL; } 
    | programa comandos { $$ = NULL; }
    ;


comandos
    : ';' { $$ = opr(';', NULL, NULL, NULL); }
    | tipo ID ';' { $$ = NULL; }
    | tipo ID '=' expressao ';' { $$ = NULL; }
    | tipo ID '['  INTEIRO ']' ';' { $$ = NULL; }
    | tipo ID '['  INTEIRO ']' '=' '{' lista_inicializacao_vetor '}' ';' 
        { $$ = NULL; }
    | expressao ';'
        { $$ = $1; }
    | ENQUANTO '(' expressao ')' comandos 
        { $$ = opr(AST_WHILE, $3, $5, NULL); }
    | FACA comandos ENQUANTO '(' expressao ')' ';' 
        { $$ = opr(AST_DO_WHILE, $2, $5, NULL); }
    | SE '(' expressao ')' comandos %prec IFX
        { $$ = opr(AST_IF, $3, $5, NULL); }
    | SE '(' expressao ')' comandos SENAO comandos
        { $$ = opr(AST_IF, $3, $4, $5); }
    | '{' lista_de_comandos '}'
        { $$ = $1; }
    | ESCREVA '(' expressao ')' ';'
        { $$ = opr(AST_ESCREVA, $3, NULL, NULL); }
    | LEIA '(' ID  ')' ';' 
        { $$ = opr(AST_LEIA, $3, NULL, NULL); }
    | RETORNE expressao ';'
        { $$ = opr(AST_RETORNE, $2, NULL, NULL); }
    ;

lista_inicializacao_vetor
    : literal { $$ = $1; }
    | lista_inicializacao_vetor ',' literal 
        { $$ = opr(',' , $1, $3, NULL); }
    ;
    

lista_de_comandos
    : comandos	{ $$ = $1; }
    | lista_de_comandos comandos 
        { $$ = opr(';', $1, $2, NULL); }
    ;
    

expressao
    : expressao_atribuicao { $$ = $1; }
    ;

expressao_atribuicao
    : expressao_biimplica 
        { $$ = $1; }
    | expressao_unaria '=' expressao_atribuicao 
        { $$ = opr('=', $1, $3, NULL); }
    ;


expressao_biimplica
    : expressao_implica 
        { $$ = $1; }
    | expressao_biimplica BIIMPLICA expressao_implica 
        { $$ = opr(AST_BIIMPLICA, $1, $3, NULL); } 
    ;

expressao_implica
    : expressao_condicional { $$ = $1; }
    | expressao_implica IMPLICA expressao_condicional 
        { $$ = opr(AST_IMPLICA, $1, $3, NULL); } 
    ;
    
expressao_condicional
    : expressao_ou_logico { $$ = $1; }
    ;

expressao_ou_logico
    : expressao_e_logico { $$ = $1; }
    | expressao_ou_logico OR expressao_e_logico 
        { $$ = opr(AST_DISJUNCAO, $1, $3, NULL); }
    ;

expressao_e_logico
    : expressao_igualdade { $$ = $1; }
    | expressao_e_logico AND expressao_igualdade 
        { $$ = opr(AST_CONJUNCAO, $1, $3, NULL); }
    ;

expressao_igualdade
    : expressao_relacional 
        { $$ = $1; }
    | expressao_igualdade IGUAL expressao_relacional 
        { $$ = opr(AST_IGUAL, $1, $3, NULL);}
    | expressao_igualdade DIFERENTE expressao_relacional 
        { $$ = opr(AST_DIFERENTE, $1, $3, NULL);}
    ;

expressao_relacional
    : expressao_aditiva { $$ = $1; }
    | expressao_relacional '<' expressao_aditiva 
        { $$ = opr('<', $1, $3, NULL); }
    | expressao_relacional '>' expressao_aditiva 
        { $$ = opr('>', $1, $3, NULL); }
    | expressao_relacional GE expressao_aditiva 
        { $$ = opr(AST_GE, $1, $3, NULL); }
    | expressao_relacional LE expressao_aditiva 
        { $$ = opr(AST_LE, $1, $3, NULL);}
    ;

expressao_aditiva
    : expressao_multiplicativa { $$ = $1; }
    | expressao_aditiva '+' expressao_multiplicativa 
        { $$ = opr('+', $1, $3, NULL); }
    | expressao_aditiva '-' expressao_multiplicativa 
        { $$ = opr('-', $1, $3, NULL); }
    ;


expressao_multiplicativa
    : expressao_de_cast { $$ = $1; }
    | expressao_multiplicativa '*' expressao_de_cast 
        { $$ = opr('*', $1, $3, NULL); }
    | expressao_multiplicativa '/' expressao_de_cast 
        { $$ = opr('/', $1, $3, NULL); }
    | expressao_multiplicativa '%' expressao_de_cast 
        { $$ = opr('%', $1, $3, NULL); }
    ;

expressao_de_cast
    : expressao_unaria { $$ = $1; }
    ;

expressao_unaria
    : expressao_posfixa { $$ = $1; }
    | '+' expressao_de_cast { $$ = $2; }
    | '-' expressao_de_cast { $$ = opr(AST_UMINUS, $2, NULL, NULL); }
    | '!' expressao_de_cast { $$ = opr('!', $2, NULL, NULL); }
    ;

expressao_posfixa
    : expressao_primaria { $$ = $1; }
    ;

expressao_primaria
    : literal { $$ = $1; }
    | ID chamada_funcao { $$ = no_chamada_funcao($1, $2);}
    | '(' expressao ')' { $$ = $2; }
    ;

chamada_funcao
    : { $$ = NULL; }
    | '(' lista_expressoes ')' { $$ = $2; }
    ;

lista_expressoes
    : { $$ = NULL; }
    | expressao { $$ = $1; }
    | lista_expressoes ',' expressao { $$ = opr(',', $1, $3, NULL); }
    ;

literal
    : INTEIRO    { $$ = lit(AST_INTEIRO, $1);}
    | STRING     { $$ = lit(AST_STRING, $1);}
    | CHAR       { $$ = lit(AST_CHAR, $1);}
    | FLOAT      { $$ = lit(AST_FLOAT, $1);}
    | VERDADEIRO { $$ = lit(AST_VERDADEIRO, NULL);}
    | FALSO      { $$ = lit(AST_FALSO, NULL); }
    ;



%%

void yyerror(char* s) {
    fprintf(stdout, "%s\n", s);
    msgErro();
}

int main(void) {
    yyparse();
    return 0;
}

