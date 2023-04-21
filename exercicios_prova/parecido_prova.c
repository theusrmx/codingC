/*
Façam um códig que leia a altura, em centimetros, de 20 pessoas. Este programa devera identificar a maior e menor altura usando:
a) estrutura de repetição controlada (For)
b)Estrutura de repetição nao controlada (while)
*/

#include <stdio.h>

int main(){
    float altura, maior_altura, menor_altura;
    int contador = 1;
    printf("Digite a altura de 20 pessoas:\n");

    // ler altura da primeira pessoa para inicializar menor e maior altura
    scanf("%f", &altura);
    menor_altura = altura;
    maior_altura = altura;

/*
    // ler as alturas das próximas 19 pessoas e atualizar menor e maior altura se necessário
    for (int i = 1; i < 20; i++) {
        printf("Altura da %d pessoa: ", i + 1);
        scanf("%f", &altura);

        if (altura < menor_altura) {
            menor_altura = altura;
        }
        if (altura > maior_altura) {
            maior_altura = altura;
        }
    }

*/

    while (contador <= 20)
    {
         printf("Altura da %d pessoa: ", contador + 1);
        scanf("%f", &altura);

        if (altura < menor_altura) {
            menor_altura = altura;
        }
        if (altura > maior_altura) {
            maior_altura = altura;
        }
        contador++;
    }
    

    printf("A menor altura do grupo eh %.2f\n", menor_altura);
    printf("A maior altura do grupo eh %.2f\n", maior_altura);

    return 0;


}
