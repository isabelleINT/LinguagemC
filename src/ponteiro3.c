#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    // vamos criar uma estrutura de coleção de dados
    // chamada de array (aranjo)
    
    int idade[6]={18,25,17,16,10,21};
    int *pidade = idade;

    printf("O primeiro elemento é %d\n", idade[0]);
    printf("O primeiro elemento é %d\n", *pidade);
    printf("O endereço do primeiro elemento é %p\n", pidade);
    
    pidade++;

    printf("O segundo elemento é %d\n", idade[1]);
    printf("O segundo elemento é %d\n", *pidade);
    printf("O endereço do segundo elemento é %p\n", pidade);

    pidade++;

    printf("O terceiro elemento é %d\n", idade[2]);
    printf("O terceiro elemento é %d\n", *pidade);
    printf("O endereço do terceiro elemento é %p\n", pidade);
    

return 0;    

}