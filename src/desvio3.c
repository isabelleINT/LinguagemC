#include <stdio.h>
#include <stdlib.h>

int main(){

    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float media;

    // Comando system que chama uma execução do sistema operacional
    // que, neste caso será o comando clear

    system("clear");

    printf("Digite uma nota de zero a dez e tecle ENTER\n");
    scanf("%f", &nota1);

    printf("Digite uma nota de zero a dez e tecle ENTER\n");
    scanf("%f", &nota2);

    printf("Digite uma nota de zero a dez e tecle ENTER\n");
    scanf("%f", &nota3);

    printf("Digite uma nota de zero a dez e tecle ENTER\n");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;
     
    if ( media >= 7){
    printf("Você foi aprovado!\n Sua média foi de %.1f\n", media);
    }

    else {
    printf("Você foi reprovado!\n Sua média foi de %.1f\n", media);
    }

    printf("\n########################################################\n");
    printf("\nEndereço de memória da variável nota %p \n", &nota1);
    printf("\nEndereço de memória da variável nota %p \n", &nota2);
    printf("\nEndereço de memória da variável nota %p \n", &nota3);
    printf("\nEndereço de memória da variável nota %p \n", &nota4);
    
    return 0;
}