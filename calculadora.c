#include <stdio.h>
#include <stdlib.h>

 main(){

    float num1,num2;
    char op;

        printf("Digite o primeiro numero:");
        scanf("%f",&num1);

        printf("Digite o segundo numero:");
        scanf("%f",&num2);

        printf("Digite a operacao que deseja realizar:");
        scanf("%s",&op);

        switch (op){

            case '+': printf("==%f",num1 + num2);
            break;
            
            case '-': printf("==%f",num1 - num2);
            break;
            
            case '*': printf("==%f",num1 * num2);
            break;
            
            case '/': printf("==%f",num1/num2);
            break;

    
         }

   return 0;
}