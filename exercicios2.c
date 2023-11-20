#include <stdio.h>

typedef struct aluno{
    int matricula; // 4bytes
    float nota1, nota2, nota3; // 12bytes
    char nome[30]; // 30bytes
    
} Aluno;

int main(){
    Aluno aluno1;
    printf("tamanho da struct do aluno: %d bytes\n",  sizeof(struct aluno)); 

    return 0;
}