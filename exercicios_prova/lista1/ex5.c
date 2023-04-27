/*
Uma dona de casa precisa pagar a empregada doméstica e a babá e quer sair do banco apenas coma quantia necessária para pagá-las. 
O problema é que as funcionárias não podem dar troco,então ela precisa saber quantas notas de cada valor vai precisar para 
efetuar o pagamento.

Por exemplo, para pagar R$510,00 e R$490,00, não é suficiente ter 10 notas de R$100,00; são necessárias 9 notas de R$100,00, 
1 nota de R$50,00, 2 notas de R$20,00 e 1 nota de R$10,00.

Faça um programa que leia o valor dos dois salários e calcule o número de notas necessárias para efetuar os pagamentos. 
A dona de casa não quer andar com moedas nem notas de R$2,00 e os salários devem ser arredondados para cima (um número múltiplo de 5).


*/

#include <stdio.h>

int main(){
    double valor1, valor2, soma;
    int n100, n50, n20, n10, n5, n2;

    printf("Digite o primeiro valor: ");
    scanf("%lf", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%lf", &valor2);
    soma = valor1 + valor2;
    n100 = soma / 100;
    soma = soma - (n100*100);
    n50 = soma / 50;
    soma = soma - (n50*50);
    n20 = soma / 20;
    soma = soma - (n20*20);
    n10 = soma / 10;
    soma = soma - (n10*10);//
    n5 = soma / 5;
    soma = soma - (n5*5);
    n2 = soma / 2;
    soma = soma - (n2*2);
    printf("Notas: %d x R$ 100,00 / %d x R$ 50,00 / %d x R$ 20,00 / %d x R$ 10,00 / %d x R$ 5,00 / %d x R$ 2,00", n100, n50, n20, n10, n5, n2);
    return 0;
}

