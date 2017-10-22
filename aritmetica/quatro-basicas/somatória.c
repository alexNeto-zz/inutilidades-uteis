#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");

	int i, j, soma = 0;
		
	printf("Digite o fim da somatória\n");
	scanf("%d", &j);
	
	for (i = 1; i <= j; ++i){
		soma += i;	
	}

	printf("O resultado da soma é:\t%d\n", soma);	
	
	return 0;
	}


