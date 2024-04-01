/**
 * todos os codigos aqui podem ser compilados com o comando gcc <nome do arquivo> -o <nome do executavel> <flags>
 * flags que eu geralemente uso sao -Wall -Werror -pedantic
 * para executar usar o comando ./<nome do executavel>
*/
#include <stdio.h>



double seq(int n){
    if(n == 1){
        return 1;
    }
    else{
        return (1.0 + (double)(n*n))/(double)n + seq(n - 1);
    }
}





int main(void){

    int k;
    scanf("%d",&k);


    for(int i = 0 ; i < k; i++){
        int n;
        scanf("%d",&n);

        printf("%.2lf\n",seq(n));
    }

    return 0;
}