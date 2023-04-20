//Escreva  um  algoritmo  que  leia  três  valores  inteiros  e  diferentes  e  mostre-os  em  ordem decrescente.

#include <stdio.h>

int main() {
    int a, b, c;

    // Lê três números
    printf("Digite três números: ");
    scanf("%d %d %d", &a, &b, &c);

    // Ordena os números em ordem decrescente
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }

    if (a < c) {
        int temp = a;
        a = c;
        c = temp;
    }

    if (b < c) {
        int temp = b;
        b = c;
        c = temp;
    }

    // Imprime os números em ordem decrescente
    printf("%d, %d, %d\n", a, b, c);

    return 0;
}
