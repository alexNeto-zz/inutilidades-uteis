#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*
	crie uma calculadora usando a instrução switch,  que pergunte 
	qual das operações básicas quer fazer (soma, divisão, subtração e multiplicação),
	em seguida peça os dois números emostre o resultado
	da operação matematica entre eles
	*/
	
	setlocale(LC_ALL, "Portuguese");
	
	char operacao;
	float N1, N2, s;
	
	printf("Escolha a oparação [+, -, *, /]: \n");
	scanf("%c", &operacao);
	
	printf("Digite o primeiro número: \n");
	scanf("%f", &N1);
	
	printf("Digite o segundo número: \n");
	scanf("%f", &N2);
	
	switch (operacao){
		case '+':
			s = N1 + N2;
			printf("%.2f + %.2f = %.2f\n", N1, N2, s);
			break;
		case '-':
			s = N1 - N2;
			printf("%.2f - %.2f = %.2f\n", N1, N2, s);
			break;
		case '*':
			s = N1 * N2;
			printf("%.2f * %.2f = %.2f\n", N1, N2, s);
			break;
		case '/':
			
			if(N2 != 0){			
				s = N1 / N2;
				printf("%.2f / %.2f = %.2f\n", N1, N2, s);
			}
			else
				printf("Você não pode dividir por 0\n");
			
			
			break;
		default:
			printf("Você digitou uma operação inválida");
		
	}
	
	
	return 0;
}
