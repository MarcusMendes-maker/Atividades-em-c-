#include <stdio.h>

int procurar(int vetor[], int tamanho, int valor); 
int main() {
    int vetor[8];
    int X, Y;

    printf("Digite os 8 valores do vetor:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &vetor[i]);
    }
    
    printf("Digite o valor de X e y: ");
    scanf("%d %d",&X,&Y);
    
    int posicaoX = procurar(vetor, 8, X);
    int posicaoY = procurar(vetor, 8, Y);
    
    if (posicaoX != -1) {
        printf("X = %d encontrado na posicao %d do vetor.\n", X, posicaoX);
    } else {
        printf("X = %d não encontrado no vetor.\n", X);
    }
    
    if (posicaoY != -1) {
        printf("Y = %d encontrado na posicao %d do vetor.\n", Y, posicaoY);
    } else {
        printf("Y = %d não encontrado no vetor.\n", Y);
    }

    return 0;
}
int procurar(int vetor[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) {
            return i;
        }
    }
    return -1; 
}
