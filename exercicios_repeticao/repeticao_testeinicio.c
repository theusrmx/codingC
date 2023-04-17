#include <stdio.h>

int main(){

/*

    //Quadrado dos numeros inseridos
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


    //Soma de todos os numeros inseridos
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
    

    //Qnt de numeros

   int num, contador = 0;

   printf("Digite um numero inteiro (0 para sair):");
   scanf("%d", &num);

   while (num != 0){
    contador++;
    printf("Digite outro numero inteiro: ");
    scanf("%d", &num);
   }

   printf("A quantidade total de numero eh %d", contador);



    // Média de números
    int num, contaMedia = 0, media, soma = 0 ; 

    printf("Digite um numero inteiro (0 para sair): \n");
    scanf("%d", &num);

    while(num != 0){
        contaMedia++;
        soma += num;
        printf("Digite um numero inteiro (0 para sair): \n");
        scanf("%d", &num);
    }

    media = soma/contaMedia;
    printf("A media aritmetica dos numeros eh: %d", media);

    return 0;

     */

    //Calculo de algarismos de um numero
    int numero, soma = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    while(numero > 0) {
        int digito = numero % 10; //se obtem um digito por divisao por 10, pegando o resto dela
        soma += digito;
        numero /= 10;
    }

   
        printf("A soma dos algarismos eh: %d", soma);

    return 0;



}