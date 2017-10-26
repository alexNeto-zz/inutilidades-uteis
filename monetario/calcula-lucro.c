#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  float Produto, lucro;

  printf("Digite o preço do produto\n");
  scanf("%f", &Produto);

  if (Produto <= 20) {
    lucro = (Produto * .45) + Produto;
    printf("O Preço da venda será de: R$ %.2f\n", lucro);
  } else {
    lucro = (Produto * .30) + Produto;
    printf("O Preço da venda será de: R$ %.2f\n", lucro);
  }

  system("pause");
  return 0;
}
