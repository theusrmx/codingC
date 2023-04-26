    //Pedir dois numeros (inicial e final) e calcular a soma de todos os numeros neste intervalo

#include <stdio.h>

int main(){
    int inicio, fim, soma = 0;

    printf("Digite o numero inicial: ");
    scanf("%d", &inicio);
    printf("Digite o numero final: ");
    scanf("%d", &fim);

    for (int i = inicio; i <= fim; i++)
    {
        soma += i;
    }
    
     printf("SOMA: %d\n", soma);


    return 0;
}