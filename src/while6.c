#include <stdio.h>

int main(){

    int i,j;

        i = 1;
        j = 0;

        while ( i <= 10 ){

            while ( j <= 10 ){

                printf("%d x %d = %d\n",i,j,(i*j));

                j++;
            }
            printf("\n");
            j = 0;
            i++;
        }
return 0;

}    