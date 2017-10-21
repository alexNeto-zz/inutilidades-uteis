#include <stdio.h>
#include <stdlib.h>

int main() {

	float G;

    printf("Digite o indice de poluicao\n");
	scanf("%f", &G);
	
	if(G <= 0.25)
	     printf("indice aceitavel\n");
	else if(G > .25 && G < .39)
		printf("As  industrias do 1 grupo param\n");
	else if(G >= .4 && G < .49)
		printf("As industrias do 1 e 2 grupo param\n");
	else if(G >= .5)
		printf("Todas param\n");
	
	system("pause");
	return 0;
}
