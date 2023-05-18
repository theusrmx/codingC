//Potenciação com laço de repetição

#include <stdio.h>

int main(){
    int x, y, resultado = 1;

    printf("Digite a base: ");
    scanf("%d", &x);
    printf("Digite o expoente: ");
    scanf("%d", &y);

    for (int i = 0; i < y; i++)
    {
        resultado *= x;
    }

    printf("%d^%d = % d", x, y, resultado);

    return 0;
    
}