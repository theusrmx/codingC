/*
10) Escreva um algoritmo que calcule a média da seguinte sequência numérica a seguir: 1/2 + 1/3 + 1/4 + 1/5 + 1/6 +... + 1/50, 
Feito isto, o algoritmo deverá apresentar uma lista contendo todos os números da
sequencia que estão acima da média calculada.

*/

#include <stdio.h>

int main(){
    int  quant = 0;
    float soma = 0, media, num;

    for (int i = 2; i <= 50; i++)
    {
        soma+=1.0/i;
        quant++;
    }

    media = soma/quant;
    printf("Media: %.2f\n", media);

    for (int i = 2; i <= 50; i++)
    {
        num = 1.0 / i;
        if( num> media){
            printf("%.2f é maior que a media!\n", num);
        }
    }
    
    return 0;
}