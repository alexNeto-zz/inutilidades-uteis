#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");


    int n;
    int i = 0;
 
    printf("Digite um numero natural\n");
    scanf("%d", &n);

    while(i <= n){
        if(i % 2 == 0){
            printf("%3d\t\t\t%3d\n", i, i+1);                    
        }
        i++;
    }
    return 0;
}
