#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
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
				
			
   

	
	system("PAUSE");
	return 0;
}
