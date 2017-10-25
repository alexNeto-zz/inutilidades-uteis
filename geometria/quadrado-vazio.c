#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int i = 0;
  int j = 0;

  while (j <= 0 || j > 20) {
    printf("Qual o tamanho do lado do quadrado?\nde 1 até 20\n");
    scanf("%d", &j);
  }

  while (i < j) {
    int k = 0;
    if (i == 0 || i == j - 1) {
      while (1 == 1) {
        printf("* ");
        if (k == j - 1) break;
        k++;
      }
    } else {
      printf("* ");
      if (k == 0 || k == j - 1) {
        while (k < j - 2) {
          printf("  ");
          k++;
        }
      }
      printf("*");
    }
    printf("\n");
    i++;
  }

  return 0;
}