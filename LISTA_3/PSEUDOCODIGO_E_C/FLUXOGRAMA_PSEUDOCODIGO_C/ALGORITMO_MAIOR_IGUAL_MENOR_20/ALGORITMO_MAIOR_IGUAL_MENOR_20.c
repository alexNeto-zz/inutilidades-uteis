#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int N;


	printf("Digite um número inteiro\n");
	scanf("%d", &N);
	if(N < 20)
		printf("O número %d é menor que 20\n", N);
	else if(N == 20)
		printf("O número %d é igual a 20\n", N);
	else if(N > 20)
		printf("O número %d é maior que 20\n", N);
	else
		printf("digite apenas números inteiros. Obrigado\n");
	
	
	
	system("pause");
	return 0;
}
