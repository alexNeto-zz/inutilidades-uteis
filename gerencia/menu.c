#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int ops;
	
	printf("Escolha uma das seguintes op��es\n\
\t1\tSoma\n\t2\tM�dia\n\t3\tMenor\n\t4\tMaior\n");
	scanf("%d", &ops);
	
	switch (ops){
		case 1:
			printf("Soma\n");
			break;
		case 2:
			printf("M�dia\n");
			break;
		case 3:
			printf("Menor\n");
			break;
		case 4:
			printf("Maior\n");
			break;
		default:
			printf("Digite umopera��o v�lida\n");
		
	}
	
	return 0;
}
