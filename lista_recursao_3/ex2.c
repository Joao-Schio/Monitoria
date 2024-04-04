/**
 * todos os codigos aqui podem ser compilados com o comando gcc <nome do arquivo> -o <nome do executavel> <flags>
 * flags que eu geralemente uso sao -Wall -Werror -pedantic
 * para executar usar o comando ./<nome do executavel>
*/
#include <stdio.h>



void printNormal(int n, int primeiro){
    /**
     * funcao que printa os valores de 1 .. N
    */
    if(n == 1){
        printf("%d ",n);
    }
    else{
        printNormal(n - 1,0);
        if(primeiro)
        printf("%d\n",n);
        else
        printf("%d ",n); // nao achei nenhuma maneira melhor de fazer isso desculpa
    }
}
void printReverso(int n){
    /**
     * funcao que printa os valores de N ... 1
    */
    if(n == 1){
        printf("%d\n",n);
    }
    else{
        printf("%d ",n);
        printReverso(n - 1);
    }
}


int main(void){

    int n;
    scanf("%d",&n);
    printNormal(n,1);
    printReverso(n);

    return 0;
}