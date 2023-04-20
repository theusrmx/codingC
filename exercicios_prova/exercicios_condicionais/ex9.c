//Tendo  como  dados  de  entrada  a  altura  e  o  sexo  de  uma  pessoa,  
//construa  um  algoritmo  quecalcule seu peso ideal, utilizando as seguintes fórmulas: ●para homens: (72.7 * h) – 58;●para mulheres: (62.1 * h) – 44.7.

#include <stdio.h>

int main(){

    char sexo;
    float altura, peso;

    printf("Qual seu genero (F ou M)? ");
    scanf(" %c", &sexo);
    printf("Qual a sua altura (em metros)?");
    scanf("%f", &altura);

    if(sexo == 'F'){
        peso = (62.1 * altura) - 44.7;
        printf("Seu peso ideal eh: %.2f", peso);
    }else{
        peso = (72.7 * altura) - 58;
        printf("Seu peso ideal eh: %.2f", peso);
    }
    return 0;

}