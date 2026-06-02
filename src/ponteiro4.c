#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    // Declaração da variável char(character) letra, simbolo, número

    char letra = 't';

    // Declaração da variável char para guardar uma palavra, ou seja, uma
    // string(cadeia de caracteres) - uma coleção de caracteres

    char nome[10]= "Raimundo";

    printf("%c\n",letra);
    printf("%s\n",nome);
    printf("%c\n",nome[0]);

return 0;
}