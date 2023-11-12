#include <stdio.h>

void imprima(int *vetor, int tamanho);
int main() {
    int vetor[50];

    for (int i = 0; i < 50; i++) {
        vetor[i] = (i + 5 * i) % (i + 1);
    }

    printf("Valores do vetor:\n");
    imprima(vetor, 50);

    return 0;
}
void imprima(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
