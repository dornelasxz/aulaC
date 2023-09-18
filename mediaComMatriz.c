#include <stdio.h>

int main(){

    // 2 alunos, cada um com 4 notas!!
    double notasDosAlunos[2][4];

    // lendo as 4 notas do 1 aluno
    for (int i = 0; i <= 3; i++){
        printf("Insira a nota %d do primeiro aluno:\n", i + 1);
        scanf("%lf", &notasDosAlunos[0][i]);
    }
    // lendo as 4 notas do 2 aluno
    for (int i = 0; i <= 3; i++){
        printf("Insira a nota %d do primeiro aluno:\n", i + 1);
        scanf("%lf", &notasDosAlunos[1][i]);
    }

    for (int i = 0; i <= 3; i++){
        printf("Nota %d do primeiro aluno: %lf\n", i + 1, notasDosAlunos[0][i]);
    }

    for (int i = 0; i <= 3; i++){
        printf("Nota %d do segundo aluno: %lf\n", i + 1, notasDosAlunos[0][i]);
    }
    
    

    /*
    printf("Insira a nota 2 do primeiro aluno:\n");
    scanf("%lf", notasDosAlunos[0][1]);
    printf("Insira a nota 3 do primeiro aluno:\n");
    scanf("%lf", notasDosAlunos[0][2]);
    printf("Insira a nota 4 do primeiro aluno:\n");
    scanf("%lf", notasDosAlunos[0][3]);*/


    return 0;
}