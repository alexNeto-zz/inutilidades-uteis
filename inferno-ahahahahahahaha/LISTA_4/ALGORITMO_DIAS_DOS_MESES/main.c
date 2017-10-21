#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int valor;
	
	printf("digite um número de 1 a 12\n ");
	scanf("%d", &valor);
	
	switch (valor){
		case 1:
			printf("31");
			break;
		case 2:
			printf("28");
			break;
		case 3:
			printf("31");
			break;
		case 4:
			printf("30");
			break;
		case 5:
			printf("31");
			break;
		case 6:
			printf("30");
			break;
		case 7:
			printf("31");
			break;
		case 8:
			printf("31");
			break;
		case 9:
			printf("30");
			break;
		case 10:
			printf("31");
			break;
		case 11:
			printf("30");
			break;
		case 12:
			printf("31");
			break;
		default:printf("Digite um número entre 1 e 12");
	}


	return 0;
}
