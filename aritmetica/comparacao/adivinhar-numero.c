#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int i, x, res;

  printf("Digite um numero inteiro e positivo\n");
  scanf("%d", &x);
  printf(
      "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
      "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
      "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
      "\n");

  for (i = 0;;) {
    printf("Qual número foi digitado?\n");
    scanf("%d", &res);

    if (res != x)
      printf("Errou\n");
    else if (res == x) {
      printf("Acertou\n\n\n");
      break;
    }
    printf("%d\n", res);
  }

  return 0;
}
