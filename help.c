#include <stdio.h>

enum Etipo { INTEIRO, FLUTUANTE, BOOLEANO, CARACTERE, STRING, VETOR, REFERENCIA};

struct Tipo{
	Etipo id;
	Tipo *filho;
};

int iguais( Tipo *t1, Tipo *t2){
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
