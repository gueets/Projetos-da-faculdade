//L02_1 (Condicionais simples)

#include <stdio.h>

double ni, nf;

int main()
{
    printf("Digite sua nota:");
    scanf("%lf", &ni);
    
    //regra de 3
    nf = (ni*100)/10;

    if (nf >= 85){
       printf("Conceito A - desempenho excepcional"); 
    } else if (nf >= 70 && nf < 85){
        printf("Conceito B - bom desempenho");
    } else if (nf >= 60 && nf < 70){
        printf("Conceito C - desempenho adequado");
    } else if (nf >= 50 && nf < 60){
        printf("Conceito D - desempenho mínimo");
    } else {
        printf("Conceito F - reprovado");
    }


}