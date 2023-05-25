#include <stdio.h>

#define MAX_PRODUTOS 10 //define o maximo de meses e produtos
#define MAX_MESES 12


void inserirVendas(int matriz[MAX_PRODUTOS][MAX_MESES], int produtos, int meses){
    for (int i = 0; i < produtos; i++) { //FOR PARA LINHA
        for (int j = 0; j < meses; j++) { //FOR PARA COLUNA
            printf("Insira a quantidade de vendas do Produto %d no Mês %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void exibirVendasMes(int matriz[MAX_PRODUTOS][MAX_MESES], int produtos, int meses){
    for (int i = 0; i < produtos; i++){
        for (int j = 0; j <meses; j++){
             
        }
    }
}

void exibirVendasProduto(int matriz[MAX_PRODUTOS][MAX_MESES], int produtos, int meses){
 int produto;
    printf("Insira o número do produto: ");
    scanf("%d", &produto);

    if (produto >= 1 && produto <= produtos) {
        printf("Vendas do Produto %d:\n", produto);
        for (int j = 0; j < meses; j++) {
            printf("Mês %d: %d\n", j+1, matriz[produto-1][j]);
        }
    } else {
        printf("Produto inválido!\n");
    }

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

    do {
        printf("\nSelecione uma opção:\n");
        printf("1. Inserir vendas dos produtos.");
        printf("2. Exibir informações de vendas de um produto específico\n");
        printf("3. Exibir informações de vendas de um determinado mês\n");
        printf("0. Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                inserirVendas(matriz_vendas, produtos, meses);
                break;
            case 2:
                exibirVendasProduto(matriz_vendas, produtos, meses);
                break;
            case 3:
                exibirVendasMes(matriz_vendas, produtos, meses);
                break;
            case 0:
                printf("Programa encerrado.\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (opcao != 0);
}