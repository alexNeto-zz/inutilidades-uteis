#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Portuguese");
	
char Nome[40];
float PR1, PR2, MediaAri;


	printf("Digite o nome do aluno\n");
	gets(Nome);
	printf("Digite a nota da PR1\n");
	scanf("%f", &PR1);
	printf("Digite a nota da PR2\n");
	scanf("%f", &PR2);
	MediaAri = (PR1 + PR2)/2;

	
	if(MediaAri >= 7){
		printf("Nome do aluno: %s\nPR1: %.2f\nPR2: %.2f\nMédia: %.2f\n\
AP, Aluno aprovado, não é necessário fazer a avaliação final\n",
			Nome, PR1, PR2, MediaAri);
	}
	
	else if(MediaAri < 3){
		printf("Nome do aluno: %s\nPR1: %.2f\nPR2: %.2f\nMédia: %.2f\n\
RP, Aluno reprovado\n",
			Nome, PR1, PR2, MediaAri);		
	}
		
	else{
		printf("Nome do aluno: %s\nPR1: %.2f\nPR2: %.2f\nMédia: %.2f\n\
PF, Aluno precisa fazer a avaliação final\n",
			Nome, PR1, PR2, MediaAri);
	}
		

	
	system("pause");
	return 0;
}
