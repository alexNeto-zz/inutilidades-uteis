#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");

	int N;

	printf("Digite um numero inteiro\n");
	scanf("%d", &N);
	if(N % 10 == 0 || N % 5 == 0 || N % 2 == 0)
		printf("O número %d é divisível por 10, 5 ou 2\n", N);
	else
		printf("O número %d não é divisível por 10, 5 nem por 2\n", N);
	
	system("pause");	
	return 0;
}
