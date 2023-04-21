//Escreva  um  algoritmo  que  leia  um  valor  inicial  A  e  uma  razão  R  e  imprima  uma  seqüência  em P.A. contendo 10 valores. 

#include <stdio.h>

int main() {
    int primeiro_termo, razao, termo_atual, i;

    printf("Digite o primeiro termo da PA: ");
    scanf("%d", &primeiro_termo);

    printf("Digite a razao da PA: ");
    scanf("%d", &razao);

    termo_atual = primeiro_termo;

    printf("Os 10 primeiros termos da PA sao:\n");

    for (i = 0; i < 10; i++) {
        printf("%d ", termo_atual);
        termo_atual += razao;
    }

    return 0;
}
