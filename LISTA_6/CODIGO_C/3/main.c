#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");


    int i = 1;

    while(i < 100){
        printf("i = %d\n", i); 
        i += 2; 
    }
    return 0;
}
