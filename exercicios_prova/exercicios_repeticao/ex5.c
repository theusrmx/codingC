/*
Faça um algoritmo estruturado que leia uma quantidade não determinada de números positivos.
Calcule a quantidade de números pares e ímpares, a média de valores pares e a média geral dos números lidos. 
O número que encerrará a leitura será zero
*/

#include <stdio.h>

int main(){
    int num, qnt_par = 0, qnt_impar = 0, soma, media_par, media_total;

    do{
        printf("Digite um numero (Digite 0 para sair): ");
        scanf("%d", &num);

        if(num %2 == 0){
            qnt_par++;
            soma += num;
        }else{
            qnt_impar++;
        }

    }while(num != 0);

    media_par = soma / qnt_par;
    media_total = soma / (qnt_par + qnt_impar);

    printf("%d numeros pares.\n", qnt_par);
    printf("Media dos pares: %d.\n", media_par);
    printf("Media total: %d.", media_total);
    
    return 0;
}