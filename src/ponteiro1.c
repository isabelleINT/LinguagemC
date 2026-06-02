#include <stdio.h>
#include <stdlib.h>

int main(){

    system("clear");
    
    int a = 35;
    int *apt = &a;

    printf("O valor da variável A é %d\n",a);
    printf("O endereço de memória da variável A é %p\n",apt);
    printf("O valor que está no endereço da variável A é %d\n",*apt);

return 0;

}