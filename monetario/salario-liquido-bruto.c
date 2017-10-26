#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  while (1) {
    char nome[20];
    int quebra;

    printf("Digite o nome do colaborador\n(Digite 0 para sair)\n");
    fgets(nome, 20, stdin);

    if (strcmp("0", nome) == 0) break;

    float quantHoras;

    printf("\nDigite a quantidade de horas de %s: ", nome);
    scanf("%f", &quantHoras);

    float valorHoras;

    printf("\nDigite quanto recebe por hora: R$ ");
    scanf("%f", &valorHoras);

    if (quantHoras <= 40)
      printf("Salário bruto de %s é R$: %.2f\n", nome, quantHoras * valorHoras);
    else {
      quantHoras -= 40;
      quantHoras = (2 * quantHoras * valorHoras) + (40 * valorHoras);
      printf("Salário bruto de %s é R$: %.2f\n", nome, quantHoras);
    }
  }
  return 0;
}
