#include <stdio.h>
#include <ctype.h>

int main()
{
    int fA[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int fB[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int fC[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int continuar=1;
    char selecao[3];
    int selecionando = 0;



    do {


    printf("\nCadeiras disponiveis:\n"); //exibicao
    for (int i=0; i<10; i++) { //A
        fA[i] == 0 ? printf("[A%d]", i+1) : printf("[XX]");
    };
    printf("\n");
    for (int i=0; i<10; i++) { //B
        fB[i] == 0 ? printf("[B%d]", i+1) : printf("[XX]");
    };
    printf("\n");
    for (int i=0; i<10; i++) { //C
        fC[i] == 0 ? printf("[C%d]", i+1) : printf("[XX]");
    };
    printf("\n\nSelecione a cadeira desejada: ");
    scanf("%s", selecao);



    if (selecao[0] != 'A' && selecao[0] != 'B' && selecao[0] != 'C') { //verificacao
        printf("\nEntrada invalida\n");
        printf("Continuar? (1- sim / 0- nao): ");
        scanf("%d", &continuar);
        continue;
    };

    if (isdigit(selecao[2])) {
        int dig1temp = selecao[1]-'0';
        int dig2temp = selecao[2]-'0';
        selecionando = (dig1temp*10) + dig2temp;
    } else {
        selecionando = selecao[1]-'0';
    };
    if (selecionando < 1 || selecionando > 10) {
        printf("\nEntrada invalida\n");
        printf("Continuar? (1- sim / 0- nao): ");
        scanf("%d", &continuar);
        continue;
    };

    switch (selecao[0]) {
        case 'A':
            if (fA[selecionando-1] == 0){
                fA[selecionando-1] = 1;
                printf("\nAssento A%d reservado\n", selecionando);
            } else {printf("\nAssento ocupado");};
            printf("\nContinuar? (1- sim / 0- nao): ");
            scanf("%d", &continuar);
            continue;
        break;

        case 'B':
            if (fB[selecionando-1] == 0){
                fB[selecionando-1] = 1;
                printf("\nAssento B%d reservado\n", selecionando);
            } else {printf("\nAssento ocupado");};
            printf("\nContinuar? (1- sim / 0- nao): ");
            scanf("%d", &continuar);
            continue;
        break;
        case 'C':
            if (fC[selecionando-1] == 0){
                fC[selecionando-1] = 1;
                printf("\nAssento C%d reservado\n", selecionando);
            } else {printf("\nAssento ocupado");};
            printf("\nContinuar? (1- sim / 0- nao): ");
            scanf("%d", &continuar);
            continue;
        break;
    }

    } while (continuar == 1);

}