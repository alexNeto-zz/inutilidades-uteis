#include <stdio.h>
#include <stdlib.h>

int main() {

	float mm, in;

	printf("Digite a medida em polegadas\n");
	scanf("%f", &in);

	mm = in * 25.4;
	
	printf("%fmm\n",mm );
  
  system("pause");	
  return 0;
}
