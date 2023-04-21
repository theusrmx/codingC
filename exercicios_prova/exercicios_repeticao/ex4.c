/*
Escrever um algoritmo que leia uma quantidade desconhecida de números e conte quantos deles
estão  nos  seguintes  intervalos:  [0-25],  [26-50],  [51-75]  e  [76-100].  A  entrada  de  dados  deve  terminar quando for lido um número negativo. 
*/

#include <stdio.h>

int main(){
    system("cls");
    //variaveis
    int numero, contador1 = 0, contador2 = 0, contador3 = 0, contador4 = 0;

    //laço While
    do{
        printf("Escreva um numero (numero negativo para sair): ");
        scanf("%d", &numero);

        //verificando se o numero esta dentro da sequencia
        if(numero >= 0 && numero <= 25) {
            contador1++;
        }else if(numero >= 26 && numero <= 50){
            contador2++;
        }else if(numero >= 51 && numero <= 75){
            contador3++;
        }else if(numero >= 76 && numero <= 100){
            contador4++;
        }else{
            printf("Digite novamente.\n");
        }
    }while(numero >= 0); //saira do laço se o numero for menor que 0

    //saida
    system("cls");
    printf("%d numeros esta entre 0 e 25.\n", contador1);
    printf("%d numeros esta entre 25 e 50.\n", contador2);
    printf("%d numeros esta entre 51 e 75.\n", contador3);
    printf("%d numeros esta entre 76 e 100.\n", contador4);


    return 0;
}