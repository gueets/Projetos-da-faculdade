#include <stdio.h>
void read_vec(int numeros[], int tamanho);
void show_vec(int numeros[], int tamanho);
void square_vec(int numeros[], int tamanho);

int i = 0;
int j = 0;
int k = 0;

void main() {
    int tamanho;
    printf("Digite o tamanho do vetor:\n ");
    scanf("%d", &tamanho);

    int numeros[tamanho];

    read_vec(numeros, tamanho);
    show_vec(numeros, tamanho);
    square_vec(numeros, tamanho);
    show_vec(numeros, tamanho);
    
}

void read_vec(int numeros[], int tamanho) {
    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &numeros[i]);
    }
}

void square_vec(int numeros[], int tamanho) {
    for (k = 0; k < tamanho; k++) {
        numeros[k] = numeros[k] * numeros[k]; 
        /* vai passando por cada posição e vai alterando pelo quadradado 
        então na posição 1 vai pegarr o elemento 1 vezes elemento 1 e salvar na posição 1. Faz isso até acabar o loop*/
    }
}

void show_vec(int numeros[], int tamanho) {
    printf("\nO vetor é:");
    for (j = 0; j < tamanho; j++) {
        printf("%d ", numeros[j]);
    }
}