#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int mes;
	
	printf("Digite um n�mero entre 1 e 12\n");
	scanf("%d", &mes);
	
	switch (mes){
		case 1:
			printf("janeiro\n");
			break;
		case 2:
			printf("fevereiro\n");
			break;
		case 3:
			printf("mar�o\n");
			break;
		case 4:
			printf("abril\n");
			break;
		case 5:
			printf("maio\n");
			break;
		case 6:
			printf("junho\n");
			break;
		case 7:
			printf("julho\n");
			break;
		case 8:
			printf("agosto\n");
			break;
		case 9:
			printf("setembro\n");
			break;
		case 10:
			printf("outubro\n");
			break;
		case 11:
			printf("novembro\n");
			break;
		case 12:
			printf("dezembro\n");
			break;
		default:
			printf("Digite um mes v�lido (1 a 12)\n");
		
	}
	
	return 0;
}
