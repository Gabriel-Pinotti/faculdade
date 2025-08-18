#include <iostream>
using namespace std;

double registrarVenda(double valor, bool reset=false){
    static double valorVendas = 0;
    if (reset){
        valorVendas = 0;
    };
    valorVendas+= valor;
    return valorVendas;
};



int main(){

    double valorEmCaixa = registrarVenda(0);

    cout << endl << "Valor em caixa: R$ " << valorEmCaixa << endl;


    return 0;
}