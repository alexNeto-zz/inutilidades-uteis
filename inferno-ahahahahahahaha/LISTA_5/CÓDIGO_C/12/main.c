#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");

	int i, j;
	float soma = 0;
		
		printf("Digite o número a ser dividiso\n");
		scanf("%d", &j);
		soma = j;
	for (i = 0; i <= j ; ++i)
	{
		if(soma < 1)
			break;
			
			soma /= 2;
			printf("soma %f\n", soma);

	}
	printf("O resultado da soma é:\t%f\n", soma);	
	
	return 0;
	}


