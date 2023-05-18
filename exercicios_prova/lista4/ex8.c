//Quantia ilimitada de numeros. Imprimir quantia, soma e media deles

#include <stdio.h>

int main(){
    int num, qnt_num = 0, soma = 0, media = 0;

    do{
        printf("Digite um numero inteiro (0 para sair): ");
        scanf("%d", &num);

        if (num != 0)
        {
            qnt_num++;
            soma += num;
        }
        
        
    }while (num != 0);
    
    media = soma / qnt_num;

    printf("Quantidade: %d\n", qnt_num);
    printf("Soma: %d\n", soma);
    printf("Media: %d\n", media);

    return 0;
}