#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float N;

	printf("Digite um numero\n");
	scanf("%f", &N);
	if(N > 20){
		printf("%.3f e maior que 20\n", N);
	}
	
	system("PAUSE");
	return 0;
}
