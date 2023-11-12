#include <stdio.h>

void imprime(int *vetor, int tamanho, int inversa);
int main() {
    int vetor[10];
    int codigo;

    printf("Digite 10 numeros reais:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    do {
        printf("\nEscolha uma opcao:\n");
        printf("1 - Imprimir na ordem direta\n");
        printf("2 - Imprimir na ordem inversa\n");
        printf("0 - Sair\n");
        scanf("%d", &codigo);

        switch (codigo) {
            case 0:
                printf("Programa finalizado.\n");
                break;
            case 1:
                imprime(vetor, 10, 0);
                break;
            case 2:
                imprime(vetor, 10, 1);
                break;
            default:
                printf("Código inválido. Tente novamente.\n");
                break;
        }
    } while (codigo != 0);

    return 0;
}
void imprime(int *vetor, int tamanho, int inversa) {
    if (inversa) {
        printf("Vetor na ordem inversa: ");
        for (int i = tamanho - 1; i >= 0; i--) {
            printf("%d ", *(vetor + i));
        }
    } else {
        printf("Vetor na ordem direta: ");
        for (int i = 0; i < tamanho; i++) {
            printf("%d ", *(vetor + i));
        }
    }
    printf("\n");
}
