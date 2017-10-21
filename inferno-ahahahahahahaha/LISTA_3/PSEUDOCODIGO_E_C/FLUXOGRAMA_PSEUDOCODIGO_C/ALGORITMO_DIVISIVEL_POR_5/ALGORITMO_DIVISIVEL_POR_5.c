#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int N;


	printf("Digite um numero inteiro\n");
	scanf("%d", &N);
	if(N % 5 == 0)
		printf("O numero N eh divisivel por 5\n");
	else
		printf("O numero N nao e divisivel por 5\n");
	
	
	system("pause");
	return 0;
}
