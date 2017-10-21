#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

	setlocale(LC_ALL, "Portuguese");

int i = 0, j = 5, k = 0, x = 0;
int quantM = 0;
int quantF = 0;
int idade, maiorIdade;
float media = 0;
int sexo, corOlhos, corCabelos;



for(i = 0; i < j; i++){

	printf("Habitante Nº %d\t\nPreencha o formulário a seguir\n\n\tSexo\n1\tMasculino\n2\tFeminino\n", i+1);
	scanf("%d", &sexo);
	
	printf("cor dos olhos:\n1\tverdes\n2\tAzuis\n3\tCastanhos\n");
	scanf("%d", &corOlhos);
	
	printf("cor dos cabelos\n1\tPretos\n2\tLoiro\n3\tCastanhos\n");
	scanf("%d", &corCabelos);

	printf("Digite a idade\t");
	scanf("%d", &idade);
	printf("\n");


if(sexo == 2){
    if(corCabelos == 2){
        if(corOlhos == 1){
            if(idade > 18 && idade < 35){
                quantF++;
            }
        }
    }
}
if(sexo == 1){
    if(corCabelos == 1){
        if(corOlhos == 3){
            if(idade > 20 && idade < 25){
                quantM++;
            }
        }
    }
}

media += idade;

if(i == 0)
maiorIdade == idade;

if (idade > maiorIdade)
maiorIdade = idade;


  





}

media /= j;



    printf("\n A maior idade foi %d anos.\n", maiorIdade);
	printf("\n A média de idade é %.2f anos.\n", media);
	printf("\na quantidade de habitantes do sexo feminino\n cuja idade está entre 18 e\n\
35 anos e que tenham olhos verdes\n e cabelos loiros é de: %d\n", quantF);
	printf("\na quantidade de habitantes do sexo masculino\n cuja idade está entre 20 e\n\
25 anos e que tenham olhos pretos\n e cabelos castanhos é de %d\n", quantM);


	return 0;
	}
