#include <stdio.h>
#include <stdlib.h>

int main() {
  int N1, N2, D, T;

  printf("Digite um número: \n");
  scanf("%d", &N1);
  printf("Digite outro número: \n");
  scanf("%d", &N2);

  D = N1 * 2;
  T = N2 * 3;

  printf("O dobro é: %d \n", D);
  printf("O triplo é: %d \n", T);

  system("pause");
  return 0;
}
