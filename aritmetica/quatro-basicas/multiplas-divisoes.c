#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

	setlocale(LC_ALL, "Portuguese");

	int i;
	float x = 0;
	int n = 0;  

	printf("Digite um numero inteiro e positivo\n");
	scanf("%f", &x);
	
	printf("Digite um numero inteiro e positivo\n");
	scanf("%d", &n);

	for( i = n; i >= 2; i--){
		printf("%f ", x);
		x /= n;	
		printf("/ %d = %f\n", i, x);
	}

	return 0;
}
