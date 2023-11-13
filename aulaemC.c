#include <stdio.h>

int main(){
    int c = 5;
    int *p;

    p = &c; // alimentando ponteiro com endereço de memoria de c

    printf("valor de c: %d\n", c);
    printf("endereco de memoria de c: %p\n", &c);
    printf("valor de p: %p\n", p);
    printf("valor de c a partir de p: %d\n", *p);
    printf("valor de p1: %p\n", p1);

    return 0;
}