#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");

	int curso, engQuant = 0, engIdade = 0, comQuant = 0, comIdade = 0;
	int admQuant = 0, admIdade = 0, i, idade, engIdadeTotal, comIdadeTotal, admIdadeTotal;
	for (i = 0; i < 500; ++i)
	{
		printf("Digite o curso\n1\tengenharia\n2\tcomputaÃ§Ã£o\n3\tadministraÃ§Ã£o\n");
		scanf("%d", &curso);

		printf("Digite a idade\n");
		scanf("%d", &idade);

		switch (curso){

			case 1:
				engQuant++;
				engIdadeTotal += idade;
				if(idade >= 20 && idade <= 25)
					engIdade++;
			break;

			case 2:
				comQuant++;
				comIdadeTotal += idade;
				if (idade >= 20 && idade <= 25)
					comIdade++;
			break;

			case 3:
				admQuant++;
				admIdadeTotal += idade;
				if (idade >=20 && idade <= 25)
					 admIdade++;
				break;

			default:
				printf("Digite um nÃºmero vÃ¡lido\n");
		}
		

	}
	engIdadeTotal /= engQuant;
	comIdadeTotal /= comQuant;
	admIdadeTotal /= admQuant;
	
	printf("Matriculados em Engenharia:\t%d\nMatriculados em Computação:\t%d\n\
Matriculados em Administração:\t%d\n", engQuant, comQuant, admQuant);
	printf("Quantidade de alunos com idade entre 20 e 25:\t%d\n", engIdade+comIdade+admIdade);
	if(engIdadeTotal < comIdadeTotal && engIdadeTotal < admIdadeTotal)
		printf("O curso com a menor média de idade foi:\tEngenharia\n");
	else if(comIdadeTotal < engIdadeTotal && comIdadeTotal < admIdadeTotal)
		printf("O curso com a menor média de idade foi:\tComputação\n");
	else if(admIdadeTotal < engIdadeTotal && admIdadeTotal < comIdadeTotal)
		printf("O curso com a menor média de idade foi:\tAdministração\n");

}
