#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float P, E, M;

	printf("Digite o peso do peixe\n");
	scanf("%f", &P);
	if(P > 50){
		E = P - 50;
		M = E * 4;
		printf("A multa e de %.2f", M);
	}
	else{
		printf("Peso dentro do limite estabelecido");
	}
			
	
	
	return 0;
}
