#include <stdio.h>

#define TAM 5

int main()
{
 int lista[] = {50, 2, 15, 93, 15}, i, j;

 for(i = 1; i < TAM; i++)
 {
  int temp = lista[i];
  for(j = i-1; j >= 0 && temp < lista[j]; j--)
  {
   lista[j+1] = lista[j];
  }
  lista[j+1] = temp;
 }

 printf("Lista ordenada: [");
 for(i = 0; i < TAM; i++)
 {
  printf(" %i ", lista[i]);
 }
  printf("]");

 return 0;
}
