#include <stdio.h>




void acha_pares(int n, int vetor[], int aux[],int *indicie){
    // n -> tamanho do vetor
    // aux -> vetor auxiliar
    // inidicie -> ponteiro que aponta para o valor do tamanho do vetor de pares
    if(n == 0){
        return; // se n == 0 entao acabou a lista
    }
    else{
        // a posicao da recursao implica na ordem de aparicao no vetor aux
        acha_pares(n - 1, vetor,aux,indicie);
        if(vetor[n - 1] % 2 == 0){ // n - 1 pois queremos checar o N-esimo elemento
            aux[*indicie] = vetor[n - 1];
            (*indicie)++;
        }
    }
}


int main(void){

    int n;
    scanf("%d",&n);
    int vet[n];
    int aux[n];
    int indicie = 0;
    for(int i = 0 ; i < n; i++){
        scanf("%d",&vet[i]);
    }
    acha_pares(n,vet,aux,&indicie);

    for(int i = 0 ; i < indicie; i++){
        printf("%d ",aux[i]);
    }
    printf("\n");
    return 0;
}