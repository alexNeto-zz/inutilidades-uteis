#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int maior = 0;
  int segundoMaior = 0;
  int numero = 0;
  int i = 0;

  while (i < 10) {
    printf("\nDigite  %dº número\t", i + 1);
    scanf("%d", &numero);
    if (numero > maior) maior = numero;
    i++;
  }
  printf("Os maiores números foram: %d e %d\n", segundoMaior, maior);
  return 0;
}
