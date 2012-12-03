#ifndef DADOS_H
#define DADOS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/***********************************************/
/* Parte referente a arvore sintatica abstrata */
/***********************************************/


enum CTipo {
    /* declaracao da main, funcoes e procedimentos */
    AST_DECL_FUN,
    AST_DECL_PROC,
    AST_DECL_MAIN,

    /* identificadores e literais */
    AST_ID,
    AST_LITERAL,

    /* Lacos e testes condicionais */
    AST_WHILE,
    AST_DO_WHILE,
    AST_IF,
	AST_COMANDO,
	AST_LISTA_COMANDOS,
    
    /* Entrada e saida */
    AST_ESCREVA,
    AST_LEIA,
 
    /* Operacoes aritmeticas*/
    AST_SOMA,
    AST_SUBTRACAO,
    AST_MULTIPLICACAO,
    AST_DIFERENCA,
    AST_MOD,

    /* Operacoes logicas */
    AST_IMPLICA,
    AST_BIIMPLICA,
    AST_DISJUNCAO,
    AST_CONJUNCAO,
	AST_CAST, /* Verificar isso depois*/
    AST_UNARIA1,
	AST_UNARIA2,
	AST_UNARIA3,

    /* Comparacoes */
    AST_MENOR,
    AST_MENOR_IGUAL,
    AST_MAIOR,
    AST_MAIOR_IGUAL,
    AST_IGUAL,
    AST_DIFERENTE,
    
    /* Tipos */
    AST_VETOR,
    AST_REFERENCIA,
    AST_TIPO_BOOLEANO,
    AST_TIPO_FLOAT,
    AST_TIPO_CHAR,
    AST_TIPO_STRING,
    AST_TIPO_INTEIRO
};

/* Estrutura do ASTNode */
struct ASTNode{
    struct Tipo* tipo;
    char* valor;
    struct ASTNode* filho1;
    struct ASTNode* filho2;
    struct ASTNode* filho3;
    enum CTipo ctipo;
};



struct ASTNode* no_tipo(enum CTipo ctipo) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));
    tmp->ctipo = ctipo;
    return tmp;
}

struct ASTNode* no_programa(struct ASTNode* ptr1, struct ASTNode* ptr2) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));
    tmp->ctipo = AST_DECL_MAIN;
    tmp->filho1 = ptr1;
    tmp->filho2 = ptr2;
    return tmp;
}

struct ASTNode* no_enquanto(struct ASTNode* exp, struct ASTNode* corpo) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));
    tmp->ctipo = AST_WHILE;
    tmp->filho1 = exp;
    tmp->filho2 = corpo;
    return tmp;
}

struct ASTNode* no_para() {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));
    tmp->ctipo = AST_WHILE;
    tmp->filho1 = NULL;
    tmp->filho2 = NULL;
    return tmp;
}

struct ASTNode* no_faca_enquanto(struct ASTNode* exp, struct ASTNode* corpo) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));
    tmp->ctipo = AST_WHILE;
    tmp->filho1 = exp;
    tmp->filho2 = corpo;
    return tmp;
}

struct ASTNode* no_literal(struct ASTNode* literal) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));
    tmp->ctipo = AST_LITERAL;
    tmp->filho1 = exp;
    tmp->filho2 = NULL;
    return tmp;
}

struct ASTNode* no_literal(struct ASTNode* literal) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));
    tmp->ctipo = AST_LITERAL;
    tmp->filho1 = exp;
    tmp->filho2 = NULL;
    return tmp;
}

struct ASTNode* no_leia(struct ASTNode* var) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));
    tmp->ctipo = AST_LEIA;
    tmp->filho1 = var;
    tmp->filho2 = NULL;
    return tmp;
}

struct ASTNode* no_escreva(struct ASTNode* var) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));
    tmp->ctipo = AST_ESCREVA;
    tmp->filho1 = var;
    tmp->filho2 = NULL;
    return tmp;
}

struct ASTNode* no_init_vetor(struct ASTNode* cauda, struct ASTNode* cabeca) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));
    tmp->ctipo = AST_VETOR;
    tmp->filho1 = cauda;
    tmp->filho2 = cabeca;
    return tmp;
}

