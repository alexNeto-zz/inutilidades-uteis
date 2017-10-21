#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int N;

    printf("Digite um número de 1 a 10\n");
    scanf("%d", &N);

    switch (N){
        case 1:
            printf("Um");
            break;
        case 2:
            printf("Dois");
            break;
        case 3:
            printf("Três");
            break;
        case 4:
            printf("Quatro");
            break;
        case 5:
            printf("Cinco");
            break;
        case 6:
            printf("Seis");
            break;
        case 7:
            printf("Sete");
            break;
        case 8:
            printf("Oito");
            break;
        case 9:
            printf("Nove");
            break;
        case 10:
            printf("Dez");
            break;
	default:
	    printf("Apenas números entre 1 e 10");
    }
    return 0;
}
