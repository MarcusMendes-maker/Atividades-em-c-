#include <stdio.h>

void quadrado(int num, int *resultado);
void imprimir(int vetor[], int tamanho);
int main() {
    int vetorOriginal[10];
    int vetorQuadrado[10];


    printf("Digite 10 numeros reais:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetorOriginal[i]);
    }

   
    for (int i = 0; i < 10; i++) {
        quadrado(vetorOriginal[i], &vetorQuadrado[i]);
    }


    printf("Vetor Original: ");
    imprimir(vetorOriginal, 10);
    printf("Vetor dos Quadrados: ");
    imprimir(vetorQuadrado, 10);

    return 0;
}
void quadrado(int num, int *resultado) {
    *resultado = num * num;
}

void imprimir(int vetor[], int tamanho) {
    printf("Vetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}