struct ASTNode* no_comando(struct ASTNode* cmd) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));
    tmp->ctipo = AST_COMANDO;
    tmp->filho1 = cmd;
    tmp->filho2 = NULL;
    return tmp;
}

struct ASTNode* no_lista_comandos(struct ASTNode* lista, struct ASTNode* cmd) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));
    tmp->ctipo = AST_LISTA_COMANDOS;
    tmp->filho1 = lista;
    tmp->filho2 = cmd;
    return tmp;
}

struct ASTNode* no_exp_adicao(struct ASTNode* exp1, struct ASTNode* exp2) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));
    tmp->ctipo = AST_SOMA;
    tmp->filho1 = exp1;
    tmp->filho2 = exp2;
    return tmp;
}

struct ASTNode* no_exp_subtracao(struct ASTNode* exp1, struct ASTNode* exp2) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));
    tmp->ctipo = AST_SUBTRACAO;
    tmp->filho1 = exp1;
    tmp->filho2 = exp2;
    return tmp;
}
struct ASTNode* no_exp_multiplicacao(struct ASTNode* exp1, struct ASTNode* exp2) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));
    tmp->ctipo = AST_MULTIPLICACAO;
    tmp->filho1 = exp1;
    tmp->filho2 = exp2;
    return tmp;
}

struct ASTNode* no_exp_diferenca(struct ASTNode* exp1, struct ASTNode* exp2) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));
    tmp->ctipo = AST_DIFERENCA;
    tmp->filho1 = exp1;
    tmp->filho2 = exp2;
    return tmp;
}

struct ASTNode* no_exp_mod(struct ASTNode* exp1, struct ASTNode* exp2) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));
    tmp->ctipo = AST_MOD;
    tmp->filho1 = exp1;
    tmp->filho2 = exp2;
    return tmp;
}

struct ASTNode* no_exp_maior(struct ASTNode* exp1, struct ASTNode* exp2) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));
    tmp->ctipo = AST_MAIOR;
    tmp->filho1 = exp1;
    tmp->filho2 = exp2;
    return tmp;
}

struct ASTNode* no_exp_menor(struct ASTNode* exp1, struct ASTNode* exp2) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));
    tmp->ctipo = AST_MENOR;
    tmp->filho1 = exp1;
    tmp->filho2 = exp2;
    return tmp;
}

struct ASTNode* no_exp_GE(struct ASTNode* exp1, struct ASTNode* exp2) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));
    tmp->ctipo = AST_MAIOR_IGUAL;
    tmp->filho1 = exp1;
    tmp->filho2 = exp2;
    return tmp;
}

struct ASTNode* no_exp_LE(struct ASTNode* exp1, struct ASTNode* exp2) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));
    tmp->ctipo = AST_MENOR_IGUAL;
    tmp->filho1 = exp1;
    tmp->filho2 = exp2;
    return tmp;
}


struct ASTNode* no_exp_igual(struct ASTNode* exp1, struct ASTNode* exp2) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));
    tmp->ctipo = AST_IGUAL;
    tmp->filho1 = exp1;
    tmp->filho2 = exp2;
    return tmp;
}

struct ASTNode* no_exp_diferente(struct ASTNode* exp1, struct ASTNode* exp2) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));
    tmp->ctipo = AST_DIFERENTE;
    tmp->filho1 = exp1;
    tmp->filho2 = exp2;
    return tmp;
}

struct ASTNode* no_exp_e_logico(struct ASTNode* exp1, struct ASTNode* exp2) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));
    tmp->ctipo = AST_CONJUNCAO;
    tmp->filho1 = exp1;
    tmp->filho2 = exp2;
    return tmp;
}

struct ASTNode* no_exp_ou_logico(struct ASTNode* exp1, struct ASTNode* exp2) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));
    tmp->ctipo = AST_DISJUNCAO;
    tmp->filho1 = exp1;
    tmp->filho2 = exp2;
    return tmp;
}

