//Escreva  um  algoritmo  que  leia  um  valor  inicial  A  e  uma  razão  R  e  imprima  uma  seqüência  emP.G. contendo 10 valores. 

#include <stdio.h>

int main() {
    int primeiro_termo, razao, termo_atual, i;

    printf("Digite o primeiro termo da PG: ");
    scanf("%d", &primeiro_termo);

    printf("Digite a razao da PG: ");
    scanf("%d", &razao);

    termo_atual = primeiro_termo;

    printf("Os 10 primeiros termos da PG sao:\n");

    for (i = 0; i < 10; i++) {
        printf("%d ", termo_atual);
        termo_atual = razao * termo_atual;
    }

    return 0;
}
