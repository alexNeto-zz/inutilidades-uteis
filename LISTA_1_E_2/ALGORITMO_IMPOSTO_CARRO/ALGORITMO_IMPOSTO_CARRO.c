#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float VDC, CDF;
    
    printf("Digite o valor do carro\n");
	scanf("%f", &CDF);
	VDC = CDF + (CDF * .48) + (CDF * .28);
	printf("O valor do carro e de : R$ %.2f\n", VDC);
   
   
  system("PAUSE");	
  return 0;
}
