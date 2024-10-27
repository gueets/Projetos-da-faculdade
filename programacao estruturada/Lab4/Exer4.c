#include <stdio.h>
#include <stdlib.h>

#define lin 10
#define col 5

// Declaração e inicialização das variáveis globais
int semente = 0; // Inicializada com 0
int numeros[lin][col];
int numerosd[col][lin];
int i = 0, j = 0, z = 0, w = 0; // Inicializando os índices dos loops

void exibeMatriz(int a, int b, int m[a][b]) {
    for (z = 0; z < a; z++) {
        for (w = 0; w < b; w++) {
            printf("%d ", m[z][w]);
        }
        printf("\n");
    }
}

int main() {
    printf("Digite o valor da semente: ");
    scanf("%d", &semente);
    srand(semente);

    // Preenchendo a matriz com valores aleatórios
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            numeros[i][j] = rand() % 10;
        }
    }

    printf("A matriz é:\n");
    exibeMatriz(lin, col, numeros);

    // Calculando a transposta
    for (i = 0; i < col; i++) {
        for (j = 0; j < lin; j++) {
            numerosd[i][j] = numeros[j][i];
        }
    }

    printf("\nA transposta é:\n");
    exibeMatriz(col, lin, numerosd);

    return 0;
}
