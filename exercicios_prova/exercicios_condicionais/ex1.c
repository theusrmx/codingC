//Faça um algoritmo que leia os valores A, B, C e imprima na tela se a soma de A + B é menorque C. 

#include <stdio.h>

int main(){

    int a, b, c;

    printf("Escreva um numero: ");
    scanf("%d", &a);
    printf("\nEscreva um numero: ");
    scanf("%d", &b);
    printf("\nEscreva um numero: ");
    scanf("%d", &c);

    int soma = a + b;

    if(soma < c){
        printf("A soma de A e B eh menor que C");
    }else{
        printf("A soma de A e B eh maior que C.");
    }

    return 0;
}