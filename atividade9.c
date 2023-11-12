#include <stdio.h>

void armazena(float *vetor, int tamanho) ;
float escalar(float *vetor1, float *vetor2, int tamanho);
void imprimir(float *vetor1, float *vetor2, int tamanho, float produto_escalar);

int main() {
    int tamanho = 15;
    float vetor1[tamanho];
    float vetor2[tamanho];
    float produto_escalar;

    armazena(vetor1, tamanho);
    armazena(vetor2, tamanho);

    produto_escalar = escalar(vetor1, vetor2, tamanho);

    imprimir(vetor1, vetor2, tamanho, produto_escalar);

    return 0;
}
void armazena(float *vetor, int tamanho) {
    printf("Digite os valores do conjunto:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%f", &vetor[i]);
    }
}
float escalar(float *vetor1, float *vetor2, int tamanho) {
    float produto_escalar = 0.0;
    for (int i = 0; i < tamanho; i++) {
        produto_escalar += vetor1[i] * vetor2[i];
    }
    return produto_escalar;
}
void imprimir(float *vetor1, float *vetor2, int tamanho, float produto_escalar) {
    printf("Primeiro vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", vetor1[i]);
    }
    printf("\n");

    printf("Segundo vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", vetor2[i]);
    }
    printf("\n");

    printf("Produto escalar: %.2f\n", produto_escalar);
}
