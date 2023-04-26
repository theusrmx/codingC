//Imprimir os 20 numeos subsequentes ao inserido

#include <stdio.h>

int main(){

    int numero;

    printf("Digite um numero:" );
    scanf("%d", &numero);
    for (int i = 0; i < 20; i++)
    {
        printf("%d numero: %d\n", i+1, numero++);
    }
    
    return 0;
}
