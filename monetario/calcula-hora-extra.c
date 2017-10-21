#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float C, N, E;
	
	printf("Digite o numero de horas\n");
	scanf("%f", &N);
	if(N <= 50){
		C = N * 10;
		printf("O salário e de R$ %.2f \n", C);
	}
	else{
		E = (N - 50)*20;
		C = (50 * 10)+E;
		printf("O salario total e de %.2f e o excesso foi de %.2f", C, E);
	}
	
	
	
	system("PAUSE");
	return 0;
}
