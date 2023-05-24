#include <stdio.h>

#define MAX_PRODUTOS 10 //define o maximo de meses e produtos
#define MAX_MESES 12


void inserir_vendas(int matriz[MAX_PRODUTOS][MAX_MESES], int produtos, int meses){
    for (int i = 0; i < produtos; i++) { //FOR PARA LINHA
        for (int j = 0; j < meses; j++) { //FOR PARA COLUNA
            printf("Insira a quantidade de vendas do Produto %d no Mês %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void exibir_vendas_mes(int matriz[MAX_PRODUTOS][MAX_MESES], int produtos, int meses){
    for (int i = 0; i < produtos; i++){
        for (int j = 0; j <meses; j++){
            
        }
    }
}

void exibir_vendas_produto(){

}


int main(){
    int matriz_vendas[MAX_PRODUTOS][MAX_MESES];

     int opcao, produtos, meses;

    printf("Informe o número de produtos: ");
    scanf("%d", &produtos);
    printf("Informe o número de meses: ");
    scanf("%d", &meses);

    //verificação de valores inseridos confere com o maximo estabelecido
    if (produtos <= 0 || meses <= 0 || produtos > MAX_PRODUTOS || meses > MAX_MESES) {
        printf("Valores inválidos!\n");
        return 0;
    }

    inserir_vendas(matriz_vendas, produtos, meses);

}