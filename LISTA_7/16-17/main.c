#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    float valor;
    int moeda[6] = {0, 0, 0, 0, 0, 0};
    float centavos[6] = {.01, 0.05, 0.10, 0.25, 0.50, 1};
    int notas[6] = {0, 0, 0, 0, 0, 0};
    int reais[6] = {2, 5, 10, 20, 50, 100};
    printf("Digite um valor com virgula nos decimais\n");
    scanf("%f", &valor);
    while(valor >= 100){
        valor -= 100;
        notas[5]++;
    }
    while(valor >= 50){
        valor -= 50;
        notas[4]++;
    }
    while(valor >= 20){
        valor -= 20;
        notas[3]++;
    }
    while(valor >= 10){
        valor -= 10;
        notas[2]++;
    }
    while(valor >= 5){
        valor -= 5;
        notas[1]++;
    }
    while(valor >= 2){
        valor -= 2;
        notas[0]++;
    }
    while(valor >= 1){
        valor -= 1;
        moeda[5]++;
    }
    while(valor >= .50){
        valor -= .50;
        moeda[4]++;
    }
    while(valor >= .25){
        valor -= .25;
        moeda[3]++;
    }
    while(valor >= .10){
        valor -= .10;
        moeda[2]++;
    }
    while(valor >= 0.05){
        valor -= 0.05;
        moeda[1]++;
    }
    while(valor >= 0.01){
        valor -= .01;
        moeda[0]++;
    }
    int i;
    for(i = 0; i < 6; i++){
        printf("notas de R$ %3d: %d\t", reais[i], notas[i]);
        printf("moedas de R$ %.2f: %d\n", centavos[i], moeda[i]);
    }


    return 0;
}
