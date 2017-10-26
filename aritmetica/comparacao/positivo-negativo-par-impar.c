#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int i;
  int j = 10;
  int numeros[j];
  int par = 0;
  int impar = 0;
  int positivo = 0;
  int negativo = 0;

  for (i = 0; i < j; i++) {
    printf("Digite o %dº número", i + 1);
    scanf("%d", &numeros[i]);
    if (numeros[i] % 2 == 0)
      par++;
    else
      impar++;
    if (numeros[i] < 0)
      negativo++;
    else
      positivo++;
  }
  printf("Positivos: %d\n", positivo);
  printf("Negativos: %d\n", negativo);
  printf("Pares: %d\n", par);
  printf("ímpares: %d", impar);
  return 0;
}
