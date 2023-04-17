#include <stdio.h>

int main(){

/*
    int num;

    // leitura do primeiro número
    printf("Digite um numero inteiro (0 para sair): ");
    scanf("%d", &num);

    // loop para ler a sequência de números
    while (num != 0) {
        // cálculo do quadrado e impressão
        int quadrado = num * num;
        printf("O quadrado de %d eh %d\n", num, quadrado);

        // leitura do próximo número
        printf("Digite outro numero inteiro (0 para sair): ");
        scanf("%d", &num);
    }
*/


/*
    int num, soma = 0;

    //leitura do primeiro número
    printf("Digite um numero inteiro (0 para sair): ");
    scanf("%d", &num);

    //loop
    while (num != 0)
    {
        //numero é incrementado(somado) ao restante dos números
        soma += num;


        // leitura do próximo número
        printf("Digite outro numero inteiro (0 para sair): ");
        scanf("%d", &num);

    }

    //saida final
    printf("A soma total eh %d", soma);
    
    */

   int num, contador = 0;

   printf("Digite um numero inteiro (0 para sair):");
   scanf("%d", &num);

   while (num != 0){
    contador++;
    printf("Digite outro numero inteiro: ");
    scanf("%d", &num);
   }

   printf("A quantidade total de numero eh %d", contador);


    return 0;
}