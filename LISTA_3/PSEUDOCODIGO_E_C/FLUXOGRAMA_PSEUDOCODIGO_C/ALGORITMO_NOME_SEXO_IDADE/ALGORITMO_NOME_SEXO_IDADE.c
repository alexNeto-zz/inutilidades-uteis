
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	
	char Nome[50];
	int Sexo, Idade;
		
	
	printf("Digite seu nome:\n");
	scanf("%s", &Nome);
	
	printf("%s qual � o seu sexo?\n1\tMasculino\n2\tFeminino\n", Nome);
	scanf("%d", &Sexo);
	
	printf("Qual � a sua idade?\n");
	scanf("%d", &Idade);
	
	if(Sexo == 2){
		if(Idade < 25)
			printf("%s Aceita\n", Nome);
		else
			printf("%s N�o aceita\n", Nome);
	}
	else
		printf("%s N�o aceito\n", Nome);
		
		
		
	system("pause");
	return 0;
}

