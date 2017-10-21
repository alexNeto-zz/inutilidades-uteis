#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float leitura(float numeros[]){
    int i;
    for(i = 0; i < 4; i++){
        printf("\nDigite o %dº número: ", i + 1);
        scanf("%f", &numeros[i]);
    }
    return numeros[4];
}
void ordena(float numeros[]){
    float temp;
    int i;
    int j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(i != j){
                if(numeros[i] < numeros[j]){
                    temp = numeros[i];
                    numeros[i] = numeros[j];
                    numeros[j] = temp;
                }
            }
        }
    }
}
void exibe(float numeros[]){
    printf("Menor: %.4f\nMaior: %.4f\n", numeros[0], numeros[3]);
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    float numeros[4];
    leitura(numeros);
	ordena(numeros);
	exibe(numeros);
    return 0;
}
