#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int N1, N2;
	
	printf("Apenas números diferentes\n");
	printf("Digite o primeiro número\n");
	scanf("%d", &N1);
	
	printf("Digite o segundo número\n");
	scanf("%d", &N2);
	
	if(N1 < N2)
		printf("%d, %d\n", N1, N2);
	else
		printf("%d, %d\n", N2, N1);
	
	system("pause");
	return 0;
}
