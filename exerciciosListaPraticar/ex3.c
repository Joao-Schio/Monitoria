#include <stdio.h>



int main(void){
    double salario;
    int bonus;
    printf("Digite o salário e o bonus\n");
    scanf("%lf %d",&salario, &bonus);


    // importante notar que C e C++ fazem divisão diferente de python
    /**
     * numero inteiro / numero inteiro = numero inteiro em C
     * porém se um numero com ponto flutuante aparecer em algum lugar na divisao
     * o resultado vai ser um numero com ponto flutuante
     * por isso 100.0 como denominador
    */
    double multiplicador = 1 + (bonus / 100.0);

    double salarioFinal = salario * multiplicador;

    printf("O salário final será de %.2lf\n",salarioFinal);

    return 0;
}