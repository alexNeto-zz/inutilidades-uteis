#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "Portuguese");
	int i;
	int j = 20;
	int vetor[j];
	for(i = 0; i < j; i++){
		printf("\nDigite o %dº número: ", i+1);
		scanf("%d", &vetor[i]);
	}
	int igual = 0;
	int maiorQue = 0;
	int menorQue = 0;
	for(i = 0; i < j; i++){
		if(i != 0){
			if(vetor[i] < vetor[0])
				menorQue++;
			else if(vetor[i] > vetor[0])
				maiorQue++;
			else if(vetor[0] == vetor[i])
				igual++;
            else
                printf("o número não é nem maior nem menor nem igual. se é que isso é possivel");
		}
	}
	printf("maior que: %d\nigual:\t%d\nmenor que: %d\n", maiorQue, igual, menorQue);
    return 0;
}
