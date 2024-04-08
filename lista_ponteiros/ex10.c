#include <stdio.h>



void dois_maiores(int v[], int n, int *p_maior, int *s_maior){
  for(int i = 0 ; i < n; i++){
    if (v[i] > *p_maior){
      *s_maior = *p_maior;
      *p_maior = v[i];
    }
    else if(v[i] > *s_maior){
      *s_maior = v[i];
    }
  }
}




int main(void){
  
  int vetor[] = {1,2,3,4,5,6,7,8,9,10};
  int p_maior = 0, s_maior = 0;

  dois_maiores(vetor,10,&p_maior,&s_maior);

  printf("Os dois maiores sao %d %d\n",p_maior,s_maior);
  
  return 0;
}
