#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");
	
	float N;

	printf("Digite um número\n");
	scanf("%f", &N);
	if(N > 20 && N < 90)
		printf("O número %f está no intervalo desejado\n", N);
	else
		printf("O número %f não está no intervalo desejado\n", N);
		
	system("pause");
	return 0;
}
