#include <stdio.h>
#include <stdlib.h>

int main() {
  float A, B, X;

  printf("Digite o primeiro numero\n");
  scanf("%f", &A);

  printf("Digite o segundo numero\n");
  scanf("%f", &B);

  X = A + B;

  printf("A soma de %.2f e %.2f eh %f\n", A, B, X);

  system("pause");
  return 0;
}
