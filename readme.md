# Estudo da Linguagem C 
## Aplicada a lógica de programação e algoritmos
<p align="center">
<img src="c-programming.jpg" width="300" height="300">
</p>



Estudo das principais estruturas da linguagem de programação C.

Vamos listar os itens trabalhados neste repositório:

    *Variáveis
    *Comandos de Entrada e Saída(IO-input output):
        *printf
        *scanf
    *Desvio de fluxo Simples (if ... )
    *Desvio de fluxo Multiplo (if ... else ... )
    *Estrutura de Repetição While (Enquanto)
    *Estrutura de Repetição For (Para)
    *Função (Módulos)
        - Função Interna (Dentro do arquivo .c)
        - Função Externa (Dentro do arquivo .h)
    *Importação de Módulos
        - Módulos da linguagem (stdio.h)
        - Módulos do usuário (funcoes.h)
    *Ponteiro
    *Criação de arquivos

#### Demonstração de uma estrutura simples de arquivo .c

``` c
#include<stdio.h>

int main()
{
    int x = 10;
    printf("O valor é %d\n",x);
    return 0;
}
```
#### Demonstração de uma estrtura de Desvio de Fluxo Multiplo

``` c
#include <stdio.h>

int main()
{
    int ano;
    printf("Digite um ano e tecle ENTER\n");
    scanf("%d",&ano);

    if ( ano % 4 == 0 ){
        printf(" O ano %d é bissexto!\n", ano);
    }

    else {
    printf("O ano %d não é bissexto!\n", ano);
    }
    
    return 0;
}
```
#### Demonstração de estruturas de Repetição While e For

``` c
#include <stdio.h>

int main()
{
    int i,num,res;

        printf("Digite um número para fazer a tabuada e tecle ENTER\n");
        scanf("%d",&num);

    i = 0;
    while (i <= 10)
    {
        res = num * i;
        printf("%d x %d = %d\n",num,i,res);
        i++;
    }   
return 0;
}
``` 
``` c
#include <stdio.h>

int main()
{
    int i,num,res;

        printf("Digite um número para fazer a tabuada e tecle ENTER\n");
        scanf("%d",&num);

    i = 0;
    while (i <= 10)
    {
        res = num * i;
        printf("%d x %d = %d\n",num,i,res);
        i++;
    }
return 0;
}
```