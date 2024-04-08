#include <stdio.h>






void min_max(int v[], int n, int *max, int *min){
  for(int i = 0 ; i < n ;i++){
    if(v[i] > *max){
      *max = v[i];
    }
    if(v[i] < *min){
      *min = v[i];
    }
  }
}

int main(void){

  int max = 0:, min = 200;

  int vetor[] = {1,2,3,4,5,6,7,8,9,10};

  min_max(vetor,10,&max,&min);
  
  printf("Maximo elemento = %d\n",max);
  printf("Minimo elemento = %d\n",min);

  return 0;
}
