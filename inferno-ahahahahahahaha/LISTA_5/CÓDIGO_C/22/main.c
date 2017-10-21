#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

	setlocale(LC_ALL, "Portuguese");

int i, x, y, z, res;

	printf("Digite um numero inteiro e positivo\n");
	scanf("%d", &x);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");


for(i = 0 ; ;){
	
	
	
	printf("digite um número\n");
	scanf("%d", &y);
	printf("digite outro número\n");
	scanf("%d", &z);
	res = y + z;
	
	if(res != x)
		printf("Errou\n");
	else if(res == x){
		printf("Acertou\n\n\n");
		break;
	}
	
	
}



	return 0;
	}
