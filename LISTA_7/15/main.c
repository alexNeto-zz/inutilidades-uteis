#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fibonacci(){
    int n;
    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);
    printf("\n");
    return n;
}
int main(){
    setlocale(LC_ALL, "Portuguese");
	int j = fibonacci();
	int sequencia[j];
	int i;
	for(i = 0; i < j; i++){
        if(i <= 1)
            sequencia[i] = 1;
        else
            sequencia[i] = sequencia[i - 1] + sequencia[i - 2];
	}
	for(i = 0; i < j; i++){
        printf("%d ", sequencia[i]);
	}
    return 0;
}
