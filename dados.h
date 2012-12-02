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

struct Variavel* criar_variavel(char* name, struct Tipo* t){
	struct Variavel* tmp = malloc(sizeof(struct Variavel));
	tmp->nome = malloc(sizeof(char * strlen(name)));
	strcpy(tmp->nome, name);
	tmp->nome = malloc(sizeof(char * (strlen(name) + 1)));
	tmp->tipo = t;
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
