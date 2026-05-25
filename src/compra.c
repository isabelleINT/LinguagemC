#include <stdio.h>
int main(){

    // vamos usar as variáveis com o tipo de dado float, pois,
    // este programa recebe valores com casas decimais

    float preco;
    float taxa;
    float parcelas;
    float resultado;
    float resultado_parcelas;
    
    printf(" Digite o preço do produto e tecle ENTER\n");
    scanf("%f", &preco);

    printf(" Digite a taxa de acréscimo sem o simbolo de porcentagem e tecle ENTER\n");
    scanf("%f", &taxa);

    printf(" Digite o número de parcelas e tecle ENTER\n");
    scanf("%f", &parcelas);

    resultado = preco * (taxa/100) + preco;
    resultado_parcelas = resultado / parcelas;

    printf(" O valor final do produto é R$ %.2f\n", resultado);
    printf(" O valor da parcela é R$ %.2f\n", resultado_parcelas);

    return 0;

}   