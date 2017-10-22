#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

	setlocale(LC_ALL, "Portuguese");

	int i, vogais = 0;
	char letra;

	for(i = 0 ; ; i++){
		printf("Digite uma letra\n");
		scanf("%c", &letra);
		
		if(letra == 'z')
			break;
		
		switch (letra){
			case'a':
			case'e':
			case'i':
			case'o':
			case'u':
				vogais++;
				break;
			default:
				printf("Digite um valor válido");
		}	
	}
	
	printf("A quantidade de vogais %d\n", vogais++);

	return 0;
}
