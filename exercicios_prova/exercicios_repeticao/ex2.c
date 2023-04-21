/*
Desenvolver  um  algoritmo  que  leia  a  altura  de  15  pessoas.  
Este  programa  deverá  calcular  emostrar : a. A menor altura do grupo; b. A maior altura do grupo;
*/

#include <stdio.h>

int main(){
    float altura, maior_altura, menor_altura;
    printf("Digite a altura de 15 pessoas:\n");

    // ler altura da primeira pessoa para inicializar menor e maior altura
    scanf("%f", &altura);
    menor_altura = altura;
    maior_altura = altura;

    // ler as alturas das próximas 14 pessoas e atualizar menor e maior altura se necessário
    for (int i = 1; i < 15; i++) {
        printf("Altura da %d pessoa: ", i + 1);
        scanf("%f", &altura);

        if (altura < menor_altura) {
            menor_altura = altura;
        }
        if (altura > maior_altura) {
            maior_altura = altura;
        }
    }

    printf("A menor altura do grupo eh %.2f\n", menor_altura);
    printf("A maior altura do grupo eh %.2f\n", maior_altura);

    return 0;


}
