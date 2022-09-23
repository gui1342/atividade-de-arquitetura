#include <stdio.h>

#define TAM 5

int main(){
  int lista[] = {50, 15, 2, 93, 15};
  int i, j, indicemenor, temp, *listamenor, *listai;
 
    for (i = 0; i < TAM-1; i++){
      indicemenor = i;
      for (j = i+1; j < TAM; j++){
        if (lista[j] < lista[indicemenor])
          indicemenor = j;
        }

      if(indicemenor != i){
        listamenor = &lista[indicemenor];
        listai = &lista[i];
      
        temp = *listamenor;
        *listamenor = *listai;
        *listai = temp;
        }
    }
    for (int z = 0; z < TAM; z++){
      printf("%d ", lista[z]);
    printf("\n");
      }
  
	return 0;
}
