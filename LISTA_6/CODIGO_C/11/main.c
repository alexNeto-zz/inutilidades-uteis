#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 
int main(){
    
    setlocale(LC_ALL, "Portuguese");
    
    int i = 0;
    int j = 0;
    
    while(j <= 0 || j > 20){
        printf("Qual o tamanho do lado do quadrado?\nde 1 até 20\n");
        scanf("%d", &j);
    }
    
    while (i < j){
        int k = 0;
        while(1 == 1){
            printf("* ");
            if(k == j - 1)
                break;
            k++;
        }
        printf("\n");
        i++;
    }
 
    return 0;
}