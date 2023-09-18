#include <stdio.h>

int main(){
    int valores[5];
    //fazendo isso na declaração do vetor: int valores[5] = {10, 20, 30, 40, 50};
    for(int i = 0;i <= 4;i++){
        valores[i] = (i + 1)*10;
    }

    /*valores[0] = 10;
    valores[1] = 20;
    valores[2] = 30;
    valores[3] = 40;
    valores[4] = 50;*/

    printf("Valor na posicao %d: %d\n", 1, valores[1]);

    return 0;
}