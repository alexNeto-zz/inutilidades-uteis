#include <stdio.h>
#include <stdlib.h>

int main() {
  int N, Q;

  printf("Digite um numero: \n");
  scanf("%d", &N);

  Q = N * N;

  printf("O quadrado de %d eh: %d \n", N, Q);

  system("PAUSE");
  return 0;
}
