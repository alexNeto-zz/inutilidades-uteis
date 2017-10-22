#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");
    
    int j = 5, i, x;
    int N[j];

    printf("digite 50 números\n");
 
    for(i = 0; i < j; i++) {
        scanf("%d", &N[i] );
    }

    i = 1;
    x = N[0];
 
    while(i < j){
        if (N[i] > x){
           x = N[i];
        }
        i++;
    }
 
    printf("\n O maior número que você digitou foi %d .\n", x);
    
    i = 1;
    x = N[0];
    
    while(i < j){
        if(N[i] < x){
           x = N[i];
        }
        i++;
    }

    printf("\n O menor número que você digitou foi %d .\n", x);
    
	return 0;
}

	
	

