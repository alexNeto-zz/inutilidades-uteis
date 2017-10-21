#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {

	setlocale(LC_ALL, "Portuguese");

	int i, comissao[10];
	
	for(i = 0; i < 10; i++) {
		printf("Digite a quantidade de itens do vendedor N}: %d\n", i+1 );
		scanf("%d", &comissao[i]);
	}
	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

	for (i = 0; i < 10; ++i) {
		if (comissao[i] < 20)
			printf("Vendedor Nº %d: %d produtos vendidos, comissão de: 10%%\n",i+1, comissao[i]);	
		else if (comissao[i] >= 20 && comissao[i] < 49)
			printf("Vendedor Nº %d: %d produtos vendidos, comissão de: 15%%\n",i+1, comissao[i]);
		else if (comissao[i] >= 50 && comissao[i] < 74)
			printf("Vendedor Nº %d: %d produtos vendidos, comissão de: 20%%\n",i+1, comissao[i]);
		else
			printf("Vendedor Nº %d: %d produtos vendidos, comissão de: 25%%\n",i+1, comissao[i]);
	}

    return 0;
}	
