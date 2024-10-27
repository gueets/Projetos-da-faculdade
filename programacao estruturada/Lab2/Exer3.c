//L02_3 (While)

#include <stdio.h>

int main(){
    int x;
    int c = 0;
    int fat=1;
    printf("Digite um número inteiro:");
    scanf("%d", &x);
    c += x;

    while (x>0){
        fat *=x;
        x--;
    }
    printf("%d! = %d",c,fat);

}