#include <stdio.h>
#include <math.h>

/**
 * por esse codigo conter a biblioteca math.h
 * caso você tente compilar ele usando apenas "gcc ex8.c"
 * não vai dar certo, é preciso colocar a opção "-lm"
*/

int main(void){
    // declarando as variaveis
    int primeiroNumero, segundoNumero,guardar;
    // pedindo ao usuario as entradas
    printf("Declare dois números inteiros\n");
    // lendo os valores do teclado
    scanf("%d %d",&primeiroNumero,&segundoNumero);
    // como eu quero imprimir o valor do segundo numero
    // eu tenho que usar uma outra variavel no meu loop
    guardar = segundoNumero;
    // iniciando a variavel com o elemento neutro da multiplicação
    int potencia = 1;
    // calculando a potência
    while (guardar >= 1){
        potencia = potencia * primeiroNumero;
        guardar = guardar - 1;
    }
    // calculando a raiz
    double raiz = sqrt(potencia);
    // mostrando na tela os resultados
    printf("%d elevado a %d é igual a %d que sua raiz quadrada é %lf\n",primeiroNumero,segundoNumero,potencia,raiz);

    return 0;
}