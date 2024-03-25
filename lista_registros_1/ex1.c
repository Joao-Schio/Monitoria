/**
 * todos os programas podem ser compilados usando gcc <nome do arquivo> -o <nome do executavel>
 * flags que eu uso sao -Wall -Werror -pedantic
 * para executar usar o comando ./<nome do executavel>
*/
#include <stdio.h>



typedef struct Aluno{
    char nome[50];
    int matricula;
    double n1;
    double n2;
}Aluno;




void cadastraAluno(Aluno alunos[], int tamanho){
    for(int i = 0 ; i < tamanho; i++){
        printf("Declare o nome, matricula e notas do aluno\n");
        scanf(" %[^\n] %d %lf %lf",alunos[i].nome,&alunos[i].matricula, &alunos[i].n1, &alunos[i].n2);
    }
}


void printaAlunos(Aluno alunos[], int tamanho){
    for(int i = 0 ; i < tamanho; i++){
        double media = (alunos[i].n1 + alunos[i].n2) / 2;
        printf("%s\n%d\n%.2lf\n",alunos[i].nome,alunos[i].matricula,media);
    }
}

int main(void){
    int n;
    scanf("%d",&n);

    Aluno alunos[n];

    cadastraAluno(alunos,n);
    printaAlunos(alunos,n);

    return 0;
}
