#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "Portuguese");
    printf("Use virgula para casas decimais\n\n\n");
    while(1 == 1){
        float F;
        printf("Digite a temperatura em °F\n(Digite -460 para sair) ");
        scanf("%f", &F);
        if(F == -460)
            break;
        if(F <= -459.67)
            printf("Zero abosulo é °F -459.67\n");
        float C = (F - 32) / 1.8;
        printf("°F %.2f\t°C %.2f\n", F, C);
    }
    return 0;
}
