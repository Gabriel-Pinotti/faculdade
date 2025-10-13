#include <iostream>
#include "aula14header.h"
using namespace std;

int main(){
    int numA = 10;
    int numB = 5;

    cout << "Calculadora com múltiplos arquivos (.h)\n >A = 10\n >B = 5\n----------";
    cout << "\n Soma de A e B = " << somar(numA, numB);
    cout << "\n Subtração de A por B = " << subtrair(numA, numB);
    cout << "\n Multiplicação de A e B = " << multiplicar(numA, numB);
    cout << "\n Divisão de A por B = " << dividir(numA, numB);

    cout << "\n\n";
    return 0;
}