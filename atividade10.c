#include <stdio.h>

#define NUM_ATLETAS 10
void busca(float matriz[][3], int *mais_baixo, int *mais_alto, int *mais_leve, int *maior_peso); 
int main() {
    int mais_baixo, mais_alto, mais_leve, maior_peso;
    float atletas[NUM_ATLETAS][3];

    printf("Digite os dados dos atletas (numero de inscricao, altura e peso):\n");

    for (int i = 0; i < NUM_ATLETAS; i++) {
        scanf("%f %f %f", &atletas[i][0], &atletas[i][1], &atletas[i][2]);
    }

    busca(atletas, &mais_baixo, &mais_alto, &mais_leve, &maior_peso);

    printf("Atleta mais baixo: Numero %d\n", (int)atletas[mais_baixo][0]);
    printf("Atleta mais alto: Numero %d\n", (int)atletas[mais_alto][0]);
    printf("Atleta mais leve: Numero %d\n", (int)atletas[mais_leve][0]);
    printf("Atleta com maior peso: Numero %d\n", (int)atletas[maior_peso][0]);

    return 0;
}
void busca(float matriz[][3], int *mais_baixo, int *mais_alto, int *mais_leve, int *maior_peso) {
    float altura_mais_baixa = matriz[0][1];
    float altura_mais_alta = matriz[0][1];
    float peso_mais_leve = matriz[0][2];
    float peso_maior = matriz[0][2];

    for (int i = 1; i < NUM_ATLETAS; i++) {
        if (matriz[i][1] < altura_mais_baixa) {
            altura_mais_baixa = matriz[i][1];
            *mais_baixo = i;
        }

        if (matriz[i][1] > altura_mais_alta) {
            altura_mais_alta = matriz[i][1];
            *mais_alto = i;
        }

        if (matriz[i][2] < peso_mais_leve) {
            peso_mais_leve = matriz[i][2];
            *mais_leve = i;
        }

        if (matriz[i][2] > peso_maior) {
            peso_maior = matriz[i][2];
            *maior_peso = i;
        }
    }
}