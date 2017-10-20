
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <tgmath.h>     


int main(){

	setlocale(LC_ALL, "Portuguese");


    int razao, razaon = 1, expoente;
    int an, an1, a1, n = 1;

    printf("Digite o primeiro elemento da PG\n");
    scanf("%d", &a1);
    printf("Digite a razao da PG\n");
    scanf("%d", &razao);
    printf("Digite o ultimo termo da  PG\n");
    scanf("%d", &an);

    while(n <= an){
        int i = 0;
        while(i < n - 1){
            razaon *= razao;
            i++;
        }
        an1 = a1 * razaon;
       
        printf("a%d = %d\n", n, an1); 
        n++; 
    }
    return 0;
}
