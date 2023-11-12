#include <stdio.h>

void repetidos(int vetor[], int tamanho);
int main() {
    int vetor[20];

    printf("Digite 20 numeros inteiros:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }

    repetidos(vetor, 20);

    return 0;
}
void repetidos(int vetor[], int tamanho) {
    int i, j;
    int vetorSemRepeticao[tamanho];
    int cont = 0;

    for (i = 0; i < tamanho; i++) {
        int duplicado = 0;
        for (j = 0; j < cont; j++) {
            if (vetor[i] == vetorSemRepeticao[j]) {
                duplicado = 1;
                break;
            }
        }
        if (!duplicado) {
            vetorSemRepeticao[cont] = vetor[i];
            cont++;
        }
    }
    printf("Elementos do vetor sem repetição: ");
    for (i = 0; i < cont; i++) {
        printf("%d ", vetorSemRepeticao[i]);
    }
    printf("\n");
}