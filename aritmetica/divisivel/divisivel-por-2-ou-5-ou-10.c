#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int numero;

  printf("Digite um número inteiro\n");
  scanf("%d", &numero);
  if (numero % 10 == 0 || numero % 5 == 0 || numero % 2 == 0)
    printf("O número %d é divisível por 10, 5 ou 2\n", numero);
  else
    printf("O número %d não é divisível por 10, 5 nem por 2\n", numero);

  system("pause");
  return 0;
}
