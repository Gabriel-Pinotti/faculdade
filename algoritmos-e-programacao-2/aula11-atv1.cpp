#include <iostream>
#include <cstdlib>
using namespace std;


int main(){

    // crie um programa que:
    //  1. declare um ponteiro para um inteiro (int*)
    //  2. use malloc para alocar dinamicamente memoria suficiente para armazenar um unico inteiro
    //  3. verifique se a alocação foi bem sucedida
    //  4. atribua um valor de sua escolha a esse espaço de memória
    //  5. imprima o valor armazenado usando o ponteiro
    //  6. desaloque a memória alocada com free.


    // etapas 1 e 2;
    int *ponteiro_int = (int*)malloc(sizeof(int));
    // criei um ponteiro com nome, atribui o malloc com sizeof(int), armazenando 1 inteiro

    // etapa 3
    if (ponteiro_int == NULL){
        free(ponteiro_int);
        cout << "\nFalha da alocação de memória\n";
        return 1;
    }

    // etapa 4
    *ponteiro_int = 5465;

    // etapa 5
    cout << "\n-----------ponteiro int com malloc-----------\n" <<
        "Valor: " << *ponteiro_int << " | Endereço: " << ponteiro_int << endl;
        
    // etapa 6
    free(ponteiro_int);


    cout << "\n\n";
    return 0;
}