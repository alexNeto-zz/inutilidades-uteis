#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

	setlocale(LC_ALL, "Portuguese");

	int i;
	int maior, menor, media = 0, numero;  

	for( i = 0; i < 5; i++){
		printf("Digite um número inteiro e positivo\n");
		scanf("%d", &numero);
	
		if(numero > 0){
			if(i == 0){
				maior = numero;
				menor = numero;
			}
			if(numero > maior)
				maior = numero;
			if(numero < menor)
				menor = numero;
			media += numero;
		}
		if(i < 0)
			printf("Digite apenas inteiro positivos\n");
	}
	
	media /= 5;
	
	printf("O menor número foi %d\n", menor);
	printf("O maior número foi %d\n", maior);
	printf("A média foi %d\n", media);

	return 0;
}
