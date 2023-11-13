#include <stdio.h>

int main(){
    int ano, r;
    
    scanf("%d", &ano);
    r = ano - 1930;
    
    if(ano >= 1930 && ano <= 2022 && ano != 1942 && ano != 1946 && r%4 == 0 || r == 0){
        printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", ano);
    }else if (ano >= 1896 && ano <= 2020 && ano != 1916 && ano != 1940 && ano != 1944 && ano%4 == 0){
        printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n", ano);
    }else{
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
    }
    
    return 0;
}