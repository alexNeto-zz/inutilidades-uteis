#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "Portuguese");
	float media;
	int i = 0;
	while(1 == 1){
		int temp;
		printf("\nDigite o %d� n�mero\n(-1 para sair): ", i);
		scanf("%d", &temp);
		if(temp == -1)
			break;
		media += temp;
		i++;
	}
	media /= i;
	printf("a m�dia dos n�meros �: %.2f\n", media);
    return 0;
}
