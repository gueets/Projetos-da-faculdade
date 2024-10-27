//L02_2 (For)

#include <stdio.h>

int main(){
    int x;
    int resto;
    int i;
    int c = 0;

    printf("Digite um número inteiro:");
    scanf("%d", &x);

    for(i=1; i<=x; i++){ 
        resto = x%i;
        if (resto == 0){ 
            printf("O número %d é divisível por %d\n", x, i);
            c++; //se só entrar aqui duas vezes entao é pq primo
        }  
    }
    if (c == 2){ 
            printf("O número %d é primo!",x);
        }
      
        /*2, 3, 5, 7, 11, 13, 17, 19, 
        23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97*/

}