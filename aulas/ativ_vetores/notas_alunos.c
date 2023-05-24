#include <stdio.h>
/*Nomes
Matheus Ramos Marcolino - 202302376819
Lucas de Souza Pereira - 202303152035*/

<<<<<<< HEAD
//função para calcular a media
float calculo_media(float vetor[], int qnt_alunos){
=======

float calculo_media(float vetor[], int qnt_alunos){ //parametros será um vetor e a quantia de alunos
>>>>>>> 8457156eb46b78f97fb49f14ae6ef6002bce4a89
    float soma = 0, media;

    for (int i = 0; i < qnt_alunos; i++)
    {
        soma += vetor[i];
    } //irá ler todas os vetores e soma-los a cada leitura
    
<<<<<<< HEAD
    media = soma/qnt_alunos;
=======
    
    media = soma/qnt_alunos; //calculo da media
>>>>>>> 8457156eb46b78f97fb49f14ae6ef6002bce4a89

    printf("A media das notas desta sala eh: %.1f", media);

    return media;
    

}

<<<<<<< HEAD
//função para mostrar as notas 
float mostrar_notas(float vetor_notas[],int qnt_alunos){

    for (int i = 0; i < qnt_alunos; i++)
    {
        printf("Nota do aluno(a) %d: %.1f\n", i + 1, vetor_notas[i]); //imprime a nota de cada aluno armazenado na array
    }

    return 0;
    
}


=======
>>>>>>> 8457156eb46b78f97fb49f14ae6ef6002bce4a89
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

<<<<<<< HEAD
    mostrar_notas(vetor_notas, alunos);
    calculo_media(vetor_notas, alunos);
=======
    calculo_media(vetor_notas, alunos); //chamando a função que a realiza o calculo da média, colocando meu array e a quantia de alunos nos parametros solicitados
>>>>>>> 8457156eb46b78f97fb49f14ae6ef6002bce4a89

    return 0;
}