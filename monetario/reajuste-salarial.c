#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

    setlocale(LC_ALL, "Portuguese");

    int Plano;
    float salario;

    printf("Qual é o plano de trabalho?\n\
\t 1 \t A \n \t 2 \t B \n \t 3 \t C \n");
    scanf("%d", &Plano);

    printf("Qual é o salário do trabalhador?");
    scanf("%f", &salario);

    switch (Plano){
        case 1:
            salario += salario * .1;
            printf("O reajuste será de 10%%, totalizando: R$ %.2f", salario);
            break;
        case 2:
            salario += salario * .15;
            printf("O reajuste será de 15%%, totalizando: R$ %.2f", salario);
            break;
        case 3:
            salario += salario * .2;
            printf("O reajuste será de 20%%, totalizando: R$ %.2f", salario);
            break;
	    default:
	        printf("Digite um número válido");
    }

    return 0;
}
