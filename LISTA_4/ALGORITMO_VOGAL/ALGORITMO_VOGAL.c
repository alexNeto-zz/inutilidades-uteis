#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	char letra;
	
	printf("Digite uma letra\n");
	scanf("%c", &letra);
	
	switch (letra){
		case 'a':
			printf("A letra digitada é uma vogal\n");
			break;
		case 'e':
			printf("A letra digitada é uma vogal\n");
			break;
		case 'i':
			printf("A letra digitada é uma vogal\n");
			break;
		case 'o':
			printf("A letra digitada é uma vogal\n");
			break;
		case 'u':
			printf("A letra digitada é uma vogal\n");
			break;
		
		
		default:
			printf("A letra digitada é uma consoante\n");
		
	}
	
	return 0;
}
