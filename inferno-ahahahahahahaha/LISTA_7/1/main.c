#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "Portuguese");
	int i;
	int j = 30;
	int vetor[j];
	float media = 0;
	for(i = 0; i < j; i++){
		printf("\nDigite o %dº número: ", i+1);
		scanf("%d", &vetor[i]);
		media += vetor[i];
	}
	media /= j;
	for(i = 0; i < j; i++){
		if(vetor[i] > media)
			printf("%d\n", vetor[i]);
	}
    return 0;
}
