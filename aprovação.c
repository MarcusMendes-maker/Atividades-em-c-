#include <stdio.h>
#include <stdlib.h>

main(){

    float num1,num2,num3,media;

        printf("Digite a primeira nota\n:");
        scanf("%f",&num1);

        printf("Digite a segunda nota\n:");
        scanf("%f",&num2);

        printf("Digite a terceira nota\n:");
        scanf("%f",&num3);

        media = (num1+num2+num3)/3;

        printf("A sua media foi:%f\n",media);

            if(media>=6)
                printf("Voce foi aprovado.");

            else
                if(media<6 && media>=5)
                    printf("Voce esta de recuperacao.");

                else
                    if(media<=4)
                        printf("Voce foi reprovado.");

        return 0;
}