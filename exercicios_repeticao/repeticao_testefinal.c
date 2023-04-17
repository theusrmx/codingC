#include <stdio.h>


int main(){
 int i = 1, numero, quadrado;

    do {
        printf("Digite um número inteiro (%d de 100): ", i);
        scanf("%d", &numero);

        quadrado = numero * numero;

        printf("O quadrado de %d é: %d\n", numero, quadrado);

        i++;
    } while (i <= 100);
    
    return 0;
}


