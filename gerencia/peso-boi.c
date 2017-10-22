#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

	setlocale(LC_ALL, "Portuguese");

    int codCartao;
    int codPesado, codLeve;

    float peso;
    float maisPesado, maisLeve;

    int i;

    for(i = 1; i <= 9; i++){
        printf("\nCódigo do cartão:\t");
        scanf("%d", &codCartao);
        printf("\nPeso do boi %d\t", codCartao);
        scanf("%f", &peso);

        if(i == 1)
            maisPesado = maisLeve = peso;
            codPesado = codLeve = codCartao;
        if(peso > maisPesado){
            maisPesado = peso;
            codPesado = codCartao;
        }
        if(peso < maisLeve){
            maisLeve = peso;
            codLeve = codCartao;
        }
    }

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    printf("Boi mais pesado\n%d com %.2fkg\n", codPesado, maisPesado);
    printf("Boi mais leve\n%d com %.2fkg\n", codLeve, maisLeve);
        
    return 0;
}
