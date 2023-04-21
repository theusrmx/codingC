//Escreva um algoritmo que leia um valor inicial A e imprima a seqüência de valores do cálculo de A! e o seu resultado. Ex: 5! = 5 X 4 X 3 X 2 X 1 = 120

#include <stdio.h>

int main() {
    int A, i, fat=1;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("%d! = ", A);
    for (i = A; i >= 1; i--) {
        fat *= i;
        printf("%d ", i);
        if (i != 1) {
            printf("X ");
        }
    }

    printf("= %d\n", fat);

    return 0;
}