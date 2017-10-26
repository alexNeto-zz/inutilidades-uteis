#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int i, positivo, negativo;
  float numero, media;
  positivo = 0;
  negativo = 0;

  for (i = 0; i < 40; i++) {
    printf("Digite um número:\t");
    scanf("%f", &numero);

    if (numero > 0) {
      positivo++;
      media += numero;
    } else {
      negativo++;
    }
  }

  media /= positivo;

  printf(
      "A média dos valores POSITIVOS digitados é de: %.2f\n\
A quantidade de números negativos digitador é de: %d\n\
",
      media, negativo);

  return 0;
}
