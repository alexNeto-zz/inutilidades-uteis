#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int N;


	printf("Digite um numero inteiro\n");
	scanf("%d", &N);
	
	if(N % 2 == 0)
		printf("Par ");
	else
		printf("Impar ");
	

	if(N < 0)
		printf("negativo\n");
	else
		printf("positivo\n");


	
	
	system("PAUSE");
	return 0;
}
