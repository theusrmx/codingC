#include <stdio.h>
int main() {
    int TAB, NUM, i, resultado;

    printf("Digite um número para a tabuada: ");
    scanf("%d", &TAB);

    printf("Digite o número limite da tabuada: ");
    scanf("%d", &NUM);

    for (i = 1; i <= NUM; i++) {
        resultado = TAB * i;
        printf("%d x %d = %d\n", TAB, i, resultado);
    }

    return 0;
}