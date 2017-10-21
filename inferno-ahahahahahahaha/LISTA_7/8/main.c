#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

char input(){
    char palavra[30];
    printf("\nDigite uma palavra(máximo 30 caracteres finalize com um ponto): ");
    int i;
    for(i = 0; i < 30; i++){
        scanf("%c", &palavra[i]);
        if(palavra[i] == ' ' || palavra[i] == '.')
            break;
    }
    int j;
    for(j = 0; j < i; j++)
        printf("palavra = %c\n", palavra[j]);
}


int main(){
    setlocale(LC_ALL, "Portuguese");
    input();
    return 0;
}
