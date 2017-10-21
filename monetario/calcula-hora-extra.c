#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float C, N;
	
	printf("Digite o numero de horas\n");
	scanf("%f", &N);

	if(N <= 50) {
		C = N * 10;
		printf("O salário e de R$ %.2f \n", C);
	} else {
		float E = (N - 50) * 20;
		C = (50 * 10) + E;
		printf("O salario total e de %.2f e o excesso foi de %.2f", C, E);
	}
	
	system("PAUSE");
	return 0;
}
