#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 
int main(){
    
    setlocale(LC_ALL, "Portuguese");
    
    int i = 1;
    int j;
    
    while(j < 1 || j > 20){
        printf("Qual a tabuada deseja fazer?\t");
        scanf("%d", &j);
    }
    
    while (i <= 10){
        printf("%3d * %2d = %3d\n", j, i, i * j);
        i++;
    }
 
    return 0;
}