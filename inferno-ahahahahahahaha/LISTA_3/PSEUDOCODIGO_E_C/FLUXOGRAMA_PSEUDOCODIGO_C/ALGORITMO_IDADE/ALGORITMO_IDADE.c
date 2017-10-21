#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
int Nasc, Atua;

	
	printf("Digite o ano de nascimento\n");
	scanf("%d", &Nasc);
	
	printf("Digite o ano atual\n");
	scanf("%d", &Atua);
	
	if(Nasc <= Atua){
		printf("A idade é: %d anos\n ", (Atua - Nasc));
	}
	else{
		
		printf("Digite um ano válido");
	}
	

	
	
	
	system("PAUSE");
	return 0;
}
