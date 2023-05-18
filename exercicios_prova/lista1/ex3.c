#include <stdio.h>

int main(){
    float saldo_inicial, salario, saque, parcial;

    printf("Digite o saldo inicial: ");
    scanf("%f", &saldo_inicial);
    printf("Digite seu salário: ");
    scanf("%f", &salario);
    parcial = saldo_inicial + salario;

    for (int i = 1; i <= 3; i++)
    {
        printf("\nRetirada %d: ", i);
        scanf("%f", &saque);
        parcial -= saque;

    if(i != 3){
        printf("\nSaldo parcial: %.1f", parcial);
    }
    }


    printf("\nSaldo final: %.1f", parcial);
    
}