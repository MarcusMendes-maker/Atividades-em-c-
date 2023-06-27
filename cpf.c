/**************************************************************************************************************
UfCat.
Curso:Ciência da Computação.
Aluno:Marcus Vinicius M.R de Andrade.
ultima data de alteração: 27/06/2023.
**************************************************************************************************************/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int valida_cpf2(char cpf[12])
{
 if (strlen(cpf) != 11)
        return 0;
    int convertidoEmInteiro, vetorCPF[11];
    for (int i=0; i<11; i++) {
        int convertidoEmInteiro = (int) (cpf[i] > 47 && cpf[i] < 58) ? cpf[i] - 48 : -1;
        if (convertidoEmInteiro == -1)
            return 0;
        vetorCPF[i] = convertidoEmInteiro;
}
//validação do segundo digito.
//for decrescente de 11 a 2.
printf("\nValidacao do segundo Digito.\n");
 int soma = 0, resto2;
    for (int i = 11; i >=2; i--) {
     soma = soma + vetorCPF[11-i] * i;
     printf("somou %i + %i * %i \n",soma, vetorCPF[11 -i], i);
    }
     printf("%i",soma);
    soma * 10;
    resto2 = (soma % 11);
    printf("\nO segundo numero de validacao e:%d",resto2);
    return 1;
}

int valida_cpf(char cpf[12]) {
    if (strlen(cpf) != 11)
        return 0;

    int convertidoEmInteiro, vetorCPF[11];
    for (int i=0; i<11; i++) {
        int convertidoEmInteiro = (int) (cpf[i] > 47 && cpf[i] < 58) ? cpf[i] - 48 : -1;
        if (convertidoEmInteiro == -1)
            return 0;
        vetorCPF[i] = convertidoEmInteiro;
    }

    //Validação do primeiro dígito
    //for decrescente de 10 a 2
   printf("\nValidacao do primeiro digito:\n");
    int soma = 0,resto1;
    for (int i = 10; i >=2; i--) {
     soma = soma + vetorCPF[10-i] * i;
     printf("somou %i + %i * %i \n",soma, vetorCPF[10-i], i);
    }
     printf("%i",soma);
    soma *10;
    resto1 = (soma %11);
    printf("\nO primeiro numero de validacao e %d",resto1);

    return 1;
}

int main()
{
    char cpf[12];
    printf("Digite o CPF (somente numeros): ");
    gets(cpf);

    if (valida_cpf(cpf) && (valida_cpf2 (cpf)))
        printf(" \nCPF e valido");
    else
        printf("\nCPF invalido");



    return 0;
}