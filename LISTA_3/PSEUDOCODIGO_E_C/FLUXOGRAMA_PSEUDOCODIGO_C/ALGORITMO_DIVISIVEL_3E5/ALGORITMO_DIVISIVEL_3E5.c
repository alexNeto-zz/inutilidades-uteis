#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int N;

	//definindo o idioma:
	setlocale(LC_ALL, "Portuguese");
	printf("Digite um numero inteiro\n");
	scanf("%d", &N);
	if(N % 3 == 0 && N % 5 == 0)
		printf("O n�mero %d � divis�vel por 3 e por 5.\n", N);
	else
		printf("O numero %d n�o � divis�vel por 3 e por 5.\n", N);
	
	
	system("pause");
	return 0;
}
