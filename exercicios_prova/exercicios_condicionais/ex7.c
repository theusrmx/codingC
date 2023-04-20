//Faça  um  algoritmo  que  leia  uma  variável  
//e  some  5  caso  seja  par  ou  some  8  caso  seja  ímpar,imprimir o resultado desta operação.

#include <stdio.h>

int main(){
    
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if(num %2 == 0){
        num = num + 5;
        printf("Somando 5, o numero agora eh %d", num);
    }else{
        num = num + 8;
        printf("Somando 8, o numero agora eh %d", num);
    }

    return 0;
}