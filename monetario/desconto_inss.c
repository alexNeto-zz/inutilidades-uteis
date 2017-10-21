#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
float Salario;

	
	printf("Digite o sal�rio bruto\n");
	scanf("%f", &Salario);
	
	if(Salario <= 600)
		printf("Isento\n");
		
		
	else if(Salario > 600 && Salario <= 1200){
		Salario *= .2;
		printf("Desconto de 20%: R$ %.2f\n", Salario);
	}
			
	else if(Salario > 1200 && Salario <= 2000){
		Salario *= .25;
		printf("Desconto de 25%: R$ %.2f\n", Salario);
	}
	
	else{
		Salario *= .30;
		printf("Desconto de 30%: R$ %.2f\n", Salario);
	}
	

	
	
	
	system("PAUSE");
	return 0;
}
