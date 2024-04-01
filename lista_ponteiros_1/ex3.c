/**
 * todos os codigos aqui podem ser compilados com o comando gcc <nome do arquivo> -o <nome do executavel> <flags>
 * flags que eu geralemente uso sao -Wall -Werror -pedantic
 * para executar usar o comando ./<nome do executavel>
*/
#include <stdio.h>
#include <stdbool.h>


bool contem_par (int n, int V[]){
    /**
     * n eh o tamanho do vetor, V eh o vetor
     * retorna verdadeiro se existe pelo menos um numero par em V
     * retorna falso caso nao exista nenhum numero par em V
    */
    if(n == 0){
        return V[n] % 2 == 0 ; // caso base 
    }
    else{
        return (V[n - 1] % 2 == 0) || contem_par(n - 1,V); // como N representa o numero de elementos no vetor, checar o elemento na posicao N seria chegar o N - 1 elemento da lista
    }
}

int main(void){
    int vetor[] = {1,1,3,3,1};
    printf("%s\n", contem_par(5,vetor) ? "Contem par" : "Nao contem par");

    return 0;
}