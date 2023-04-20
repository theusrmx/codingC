//Faça um algoritmo que leia 1 nmr e diga se eles sao par ou impar

#include <stdio.h>

int main(){
    
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if(num %2 == 0){
        printf("%d eh um numero par!", num);
    }else{
        printf("%d eh um numero impar!", num);
    }

    return 0;
}