#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    // crie um programa que simule a entrada de dados de um usuário sem saber a quantidade de antemão. o programa deve:
    //  1. começar com um array dinâmico com capacidade inicial de 2 inteiros
    //  2. em um laço, pergunte ao usuário por um número. digitar 0 deve encerrar a entrada
    //  3. a cada número inserido, se a capacidade do array for atingida, use realloc para dobrar o tamanho do arrray
    //  4. armazene o número no array
    //  5. ao final da entrada, imprima todos os números armazenados no array e, por fim, libere a memória

    // etapa 1
    int *listaint = (int*)malloc(2 * sizeof(int));

    int capacidade = 2;
    int numentradas = 0;
    int tempentrada;
    while(true){
        // etapa 2
        cout << "\nDigite um número: ";
        cin >> tempentrada;
        if (tempentrada == 0){
            break;
        }
        // etapa 4
        listaint[numentradas] = tempentrada;
        numentradas++;
        // etapa 3
        if (numentradas == capacidade){
            capacidade*=2;
            listaint = (int*)realloc(listaint, capacidade* sizeof(int));
        }
    }

    // etapa 5.1
    for (int i = 0; i < numentradas; i++){
        cout << listaint[i] << " ";
    }

    // etapa 5.2
    free(listaint);
    cout << "\n\n";
    return 0;
}