//Encontrar  o  dobro  de  um  número  caso  ele  seja  positivo  e  o  seu  triplo  caso  seja  negativo,imprimindo o resultado

#include <stdio.h>

int main(){
    int num;

    printf("Insira um numero: ");
    scanf("%d", &num);

    if(num > 0){
        num = num*2;
        printf("O dobro deste numero eh: %d", num);
    }else{
        num = num*3;
        printf("O triplo deste numero eh: %d", num);
    }

    return 0;
}