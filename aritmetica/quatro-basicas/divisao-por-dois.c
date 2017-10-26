#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int i, j;
  float divisao = 0;

  printf("Digite o número a ser dividido\n");
  scanf("%d", &j);
  divisao = j;

  for (i = 0; i <= j; ++i) {
    if (divisao < 1) break;

    divisao /= 2;
    printf("soma %f\n", divisao);
  }
  printf("O resultado da soma é:\t%f\n", divisao);

  return 0;
}
