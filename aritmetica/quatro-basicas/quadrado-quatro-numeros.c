#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  float A, B, C, D;

  printf("Digite quatro números");
  scanf("%f %f %f %f", &A, &B, &C, &D);

  float CQ = pow(C, 2);
  if (CQ >= 1000) {
    printf("%.2f\n", CQ);
  } else {
    float AQ = pow(A, 2);
    float BQ = pow(B, 2);
    float DQ = pow(D, 2);
    printf(
        "%.4f^2 = %.4f \n%.4f^2 = %.4f\
		 \n%.4f^2 = %.4f \n%.4f^2 = %.4f \n",
        A, AQ, B, BQ, C, CQ, D, DQ);
  }

  system("pause");
  return 0;
}
