//Escreva um algoritmo que lê dois valores booleanos (lógicos) e então determina se ambos são VERDADEIROS ou FALSOS. 

#include <stdio.h>
#include <stdbool.h>

int main(){

    system("cls");

    //"gambiarra" com int
    int bool1, bool2;
    //Entrada de dados
    printf("Digite o primeiro valor (0 para FALSO ou 1 para VERDADEIRO): ");
    scanf("%d", &bool1);
    
    printf("Digite o segundo valor (0 para FALSO ou 1 para VERDADEIRO): ");
    scanf("%d", &bool2);

/*
    if(bool1 != 0 && bool2 != 0){//se ambos valores forem igual a 1, ambos são verdadeiros
        system("cls");
        system("color a");
        printf("Ambos valores são VERDADEIROS.\n");
    }else if(bool1 == 0 && bool2 == 0){
        system("cls");
        system("color c");
        printf("Ambos valores são FALSOS.\n");//se ambos valores forem igual a 0, ambos são falsos
    }else{
        system("cls");
        system("color c");
        printf("Pelo menos um dos valores é FALSO.\n");//valores diferentes.
    }
*/
    
    if(bool1 && bool2){
        system("cls");
        system("color a");
        printf("Ambos sao VERDADEIROS\n");
    }else{
        system("cls");
        system("color c");
        printf("Ambos sao FALSOS");
    }
    

/*
   //utilizando boolean
   int valor1, valor2;
   bool bool1 = true, bool2 = false;

    printf("Digite o primeiro valor (0 ou 1): ");
    scanf("%d", &valor1);
    
    printf("Digite o segundo valor (0 ou 1): ");
    scanf("%d", &valor2);


    if(valor1 == bool1 && valor2 == bool1){//se ambos valores forem igual a 1, ambos são verdadeiros
        printf("Ambos valores são VERDADEIROS.\n");
    }else if(valor1 == bool2 && valor2 == bool2){
        printf("Ambos valores são FALSOS.\n");//se ambos valores forem igual a 0, ambos são falsos
    }else{
        printf("Pelo menos um dos valores é FALSO.\n");//valores diferentes.
    }
*/


   return 0;
}