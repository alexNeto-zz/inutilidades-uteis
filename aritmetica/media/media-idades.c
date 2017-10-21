#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {

	setlocale(LC_ALL, "Portuguese");

	int i;
	float numero, idadeT;
	char nome[15];
	
	for(i = 0; i < 20; i++) {

		printf("Digite um nome:\t");
		scanf("%s", nome);

		printf("Digite a idade de %s:\t", nome);
		scanf("%f", &numero);

		idadeT += numero;
	}

	idadeT /= 20;

	printf("A média das idades é: %.1f", idadeT );

    return 0;
}
