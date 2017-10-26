#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  int i;
  printf("Char\t\tDecimal\t\tHexa\n");
  for (i = 65; i <= 90; i++) {
    printf("%c\t--\t%d\t--\t%x\n", i, i, i);
  }
  return 0;
}
