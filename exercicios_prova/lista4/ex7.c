/*
Elabore um algoritmo que solcite que o usuario digite 100 numeros quaisquer.
Ao final apresemte separadamente:
a - soma dos numeros pares que existirem entre o 1 numero ate o 50
v - soma dos numeros impares que existirem entre o 51 numero ate o 100

*/

#include <stdio.h>

int main(){


    int numero, somaImpares = 0, somaPares = 0;

    //leitura do primero numero
    printf("Digite um número (1 de 100): ");
    scanf("%d", &numero);

    for (int i = 1; i < 100; i++)
    {
        printf("Digite um número (%d de 100): ", i);
        scanf("%d", &numero);


        if(i <=50){
            if(numero %2 == 0){
                somaPares += numero;
            }
        }else{
            if(numero %2 != 0){
                somaImpares += numero;
            }
        }
        
        
    }

    system("cls");
    system("color b");
    printf("Soma de pares: %d\n", somaPares);
    printf("Soma de impares: %d\n", somaImpares);

    



}