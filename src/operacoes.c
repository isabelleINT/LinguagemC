#include <stdio.h>
int main(){

    int num1;
    int num2;
    int soma;
    int subtracao;
    int divisao;
    int multiplicacao;

    printf("Digite um número inteiro e tecle ENTER\n");
    scanf("%d", &num1);

    printf("Digite outro número inteiro e tecle ENTER\n");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("A soma dos números %d e %d resultou em %d\n", num1, num2, soma);

    divisao = num1 / num2;

    printf("A divisao dos números %d e %d resultou em %d\n", num1, num2, divisao);

    multiplicacao = num1 * num2;

    printf("A multiplicacao dos números %d %d resultou em %d\n", num1, num2, multiplicacao);

    subtracao = num1 - num2;

    printf("A subtracao dos números %d e %d resultou em %d\n", num1, num2, subtracao);

    return 0;

}