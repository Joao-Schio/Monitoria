/**
 * todos os codigos aqui podem ser compilados com o comando gcc <nome do arquivo> -o <nome do executavel> <flags>
 * flags que eu geralemente uso sao -Wall -Werror -pedantic
 * para executar usar o comando ./<nome do executavel>
*/
#include <stdio.h>
#include <stdbool.h>




void inverte(int tamanho, int iteracao, int *fonte, int *dest){
    if(tamanho == 0){
        dest[iteracao] = fonte[0];
    }
    else{
        dest[iteracao] = fonte[tamanho - 1];
        inverte(tamanho - 1, iteracao + 1, fonte, dest);
    }
}


bool ehReversa(int *a, int *b, int tamanho){
    for(int i = 0 ; i < tamanho / 2; i++){
        if(a[i] != b [tamanho - i - 1]){
            return false;
        }
    }
    return true;
}
void printaVetor(int *v, int t){
    for(int i = 0 ; i < t; i++){
        printf("%d ",v[i]);
    }
    printf("\n");
}
int main(void){

    int a[] = {1,2,3,4,5};
    int b[5];
    inverte(5,0,a,b);
    printaVetor(a,5);
    printaVetor(b,5);
    printf("%s\n",ehReversa(a,b,5) ? "B eh a reversa de A" : "B nao eh a reversa de A");
    return 0;
}