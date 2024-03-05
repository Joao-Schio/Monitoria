#include <stdio.h>




int main(void){
    // declaracoes de variaveis inteiras
    int matricula,horasTrabalhadas,valorPorHora,numeroFilhos; 

    // dizendo ao usuario o que fazer
    printf("Digite o numero de matricula, horas de trabalho, valor por hora e o número de filhos\n");
    // escaneando valores inteiros do teclado
    scanf("%d %d %d %d",&matricula,&horasTrabalhadas,&valorPorHora,&numeroFilhos);
    

    // definindo variavel que ira adicionar o 10% para cada filho
    double multiplicador = 1 + (numeroFilhos / 10);
    // definindo o valor total do salario
    double valorDoSalario = horasTrabalhadas * valorPorHora * multiplicador;
    // mostrando na tela o resultado
    printf("O funcionário de matricula %d receberá %lf de salário\n", matricula,valorDoSalario);

    return 0;
}