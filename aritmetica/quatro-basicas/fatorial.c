
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int i = 0, j = 0, k = 0, x = 0;
  int fatorial = 0;

  printf("Deseja fazer o fatorial de quantos números\n");
  scanf("%d", &j);

  int N[j];

  for (i = 0; i < j; i++) {
    printf("Digite o %dº número\t", i + 1);
    scanf("%d", &N[i]);
  }
  printf("\n\n\n");

  for (i = 0; i < j; ++i) {
    fatorial = N[k];
    for (x = N[k]; x > 1; --x) {
      if (N[k] > 30) {
        printf("Erro 0001: Memória insuficiente para %d!\n", N[k]);
        break;
      } else {
        fatorial *= (x - 1);
      }
    }
    if (N[k] <= 30) printf("fatorial de %d = %d\n", N[i], fatorial);
    k++;
  }

  return 0;
}