struct ASTNode* no_exp_implica(struct ASTNode* exp1, struct ASTNode* exp2) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));
    tmp->ctipo = AST_IMPLICA;
    tmp->filho1 = exp1;
    tmp->filho2 = exp2;
    return tmp;
}

struct ASTNode* no_exp_biimplica(struct ASTNode* exp1, struct ASTNode* exp2) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));
    tmp->ctipo = AST_BIIMPLICA;
    tmp->filho1 = exp1;
    tmp->filho2 = exp2;
    return tmp;
}

struct ASTNode* no_exp_cast(struct ASTNode* exp1) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));
    tmp->ctipo = AST_CAST;
    tmp->filho1 = exp1;
    tmp->filho2 = NULL;
    return tmp;
}

struct ASTNode* no_exp_unaria1(struct ASTNode* exp1) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));
    tmp->ctipo = AST_UNARIA1;
    tmp->filho1 = exp1;
    tmp->filho2 = NULL;
    return tmp;
}

struct ASTNode* no_exp_unaria2(struct ASTNode* exp1) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));
    tmp->ctipo = AST_UNARIA2;
    tmp->filho1 = exp1;
    tmp->filho2 = NULL;
    return tmp;
}

struct ASTNode* no_exp_unaria3(struct ASTNode* exp1) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));
    tmp->ctipo = AST_UNARIA3;
    tmp->filho1 = exp1;
    tmp->filho2 = NULL;
    return tmp;
}

void liberar(struct ASTNode* ptr) {
    /* TODO */
}

/****************************************/
/* Parte referente a tabela de simbolos */
/****************************************/
enum Etipo { 
    T_INTEIRO, T_FLUTUANTE, T_BOOLEANO, T_CARACTERE, T_STRING, 
    T_VETOR, T_REFERENCIA
};

struct Tipo{
    enum Etipo id;
    struct Tipo *filho;
};

struct Constante {
    char* valor;
    struct Tipo* tipo;
};

struct Variavel {
    char* nome;
    struct Tipo* tipo;
    struct Funcao* escopo;
};

struct Funcao {
    char* nome;    
    int numero_parametros;
    struct Variavel* parametros;
    struct Tipo* retorno;
};

struct Procedimento {
    char* nome;    
    int numero_parametros;
    struct Variavel* parametros;
    struct Tipo* retorno;
};

struct TabelaSimbolos {
    int num_cons;
    int num_vars;
    int num_funs;
    int num_procs;

    struct Constante* cons;
    struct Variavel* vars;
    struct Funcao* funs;
    struct Procedimento* procs;
};


struct Tipo* clonar_tipo(struct Tipo* t){
    if (t == NULL)
        return NULL;    
    struct Tipo* tmp = malloc(sizeof(struct Tipo));
    tmp->id = t->id;
    tmp->filho = clonar_tipo(t->filho);    
};

struct Variavel* criar_variavel(char* name, struct Tipo* t){
    struct Variavel* tmp = malloc(sizeof(struct Variavel));
    tmp->nome = malloc(sizeof(char) * (strlen(name) + 1));
    strcpy(tmp->nome, name);
    tmp->tipo = clonar_tipo(t);
    return tmp;    
};

int iguais( struct Tipo *t1, struct Tipo *t2){
    if (t1->id != t2->id) {
        return 0;
    } else if (t1-> id == T_VETOR || t1->id == T_REFERENCIA) {
        return iguais(t1->filho, t2->filho);
    } else {
        return 1;
    }
}

void copiar_variavel(struct Variavel* dest, struct Variavel* src) {
    strcpy(dest->nome, src->nome);
    dest->tipo = clonar_tipo(src->tipo);
}

void dobrar_variavel(struct Variavel** ptr, int* tam) {
    int i;
    int novo_t = *tam * 2;
    struct Variavel* tmp = malloc(sizeof(struct Variavel) * novo_t);

    for (i = 0; i < *tam; ++i) {
        copiar_variavel(&tmp[i], &((*ptr)[i]));
    } 

    free(*ptr);
    *ptr = tmp;
    *tam = novo_t;
}

/***************************************/
/* Parte referente a geracao de codigo */
/***************************************/

static int lbl= 0;

