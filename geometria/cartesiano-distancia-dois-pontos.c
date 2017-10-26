#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  float X1, X2, Y1, Y2, D;

  printf("Digite a primeira abscissa\n");
  scanf("%f", &X1);

  printf("Digite a primeira ordenada\n");
  scanf("%f", &Y1);

  printf("Digite a segunda abscissa\n");
  scanf("%f", &X2);

  printf("Digite a segunda ordenada\n");
  scanf("%f", &Y2);

  D = sqrt(pow((X2 - X1), 2) + pow((Y2 - Y1), 2));

  printf("Adistancia entre as coordenadas e: %.3f \n", D);

  system("pause");
  return 0;
}
