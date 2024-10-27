//L02_4 (Do/while)

#include <stdio.h>

int main(){
    int x;
    int y = 0;
    double m = 0;
    int c = 0;
    printf("Digite valores positivos ou -1 para sair:");
    
    
    do{
        scanf("\n%d", &x);
         if (x != -1) {
            y+=x;
            c++;
         }
    } while (x!=-1);
    
    m = y/c;
    printf("\nA média é: %lf",m);

}