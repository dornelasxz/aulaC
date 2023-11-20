#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
    int opcao;

    do{
        printf("======================================================\n");
        printf("1 - Criar nova conta\n");
        printf("2 - Depositar e sacar dinheiro em uma conta\n");
        printf("3 - Mostrar saldo total de cada conta\n");
        printf("4 - Editar informacoes do titular de uma conta\n");
        printf("5 - Remover conta\n");
        printf("6 - Transferir valor de uma conta para outra\n");
        printf("7 - Sair\n");
        printf("======================================================\n\n");
    } while (opcao =! 7);
    
    switch (opcao){
        case 1:
            //criar
        break;

        case 2:
            //depositar e sacar
        break;

        case 3:
            //mostrar saldo
        break;

        case 4:
            //editar contas
        break;

        case 5:
            //remover contas
        break;

        case 6:
            //trasferir de uma conta para outra
        break;

        case 7:
            //sair
            printf("Obrigado por sua visita!\n");
            getch();
        break;

        default:
            printf("Opcao invalida!\n");
            getch();
        break;
    }


    return 0;
}