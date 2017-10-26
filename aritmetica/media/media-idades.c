#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int i;
  float numero;
  float idadeT = 0;
  char nome[15];

  for (i = 0; i < 20; i++) {
    printf("Digite um nome:\t");
    fgets (nome, 15, stdin);

    printf("Digite a idade de %s:\t", nome);
    scanf("%f", &numero);

    idadeT += numero;
  }

  idadeT /= 20;

  printf("A média das idades é: %.1f", idadeT);

  return 0;
}
