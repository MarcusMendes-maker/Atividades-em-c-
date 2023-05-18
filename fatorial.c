#include <stdio.h>
#include <stdlib.h>

main(){

int n,k,f=1;

    printf("Digite um numero para saber seu fatorial:");
    scanf("%d",&n);

    for (k =1; k<=n;k++){
    
     f = f * k;
    }
    
        printf("O fatorial e :%d",f);

}