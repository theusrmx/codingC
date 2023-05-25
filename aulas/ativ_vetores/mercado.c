#include <stdio.h>

#define MAX_PRODUTOS 10 //define o maximo de meses e produtos
#define MAX_MESES 12

//Função para inserir as vendas de cada produto, em cada mês
void inserirVendas(int matriz[MAX_PRODUTOS][MAX_MESES], int produtos, int meses){
    for (int i = 0; i < produtos; i++) { //FOR PARA LINHA
        for (int j = 0; j < meses; j++) { //FOR PARA COLUNA
            printf("Insira a quantidade de vendas do Produto %d no Mês %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

//Função que exibira todas as vendas de um mês escolhido pelo usuario
void exibirVendasMes(int matriz[MAX_PRODUTOS][MAX_MESES], int produtos, int meses){
    int mes;
    printf("Insira o número do mês: "); //entrada do mês
    scanf("%d", &mes);

    //se o numero existir na matriz
    if (mes >= 1 && mes <= meses) {
        printf("Vendas do Mês %d:\n", mes);
        for (int i = 0; i < produtos; i++) {
            printf("Produto %d: %d\n", i+1, matriz[i][mes-1]); //imprime todos os produtos que foram vendidos no mês.
        }
    } else {
        printf("Mês inválido!\n"); //caso contrário, o programa voltara ao menu.
    }
}

//Função para exibir as vendas de determinado produto.
void exibirVendasProduto(int matriz[MAX_PRODUTOS][MAX_MESES], int produtos, int meses){
 int produto;
 int soma = 0;
    printf("Insira o número do produto: "); //entrada do produto
    scanf("%d", &produto);

    if (produto >= 1 && produto <= produtos) {
        printf("Vendas do Produto %d:\n", produto);
        for (int j = 0; j < meses; j++) {
            printf("Mês %d: %d\n", j+1, matriz[produto-1][j]); //imprimir as vendas do produto em cada mês.
            soma += matriz[produto-1][j]; //adiciono o valor do indice na variavel soma para exibir o total de produtos vendidos no periodo
        }

        printf("Total de vendas: %d", soma); //imprime o total de vendas
        
    } else {
        printf("Produto inválido!\n");
    }

}

void criarMatriz(int *produtos, int *meses) { //* = ponteiro, que é uma variável que armazena o endereço de memória de outra variável.
    printf("Informe o número de produtos: ");
    scanf("%d", produtos);
    printf("Informe o número de meses: ");
    scanf("%d", meses);

    if (*produtos <= 0 || *meses <= 0 || *produtos > MAX_PRODUTOS || *meses > MAX_MESES) {
        printf("Valores inválidos!\n");
    }
}


int main(){

    int matriz_vendas[MAX_PRODUTOS][MAX_MESES];
    int opcao, produtos, meses;

    criarMatriz(&produtos, &meses); //& salvando o valor em minha variavel.
    inserirVendas(matriz_vendas, produtos, meses);

    //MENU//
    do {
        printf("\nSelecione uma opção:\n");
        printf("1. Exibir informações de vendas de um produto específico\n");
        printf("2. Exibir informações de vendas de um determinado mês\n");
        printf("3. Recadastrar vendas\n");
        printf("0. Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                exibirVendasProduto(matriz_vendas, produtos, meses);
                break;
            case 2:
                exibirVendasMes(matriz_vendas, produtos, meses);
                break;
            case 3:
                //entrada de mes e produtos
                criarMatriz(&produtos, &meses);

                //inserir vendas na matriz
                inserirVendas(matriz_vendas, produtos, meses);
                break;
            case 0:
                printf("Programa encerrado.\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}