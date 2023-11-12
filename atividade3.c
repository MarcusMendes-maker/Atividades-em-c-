#include <stdio.h>

void leitura(int *vetor, int tamanho); 
void imprimepar(int *vetor, int tamanho); 
void imprimeimpar(int *vetor, int tamanho); 

int main() {
    int vetor[10];
    leitura(vetor, 10);
    imprimepar(vetor, 10);
    imprimeimpar(vetor, 10);

    return 0;
}
void leitura(int *vetor, int tamanho) {
    printf("Digite os %d valores do vetor:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
}

void imprimepar(int *vetor, int tamanho) {
    printf("Valores pares no vetor: ");
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 == 0) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");
}
void imprimeimpar(int *vetor, int tamanho) {
    printf("Valores impares no vetor: ");
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 != 0) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");
}