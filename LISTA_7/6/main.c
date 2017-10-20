#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "Portuguese");
        int i;
        for(i = 0; i <= 100; i += 2){
            float F = i * 1.8 + 32;
            printf("°C %d\t°F %.2f\n", i, F);
        }
    return 0;
}
