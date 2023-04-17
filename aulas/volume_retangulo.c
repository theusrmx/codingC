#include <stdio.h>

int main(){

    float volume, comprimento, largura, altura;

    printf("Digite o comprimeto do retangulo em centimetros: ");
    scanf("%f", &comprimento);
    printf("Digite a largura do retangulo em centimetros: ");
    scanf("%f", &largura);
    printf("Digite a altura do retangulo em centimetros: ");
    scanf("%f", &altura);

    volume = comprimento*largura*altura;

    printf("O volume do retangulo é de %.2f centimetros cubicos.\n", volume);

    return 0;
}
