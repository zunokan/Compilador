
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
%token CONJUNTO
%token LISTA
%token PROGRAMA
%token EXCECAO
%token TAD
%token PUBLICO
%token PRIVADO
%token VERDADEIRO
%token FALSO
%token PROCEDIMENTO
%token PARE
%token CONTINUE
%token RETORNE
%token PARA
%token CADA
%token EM
%token ATE
%token ENQUANTO
%token FACA
%token ITERADOR
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
%type <ptr> programa_completo programa lista_declaracoes comandos
%type <ptr> expressao
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
    : TIPO_BOOLEANO 
    | TIPO_FLOAT 
    | TIPO_CHAR 
    | TIPO_STRING 
    | TIPO_INTEIRO 
    ;

lista_declaracoes
    : declaracao { $$ = NULL; }
    | lista_declaracoes declaracao { $$ = NULL; }
    ;

declaracao
    : declaracao_funcao
    | declaracao_procedimento
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
    : ';'
    | tipo ID ';' 
    | tipo ID '=' expressao ';'
    | tipo ID '['  INTEIRO ']' ';'
    | tipo ID '['  INTEIRO ']' '=' '{' lista_inicializacao_vetor '}' ';'
    | expressao ';'
    | ENQUANTO '(' expressao ')' comandos 
        { $$ = no_enquanto($3, $5); }
    | FACA comandos ENQUANTO '(' expressao ')' ';' 
        { $$ = no_faca_enquanto($2, $5); }
    | SE '(' expressao ')' comandos %prec IFX
    | SE '(' expressao ')' comandos SENAO comandos
    | '{' lista_de_comandos '}'
    | ESCREVA '(' expressao ')' ';'
    | LEIA '(' ID  ')' ';'
    | RETORNE expressao ';'
    ;

lista_inicializacao_vetor
    : literal
    | lista_inicializacao_vetor ',' literal
    ;
    
conjunto
    : ID
    | '{' literal_conjunto '}'
    ;

literal_conjunto
    :
    | literal
    | literal_conjunto ',' literal
    ;

lista_de_comandos
    : comandos
    | lista_de_comandos comandos
    ;
    

expressao
    : expressao_atribuicao
    ;

expressao_atribuicao
    : expressao_biimplica
    | expressao_unaria operador_atribuicao expressao_atribuicao
    ;


expressao_biimplica
    : expressao_implica
    | expressao_biimplica BIIMPLICA expressao_implica
    ;

expressao_implica
    : expressao_condicional
    | expressao_implica IMPLICA expressao_condicional
    ;
    
expressao_condicional
    : expressao_ou_logico
    ;

expressao_ou_logico
    : expressao_e_logico
    | expressao_ou_logico OR expressao_e_logico
    ;

expressao_e_logico
    : expressao_igualdade
    | expressao_e_logico AND expressao_igualdade
    ;

expressao_igualdade
    : expressao_relacional
    | expressao_igualdade IGUAL expressao_relacional
    | expressao_igualdade DIFERENTE expressao_relacional
    ;

expressao_relacional
    : expressao_aditiva
    | expressao_relacional '<' expressao_aditiva
    | expressao_relacional '>' expressao_aditiva
    | expressao_relacional GE expressao_aditiva
    | expressao_relacional LE expressao_aditiva
    ;

expressao_aditiva
    : expressao_multiplicativa
    | expressao_aditiva '+' expressao_multiplicativa
    | expressao_aditiva '-' expressao_multiplicativa
    ;

expressao_multiplicativa
    : expressao_de_cast
    | expressao_multiplicativa '*' expressao_de_cast
    | expressao_multiplicativa '/' expressao_de_cast
    | expressao_multiplicativa '%' expressao_de_cast
    ;

expressao_de_cast
    : expressao_unaria
    ;

expressao_unaria
    : expressao_posfixa
    | '+' expressao_de_cast
    | '-' expressao_de_cast
    | '!' expressao_de_cast
    ;

expressao_posfixa
    : expressao_primaria
    ;

expressao_primaria
    : literal
    | ID chamada_funcao
    | '(' expressao ')'
    ;

chamada_funcao
    : 
    | '(' lista_expressoes ')'
    ;

lista_expressoes
    : 
    | expressao
    | lista_expressoes ',' expressao
    ;

literal
    : INTEIRO
    | STRING
    | CHAR
    | FLOAT
    | VERDADEIRO
    | FALSO
    ;

operador_atribuicao
    : '='
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

