#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "Portuguese");
	float media;
	int i = 0;
	float maior;
	float menor;
	while(1 == 1){
		int temp;
		printf("\nDigite o %d� n�mero\n(-1 para sair): ", i);
		scanf("%d", &temp);
		if(temp == -1)
			break;
		if(i == 0)
			menor = maior = temp;
		if(menor > temp)
			menor = temp;
		if(maior < temp)
			maior = temp;		
		media += temp;
		i++;
	}
	media /= i;
	printf("o menor n�mero �: %.2f\n", menor);
	printf("o maior n�mero �: %.2f\n", maior);
	printf("a m�dia dos n�meros �: %.2f\n", media);
    return 0;
}
