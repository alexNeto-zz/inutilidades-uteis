#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void mostra(int numeros[]) {
  if (numeros[0] < numeros[1])
    printf("%d, %d\n", numeros[0], numeros[1]);
  else if (numeros[0] > numeros[1])
    printf("%d, %d\n", numeros[1], numeros[0]);
  else
    printf("%d. Os números são iguais\n", numeros[0]);
}
int main() {
  setlocale(LC_ALL, "Portuguese");
  int numeros[2];
  int i;
  for (i = 0; i < 2; i++) {
    printf("Digite o %dº de 2: ", i + 1);
    scanf("%d", &numeros[i]);
  }
  mostra(numeros);
  return 0;
}
