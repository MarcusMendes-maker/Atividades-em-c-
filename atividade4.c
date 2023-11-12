#include <stdio.h>

void imprimir(int *vetor, int tamanho); 

int main() {
    int vetor[10];

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    imprimir(vetor, 10);

    return 0;
}
void imprimir(int *vetor, int tamanho) {
    int maior = *vetor;
    int menor = *vetor;
    int p_maior = 0;
    int p_menor = 0;

    for (int i = 1; i < tamanho; i++) {
        if (*(vetor + i) > maior) {
            maior = *(vetor + i);
            p_maior = i;
        }
        if (*(vetor + i) < menor) {
            menor = *(vetor + i);
            p_menor = i;
        }
    }

    printf("O maior elemento e: %d,e sua posicao e: %d\n", maior, p_maior);
    printf("O menor elemento e: %d,e sua posicao e: %d\n", menor, p_menor);
}