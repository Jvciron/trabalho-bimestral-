#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){ 
setlocale(LC_ALL,"portuguese");
float x, s = 0;
int i, sinal = 1;

printf(" digite um valor para x:");
scanf("%f", &x);

for(i = 25; i>=1; i--){
	s += sinal * pow(x, i)/ i;
	sinal *= -1; // trocar sinal
}

printf("O resultado das somas é:%2lf\n", s);
return(0);

}
