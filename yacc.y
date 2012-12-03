
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
    :
    | '(' expressao ')' { $$= no_exp($2);}
    | expressao '+' expressao { $$= no_exp_adicao($1, $3);}
    | expressao '-' expressao { $$= no_exp_subtracao($1, $3);}
    | expressao '*' expressao { $$= no_exp_multiplicacao($1, $3);}
    | expressao '/' expressao { $$= no_exp_diferenca($1, $3);}
    | expressao '%' expressao { $$= no_exp_mod($1, $3);}
    | expressao '>' expressao { $$= no_exp_maior($1, $3);}
    | expressao '<' expressao { $$= no_exp_menor($1, $3);}
    | expressao GE expressao { $$= no_exp_GE($1, $3);}
    | expressao LE expressao { $$= no_exp_LE($1, $3);}
    | expressao IGUAL expressao { $$= no_exp_igual($1, $3);}
    | expressao DIFERENTE expressao { $$= no_exp_diferente($1, $3);}
    | expressao AND expressao { $$= no_exp_e_logico($1, $3);}
    | expressao OR expressao { $$= no_exp_ou_logico($1, $3);}
    | expressao IMPLICA expressao { $$= no_exp_implica($1, $3);}
    | expressao BIIMPLICA expressao { $$= no_exp_biimplica($1, $3);}
	| expressao_de_cast { $$= no_exp_cast($1);}
	| expressao_posfixa { $$= no_exp_posfixa($1);}
	| '+' expressao { $$= no_exp_unaria($2);} //verificar isso
	| '-' expressao { $$= no_exp_unaria($2);} //verificar isso
	| '!' expressao { $$= no_exp_unaria($2);} //verificar isso
	| literal { $$= no_literal($1);}
	| ID chamada_de_funcao { $$= no_chamada_funcao($2);}
    | expressao_atribuicao { $$= no_exp_atribuicao($1);}
    ;

expressao_atribuicao
    : expressao_unaria operador_atribuicao expressao_atribuicao { $$= no_exp_tipo1($1, $2, $3);}
    ;

expressao_de_cast
    : expressao_unaria { $$= no_exp_unaria($1);}
    ; 



expressao_posfixa
    : expressao_primaria { $$= no_exp_primaria($1);}
    ;

expressao_primaria
    : literal { $$= no_literal($1);}
    | ID chamada_de_funcao { $$= no_chamada_funcao($2);}
    | '(' expressao ')' { $$= no_exp($2);}
    ;
 
chamada_de_funcao
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

