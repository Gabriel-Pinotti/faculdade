#include <iostream>
using namespace std;

void troca(int *x, int *y){
    int tempSwap = *x;
    *x = *y;
    *y = tempSwap;
}

void incrementar(int *x, int valor){
    *x+=valor;
}


int main(){

    // ATIVIDADE 2 (continuação de aula9.cpp)
    // 1. Declarar duas variáveis interias A e B inicializadas com valors diferentes e um ponteiro P.
    // 2. Cria uma função void troca(int *x, int *y) que deve trocar os valores de A e B
    //      e uma função void incrementar(int *x, int valor) que deve somar o número valor ao conteúdo da
    //      variável apontada.

    // parte 1
    int a = 2;
    int b = 7;
    int *pda;
    pda = &a;
    int *pdb = &b;

    // parte 2
    // sáida inicial para verificação
    cout << "\nA (end): " << pda << endl;
    cout << "B (end): " << pdb << endl;
    cout << "\nA (val): " << *pda << endl;
    cout << "B (val): " << *pdb << endl;

    // saída trocada pela função
    troca(pda, pdb);
    cout << "\n[Invertendo Valores]\n";
    cout << "\nA (end): " << pda << endl;
    cout << "B (end): " << pdb << endl;
    cout << "\nA (val): " << *pda << endl;
    cout << "B (val): " << *pdb << endl;

    // incrementação com função
    incrementar(pda, 1);
    incrementar(pdb, 2);
    cout << "\n[Incrementando]: [A+1] [B+2]\n";
    cout << "\nA (val): " << *pda << endl;
    cout << "B (val): " << *pdb << endl;




    cout << "\n\n";
    return 0;
}