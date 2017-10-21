#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
int Idade;

	
	printf("Digite a idade\n");
	scanf("%d", &Idade);
	
	if(Idade < 16)
		printf("N�o eleitor\n");
		
		
	else if(Idade >= 16 && Idade < 18 || Idade > 65)
		printf("Eleitor facultativo\n");
	
			
	else
		printf("Eleitor obrigat�rio\n");
	
	system("PAUSE");
	return 0;
}
