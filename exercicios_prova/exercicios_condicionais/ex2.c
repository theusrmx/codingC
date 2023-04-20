//Faça um algoritmo que leia o nome, o sexo e o estado civil de uma pessoa. 
//Caso sexo seja “F” eestado civil seja “CASADA”, solicitar o tempo de casada (anos). 

#include <stdio.h>
#include <string.h>

int main(){
    char nome[20], estadoCivil[20], genero;
    int tempoCasada;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("%s, qual seu genero (F ou M)? ", nome);
    scanf(" %c", &genero);//colocamos o espaço no %c para evitar que ele nao leia a quebra de linha ao inves do imput do usuario

    printf("%s, qual seu estado civil? ", nome);
    scanf("%s", estadoCivil);

    if(genero == 'F' && strcmp(estadoCivil, "CASADA") == 0){
        printf("\nA quanto tempo voce eh casada?");
        scanf("%d", &tempoCasada);
        printf("\nCadastro completo 1.");
    }else{
        printf("\nCadastro completo. 2");
    }

    return 0;

}