#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int razao;
  int an, an1, a1, n = 1;

  printf("Digite o primeiro elemento da PA\n");
  scanf("%d", &a1);
  printf("Digite a razao da PA\n");
  scanf("%d", &razao);
  printf("Digite o ultimo termo da  PA\n");
  scanf("%d", &an);

  while (n <= an) {
    an1 = a1 + (n - 1) * razao;

    printf("a%3d = %3d\n", n, an1);
    n++;
  }
  return 0;
}
