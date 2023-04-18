#include <stdio.h>

int main() {
    float soma, diferenca, x, y;
    printf("Digite o valor da soma: ");
    scanf("%f", &soma);
    printf("Digite o valor da diferenca: ");
    scanf("%f", &diferenca);
    
    // Calcula as variáveis x e y
    x = (soma + diferenca) / 2;
    y = (soma - diferenca) / 2;
    
    printf("Solucao:\n");
    printf("x = %.2f\n", x);
    printf("y = %.2f\n", y);
    
    return 0;
}