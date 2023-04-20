//Escreva um algoritmo que lê dois valores booleanos (lógicos) e então determina se ambos sãoVERDADEIROS ou FALSOS. 

#include <stdio.h>
#include <stdbool.h>

int main(){
    bool valor1, valor2;
 
    printf("Digite o primeiro valor (0 para FALSO ou 1 para VERDADEIRO): ");
    scanf("%d", &valor1);
    
    printf("Digite o segundo valor (0 para FALSO ou 1 para VERDADEIRO): ");
    scanf("%d", &valor2);
    
    if (valor1 && valor2) {
        printf("Ambos valores são VERDADEIROS.\n");
    } else{
        printf("Pelo menos um dos valores é FALSO.\n");
    }

    return 0;
}