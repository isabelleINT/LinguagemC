#include <stdio.h>
#include <stdlib.h>

int main(){

    system("clear");
    int i;
    for ( i = 0; i < 100; i++){
      printf("=");
    }
    printf("\nPrograma de Vendas\n");
    char SeuNome[15];
    char Vendedor[10];
    char Produto[20];
    float Preco;
    int Parcelas;
    float PrecoFinal;

    printf("Digite o seu nome:\n");
    fgets(SeuNome,15,stdin);

    printf("Digite o nome do vendedor:\n");
    fgets(Vendedor,10,stdin);

    printf("Digite o produto escolhido:\n");
    fgets(Produto,20,stdin);

    printf("Digite o preço desse produto:\n");
    scanf("%f",&Preco);

    printf("Quantas parcelas?:\n");
    scanf("%d",&Parcelas);
 
    if (Parcelas == 0){

        PrecoFinal = Preco*0.9;

        printf("Pagamento a vista!Seu produto ganhou 10 por cento de desconto! O valor total é de %.2f!\n", PrecoFinal);  
    }

    if (Parcelas > 0){

        PrecoFinal = (Preco*1.15)/Parcelas;

        printf("Cada parcela sai no valor de %.2f!\n",PrecoFinal);
    }
    

FILE *arquivo = fopen("files/compra.txt","a");

    fprintf(arquivo,"Nome do Cliente: %s\n", SeuNome);
    fprintf(arquivo,"Vendedor: %s\n", Vendedor);
    fprintf(arquivo,"Produto: %s\n", Produto);
    fprintf(arquivo,"Preço desse Produto: %.2f\n\n", Preco);
    fprintf(arquivo,"Parcelas: %d\n\n", Parcelas);
    fprintf(arquivo,"Preço Final: %.2f\n", PrecoFinal);
    
    
    fprintf(arquivo,"\n==================================================\n");

fclose(arquivo);

return 0;
}