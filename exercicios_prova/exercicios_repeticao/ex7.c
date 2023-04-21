/*
Escrever um algoritmo que leia um valor para uma variável N de 1 a 10 e calcule a tabuada de N. 
Mostre a tabuada na forma: 0 x N = 0, 1 x N = 1N, 2 x N = 2N, ..., 10 x N = 10N. 
*/

#include <stdio.h>

int main(){
    system("cls");
    int n, mult;

    printf("Escreva um numero de 1 a 10: ");
    scanf("%d", &n);

    if(n > 0 && n <=10){
        for(int i = 0; i <10; i++){
            mult = i * n;
            printf("%d x %d = %d\n", i, n, mult);
        }
    }else{
        printf("O numero nao esta entre 1 e 10, tente novamente");
    }
}