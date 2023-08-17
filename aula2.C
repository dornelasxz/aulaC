#include <stdio.h> 
#include <stdlib.h>

int main(){
    
    float nota1, nota2, nota3, media;
    char turno;
    
    printf ("Digite o turno\n");
    scanf("%c", &turno);

    printf("Digite notas:\n");
    scanf("%f" , &nota1);
    scanf("%f" , &nota2);
    scanf("%f" , &nota3);
    
    media = (nota1 + nota2 + nota3)/3;
    if(media >=7 && media <=8){
        printf("Bom!\n");
    }
    else if(media >= 9){
        printf("Exelente!\n");
    }
    
    
    printf("MEDIA: %f.\n" , media);
    
        
    if(turno == 'm'){
        printf("Aluno do turno matutino.\n");
    }
    else if(turno == 'n'){
        printf("Aluno do turno noturno.\n");
    }
    else {
        printf("O turno digitado e invalido!!\n");
    }
    if(media >= 7){
        printf("Aluno aprovado.\n");
    } else {
        printf("Aluno reprovado.\n");
    }
    return 0;
}