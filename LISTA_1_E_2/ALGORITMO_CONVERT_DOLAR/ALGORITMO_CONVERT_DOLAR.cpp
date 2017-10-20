#include <stdio.h>
#include <stdlib.h>
#include <Math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float PR, VDD, PD;
	printf("Digite o valor do produto\n");
	scanf("%f", &PR);
	printf("Digite a cotacao do dolar\n");
	scanf("%f", &VDD);
	  
	PD = PR/VDD;  
	  
	printf("O valor do produto em dolar e: US$%.2f \n", PD);
	
	
	
	system("PAUSE");
	return 0;
}
