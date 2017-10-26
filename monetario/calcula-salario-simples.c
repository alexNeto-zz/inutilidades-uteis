#include <stdio.h>
#include <stdlib.h>

int main() {
  float NDH, GPH, SBM;

  printf("Quantas horas o funcionario tranbalha no mes\n");
  scanf("%f", &NDH);

  printf("Qual o valor da hora\n");
  scanf("%f", &GPH);

  SBM = NDH * GPH;

  printf("O salario bruto mensal e de: R$ %.2f\n", SBM);

  system("pause");
  return 0;
}
