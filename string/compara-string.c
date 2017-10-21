
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {

	setlocale(LC_ALL, "Portuguese");

	int resp;
	char capital[25];
	char* resposta1 = "Brasília";
	
	printf("Qual é a capital do Brasil?\nAcentos fazem a diferença\n");
	scanf("%s", &capital);
	
	resp = strcmp(capital, resposta1);

	if(resp <0)
		printf("Parabéns, você acertou\n");	
	else
		printf("Você errou!\n");
	
	system("pause");
	return 0;
}

