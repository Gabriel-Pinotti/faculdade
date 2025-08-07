#include <stdio.h>
#define n_linhas 3
#define n_colunas 3
#define verdadeiro 1

// usuário poderá ver: 1- matriz completa, 2- diagonal principal, 3- triângulo superior, 4- triângulo inferior, 5- sair

int main() {
    int escolhaExibicao;
    int matriz[3][3] = {{29, 18, 14}, {71, 25, 31}, {23, 25, 83}}; // declaração inicial da matriz
    while (verdadeiro){

    do { // tratamento de dados para entrada válida
    printf("Menu:\n1- Matriz Completa\n2- Diagonal Principal\n3- Triangulo Superior\n4- Triangulo Inferior\n5- Sair\nEscolha uma opcao: ");
    scanf("%d", &escolhaExibicao);
    if (!(escolhaExibicao >= 1 && escolhaExibicao <= 5)){
        printf("\n\n\nEntrada invalida, tente novamente\n");
    }
    } while (!(escolhaExibicao >= 1 && escolhaExibicao <= 5));

    printf("\n\n\n");
    switch(escolhaExibicao){
        case 1:
            for (int linha = 0; linha < n_linhas; linha++) { // for para imprimir a matriz COMPLETA
                for (int coluna = 0; coluna < n_colunas; coluna++){
                    printf("   %d", matriz[linha][coluna]);
                };
                printf("\n"); // para exibir a próxima linha
            };
            continue;
        case 2:
            for (int linha =0; linha < n_linhas; linha++){ // for para imprimir a DIAGONAL PRINCIPAL
                for (int coluna=0; coluna < n_colunas; coluna++){
                    if(coluna == linha){
                        printf("   %d", matriz[linha][coluna]);
                    } else {
                        printf("   --");
                    };
                };
                printf("\n");
            };
            continue;
        case 3:
            for (int linha =0; linha < n_linhas; linha++){ // for para imprimir o TRIANGULO SUPERIOR
                for (int coluna=0; coluna < n_colunas; coluna++){
                    if(coluna > linha){
                        printf("   %d", matriz[linha][coluna]);
                    } else {
                        printf("   --");
                    };
                };
                printf("\n");
            };
            continue;
        case 4:
            for (int linha =0; linha < n_linhas; linha++){ // for para imprimir o TRIANGULO INFERIOR
                for (int coluna=0; coluna < n_colunas; coluna++){
                    if(coluna < linha){
                        printf("   %d", matriz[linha][coluna]);
                    } else {
                        printf("   --");
                    };
                };
                printf("\n");
            };
            continue;
        case 5:
            return 0;
    };
};
    return 0;
}