#include <stdio.h>
/*Nomes
Matheus Ramos Marcolino - 202302376819
Lucas de Souza Pereira - 202303152035*/

//função para calcular a media
float calculo_media(float vetor[], int qnt_alunos){
    float soma = 0, media;

    for (int i = 0; i < qnt_alunos; i++)
    {
        soma += vetor[i];
    }
    
    media = soma/qnt_alunos;

    printf("A media das notas desta sala eh: %.1f", media);

    return media;
    

}

//função para mostrar as notas 
float mostrar_notas(float vetor_notas[],int qnt_alunos){

    for (int i = 0; i < qnt_alunos; i++)
    {
        printf("Nota do aluno(a) %d: %.1f\n", i + 1, vetor_notas[i]); //imprime a nota de cada aluno armazenado na array
    }

    return 0;
    
}


int main(){
    //declaração vetor e variaveis
    int alunos = 0;

    printf("Informe a quantidade de alunos: ");
    scanf("%d", &alunos);

    float vetor_notas[alunos]; //definição de qnt de notas pelo usuario
    
    for (int i = 0; i < alunos; i++)
    {
        printf("Digite a nota do %d aluno(a): ", i + 1);
        scanf("%f", &vetor_notas[i]);//a nota digitada sera armazenada no indice correspondente
    }

    mostrar_notas(vetor_notas, alunos);
    calculo_media(vetor_notas, alunos);

    return 0;
}