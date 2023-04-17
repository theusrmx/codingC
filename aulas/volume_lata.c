#include <stdio.h>

int main(){

    float pi = 3.14159;
    float raio, altura, volume;

    printf("Digite o raio da lata em centimetros: ");
    scanf("%f", &raio);
    printf("Digite a altura da lata em centimetros: ");
    scanf("%f", &altura);

    volume = pi*raio*raio*altura;

    printf("O volume da lata é de %.2f centimetros cubicos.\n", volume);

    return 0;
}
