#include <stdio.h>
#include <stdlib.h>

int main() {
 
	float A, B, C, D, S;
	 
	printf("Digite o primeiro numero\n");
	scanf("%f", &A);

	printf("Digite o segundo numero\n");
	scanf("%f", &B);

	printf("Digite o terceiro numero\n");
	scanf("%f", &C);

	printf("Digite o quarto numero\n");
	scanf("%f", &D);

	S = (A + B + C + D)/4;
	
	printf("A media dos numeros e: %.3f \n", S);
 
	system("pause");	
	return 0;
}
