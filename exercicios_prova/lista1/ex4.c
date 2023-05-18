#include <stdio.h>

int main() {
    float soma, diferenca, x, y;
    printf("SISTEMA DE EQUACOES\n");
    printf("x + y = ");
    scanf("%f", &soma);
    printf("x - y = ");
    scanf("%f", &diferenca);

    x = (soma + diferenca) / 2;
    y = (soma - diferenca) / 2;

    printf("Solucao:\n");
    printf("x = %.6f\n", x);
    printf("y = %.6f\n", y);
    return 0;
}
