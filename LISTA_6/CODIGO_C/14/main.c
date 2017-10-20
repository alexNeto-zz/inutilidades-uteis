#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 
int main(){
    
    setlocale(LC_ALL, "Portuguese");
    
    int y = 0, x;
    int par = 0;
    int impar = 1;
    
    printf("Digite um número\n");
    scanf("%d", &x);
    while(y <= x || y == 0){
        printf("Digite outro número, menor que o anterior\n");
        scanf("%d", &y);
    }
    
    while(x <= y){
        if(x % 2 == 0)
            par += x;
        else
            impar *= x;
        x++;
    }
    
    printf("O somatório dos pares do interválo digitado é: %d\nO produtório dos impares do interválo digitado é: %d\n", par, impar);
 
    return 0;
}