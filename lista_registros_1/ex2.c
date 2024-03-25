/**
 * todos os programas podem ser compilados usando gcc <nome do arquivo> -o <nome do executavel> flags
 * flags que eu uso sao -Wall -Werror -pedantic
 * para executar usar o comando ./<nome do executavel>
*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct Pessoa{
    char nome[50];
    int altura;
    double peso;
    char cpf[12];
    bool masculino;
}Pessoa;

int procuraCpf(Pessoa pessoas[], char cpf[], int tamanho){
    for(int i = 0 ; i < tamanho; i++){
        if (strcmp(pessoas[i].cpf,cpf) == 0){
            return i;
        }
    }
    return -1;
}

double imc(Pessoa p){
    return (p.peso) / (p.altura * p.altura);
}

void printaMasculino(Pessoa p[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        if(p[i].masculino){
            printf("%s %lf\n",p[i].nome, imc(p[i]));
        }
    }
}

int main(void){

    int n = 3;
    //scanf("%d",&n); // nao esta claro no enunciado quantas pessoas, por facilidade de teste vou deixar 3
    char sexo[100];
    Pessoa pessoas[n];
    printf("Declare o nome, altura, peso, cpf e sexo de %d pessoas\n",n);
    for(int i = 0 ; i < n; i++){
        scanf("%s %d %lf %12s %s", pessoas[i].nome, &pessoas[i].altura, &pessoas[i].peso, pessoas[i].cpf,sexo);
        pessoas[i].masculino = (strcmp("masculino",sexo) == 0);
    }

    char menu[] = "(1) para checar imc com base no cpf cadastrado\n(2) para listar o imc de todas as pessoas cadastradas como masculino\n";
    int opc;
    do{
        printf("%s",menu);
        scanf("%d",&opc);
        if(opc == 1){
            char cpf[12];
            scanf("%s",cpf);
            int idPessoa = procuraCpf(pessoas,cpf,n);
            if(idPessoa != -1)
                printf("O imc de %s é %lf\n",pessoas[idPessoa].nome, imc(pessoas[idPessoa]));
        }
        else if(opc == 2){
            printaMasculino(pessoas,n);
        }
    }while(opc == 1 || opc == 2);
}