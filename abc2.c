























#include <stdio.h>


int main() {
int x = 500;
int vetor[10];
int y = 0;
int baz = 1;
char* zuno = "Compiladores";
if (!(x > 3)) goto L0;
x = x * 2;
goto L1;
L0:
if (!(x > 2)) goto L2;
x = x / 1;
goto L3;
L2:
x = x - 1;
printf("%s", "Teste");
L3:

L1:
L4:
if (!(x < 10&&x != 5)) goto L5;
x = x + 1;
y = x + y;
L6:
if (!(x < 10&&x != 5)) goto L7;
x = x + 1;
y = x + y;
baz = (!(1&&0) && !(1)) || (!(1&&0) && (1)) || ((1&&0) && (1));
goto L6;

L7:
goto L4;

L5:
return 0;
}


