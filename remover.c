#include <stdio.h>
#include <stdlib.h>

void removerConta(struct Conta contas[], int *contasCriadas, char cpf[], int idade){
    int contaInicio = -1;
    for (int i = 0; i < *contasCriadas; i++){
        if (strcmp(contas[i].cpf, cpf) == 0){
        contaInicio = i;
        break;
        }
    }
    if (contaInicio != -1){
        for (int i = contaInicio; i < contasCriadas; i++){
            contas[i] = contas[i + 1];
        }
        (*contasCriadas)--;
        printf("Conta com número de cpf %s removida com sucesso.\n", cpf);
    }
    else{
        printf("Conta com número de cpf %s não encontrada.\n", cpf);
    }   
}

int main(){
    switch (opcao){
    case 6:
        printf("Digite o nome da conta a ser removida: ");
        scanf("%s", nome);
        struct Conta *removerConta = encontrarconta(contas, contasCriadas, nome);
        if (removerConta != NULL){
            removerConta(contas, &contasCriadas, contaRemover->cpf);
        }else{
            printf("Conta com nome %s não encontrada.\n", nome);
        }
        
    break;
    
    default:
        break;
    }
}