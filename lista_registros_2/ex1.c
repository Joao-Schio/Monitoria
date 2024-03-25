/**
 * todos os codigos aqui podem ser compilados com o comando gcc <nome do arquivo> -o <nome do executavel> <flags>
 * flags que eu geralemente uso sao -Wall -Werror -pedantic
 * para executar usar o comando ./<nome do executavel>
*/
#include <stdio.h>
#include <stdbool.h>



typedef struct Funcionario{
    char nome[50];
    double salario;
}Funcionario;

void troca(Funcionario *a, Funcionario *b){
    Funcionario aux = *a;
    *a = *b;
    *b = aux;
}


void ordenaFuncionarios(Funcionario lst[], bool cresc){
    if(cresc){
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 4; j++){
                if(lst[j].salario > lst[j + 1].salario){
                    troca(&lst[j],&lst[j + 1]);
                }
            }
        }
    }
    else{
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 4; j++){
                if(lst[j].salario < lst[j + 1].salario){
                    troca(&lst[j],&lst[j + 1]);
                }
            }
        }

    }
}

void cadastraFuncionario(Funcionario lst[]){
    for(int i = 0; i < 5; i++){
        scanf("%s %lf",lst[i].nome, &lst[i].salario);
    }

}

double calculaImposto(Funcionario f){
    double imposto = 0;

    if(f.salario >= 850 && f.salario < 1200){
        imposto = f.salario * 0.1;
    }
    else if (f.salario >= 1200){
        imposto = f.salario * 0.2;
    }

    return imposto;
}

void printaFuncionarios(Funcionario lst[]){
    for(int i = 0 ; i < 5; i++){
        printf("%s %.2lf\n",lst[i].nome, lst[i].salario - calculaImposto(lst[i]));
    }
}

int main(void){

    Funcionario funcionarios[5];
    cadastraFuncionario(funcionarios);
    ordenaFuncionarios(funcionarios,true);
    printf("--------Ordem crescente--------\n");
    printaFuncionarios(funcionarios);
    ordenaFuncionarios(funcionarios,false);
    printf("--------Ordem decrescente--------\n");
    printaFuncionarios(funcionarios);


    return 0;
}