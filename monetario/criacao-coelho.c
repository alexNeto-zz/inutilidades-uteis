#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	float Custos;
	int nCoelhos;
	
	printf("Digite a quantidade de coelhos\n");
	scanf("%d", &nCoelhos);
	Custos = (nCoelhos * 0.7)/18 + 10;
	printf("R$: %.2f\n", Custos);
	

	
	system("PAUSE");
	return 0;
}
