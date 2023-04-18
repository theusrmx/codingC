#include <stdio.h>

int main(){

    float saldo, salario, retirada;
    int num_retiradas = 0;


    printf("EXTRATO BANCARIO\n");
    printf("Saldo inicial: R$");
    scanf("%f", &saldo);
    printf("Salario: R$");
    scanf("%f", &salario);
    saldo += salario; //salario adicionado ao saldo


    printf("Saldo parcial: R$%.2f\n", saldo);
    while (num_retiradas < 3) { // alteraçoes ao saldo
        printf("%da retirada: R$", num_retiradas+1);
        scanf("%f", &retirada);
        if (retirada > saldo) {
            printf("Nao ha saldo suficiente para essa retirada.\n");
        } else {
            saldo -= retirada;
            num_retiradas++;
            printf("Saldo parcial: R$%.2f\n", saldo);
        }
    }
    printf("Saldo final: R$%.2f\n", saldo);
    return 0;
}

