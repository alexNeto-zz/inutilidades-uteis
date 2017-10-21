#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int N;

	printf("Digite um número inteiro\n");
	scanf("%d", &N);
	if(N % 5 == 0)
		printf("O número N é divisível por 5\n");
	else
		printf("O numero N não é divisível por 5\n");
	
	system("pause");
	return 0;
}
