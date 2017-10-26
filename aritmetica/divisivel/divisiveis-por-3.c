#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, divisivel, numero;
  divisivel = 0;

  for (i = 1; i <= 50; i++) {
    printf("Digite um número");
    scanf("%d", &numero);

    if (numero % 3 == 0) {
      divisivel++;
    }
  }

  printf("%d\n", divisivel);

  return 0;
}
