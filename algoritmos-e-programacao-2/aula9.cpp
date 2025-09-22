#include <iostream>
using namespace std;

void dobrarValor(int *n){
    *n *=2;
    return;
}

int main(){
    // ponteiros: variáveis que o valor é o endereço de outra variável
    // essenciais para passagem de parâmetros por referência, gerenciamento de memória, estruturas dinâmicas etc.

    // // exemplo:
    // int a = 10;
    // int *p = &a;
    // a = 15;
    // cout << *p << endl; (a saída é 15)

    // int numeros[5] = {1, 2, 3, 4, 5};
    // int *p = numeros;
    // cout << "endereço inicial: " << p << endl; (a saída é o endereço de numeros[0])
    // cout << "valor inicial: " << *p << endl; (a saída é o valor de numeros[0])
    // p++; (a partir disso, repetir as linhas 21 e 22 terá saída dos dados de numeros[1])


    // ATIVIDADE DE FIXAÇÃO:
    // 1. declarar duas variáveis e imprimir seus endereços
    // 2. criar ponteiros para essas variáveis e exibir os conteúdos
    // 3. usar os ponteiros para trocar os valores entre elas
    // 4. implementar uma função que dobre o valor de uma variável usando ponteiro


    // parte 1: declarar variáveis e imprimir os endereços
    int a = 1;
    int b = 5;
    int *pDa = &a;
    int *pDb = &b;

    cout << "\nA (end): " << pDa << endl;
    cout << "B (end): " << pDb << endl;


    // parte 2: imprimir os conteúdos por ponteiro
    cout << "\nA (val): " << *pDa << endl;
    cout << "B (val): " << *pDb << endl;


    // parte 3: inverter os valores por ponteiro
    int tempSwap = *pDa;
    *pDa = *pDb;
    *pDb = tempSwap;

    cout << "\n[Valores invertidos]" << endl;
    cout << "A (val): " << *pDa << endl;
    cout << "B (val): " << *pDb << endl;


    // parte 4: função que dobre o valor de uma variável por ponteiro
    dobrarValor(pDa);
    dobrarValor(pDb);
    cout << "\n[A e B dobrados]" << endl;
    cout << "A (val): " << *pDa << endl;
    cout << "B (val): " << *pDb << endl;


    cout << "\n\n";
    return 0;
}