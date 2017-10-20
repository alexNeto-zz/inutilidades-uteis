#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
