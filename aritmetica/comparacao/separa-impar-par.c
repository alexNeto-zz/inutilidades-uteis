#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int i, j = 0, k = 0;
  int vetor[20];
  int par[20], impar[20];

  for (i = 0; i < 20; i++) {
    printf("Digite o %dº número\n", i + 1);
    scanf("%d", &vetor[i]);
    if (vetor[i] % 2 == 0) {
      par[j] = vetor[i];
      j++;
    } else {
      impar[k] = vetor[i];
      k++;
    }
  }

  j = 0;
  k = 0;

  for (i = 0; i < 20; i++) {
    if (j != k) {
      printf("Não é possivel\n");
      break;
    }
    if (i == 0) {
      j = 0;
      k = 0;
    }
    if (i % 2 == 0) {
      printf("%d ", par[j]);
      j++;
    } else {
      printf("%d ", impar[k]);
      k++;
    }
  }
  printf("\n");
  return 0;
}
