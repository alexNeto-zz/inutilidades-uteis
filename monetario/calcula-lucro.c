#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
float Produto, lucro;

	
	printf("Digite o pre�o do produto\n");
	scanf("%f", &Produto);
	
	if(Produto <= 20){
		lucro = (Produto * .45) + Produto;
		printf("O Pre�o da venda ser� de: R$ %.2f\n", lucro);
	}
	else{
		lucro = (Produto * .30) + Produto; 
		printf("O Pre�o da venda ser� de: R$ %.2f\n", lucro);
	}
	

	
	
	
	system("PAUSE");
	return 0;
}
