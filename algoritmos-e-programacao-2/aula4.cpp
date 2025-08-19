#include <iostream>
#include <cstring>
using namespace std;

double historicoDeVendas[100] = {};
int contadorDeVendas = 0;

double registrarVenda(double valor, bool reset=false){
    static double valorVendas = 0;
    if (reset){
        valorVendas = 0;
        contadorDeVendas = 0;
    };
    valorVendas+= valor;

    historicoDeVendas[contadorDeVendas++] = valor;

    
    return valorVendas;
};

double mediaMovel(int janela = 3){
    double tempsoma = 0;
    if (janela > contadorDeVendas){
        janela = contadorDeVendas;
    };
    for (int i = 0; i < janela; ++i){
        tempsoma += historicoDeVendas[i];
    }
    return tempsoma/janela;
}


int main(){
    double valortotallocal;
    double mediatemp;


    // --------- LOGS ABAIXO COM PROPÓSITO DE TESTE

    valortotallocal = registrarVenda(10);
    cout << endl << "\n---------\nTotal: " << valortotallocal << endl;
    mediatemp = mediaMovel(100);
    cout << endl << "Média: " << mediatemp << endl;

    valortotallocal = registrarVenda(20);
    cout << endl << "\n---------\nTotal: " << valortotallocal << endl;
    mediatemp = mediaMovel(100);
    cout << endl << "Média: " << mediatemp << endl;

    valortotallocal = registrarVenda(30);
    cout << endl << "\n---------\nTotal: " << valortotallocal << endl;
    mediatemp = mediaMovel(100);
    cout << endl << "Média: " << mediatemp << endl;

    valortotallocal = registrarVenda(20, true);
    cout << endl << "\n---------\nTotal: " << valortotallocal << endl;
    mediatemp = mediaMovel(100);
    cout << endl << "Média: " << mediatemp << endl;

    return 0;
}