#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  float media = 0;
  int i = 0;
  float maior;
  float menor;
  while (1) {
    int temp;
    printf("\nDigite o %dº número\n(-1 para sair): ", i);
    scanf("%d", &temp);
    if (temp == -1) break;
    if (i == 0) menor = maior = temp;
    if (menor > temp) menor = temp;
    if (maior < temp) maior = temp;
    media += temp;
    i++;
  }
  media /= i;
  printf("o menor número é: %.2f\n", menor);
  printf("o maior número é: %.2f\n", maior);
  printf("a média dos números é: %.2f\n", media);
  return 0;
}
