#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

	setlocale(LC_ALL, "Portuguese");

	int andares = 0;
	int entraram = 0;
	int sairam = 0;
    int dentro = 0;
	int i;

	printf("Qual a quantidade de andares do prédio?\t");
	scanf("%d", &andares);


	for(i = 0; i >= 0 && i <= andares; i++){

        if(i == 0)
            printf("Andar terreo '('T')'\n");
        else
            printf("%dº andar\n", i);

		printf("Quantas pessoas entraram?\n");
		scanf("%d", &entraram);

        if(i != 0){
            printf("Quantas pessas sairam?\n");
            scanf("%d", &sairam);
        }

        while(sairam > dentro){
            printf("Quantidade inválida, digite novamente\nerro: sairam mais pessoas do que há no elevador\n");
            scanf("%d", &sairam);
        }

        dentro += (entraram - sairam);

        while(dentro > 15){
            printf("Capacidade MÁXIMA 15 pessoas\t%d devem sair\n", dentro - 15);
            printf("Quantas pessoas siram?\n");
            scanf("%d", &sairam);

            dentro -= sairam;
        }

    }

    printf("%d pessoas vão descer\n", dentro);





		return 0;
}
