#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int nota;
    
    do{
        printf("Insira uma nota positiva!\n");
        scanf("%d", &nota);
    } while (nota < 0);

    printf("Nota lida: %d\n", nota);




    /*while (nota < 0){
        printf("Insira uma nota positiva!\n");
        scanf("%d", &nota);
    }*/
    
    
    /*for(i = 1; i < 10;i = i++){
        printf("valor de i: %d\n", i);
    }*/

    return 0;
}



