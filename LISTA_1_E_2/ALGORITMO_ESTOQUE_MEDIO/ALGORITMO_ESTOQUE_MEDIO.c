#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int qMin, qMax;
	float Estoque;
	
	printf("Digite o valor minimo\n");
	scanf("%d", &qMin);
	printf("Digite o valor maximo\n");
	scanf("%d", &qMax);
	Estoque = (qMin + qMax)/2;
	printf("A media do estoque e: %.3f\n", Estoque);
	
	system("PAUSE");
	return 0;
}
