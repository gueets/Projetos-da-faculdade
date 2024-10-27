//L02_5 (Desvios condicionais e comandos de laço)

/*número triangular+ = num int positivos menores que um dado inteiro positivo m. 
Por exemplo, 6 = 1 + 2 + 3 e 10 = 1 + 2 + 3 + 4 são números triangulares.

perfeito = seus dividores somados são o numero. Exemplo: 6 = dividores são 1, 2 e 3. 
1+2+3==6
*/
#include <stdio.h>
void main (){ /*era pra ser uma função 
chamada cidade mas acabei nomeando main o arquivo aqui e não consegui rodar com cidade*/
    int cidade;
    printf("Digite o perimetro: ");
    scanf("%d", &cidade);

    //★★calculo perfeito
    int resto = 0;
    int i, j; 
    int y=0; 
    int k = 0;

    for(i=1; i<cidade; i++){  //sabendo os divisores
        resto = cidade%i;
        if (resto == 0){ 
            y+=i;
        }  
    }

    //★★calculo triangular
    for(j=1; k<cidade; j++){
        k+=j;//vai somando até que chegue ao numero da cidade
        if (k==cidade){
            break;// sai quando encontro o meu triangular
        }
    }

    if (y == cidade && k == cidade){
        /*se a soma dos divisores for igual ao da cidade então é perfeito. */
        printf("Paz");
    } else if (y == cidade || k==cidade){
         printf("Pensar");
    } else{
        printf("Atacar");
    }
}