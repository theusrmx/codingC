#include <stdio.h>
//Script para calcular a area do circulo utilizando funções
float area_circulo(float raio){
    float resultado;
    float pi = 3.14;

    resultado = pi*(raio*raio);
    return(resultado);
}

int main(){
    float v1, area;

    printf("Insira o raio do circulo: ");
    scanf("%f", &v1);

    area = area_circulo(v1);

    printf("A area do circulo eh: %.2f", area);

    return 0;
}

