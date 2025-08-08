#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {

// crie uma matriz [5][5] com valores aleatorios
// soma dos elementos da linha 2
// soma dos elementos da coluna 4
// soma dos elementos da diagonal principal
// soma dos elementos da diagonal secundaria
// soma dos elementos de toda a matriz

int matriz[5][5];
srand(time(0));
int escolha_funcao = 0;


#define colunas 5
#define linhas 5

// criar

int linha_atual = 0;
while (linha_atual < linhas) {

    int coluna_atual = 0;
    while (coluna_atual < colunas){

        int aleatorio = rand()%21;
        matriz[linha_atual][coluna_atual] = aleatorio;
        ++coluna_atual;
    }

    ++linha_atual;
};

// imprimir

linha_atual = 0;
while (linha_atual < linhas) {

    int coluna_atual = 0;
    while (coluna_atual < colunas){        

        cout << matriz[linha_atual][coluna_atual] << "\t";
        ++coluna_atual;
    }
    cout << endl;

    ++linha_atual;
};


// selecionar função

cout <<  endl << "   O que deseja fazer?" << endl << "1- Soma dos itens da linha 2" << endl << "2- Soma dos itens da coluna 4" << endl << "3- Soma dos itens da DP";
cout << endl << "4- Soma dos itens da DS" << endl << "5- Soma de todos os itens da matriz" << endl << endl << "Resposta: ";
cin >> escolha_funcao;

cout << endl << endl;


int tempSoma = 0;
switch (escolha_funcao) {
    case 1:
        tempSoma = 0;
        for(int i = 0; i < 5; ++i) {
            tempSoma += matriz[1][i];
        };
        cout << tempSoma << endl;
        break;

    case 2:
        tempSoma = 0;
        for(int i = 0; i < 5; ++i) {
            tempSoma += matriz[i][3];
        };
        cout << tempSoma << endl;        
        break;

    case 3:
        tempSoma = 0;
        linha_atual = 0;
        while (linha_atual < linhas) {
            int coluna_atual = 0;
            while (coluna_atual < colunas){        
                if (linha_atual == coluna_atual) {
                    tempSoma += matriz[linha_atual][coluna_atual];
                };
                ++coluna_atual;
            }
            ++linha_atual;
        };
        cout << tempSoma << endl;
        break;


}


return 0;
}