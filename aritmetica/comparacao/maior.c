#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");
	
	int N1, N2;
	
	printf("Apenas números diferentes\n");
	printf("Digite o primeiro número\n");
	scanf("%d", &N1);
	
	printf("Digite o segundo n�mero\n");
	scanf("%d", &N2);
	
	if(N1 > N2)
		printf("%d > %d\n", N1, N2);
	else
		printf("%d > %d\n", N2, N1);
	
	system("pause");
	return 0;
}
