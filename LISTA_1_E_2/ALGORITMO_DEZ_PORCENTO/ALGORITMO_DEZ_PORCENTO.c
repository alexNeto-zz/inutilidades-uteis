#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float N, ND;
    printf("Digite o valor");
    scanf("%f", &N);
    ND = N + (N * .10);
    printf("%f", ND);
  
  system("PAUSE");	
  return 0;
}
