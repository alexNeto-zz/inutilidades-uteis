#include <stdio.h>
#include <stdlib.h>

int main() {
  int N;

  printf("Digite um número inteiro\n");
  scanf("%d", &N);
  if (N % 5 == 0)
    printf("O número N é divisível por 5\n");
  else
    printf("O numero N não é divisível por 5\n");

  system("pause");
  return 0;
}
