//1) R= uma sequência de passos a serem seguidos.


//2) a) entrada: nota1=9,5 nota2=8,0 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

	
	float nota1, nota2, media;
	
	printf("\n digite a primeira nota:");
	scanf("%f", &nota1);
	printf("\n digite a segunda nota:");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2)/2;
	
	printf("A media final é: %2.f", media);
	
	return(0);
	
	
}
// Saída: A média final é:8,75 







