#include <stdio.h>
#include <stdlib.h>

typedef struct cadastro{
    char nome[30];
    int idade;
    char endereco[40];
} Cadastro;

void crialistadecadastro(int n){
    Cadastro* cadastros = (Cadastro*) malloc(n*sizeof(Cadastro));
    return cadastros;
}

int main(){
    int n;
    printf("insira um numero de cadastros: ");
    scanf("%d", &n);
    Cadastro* cadastros = crialistadecadastro(n);
    
    for (int i = 0; i < n; i++){
        printf("nome: ");
        scanf("%s", cadastros[i].nome);
        printf("idade: ");
        scanf("%d", &cadastros[i].idade);
        printf("endereco: ");
        scanf("%s", cadastros[i].endereco);
    }
    
    printf("pessoas cadastradas:\n");

    for (int i = 0; i < n; i++){
        printf("%s", cadastros[i].nome);
        printf("%d", cadastros[i].idade);
        printf("%s", cadastros[i].endereco);
    }
    
    return 0;
}