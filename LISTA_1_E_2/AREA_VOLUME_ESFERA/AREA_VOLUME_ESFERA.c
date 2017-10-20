#include <stdio.h>
#include <stdlib.h>



// Não funciona!!!
int main(int argc, char *argv[])
{
float R, V, A;
      printf("Digite o valor do raio: \n");
      scanf("%f", R);      
      A = 4 * 3.14 * (R * R);
      V = (4/3)*3.14*(R * R * R);
      printf("Raio: %f \nArea: %f\nVolume: %f", R, A, V);
  
  system("PAUSE");	
  return 0;
}
