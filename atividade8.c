#include <stdio.h>

void armazena(int *vetor1, int *vetor2, int *vetor_resultado, int tamanho);

int main() {
    int vetor1[10];
    int vetor2[10];
    int vetor_resultado[10];

    printf("Digite os valores do primeiro vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os valores do segundo vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor2[i]);
    }

    armazena(vetor1, vetor2, vetor_resultado, 10);

    printf("Vetor resultado:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor_resultado[i]);
    }

    return 0;
}
void armazena(int *vetor1, int *vetor2, int *vetor_resultado, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (i % 2 == 0) {
            *vetor_resultado = *vetor1; 
        } else {
            *vetor_resultado = *vetor2; 
        }
        vetor1++; 
        vetor2++;
        vetor_resultado++;
    }
}
