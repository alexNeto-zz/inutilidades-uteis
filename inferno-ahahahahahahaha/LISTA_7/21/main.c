#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    char palavra[30];
    printf("\nDigite uma palavra(máximo 30 caracteres finalize com um ponto): ");
    int i;
    for(i = 0; i < 30; i++){
        scanf("%c", &palavra[i]);
        if(palavra[i] == ' ' || palavra[i] == '.')
            break;
    }
    int j;
    int k = 0;
    char palavraInvertida[30];
    for(j = i - 1; j > -1; j--){
        palavraInvertida[k] = palavra[j];
        k++;
    }
    j = i - 1;
    k = 0;
    for(i = 0; i < j; i++){
        if(palavraInvertida[i] == palavra[i])
            k++;
        else{
            printf("Não é um palíndromo\n");
            break;
        }
    }
    if(j == k)
        printf("É um palíndromo\n");
    return 0;
}
