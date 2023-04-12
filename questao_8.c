//8)1.Amozonas /2.carioca /3.paraense /4.Acreano


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	
	char estado;
	
	printf("digite um estado de uma pessoa:");
	scanf("%c", &estado);
	
	switch(estado){
	case 'A':
		printf("\n A pessoa é amazonense\n");
		break;
	case 'R':
		printf("\n A pessoa é carioca\n");
		break;
	case 'P':
		printf("\n A pessoa é paraense\n");
		break;
	case'C':
		printf("\n A pessoa é acreano\n");
		break;
		default:
		printf("\n sigla inválida\n");
		break;
	}
	return(0);
}
