/*
Desenvolver um algoritmo que leia um número não determinado de valores e calcule e escreva a média  aritmética  dos  valores  lidos,  
a  quantidade  de  valores  positivos,  a  quantidade  de  valores  negativos e o percentual de valores negativos e positivos. 
*/

#include <stdio.h>

int main(){

    int numero, nmrs_negativos = 0, nmrs_positivos = 0;
    float media, soma = 0, perc_posi, perc_neg;


    do{
        printf("Digite um numero (0 para parar): ");
        scanf("%d", &numero);

        if(numero < 0){
            nmrs_negativos++;
        }else{
            nmrs_positivos++;
        }

        soma += numero;
    }while(numero != 0);

    media = soma / (nmrs_negativos = nmrs_positivos);
    perc_posi = (nmrs_positivos / (nmrs_positivos + nmrs_negativos)) *100;
    perc_neg = (nmrs_negativos / (nmrs_positivos + nmrs_negativos)) *100;


    printf("Media: %.2f\n", soma);
    printf("%i valores positivos\n", nmrs_positivos);
    printf("%i valores negativos\n", nmrs_negativos);
    printf("%i%% dos numeros sao postivos\n", nmrs_positivos);
    printf("%i%% dos numeros sao negativos\n", nmrs_negativos);




    return 0;
}