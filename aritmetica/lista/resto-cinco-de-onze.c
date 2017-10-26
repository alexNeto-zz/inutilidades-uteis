#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int i;

  for (i = 1000; i < 2000; i++) {
    if (i % 11 == 5) {
      printf("%d %% 11 = 5\n", i);
    }
  }

  return 0;
}
