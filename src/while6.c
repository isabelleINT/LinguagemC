#include <stdio.h>

int main(){

    int i,num,res;

        printf("Digite um número para fazer a tabuada e tecle ENTER\n");
        scanf("%d",&num);

        i = 0;
    while (i <= 10){

        res = num * i;
        printf("%d x %d = %d\n",num,i,res);
        i++;
    }
}    