#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int j = 3;
  int entradaLetra[j];

  int i;
  for (i = 0; i < j; ++i) {
    entradaLetra[i] = 0;
    char letras;

    if (i == 0)
      printf("Digite uma letra (minuscula)\t");
    else if (i == 2)
      printf("Digite outra letra, que esteja localizada após a primeira\t");
    scanf("%c", &letras);
    if (i == 2) {
      int l;
      for (l = 0; (int)letras < entradaLetra[0]; l++) {
        if (l % 2 == 0) {
          printf(
              "\nA segunda letra deve vir depois da primeira\nexemplo\nV\ta "
              "--> b\nV\tc --> h\nF\tx --> r\n");
          scanf("%c");
          scanf("%c", &letras);
        }
      }
    }
    if (i != 1 && ((int)letras < 97 || (int)letras > 122)) {
      for (; (int)letras < 97 || (int)letras > 122;) {
        printf(
            "\nDigite apenas letras minusculas\n"
            "não digite números\n");
        scanf("%c", &letras);
      }
    }
    entradaLetra[i] = (int)letras;
  }

  int k;

  printf("\n");
  for (k = entradaLetra[0]; k <= entradaLetra[2]; k++) {
    printf("%c\t", k);
  }

  printf("\n");

  return 0;
}
