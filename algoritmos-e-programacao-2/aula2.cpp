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

#define colunas 5
#define linhas 5

int linha_atual = 0;
while (linha_atual < linhas) {

    int coluna_atual = 0;
    while (coluna_atual < colunas){

        int aleatorio = rand()%10;
        matriz[linha_atual][coluna_atual] = aleatorio;
        ++coluna_atual;
    }

    ++linha_atual;
};

linha_atual = 0;
while (linha_atual < linhas) {

    int coluna_atual = 0;
    while (coluna_atual < colunas){        

        cout << matriz[linha_atual][coluna_atual] << " ";
        ++coluna_atual;
    }
    cout << endl;

    ++linha_atual;
};

return 0;
}