#include <stdio.h>
#include <stdlib.h>

/*int main(){
    // alocação estática
    char string_estatica[1000];
    scanf("%s", string_estatica);
    printf("string estatica: %s\n", string_estatica);

    // alocação dinâmica
    char *string_dinamica;
    string_dinamica = (char *)malloc(1000);
    scanf("%s", string_dinamica);
    printf("string dinamica: %s\n", string_dinamica);

    return 0;
}*/

int main(){
    //alocação estatica
    int vetor_int_est[5] = {1,2,3,4,5};
    for(int i = 0; i < 5; i++){
        printf("%d\n", vetor_int_est[i]);
    }
    
    //alocação dinâmica
    int* vetor_int_din = (int*) malloc(5*sizeof(int));
    if(vetor_int_din == NULL){
        printf("nao foi posiivel alocar memoria!\n");
        return 1;
    }
    for(int i = 0; i < 5; i++){
        //scanf("%d", &vetor_int_din[i]);
        printf("%d\n", vetor_int_din[i]);
    }
    
    
    free(vetor_int_din);
    
    


    return 0;
}