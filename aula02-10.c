#include <stdio.h>
#include <stdlib.h>
//como declaro minha função
//dizer o tipo do retorno
//dizer o numero de parametros e seus tipos
int soma(int a, int b){ 
    printf("Executando a soma de a + b (%d + %d)...\n", a ,b);
    return a + b;
}
int main(){
    int resultado;
    resultado = soma(1, 3);//chamar a função 
    printf("resultado de %d + %d soma = %d!\n", resultado);

    return 0;
}