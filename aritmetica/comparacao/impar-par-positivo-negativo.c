#include <stdio.h>
#include <stdlib.h>

int main() {
  int N;

  printf("Digite um número inteiro\n");
  scanf("%d", &N);

  if (N % 2 == 0)
    printf("Par ");
  else
    printf("Impar ");

  if (N < 0)
    printf("negativo\n");
  else
    printf("positivo\n");

  system("pause");
  return 0;
}
