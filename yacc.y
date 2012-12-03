
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
    : TIPO_BOOLEANO { $$= no_inteiro($1);}
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
    | expressao ';'{ $$ = no_exp($1);}
    | ENQUANTO '(' expressao ')' comandos 
        { $$ = no_enquanto($3, $5); }
    | FACA comandos ENQUANTO '(' expressao ')' ';' 
        { $$ = no_faca_enquanto($2, $5); }
    | SE '(' expressao ')' comandos %prec IFX
    | SE '(' expressao ')' comandos SENAO comandos
    | '{' lista_de_comandos '}'
    | ESCREVA '(' expressao ')' ';'
    | LEIA '(' ID  ')' ';' { $$ = no_leia($3);}
    | RETORNE expressao ';'
    ;

lista_inicializacao_vetor
    : literal { $$= no_literal($1);}
    | lista_inicializacao_vetor ',' literal { $$= no_init_vetor($1, $3);}
    ;
    

lista_de_comandos
    : comandos	{ $$= no_comando($1);}
    | lista_de_comandos comandos { $$= no_lista_comandos($1, $2);}
    ;
    

expressao
    : expressao_atribuicao { $$= no_exp_atribuicao($1);}
    ;

expressao_atribuicao
    : expressao_biimplica { $$= no_exp_biimplica($1);}
    | expressao_unaria operador_atribuicao expressao_atribuicao { $$= no_exp_tipo1($1, $2, $3);}
    ;


expressao_biimplica
    : expressao_implica { $$= no_exp_implica($1);}
    | expressao_biimplica BIIMPLICA expressao_implica { $$= no_exp_tipo2($1, $3);}
    ;

expressao_implica
    : expressao_condicional { $$= no_condicional($1);}
    | expressao_implica IMPLICA expressao_condicional { $$= no_exp_tipo3($1, $3);} //acho que no_exp_tipo3 e no_exp_tipo2 podem ser a mesma coisa
    ;
    
expressao_condicional
    : expressao_ou_logico { $$= no_exp_ou_logico($1);}
    ;

expressao_ou_logico
    : expressao_e_logico { $$= no_exp_e_logico($1);}
    | expressao_ou_logico OR expressao_e_logico { $$= no_exp_tipo4($1, $3);}
    ;

expressao_e_logico
    : expressao_igualdade { $$= no_exp_igualdade($1);}
    | expressao_e_logico AND expressao_igualdade { $$= no_exp_tipo4($1, $3);}
    ;

expressao_igualdade
    : expressao_relacional { $$= no_exp_relacional($1);}
    | expressao_igualdade IGUAL expressao_relacional { $$= no_exp_tipo5($1, $3);}
    | expressao_igualdade DIFERENTE expressao_relacional { $$= no_exp_tipo6($1, $3);}
    ;

expressao_relacional
    : expressao_aditiva { $$= no_exp_aditiva($1);}
    | expressao_relacional '<' expressao_aditiva { $$= no_exp_tipo7($1, $3);}
    | expressao_relacional '>' expressao_aditiva { $$= no_exp_tipo8($1, $3);}
    | expressao_relacional GE expressao_aditiva { $$= no_exp_tipo9($1, $3);}
    | expressao_relacional LE expressao_aditiva { $$= no_exp_tipo10($1, $3);}
    ;

expressao_aditiva
    : expressao_multiplicativa { $$= no_exp_multiplicativa($1);}
    | expressao_aditiva '+' expressao_multiplicativa { $$= no_exp_tipo11($1, $3);}
    | expressao_aditiva '-' expressao_multiplicativa { $$= no_exp_tipo12($1, $3);}
    ;


expressao_multiplicativa
    : expressao_de_cast { $$= no_exp_cast($1);}
    | expressao_multiplicativa '*' expressao_de_cast { $$= no_exp_tipo13($1, $3);}
    | expressao_multiplicativa '/' expressao_de_cast { $$= no_exp_tipo14($1, $3);}
    | expressao_multiplicativa '%' expressao_de_cast { $$= no_exp_tipo15($1, $3);}
    ;

expressao_de_cast
    : expressao_unaria { $$= no_exp_unaria($1);}
    ;

expressao_unaria
    : expressao_posfixa { $$= no_exp_posfixa($1);}
    | '+' expressao_de_cast { $$= no_exp_tipo16($2);}
    | '-' expressao_de_cast { $$= no_exp_tipo17($2);}
    | '!' expressao_de_cast { $$= no_exp_tipo18($2);}
    ;

expressao_posfixa
    : expressao_primaria { $$= no_exp_primaria($1);}
    ;

expressao_primaria
    : literal { $$= no_literal($1);}
    | ID chamada_funcao { $$= no_chamada_funcao($2);}
    | '(' expressao ')' { $$= no_exp($2);}
    ;

chamada_funcao
    : 
    | '(' lista_expressoes ')' { $$= no_lista_exp($2);}
    ;

lista_expressoes
    : 
    | expressao { $$= no_exp($1);}
    | lista_expressoes ',' expressao { $$= no_exp_tipo19($1, $3);}
    ;

literal
    : INTEIRO { $$= no_int($1);}
    | STRING  { $$= no_string($1);}
    | CHAR { $$= no_char($1);}
    | FLOAT { $$= no_gloat($1);}
    | VERDADEIRO { $$= no_true($1);}
    | FALSO { $$= no_false($1);}
    ;

operador_atribuicao
    : '=' { $$= no_atribuicao($1);}
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

