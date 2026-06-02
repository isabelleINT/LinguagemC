#include <stdio.h>
#include <stdlib.h>

int main(){

    system("clear");
    char NomeCompleto[30];
    // vamos usar uma função para obter
    // todos os caracteres digitados pelo
    // usuário na tela de terminal
    // o nome da função é fgets
    printf("Digite o seu nome completo:\n");
    fgets(NomeCompleto,30,stdin);
    printf("Olá, Sr(a). %s\n"),NomeCompleto;

    return 0;
}