void gerar_codigo(struct ASTNode* ptr) {
    int lbl1;
    int lbl2;

    if (ptr == NULL) {
        return;
    }
    
    switch (ptr->ctipo) {
        case AST_DECL_MAIN:
            printf("#include <stdio.h>\n");
            gerar_codigo(ptr->filho1);
            printf("\n\nint main() {\n");
            gerar_codigo(ptr->filho2);
            printf("return 0;\n}\n\n");
            break;

        case AST_LITERAL:
            printf("%s", ptr->valor);
            break;

        case AST_ID:
            printf("%s", ptr->valor);
            break;

        case AST_WHILE:
            printf("L%i:\n", lbl1 = lbl++);
            printf("if (!(");
            gerar_codigo(ptr->filho1);
            printf(") goto L%i;\n", lbl2 = lbl++);
            gerar_codigo(ptr->filho2);
            printf("goto L%i;\n", lbl1);
            break;

        case AST_SOMA:    //alterações 02/12
            gerar_codigo(ptr->filho1);
            printf("+");
            gerar_codigo(ptr->filho2);            
            break;

        case AST_SUBTRACAO:    //alterações 02/12
            gerar_codigo(ptr->filho1);
            printf("-");
            gerar_codigo(ptr->filho2);            
            break;

        case AST_MULTIPLICACAO:    //alterações 02/12
            gerar_codigo(ptr->filho1);
            printf("*");
            gerar_codigo(ptr->filho2);            
            break;        

        case AST_DIFERENCA:    //alterações 02/12
            gerar_codigo(ptr->filho1);
            printf("/");
            gerar_codigo(ptr->filho2);            
            break;

        case AST_MENOR:    //alterações 02/12
            gerar_codigo(ptr->filho1);
            printf("<");
            gerar_codigo(ptr->filho2);            
            break;

        case AST_MENOR_IGUAL:    //alterações 02/12
            gerar_codigo(ptr->filho1);
            printf("<=");
            gerar_codigo(ptr->filho2);            
            break;

        case AST_MAIOR:    //alterações 02/12
            gerar_codigo(ptr->filho1);
            printf(">");
            gerar_codigo(ptr->filho2);            
            break;

        case AST_MAIOR_IGUAL:    //alterações 02/12
            gerar_codigo(ptr->filho1);
            printf(">=");
            gerar_codigo(ptr->filho2);            
            break;        

        case AST_MOD:    //alterações 02/12
            gerar_codigo(ptr->filho1);
            printf("%c", '%');
            gerar_codigo(ptr->filho2);            
            break;

        case AST_IMPLICA:    //alterações 02/12
            printf("((!");            
            gerar_codigo(ptr->filho1);
            printf(" &&    !");
            gerar_codigo(ptr->filho2);
            printf(") || (!");
            gerar_codigo(ptr->filho1);
            printf(" && ");
            gerar_codigo(ptr->filho2);
            printf(") || (");
            gerar_codigo(ptr->filho1);
            printf(" && ");
            gerar_codigo(ptr->filho2);
            printf("))");            
            break;

        case AST_BIIMPLICA:    //alterações 02/12
            printf("((!");            
            gerar_codigo(ptr->filho1);
            printf(" && !");
            gerar_codigo(ptr->filho2);
            printf(") || (");
            gerar_codigo(ptr->filho1);
            printf(" && ");
            gerar_codigo(ptr->filho2);
            printf("))");            
            break;

        case AST_DISJUNCAO:    //alterações 02/12
            gerar_codigo(ptr->filho1);
            printf("||");
            gerar_codigo(ptr->filho2);            
            break;

        case AST_CONJUNCAO:    //alterações 02/12
            gerar_codigo(ptr->filho1);
            printf("&&");
            gerar_codigo(ptr->filho2);            
            break;

        case AST_VETOR:    //tem que conferir isso aqui ainda...
            printf("%s[", ptr->valor);
            gerar_codigo(ptr->filho1);
            printf("] = ");
            gerar_codigo(ptr->filho2);
            
        default:
            printf("ERRO!\n");
            break;
    }
}


#endif
