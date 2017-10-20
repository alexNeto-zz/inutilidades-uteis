#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*
	crie uma calculadora usando a instru��o switch,  que pergunte 
	qual das opera��es b�sicas quer fazer (soma, divis�o, subtra��o e multiplica��o),
	em seguida pe�a os dois n�meros emostre o resultado
	da opera��o matematica entre eles
	*/
	
	setlocale(LC_ALL, "Portuguese");
	
	char operacao;
	float N1, N2, s;
	
	printf("Escolha a opara��o [+, -, *, /]: \n");
	scanf("%c", &operacao);
	
	printf("Digite o primeiro n�mero: \n");
	scanf("%f", &N1);
	
	printf("Digite o segundo n�mero: \n");
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
				printf("Voc� n�o pode dividir por 0\n");
			
			
			break;
		default:
			printf("Voc� digitou uma opera��o inv�lida");
		
	}
	
	
	return 0;
}
