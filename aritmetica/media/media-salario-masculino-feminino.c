#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {

	setlocale(LC_ALL, "Portuguese");

	int i, sexo, masc = 0, femi = 0;

	float salario, salarioMasculino = 0, salarioFeminino = 0;
	
	for(i = 1; i <= 15; i++) {
		printf("Qual é o sexo da %dº pessoa?\v\n\1\tMasculino\n2\tFeminino\v\n", i);
		scanf("%d", &sexo);

		switch (sexo){
			case 1:
				printf("Qual é o valor do salário?\n");
				scanf("%f", &salario);
				masc++;
				salarioMasculino += salario;
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			break;

			case 2:
				printf("Qual é o valor do salário?\n");
				scanf("%f", &salario);
				femi++;
				salarioFeminino += salario;
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			break;

			default:
				i--;
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				printf("Digite uma opção válida\n\n\n\v\n");
		}
	}

	salarioMasculino /= masc;
	salarioFeminino /= femi;

	printf("Média de salário masculino R$:%.2f\v\nMédia de salário feminino R$:%.2f\n",
	 salarioMasculino, salarioFeminino);

    return 0;
}
