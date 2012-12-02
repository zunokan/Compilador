#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

enum Etipo { INTEIRO, FLUTUANTE, BOOLEANO, CARACTERE, STRING, VETOR, REFERENCIA};
enum CTipo { AST_ID, AST_SOMA, AST_SUBTRACAO, AST_MULTIPLICACAO, AST_DIFERENCA, AST_WHILE, AST_IF, ESCREVA, LEIA, AST_MOD, AST_IMPLICA, AST_BIIMPLICA, AST_DISJUNCAO, AST_CONJUNCAO, AST_DO_WHILE, AST_LITERAL};

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
	char* valor;
	struct ASTNode* filho1;
	struct ASTNode* filho2;
	struct ASTNode* filho3;
	enum CTipo ctipo;
}


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

/***************************************/
/* Parte referente a geracao de codigo */
/***************************************/

static int lbl= 0;

void gerar_codigo(ASTNode* ptr) {
    int lbl1;
    int lbl2;

    if (ptr == NULL) {
        return;
    }
    
    switch (ptr->ctipo) {
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
		case AST_SOMA:	//alterações 02/12
			gerar_codigo(ptr->filho1);
			printf("+");
			gerar_codigo(ptr->filho2);			
			break;
		case AST_SUBTRACAO:	//alterações 02/12
			gerar_codigo(ptr->filho1);
			printf("-");
			gerar_codigo(ptr->filho2);			
			break;		
		case AST_MULTIPLICACAO:	//alterações 02/12
			gerar_codigo(ptr->filho1);
			printf("*");
			gerar_codigo(ptr->filho2);			
			break;		
		case AST_DIFERENCA:	//alterações 02/12
			gerar_codigo(ptr->filho1);
			printf("/");
			gerar_codigo(ptr->filho2);			
			break;
		case AST_DIFERENCA:	//alterações 02/12
			gerar_codigo(ptr->filho1);
			printf("/");
			gerar_codigo(ptr->filho2);			
			break;
		case AST_MENOR:	//alterações 02/12
			gerar_codigo(ptr->filho1);
			printf("<");
			gerar_codigo(ptr->filho2);			
			break;
		case AST_MENOR_IGUAL:	//alterações 02/12
			gerar_codigo(ptr->filho1);
			printf("<=");
			gerar_codigo(ptr->filho2);			
			break;
		case AST_MAIOR:	//alterações 02/12
			gerar_codigo(ptr->filho1);
			printf(">");
			gerar_codigo(ptr->filho2);			
			break;
		case AST_MAIOR_IGUAL:	//alterações 02/12
			gerar_codigo(ptr->filho1);
			printf(">=");
			gerar_codigo(ptr->filho2);			
			break;		
		case AST_MOD:	//alterações 02/12
			gerar_codigo(ptr->filho1);
			printf("%");
			gerar_codigo(ptr->filho2);			
			break;
		case AST_IMPLICA:	//alterações 02/12
			printf("((!");			
			gerar_codigo(ptr->filho1);
			printf(" &&	!");
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
		case AST_BIIMPLICA:	//alterações 02/12
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
		case AST_DISJUNCAO:	//alterações 02/12
			gerar_codigo(ptr->filho1);
			printf("||");
			gerar_codigo(ptr->filho2);			
			break;
		case AST_CONJUNCAO:	//alterações 02/12
			gerar_codigo(ptr->filho1);
			printf("&&");
			gerar_codigo(ptr->filho2);			
			break;
		case AST_VETOR:							//tem que conferir isso aqui ainda...
			printf("%s[", ptr->valor);
			gerar_codigo(ptr->filho1);
			printf("] = ");
			gerar_codigo(ptr->filho2);
			
        default:
            printf("ERRO!\n");
            break;
    }
}
