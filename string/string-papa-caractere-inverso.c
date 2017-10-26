#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

char input() {
  char palavra[30];
  printf("\nDigite uma palavra(máximo 30 caracteres finalize com um ponto): ");
  int i;
  for (i = 0; i < 30; i++) {
    scanf("%c", &palavra[i]);
    if (palavra[i] == ' ' || palavra[i] == '.') break;
  }
  int j;
  for (j = i; j != -1; j--) printf("%c", palavra[j]);
  printf("\n");
}

int main() {
  setlocale(LC_ALL, "Portuguese");
  input();
  return 0;
}
