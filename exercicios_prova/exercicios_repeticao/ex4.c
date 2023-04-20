/*
Escrever um algoritmo que leia uma quantidade desconhecida de números e conte quantos deles
estão  nos  seguintes  intervalos:  [0-25],  [26-50],  [51-75]  e  [76-100].  A  entrada  de  dados  deve  terminar quando for lido um número negativo. 
*/

#include <stdio.h>

int main(){
    int numero, contador = 0;

    do{
        printf("Escreva um numero (numero negativo para sair): ");
        scanf("%d", &numero);

        if(numero >= 0 && numero <= 25 || numero >= 26 && numero <= 50 || numero >= 51 && numero <= 75 || numero >= 76 && numero <= 100){
            contador++;
        }
    }while(numero >= 0);

    if(contador == 1){
        printf("1 número está dentro dos intervalos!");
    }else{
        printf("%d números estão dentro dos intervalos!", contador);
    }

    return 0;
}