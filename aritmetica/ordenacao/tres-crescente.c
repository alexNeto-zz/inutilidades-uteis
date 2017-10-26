#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int N1, N2, N3;

  printf("Apenas números diferentes\n");

  printf("Digite o primeiro número\n");
  scanf("%d", &N1);

  printf("Digite o segundo número\n");
  scanf("%d", &N2);

  printf("Digite o primeiro número\n");
  scanf("%d", &N3);

  if (N1 < N2 && N1 < N3) {
    if (N2 < N3)
      printf("%d, %d, %d\n", N1, N2, N3);
    else
      printf("%d, %d, %d\n", N1, N3, N2);
  } else if (N2 < N1 && N2 < N3) {
    if (N1 < N3)
      printf("%d, %d, %d\n", N2, N1, N3);
    else
      printf("%d, %d, %d\n", N2, N3, N1);
  } else {
    if (N1 < N2)
      printf("%d, %d, %d\n", N3, N1, N2);
    else
      printf("%d, %d, %d\n", N3, N2, N1);
  }

  system("pause");
  return 0;
}
