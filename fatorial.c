#include <stdio.h>
#include <stdlib.h>

main(){

int n,k =1,f=1;

    printf("Digite um numero para saber seu fatorial:");
    scanf("%d",&n);

    while (k<=n)
    {
        f = f * k;
        k = k + 1;
    }
    
        printf("O resultado da fatorial e:%d=%d\n",n,f);

}