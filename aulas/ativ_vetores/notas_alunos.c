#include <stdio.h>


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


int main(){
    //declarção vetor e variaveis
    int alunos = 0;
    
    printf("Informe a quantidade de alunos: ");
    scanf("%d", &alunos);

    float vetor_notas[alunos]; //definição de qnt de notas pelo usuario

    for (int i = 0; i < alunos; i++)
    {
        printf("Digite a nota do %d aluno(a): ", i + 1);
        scanf("%f", &vetor_notas[i]);//a nota digitada sera armaznada no indice correspondente
    }

    calculo_media(vetor_notas, alunos);

    return 0;
}



    



