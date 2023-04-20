/*
Desenvolver um algoritmo que efetue a soma de todos os números ímpares que são múltiplos de três e que se encontram no conjunto dos números de 1 até 500. 
*/

#include <stdio.h>

int main(){

    int soma;

    for(int i = 1; i <= 500; i++){
        if (i % 3 == 0){
            soma += i;
        }
    }

    printf("Soma dos multiplos de 3: %d", soma);

    return 0;

}