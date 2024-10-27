#include <stdio.h>
void read_vec(int numeros[], int tamanho);
void show_vec(int numeros[], int tamanho);
int i = 0;
int j = 0;

int main() {
    int tamanho;
    printf("Digite o tamanho do vetor:\n ");
    scanf("%d", &tamanho);

    int numeros[tamanho];

    read_vec(numeros, tamanho);
    show_vec(numeros, tamanho);

    return 0;
}

void read_vec(int numeros[], int tamanho) {
    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &numeros[i]);
    }
}

void show_vec(int numeros[], int tamanho) {
    printf("O vetor é:\n");
    for (j = 0; j < tamanho; j++) {
        printf("%d ", numeros[j]);
    }
}