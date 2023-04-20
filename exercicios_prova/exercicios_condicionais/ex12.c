/*
Escreva um algoritmo que leia o número de identificação, as 3 notas obtidas por um aluno nas 3  verificações  e  a  média  dos  exercícios  que  fazem  parte  da  avaliação,  
e  calcule  a  média  de  aproveitamento, usando a fórmula: MA := (nota1 + nota 2 * 2 + nota 3 * 3 + ME)/7 
A atribuição dos conceitos obedece a tabela abaixo. O algoritmo deve escrever o número do aluno, suas  notas,  
a  média  dos  exercícios,  a  média  de  aproveitamento,  o  conceito  correspondente  e  a  mensagem 'Aprovado' se o conceito for A, B ou C, e 'Reprovado' se o conceito for D ou E. 


Média de aproveitamento Conceito 
>= 90 A 
>= 75 e < 90 B 
>= 60 e < 75 C 
>= 40 e < 60 D 
< 40 E 

*/
#include <stdio.h>

int main(){

    int ra;
    float nota1, nota2, nota3, ativ, ma;
    char conceito;

    printf("Digite o RA do aluno: ");
    scanf("%d", &ra);

    printf("Digite as três notas obtidas nas verificações: ");
    scanf("%f%f%f", &nota1, &nota2, &nota3);

    printf("Digite a media das atividades: ");
    scanf("%f", &ativ);

    ma = (nota1 + nota2 * 2 + nota3 * 3 + ativ)/7;

    if(ma > 90){
    conceito = 'A';
    }else if(ma >= 75 && ma <90){
    conceito = 'B';
    }else if(ma >= 60 && ma < 75){
    conceito = 'C';
    }else if(ma >= 40 && ma < 60){
    conceito = 'D';
    }else{
    conceito = 'E';
    }

     // exibe os resultados
    printf("\nNúmero do aluno: %d\n", ra);
    printf("Nota 1: %.1f\n", nota1);
    printf("Nota 2: %.1f\n", nota2);
    printf("Nota 2: %.1f\n", nota3);
    printf("Média dos exercícios: %.1f\n", ativ);
    printf("Média de aproveitamento: %.1f\n", ma);
    printf("Conceito: %c\n", conceito);
    if (conceito == 'A' || conceito == 'B' || conceito == 'C') {
        printf("Situação: Aprovado\n");
    } else {
        printf("Situação: Reprovado\n");
    }


    return 0;
}