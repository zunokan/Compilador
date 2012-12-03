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
    AST_DECL_FUN = 500,
    AST_DECL_PROC,
    AST_DECL_MAIN,

    /* identificadores e literais */
    AST_ID,
    AST_LITERAL,
    AST_INTEIRO,
    AST_STRING,
    AST_CHAR,
    AST_FLOAT,
    AST_VERDADEIRO,
    AST_FALSO,

    /* Lacos e testes condicionais */
    AST_WHILE,
    AST_DO_WHILE,
    AST_IF,
	AST_COMANDO,
	AST_LISTA_COMANDOS,
    
    /* Entrada e saida */
    AST_ESCREVA,
    AST_LEIA,
    AST_FCHAMADA,
 
    /* Operacoes aritmeticas*/
    AST_UMINUS,
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
    AST_LE,
    AST_MAIOR,
    AST_GE,
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
    char valor[255];
    struct ASTNode* filho1;
    struct ASTNode* filho2;
    struct ASTNode* filho3;
    enum CTipo op;
};

struct ASTNode* 
opr(int op, struct ASTNode* p1, struct ASTNode* p2, struct ASTNode* p3) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));

    tmp->op = op;
    tmp->filho1 = p1;
    tmp->filho2 = p2;
    tmp->filho3 = p3;

    return tmp;
}

struct ASTNode* lit(int op, char* id) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));

    tmp->op = op;
    tmp->filho1 = NULL;
    tmp->filho2 = NULL;
    tmp->filho3 = NULL;
    strcpy(tmp->valor, id);

    return tmp;
   
}

struct ASTNode*
no_chamada_funcao(char* id, struct ASTNode* args) {
    struct ASTNode* tmp = malloc(sizeof(struct ASTNode));

    tmp->op = AST_FCHAMADA;
    tmp->filho1 = args;
    tmp->filho2 = NULL;
    tmp->filho3 = NULL;
    strcpy(tmp->valor, id);

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
    
    switch (ptr->op) {
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

        case AST_LE:    //alterações 02/12
            gerar_codigo(ptr->filho1);
            printf("<=");
            gerar_codigo(ptr->filho2);            
            break;

        case AST_MAIOR:    //alterações 02/12
            gerar_codigo(ptr->filho1);
            printf(">");
            gerar_codigo(ptr->filho2);            
            break;

        case AST_GE:    //alterações 02/12
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
          
        /* Chamada de funcao */
        case AST_FCHAMADA:
            printf("%s(", ptr->valor);
            gerar_codigo(ptr->filho1);
            printf(")");
            break;

        /* Tipos */
        case AST_TIPO_BOOLEANO:
            printf("int ");
            break;

        case AST_TIPO_FLOAT:
            printf("float ");
            break;

        case AST_TIPO_CHAR:
            printf("char ");
            break;

        case AST_TIPO_STRING:
            printf("char* ");
            break;

        case AST_TIPO_INTEIRO:
            printf("int ");
            break;
 
        default:
            printf("ERRO!\n");
            break;
    }
}


#endif
