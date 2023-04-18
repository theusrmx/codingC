#include <stdio.h>

int main(){
    int num1, num2;

    printf("Escreva um numero: ");
    scanf("%d", &num1);  
    printf("\nEscreva outro numero: ");
    scanf("%d", &num2);  

    int soma = num1 + num2;
    int sub = num1 - num2;
    int div = num1 / num2;
    int mult = num1 * num2;
    int resto = num1 % num2;

    printf("\n%d + %d = %d", num1, num2, soma);
    printf("\n%d - %d = %d", num1, num2, sub);
    printf("\n%d * %d = %d", num1, num2, mult);
    printf("\n%d / %d = %d", num1, num2, div);
    printf("\n%d %% %d = %d", num1, num2, resto);





    return 0;
}