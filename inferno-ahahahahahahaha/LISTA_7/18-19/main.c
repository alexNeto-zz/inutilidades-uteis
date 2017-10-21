#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "Portuguese");
	int lados[3];
	int soma1;
    int soma2;
    int soma3;
	int i;
	do{
        for(i = 0; i < 3; i++){
            do{
            printf("Digite o %d° lado: ", i + 1);
            scanf("%d", &lados[i]);
            }while(lados[i] == 0);
        }
        soma1 = lados[0] + lados[1];
        soma2 = lados[0] + lados[2];
        soma3 = lados[1] + lados[2];
    }while(soma1 < lados[2] || soma2 < lados[1] || soma3 < lados[0]);

	int aIgual = lados[0] == lados[1];
	int bIgual = lados[0] == lados[2];
	int cIgual = lados[1] == lados[2];

	int aDiferente = lados[0] != lados[1];
	int bDiferente = lados[0] != lados[2];
	int cDiferente = lados[1] != lados[2];

	int ladosIguais = aIgual || bIgual || cIgual;
	int ladosDiferentes = aDiferente || bDiferente || cDiferente;

	if((lados[0] == lados[1]) && (lados[0] == lados[2]))
       printf("\n\tEquilátero\n");
	else if(ladosIguais && ladosDiferentes)
        printf("\n\tIsóceles\n");
	else if(aDiferente && bDiferente && cDiferente)
        printf("\n\tEscaleno\n");

    return 0;
}
