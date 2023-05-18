//Pedir um intervalo ao user e ver os numeros pares e maiores que 10 neste intervalo

#include <stdio.h>

int main(){
    int inicio, fim;

    printf("Primeiro numero: ");
    scanf("%d", &inicio);
    printf("Ultimo numero: ");
    scanf("%d", &fim);

    for (int i = inicio; i < fim; i++)
    {
        if (i % 2 == 0 && i > 10)
        {
            printf("%d eh par e maior que 10\n", i);
        }
        
    }
    return 0;
}