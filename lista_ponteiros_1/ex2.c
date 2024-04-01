#include <stdio.h>

/**
 * todos os codigos aqui podem ser compilados com o comando gcc <nome do arquivo> -o <nome do executavel> <flags>
 * flags que eu geralemente uso sao -Wall -Werror -pedantic
 * para executar usar o comando ./<nome do executavel>
*/


int soma(int n){
    /**
     * N eh um numero inteiro positivo qualquer
     * returna o resultado de 1 + 2 + ... + N
    */
    if(n <= 1){
        return 1; // caso base
    }
    else{
        return n + soma(n - 1); // maneira de chegar no caso base
    }
}

int main(void){


    int n = 7;

    printf("%d\n", soma(n));


    return 0;
}   