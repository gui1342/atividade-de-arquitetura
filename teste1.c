#include <stdio.h>

#define TAM 5

int main(){
  int lista[] = {50, 2, 15, 93, 15};
  int i, j, indicemenor, temp;
 
  for (i = 0; i < TAM-1; i++){
    indicemenor = i;
    for (j = i+1; j < TAM; j++){
      if (lista[j] < lista[indicemenor])
        indicemenor = j;
    }

    if(indicemenor != i){
      temp = lista[indicemenor];
      lista[indicemenor] = lista[i];
      lista[i] = temp;
    }
  }
    for (int z = 0; z < TAM; z++){
      printf("%i ", lista[z]);
      printf("\n");
    }
  
	return 0;
}
