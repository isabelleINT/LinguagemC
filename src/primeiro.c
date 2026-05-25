// importação da bibloteca padrão de entrada e saída
#include <stdio.h>

// O program inicia e executa a partir da função main
int main (){

    // declaração da variável j com o tipo int(inteiro)
    int j; 

    // vamos pedir ao usuário para digitar um valor
    // inteiro para ser guardado na variável j
    printf("Digite um número inteiro e tecle Enter:\n");

    // o comando scanf será utilizado para capturar o
    // número inteiro que o usuário irá digitar. O caracter
    // f do scan é usado para indicar qual será o formato
    // de dado digitado pelo usuário. Neste caso, usaremos
    // %d, que indica que o usuário digitou é um número
    // decimal. Este número será alocado no endereço de
    // memória da variável j. Portanto, usaremos &j, para 
    // indicar o endereço da variável.
    scanf("%d",&j);
    printf("O valor digitado pelo usuário é %d\n\n",j);
    return 0; // informa ao compilador que o programa acabou
}