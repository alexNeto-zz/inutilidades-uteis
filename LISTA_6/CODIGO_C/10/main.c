#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 
int main(){
    
    setlocale(LC_ALL, "Portuguese");
    
    int maior;
    int segundoMaior;
    int numero;
    int i = 3;
    
 
    printf("Digite o 1º numero:\t");
    scanf("%d", &maior);
    printf("Digite o 2º numero:\t"); 
    scanf("%d", &numero);
 
    if(maior > numero)
        segundoMaior = numero;
    else{
        segundoMaior = maior;
        maior = numero;
    }
    
    while (i <= 10){
        printf("Digite o %dº numero:\t", i);
        scanf("%d", &numero);
        if(numero > maior){
            segundoMaior = maior;
            maior = numero;
        }
        else if(numero > segundoMaior)
            segundoMaior = numero;
        i++; 
    }
 
    printf("Os maiores números foram %d e %d\n", segundoMaior, maior);
 
    return 0;
}