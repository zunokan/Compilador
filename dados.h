#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

enum Etipo { INTEIRO, FLUTUANTE, BOOLEANO, CARACTERE, STRING, VETOR, REFERENCIA};

struct Tipo{
	enum Etipo id;
	struct Tipo *filho;
};

struct Variavel {
	char* nome;
	struct Tipo* tipo;
	
	
}

struct ASTNode{
	struct Tipo* tipo;
	struct ASTNode* filho1;
	struct ASTNode* filho2;
	struct ASTNode* filho3;
	enum CTipo* ctipo;
}

enum CTipo { SOMA, DIFERENÇA, WHILE, IF, ESCREVA, LEIA, MOD, IMPLICA, BIIMPLICA, DISJUNCAO, CONJUNCAO, DO_WHILE};

struct Funcao {
	char* nome;	
	int numero_parametros;
	int* parametros;
	Tipo* retorno;
	ASTNode* corpo;
}

struct Tipo* clonar_tipo(struct Tipo* t){
	if (t == NULL)
		return NULL;	
	struct Tipo* tmp = malloc(sizeof(struct Tipo));
	tmp->id = t->id;
	tmp->filho = clonar_tipo(t->filho);	
}

struct Variavel* criar_variavel(char* name, struct Tipo* t){
	struct Variavel* tmp = malloc(sizeof(struct Variavel));
	tmp->nome = malloc(sizeof(char * (strlen(name) + 1)));
	strcpy(tmp->nome, name);
	tmp->tipo = clonar_tipo(t);
	return tmp;	
}



int iguais( struct Tipo *t1, struct Tipo *t2){
	if (t1->id != t2->id)
		return 0;	
	if (t1->id == INTEIRO && t2->id == INTEIRO)
		return 1;
	if (t1->id == FLUTUANETE && t2->id == FLUTUANTE)
		return 2;
	if (t1->id == BOOLEANO && t2->id == BOOLEANO)
		return 3;
	if (t1->id == CARACTERE && t2->id == CARACTERE)
		return 4;
	if (t1->id == STRING && t2->id == STRING)
		return 5;
	if (t1->id == VETOR || t1->id == REFERENCIA){
		return iguais(t1->filho, t2->filho);
	}
}

void copiar_variavel(struct Variavel* dest, struct Variavel* src) {
    strcpy(dest->nome, src->nome);
    dest = clonar_tipo(src->tipo);
}

void dobrar_variavel(struct Variavel** ptr, int* tam) {
    int i;
    int novo_t = tam * 2;
    struct Variavel* tmp = malloc(sizeof(struct Variavel) * novo_t);

    for (int i = 0; i < tam; ++i) {
        copiar_variavel(&tmp[i], &((*ptr)[i]));
    } 

    free(*ptr);
    *ptr = tmp;
    *tam = novo_t;
}
