#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  	float A, B, C, D, E, P;
	printf("Digite a primeira abscissa\n");
	scanf("%f", &A);
	printf("Digite a primeira abscissa\n");
	scanf("%f", &B);
	printf("Digite a primeira ordenada\n");
	scanf("%f", &C);
	printf("Digite a segunda abscissa\n");
	scanf("%f", &D);
	printf("Digite a segunda ordenada\n");
	scanf("%f", &E);
	P = A * B * C * D * E;
	
	printf("O produto dos numeros e: %.3f \n", P);
	
	
  system("PAUSE");	
  return 0;
}
