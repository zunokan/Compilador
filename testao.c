




















#include <stdio.h>


int main() {
int flag = 0;
float x = 1;
int teste = 12;
float faixa = 10;
if (!(x > 0&&x < 5)) goto L0;
printf("%s", "1");goto L1;
L0:
if (!(x > 5.5&&x <= 10)) goto L2;
printf("%s", "2");goto L3;
L2:
if (!(x > 10.5||x < 10.9)) goto L4;
printf("%s", "3");goto L5;
L4:
printf("%s", "4");
L5:

L3:

L1:
L6:
if (!(flag < 10)) goto L7;
printf("%s", "Coxinha");faixa = faixa + 2 * 2 - 1;
flag = flag + 1;
goto L6;

L7:
return 0;
}




