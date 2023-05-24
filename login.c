#include <stdio.h>
#include <string.h>
main(){

char login[20],senha[20];

    printf("Digite o login:");
    scanf("%s",login);

    printf("Digite a senha:");
    scanf("%s",senha);

        if (strcmp(login,"admin")==0 && strcmp(senha,"apc1")==0)
            printf("Bem vindo ao sistema ufcat.");

        else {
            printf("Credenciais erradas\n");
            printf("Digite o login:");
            scanf("%s",login);

            printf("Digite a senha:");
            scanf("%s",senha);

             if (strcmp(login,"admin")==0 && strcmp(senha,"apc1")==0)
                 printf("Bem vindo ao sistema ufcat.");

             else 
                 printf("Credenciais erradas\n tentativas excedidas");
        }
}