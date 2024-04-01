/**
 * todos os codigos aqui podem ser compilados com o comando gcc <nome do arquivo> -o <nome do executavel> <flags>
 * flags que eu geralemente uso sao -Wall -Werror -pedantic
 * para executar usar o comando ./<nome do executavel>
*/
#include <stdio.h>




double soma(int n){
    if(n == 1){
        return 1.0;
    }
    else{
        return (double)(1.0/n) + soma(n - 1);
    }
}




int main(void){

    for(int i = 1 ; i < 5; i++){
        printf("%d      %lf\n",i,soma(i));
    }

    return 0;
}