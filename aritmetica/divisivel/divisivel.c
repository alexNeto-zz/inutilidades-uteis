#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int N1, N2;

  printf("Digite o dividendo\n");
  scanf("%d", &N1);

  printf("Digite o divisor\n");
  scanf("%d", &N2);

  if (N1 % N2 == 0)
    printf("%d é divisível por %d\n", N1, N2);
  else
    printf("%d não é divisível por %d\n", N1, N2);

  system("pause");
  return 0;
}
