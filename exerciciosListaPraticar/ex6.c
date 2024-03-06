#include <stdio.h>




int main(void){
    // declarando a variavel do raio
    double raio;
    // instruindo o usuario o que fazer
    printf("Declare o tamanho do raio do circulo\n");
    // lendo o valor do raio do teclado
    scanf("%lf",&raio);
    // nao é necessário colocar pi em uma variavel, eu só achei que seria mais legivel assim
    double pi = 3.14159;
    // calculando a área, coloquei (raio * raio) para simbolizar raio^2
    double area = (raio*raio) * pi;
    // mostrando na tela o resultado
    printf("A area do circulo é de %lf unidades de área\n",area);


    return 0;

}