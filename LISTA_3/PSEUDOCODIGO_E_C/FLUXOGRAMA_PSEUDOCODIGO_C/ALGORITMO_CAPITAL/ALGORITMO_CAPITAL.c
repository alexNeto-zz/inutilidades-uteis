
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int resp;
	char capital[25];
	char* resposta1 = "Bras�lia";

	
	
	printf("Qual � a capital do Brasil?\nAcentos fazem a diferen�a\n");
	scanf("%s", &capital);
	
	resp = strcmp(capital, resposta1);

	if(resp <0)
		printf("Parab�ns, voc� acertou\n");	
	else
		printf("Voc� errou!\n");
		
		
	
	
	system("pause");
	return 0;
}

