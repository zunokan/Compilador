#include <stdio.h>

int main() {
    int teste = 1;
    int flag = 0;
    int i;
    int vetor[10] = {10,9,8,7,6,5,4,3,2,1};
    int tam = 10;
    int aux;

    Label1:
        aux = 4;
        aux = aux / 2;
        aux = aux * teste;
        teste = aux;
        printf("%d",teste);
        aux = 1;
        aux = aux + flag;
        flag = aux;

        aux = flag;
        if (aux <= 1) goto Label1;

    i = 1;
    tam = 10;
   
    Label2:
        aux = i;
        aux = vetor[aux];
        printf("%d",aux);
        aux = i;
        aux = aux + 1;
        i = aux;

        aux = i;
        if (aux < tam) goto Label2;

    return 0;
} 
