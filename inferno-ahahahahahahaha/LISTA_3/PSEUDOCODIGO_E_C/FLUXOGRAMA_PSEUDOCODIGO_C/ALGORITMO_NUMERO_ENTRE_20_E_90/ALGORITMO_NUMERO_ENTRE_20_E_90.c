#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float N;


	printf("Digite um n�mero\n");
	scanf("%f", &N);
	if(N > 20 && N < 90)
		printf("O n�mero %f est� no intervalo desejado\n", N);
	else
		printf("O n�mero %f n�o est� no intervalo desejado\n", N);
	
	
	system("pause");
	return 0;
}
