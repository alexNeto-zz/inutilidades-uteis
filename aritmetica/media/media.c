#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  float media = 0;
  int i = 0;
  while (1) {
    int temp;
    printf("\nDigite o %dº número\n(-1 para sair): ", i);
    scanf("%d", &temp);
    if (temp == -1) break;
    media += temp;
    i++;
  }
  media /= i;
  printf("a média dos números é: %.2f\n", media);
  return 0;
}
