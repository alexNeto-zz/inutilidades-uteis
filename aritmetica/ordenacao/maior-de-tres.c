#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int N[3];
  int x, i;

  printf("digite 3 números\n");

  for (i = 0; i < 3; i++) {
    scanf("%d", &N[i]);
  }

  i = 1;
  x = N[0];

  while (i < 3) {
    if (N[i] > x) {
      x = N[i];
    }
    i++;
  }

  printf("O n�mero maior �: %d\n", x);

  system("pause");
  return 0;
}
