#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");
	
	int N1, N2;
	
	printf("Digite o primeiro número\n");
	scanf("%d", &N1);
	
	printf("Digite o segundo número\n");
	scanf("%d", &N2);
	
	if(N1 == N2)
		printf("%d = %d\n", N1, N2);
	else
		printf("os números são diferentes\n");
	
	system("pause");
	return 0;
}
