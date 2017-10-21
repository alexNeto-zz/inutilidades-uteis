#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

    setlocale(LC_ALL, "Portuguese");

    int Meses;
    float divida;

    printf("Qual o valor de sua dívida?\n");
    scanf("%f", &divida);
    printf("Quantos meses atrasará?\n");
    scanf("%d", &Meses);

    switch (Meses) {
        case 1:
            divida += divida * .01;
            printf("A dívida será de R$: %.2f\n", divida);
            break;
        case 2:
            divida += divida * .02;
            printf("A dívida será de R$: %.2f\n", divida);
            break;
        case 3:
            divida += divida * .03;
            printf("A dívida será de R$: %.2f\n", divida);
            break;
        case 4:
            divida += divida * .04;
            printf("A dívida será de R$: %.2f\n", divida);
            break;
        case 5:
            divida += divida * .05;
            printf("A dívida será de R$: %.2f\n", divida);
            break;
        default:
            printf("Digite um número válido");
    }
    return 0;
}
