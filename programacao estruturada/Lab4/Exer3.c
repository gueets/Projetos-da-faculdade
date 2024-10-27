#include <stdio.h>
void exibeMatriz(int a, int b, int m[a][b]);
void ler(int a, int b, int m[a][b]);

int i = 0;
int j = 0;
int k = 0;
int c = 0;

void main() {
    int a;
    int b;
    printf("Digite o tamanho da matriz: ");
    scanf("%d", &a);
    scanf("%d", &b);

    int numeros[a][b];
    
    //ler a matriz, melhor leitura do cod e treinar func
    ler(a, b, numeros);
    
    //print matriiz
    printf("\nA matriz digitada é:\n");
    exibeMatriz(a, b, numeros);
}

void ler(int a, int b, int m[a][b]) {
    for (k = 0; k < a; k++) {
        for (c = 0; c < b; c++) {
            printf("Digite o elemento (%d,%d): ", k, c);
            scanf("%d", &m[k][c]);
        }
    }
}

void exibeMatriz(int a, int b, int m[a][b]) {
    for (i = 0; i < a; i++) { //linhna
        for (j = 0; j < b; j++) { //coluna
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}