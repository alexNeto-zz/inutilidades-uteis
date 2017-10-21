#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
    
     float C1, C2, H;
    printf("Digite o primeiro cateto\n");
	scanf("%f", &C1);
	printf("Digite o segundo cateto\n");
	scanf("%f", &C2);
	H = sqrt(pow(C1, 2)+pow(C2, 2));
	printf("A medida da hipotenusa e de %f\n", H);
  
  system("PAUSE");	
  return 0;
}
