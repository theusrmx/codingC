#include <stdio.h>


float calculo_media(float vetor[], int qnt_alunos){ //parametros será um vetor e a quantia de alunos
    float soma = 0, media;

    for (int i = 0; i < qnt_alunos; i++)
    {
        soma += vetor[i];
    } //irá ler todas os vetores e soma-los a cada leitura
    
    
    media = soma/qnt_alunos; //calculo da media

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

    calculo_media(vetor_notas, alunos); //chamando a função que a realiza o calculo da média, colocando meu array e a quantia de alunos nos parametros solicitados

    return 0;
}



    



