#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int N1, N2, N3, Maior, Intermediario, Menor;
	
	printf("Apenas n�meros diferentes\n");
	printf("Digite o primeiro n�mero\n");
	scanf("%d", &N1);
	
	printf("Digite o segundo n�mero\n");
	scanf("%d", &N2);
	
	printf("Digite o primeiro n�mero\n");
	scanf("%d", &N3);
	
	if(N1 < N2 && N1 < N3){
		if(N2 < N3){
			Menor = N1;
			Intermediario = N2;
			Maior = N3;
		}
			
		else{
			Menor = N1;
			Intermediario = N3;
			Maior = N2;
		}
			
	}
		
	else if(N2 < N1 && N2 < N3){
		if(N1 < N3){
			Menor = N2;
			Intermediario = N1;
			Maior = N3;
		}
		else{
			Menor = N2;
			Intermediario = N3;
			Maior = N1;
		}
			
	}
	else{
		if(N1 < N2){
			Menor = N3;
			Intermediario = N1;
			Maior = N2;
		}
			
		else{
			Menor = N3;
			Intermediario = N2;
			Maior = N1;
		}
			
	}
		
	system("pause");
	return 0;
}
