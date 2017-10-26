#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int i = 0, j = 5, k = 0, x = 0;
  int quantMenos100 = 0;
  int idade, maiorIdade, menorIdade;
  float media = 0;
  float salario = 0;
  int sexo, corOlhos, corCabelos;

  while (1) {
    printf("\nDigite a idade\t");
    scanf("%d", &idade);

    if (idade < 0) break;

    printf(
        "Habitante Nº %d\t\nPreencha o formulário a "
        "seguir\n\n\tSexo\n1\tMasculino\n2\tFeminino\n",
        i + 1);
    scanf("%d", &sexo);

    printf("Digita o salário\t");
    scanf("%f", &salario);

    if (sexo == 2 && salario < 100) {
      quantMenos100++;
    }

    media += salario;

    if (i == 0) maiorIdade = idade;
    if (idade > maiorIdade) maiorIdade = idade;

    if (i == 0) menorIdade = idade;
    if (idade < menorIdade) maiorIdade = idade;

    i++;
  }

  media /= j;

  printf("\n A maior idade foi %d anos.\n", maiorIdade);
  printf("\n A menor idade foi %d anos.\n", menorIdade);
  printf("\n A média de salário é %.2f anos.\n", media);
  printf("\n A quantidade de mulheres com salário menos que R$ 100 é de\n",
         quantMenos100);

  return 0;
}
