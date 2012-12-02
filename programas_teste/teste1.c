#include <stdio.h>


int soma_3(int x, int y, int z) {
    int aux = x;
    aux = aux + y;
    aux = aux + z;

    return aux;
}



void imprime(char y) {
    char texto = y;
    printf("%c",y);
}




int faixa(float b) {
        if (b > 0) goto Label1;
        goto Label2;

    Label1:
        if (b < 5) goto Label6;
        goto Label2;

    Label2:
        if (b > 5.5) goto Label3;
        goto Label4;

    Label3:
        if (b <= 10) goto Label7;
        goto Label7;

    Label4:
        if (b > 10.5) goto Label5;
        goto Label9;

    Label5:
        if (b < 10.9) goto Label8;
        goto Label9;

    Label6:
        return 1;

    Label7:
        return 2;

    Label8:
        return 3;

    Label9:
        return 10;
        
}


int main(){
	int flag = 0;
	float x = 1;
	int teste = faixa(x);
	while(flag < 10){
		printf("%f", x);
		x = x + ((2*2) - 1);
		flag = flag + 1;
	}

}
