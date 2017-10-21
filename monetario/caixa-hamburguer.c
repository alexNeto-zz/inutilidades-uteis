#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int N;
    float Q;

    printf("Digite um código do pedido\n");
    scanf("%d", &N);
    
    printf("Digite a quantidade\n");
    scanf("%f", &Q);

    switch (N){
        case 100:
            Q *= 3.2;
            printf("Cachorro(s) quante(s): R$ %.2f", Q);
            break;
        case 101:
            Q *= 3.3;
            printf("Bauru(s) simples: R$ %.2f\n", Q);
            break;
        case 102:
            Q *= 3.5;
            printf("Bauru(s) com ovo: R$ %.2f\n", Q);
            break;
        case 103:
            Q *= 4.2;
            printf("Hamburger(s): R$ %.2f\n", Q);
            break;
        case 104:
            Q *= 5.3;
            printf("Cheeseburguer(s): R$ %.2f\n", Q);
            break;
        case 105:
            Q *= 3;
            printf("Refrigerante(s): R$ %.2f\n", Q);
            break;
	default:printf("Digite um código válido");

    }
    return 0;
}
