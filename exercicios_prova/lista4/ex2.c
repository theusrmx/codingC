//Fatorial

#include <stdio.h>

int main() {
    int num, i, fact = 1;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);
    
    // cálculo do fatorial
    for(i = 1; i <= num; i++) {
        fact *= i;
    }
    
    // impressão da expressão do fatorial
    printf("%d! = ", num);
    for(i = num; i >= 1; i--) {
        printf("%d", i);
        if(i > 1) {
            printf(" x ");
        }
    }
    printf(" = %d\n", fact);

    return 0;
}
