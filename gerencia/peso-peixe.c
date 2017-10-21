#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float P, M;

	printf("Digite o peso do peixe\n");
	scanf("%f", &P);

	if(P > 50) {
		float E = P - 50;
		M = E * 4;
		printf("A multa e de %.2f", M);
	} else {
		printf("Peso dentro do limite estabelecido");
	}
	
	return 0;
}
