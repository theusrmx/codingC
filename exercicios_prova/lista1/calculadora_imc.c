#include <stdio.h>

int main() {
    float peso, altura, imc;
    printf("Digite o seu peso (em kg): ");
    scanf("%f", &peso);
    printf("Digite a sua altura (em metros): ");
    scanf("%f", &altura);
    
    // Cálculo do IMC
    imc = peso / (altura * altura);
    
    printf("Seu IMC é: %.2f\n", imc);
    
    if (imc < 18.5) {
        printf("Você está abaixo do peso.\n");
    } else if (imc < 25) {
        printf("Seu peso está normal.\n");
    } else if (imc < 30) {
        printf("Você está acima do peso.\n");
    } else {
        printf("Você está obeso.\n");
    }
    
    return 0;
}