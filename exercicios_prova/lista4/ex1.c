//Soma de 100 numeros inteiros quaisquer
#include <stdio.h>


    int main(){

    int num, soma = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero qualquer (%d de 100):", i + 1);
        scanf("%d", &num);

        soma += num;
    }

    system("cls");
    printf("Soma dos numeros inseridos: %d", soma);

    return 0;
}
   
    



