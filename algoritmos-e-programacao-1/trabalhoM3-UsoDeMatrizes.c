#include <stdio.h>
#define n_linhas 3
#define n_colunas 3

int main() {
    int escolhaExibicao;
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // declaração inicial da matriz


    // usuário poderá ver: 1- matriz completa, 2- diagonal principal, 3- triângulo superior, 4- triângulo inferior, 5- sair

    do { // tratamento de dados para entrada válida
    printf("Menu:\n1- Matriz Completa\n2- Diagonal Principal\n3- Triangulo Superior\n4- Triangulo Inferior\n5- Sair\nEscolha uma opcao: ");
    scanf("%d", &escolhaExibicao);
    if (!(escolhaExibicao >= 1 && escolhaExibicao <= 5)){
        printf("\n\n\nEntrada invalida, tente novamente\n");
    }
    } while (!(escolhaExibicao >= 1 && escolhaExibicao <= 5));



    switch(escolhaExibicao){
        case 1:
            for (int linha = 0; linha < n_linhas; linha++) { // for para imprimir a matriz COMPLETA
                for (int coluna = 0; coluna < n_colunas; coluna++){
                    printf("   %d", matriz[linha][coluna]);
                };
                printf("\n"); // para exibir a próxima linha
            };
            break;
        case 2:
            







    };





    return 0;
}