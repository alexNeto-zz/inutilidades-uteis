#include <stdio.h>
#include <stdlib.h>
#include <Math.h>

int main() {
	
	float PR, VDD, PD;
	
	printf("Digite o valor do produto\n");
	scanf("%f", &PR);
	
	printf("Digite a cotacao do dolar\n");
	scanf("%f", &VDD);
	  
	PD = PR/VDD;  
	  
	printf("O valor do produto em dolar e: US$%.2f \n", PD);
	
	system("pause");
	return 0;
}
