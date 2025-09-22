#include <iostream>
using namespace std;

int main(){
    // ponteiros: variáveis que o valor é o endereço de outra variável
    // essenciais para passagem de parâmetros por referência, gerenciamento de memória, estruturas dinâmicas etc.

    // exemplo:
    int a = 10;
    int *p = &a;
    a = 15;
    cout << *p << endl;

    cout << "\n\n";
    return 0;
}