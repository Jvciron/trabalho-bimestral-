// 2) b) entrada: nome= Jurebeba Asdrúbol idade=45

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
	char nome[50];
}; usuario_novo; usuario;
	int idade;

int main(void){
	setlocale(LC_ALL,"portugese");
	
	usuario_novo; usuario;
	
	printf("\n digite o nome do usuario:");
	fflush(stdin);
	fgets(usuario_novo, 50, stdin);
	
	printf("\n digite a idade:");
	scanf("%d", &idade);
	
	printf("%s tem %d anos", usuario_novo, idade);
	
	return(0);
	
}
