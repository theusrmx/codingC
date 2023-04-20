/*Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o preço normal de etiqueta  
e  a  escolha  da  condição  de  pagamento.  Utilize  os  códigos  da  tabela  a  seguir  para ler qual a condição de pagamento escolhida e efetuar o cálculo adequado. 


Código Condição de pagamento 
1 À vista em dinheiro ou cheque, recebe 10% de desconto 
2 À vista no cartão de crédito, recebe 15% de desconto 
3 Em duas vezes, preço normal de etiqueta sem juros 
4 Em duas vezes, preço normal de etiqueta mais juros de 10% 
*/

#include <stdio.h>

int main(){

    float preco, desconto, parcelas;
    int formaPgto;

    printf("Insira o preco do produto: ");
    scanf("%f", &preco);

    printf("Qual a forma de pagamento (1 a 4)?: ");
    scanf("%d", &formaPgto);

    switch(formaPgto){
    case 1:
        desconto = preco * 0.1;
        preco = preco - desconto;
        printf("Preco a ser pago: %.2f", preco);
        break;
    case 2:
        desconto = preco * 0.15;
        preco = preco - desconto;
        printf("Preco a ser pago: %.2f", preco);
        break;
    case 3:
        parcelas = preco/2;
        printf("Preco a ser pago: 2 parcelas de %.2f sem juros", parcelas);
        break;
    case 4:
        desconto = preco * 0.1;
        parcelas = (preco + desconto)/2;
        printf("Preco a ser pago: 2 parcelas de %.2f com juros", parcelas);
        break;
    default:
        printf("Erro, tente novamente.");
        break;
}


    return 0;
}