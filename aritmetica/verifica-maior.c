#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 int main() {

    setlocale(LC_ALL, "Portuguese");

    int N[5];
    int x, i;
    
    printf("digite 5 números\n");
 
    for(i = 0; i < 5; i++) {
       scanf("%d", &N[i] );
    }

    i = 1;
    x = N[0];
 
    while(i < 5) {
        if (N[i] > x) {
           x = N[i];
        }
        i++;
    }
 
    printf("\n O maior número que você digitou foi %d .\n", x);
    
    i = 1;
    x = N[0];
    
    while(i < 5) {
        if(N[i] < x) {
           x = N[i];
        }
        i++;
    }
    printf("\n O menor número que você digitou foi %d .\n", x);
    
    system("pause");
    return 0;
 }
