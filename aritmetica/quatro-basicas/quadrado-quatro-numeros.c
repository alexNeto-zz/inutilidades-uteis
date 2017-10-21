#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");
		
	float A, B, C, D, BQ, CQ, DQ;

	printf("Digite quatro números");
	scanf("%f %f %f %f", &A, &B, &C, &D);

	CQ = pow(C, 2);
	if(CQ >= 1000) {
		printf("%.2f\n", CQ);
	} else {
		float AQ;
		AQ = pow(A, 2);
		BQ = pow(B, 2);;
		DQ = pow(D, 2);;
		printf("%.4f^2 = %.4f \n%.4f^2 = %.4f\
		 \n%.4f^2 = %.4f \n%.4f^2 = %.4f \n", A, AQ, B, BQ, C, CQ, D, DQ);
	}
		
	system("pause");
	return 0;
}
