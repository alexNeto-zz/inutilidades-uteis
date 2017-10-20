#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  float T, V, H;
  
  printf("Digite a velocidade\n");
  scanf("%f", &V);
  printf("Digite a altura\n");
  scanf("%f", &H);
  T = (2 * V - H)/10;
  printf("%fs", T);	
  
  system("PAUSE");	
  return 0;
}
