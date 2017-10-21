#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");

	int N;
	
	printf("Digite um numero inteiro\n");
	scanf("%d", &N);
	if(N % 3 == 0 && N % 5 == 0)
		printf("O número %d é divisível por 3 e por 5.\n", N);
	else
		printf("O número %d não é divisível por 3 e por 5.\n", N);
	
	system("pause");
	return 0;
}
