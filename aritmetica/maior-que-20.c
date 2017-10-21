#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float N;

	printf("Digite um número\n");
	scanf("%f", &N);
	if(N > 20) {
		printf("%.3f é maior que 20\n", N);
	}
	
	system("pause");
	return 0;
}
