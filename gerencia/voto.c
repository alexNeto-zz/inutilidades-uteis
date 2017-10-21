#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");

	int ops;
	
	printf("Escolha uma das seguintes op��es\n\
\t0\tVoto branco\n\
\t1\tPatolino\n\
\t2\tFrajola\n\
\t3\tPernalonga\n\
\t4\tGaguinho\n\
\t5\tPapa-L�guas\n\
\t6\tTaz\n\
\toutros\tVoto Nulo\n");
	scanf("%d", &ops);

	printf("Você votou para \t");
	
	switch (ops){
		case 0:
			printf("Voto Branco\n");
			break;
		case 1:
			printf("Patolino\n");
			break;
		case 2:
			printf("Frajola\n");
			break;
		case 3:
			printf("Pernalonga\n");
			break;
		case 4:
			printf("Gaguinho\n");
			break;
		case 5:
			printf("Papa-L�guas\n");
			break;
		case 6:
			printf("Taz\n");
			break;
		default:
			printf("Nulo\n");	
	}
	
	return 0;
}
