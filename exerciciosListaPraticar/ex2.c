#include <stdio.h>



int main(void){
    // declarando as variaveis das notas e dos pesos
    double notaUm, notaDois, notaTres;
    int pesoUm, pesoDois, pesoTres;
    

    // dizendo ao usuario o que fazer, da maneira mais detalhada
    printf("Declare o resultado nas provas, separados por espaco e usando um ponto para separar a parte inteira da parte decimal\n");
    // lendo os valores do teclado
    scanf("%lf %lf %lf", &notaUm, &notaDois, &notaTres);
    // pedido a usuario o peso das notas
    printf("Declare o peso das provas\n");
    // lendo os valores do teclado
    scanf("%d %d %d",&pesoUm,&pesoDois,&pesoTres);

    // calculando a media, note que sem os parenteses externos o valor não seria dividido pela soma dos pesos
    double media = ((notaUm * pesoUm) + (notaDois * pesoDois) + (notaTres * pesoTres)) / (pesoUm + pesoDois + pesoTres);
    // mostrando a media na tela
    printf("O aluno teve media %.1lf\n",media);


    return 0;
}