/**
 * todos os codigos aqui podem ser compilados com o comando gcc <nome do arquivo> -o <nome do executavel> <flags>
 * flags que eu geralemente uso sao -Wall -Werror -pedantic
 * para executar usar o comando ./<nome do executavel>
*/
#include <stdio.h>




int somacubo(int n){
    if(n == 1){
        return 1;
    }
    else{
        return (n * n * n) + somacubo(n - 1);
    }
}


int main(void){
    
    printf("%d %d\n",somacubo(2),somacubo(5));

    return 0;
}