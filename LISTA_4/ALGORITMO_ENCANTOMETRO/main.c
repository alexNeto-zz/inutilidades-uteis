#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int ops;
	
	printf("Escolha uma das seguintes op��es\n\
\t1\t�timo\n\
\t2\tBom\n\
\t3\tRegular\n\
\t4\tRuim\n");

	scanf("%d", &ops);
		printf("Voc� escolheu \t");
	
	switch (ops){
		case 1:
			printf("�timo\n");
			break;
		case 2:
			printf("Bom\n");
			break;
		case 3:
			printf("Regular\n");
			break;
		case 4:
			printf("Rium\n");
			break;
		default:
			printf("Nulo\n");
		
	}
	
	return 0;
}
