/*
 Elabore um algoritmo que apresente todos os números primos no intervalo de 1 a 50. Um número é
considerado Primo quando ele puder ser dividido exclusivamente por 1 e por ele próprio.
*/

#include <stdio.h>

int main() {
    int i, j, primo;

    for (i = 2; i <= 50; i++) {
        primo = 1; // supõe que o número é primo
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                // se o número for divisível por j, ele não é primo
                primo = 0;
                break;
            }
        }
        if (primo) {
            printf("%d é primo\n", i);
        }
    }

    return 0;
}
