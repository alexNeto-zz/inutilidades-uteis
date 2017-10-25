#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int i = 0;

  while (i < 100) {
    printf("i = %d\n", i);
    i += 2;
  }
  return 0;
}
