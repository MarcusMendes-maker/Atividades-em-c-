#include <stdio.h>

main(){

    int num1,num2,media;

        printf("Digite dois valores para saber a media:");
        scanf("%d %d",&num1, &num2);

        media = (num1 + num2)/2;

        printf("A sua media foi:%d",media);

        return 0;
}