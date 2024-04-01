/**
 * todos os codigos aqui podem ser compilados com o comando gcc <nome do arquivo> -o <nome do executavel> <flags>
 * flags que eu geralemente uso sao -Wall -Werror -pedantic
 * para executar usar o comando ./<nome do executavel>
*/
#include <stdio.h>



int div(int a, int b){
    /**
     * retorna a divisao inteira de a por b a // b
    */
    if (b > a){
        return 0;
    }

    else{
        return 1 + div(a-b,b); // a cada iteracao nessa funcao b eh tirado de a e auemntando 1 no valor dela
    }
}


int main(void){

    int a = 25;
    int b = 5;


    printf("%d\n",div(a,b));

    return 0;
}


