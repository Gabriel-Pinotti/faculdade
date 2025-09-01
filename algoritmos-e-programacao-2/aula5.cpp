// templates e structures

#include <iostream>
using namespace std;


template <typename T> // soma relativo ao tipo de dados, podendo ser um "double somar()" ou "int somar()" por exemplo.
T somar_t(T a, T b){
    return a+b;
}


template <typename T>
T verificar_maior(T a, T b){
    if (a > b){
        return a;
    } else {
        return b;
    };
};



template <typename T>
struct Calculadora{

    T somar(T a, T b){
        return a + b;
    }

    T multiplicar(T a, T b){
        return a * b;
    }

};



int main(){

    cout << "\n\ntestando\n\n" << "2 e 4 sempre\n";

    cout << "\n\nSomar 2 e 4 = " << somar_t(2, 4);
    cout << "\n\nSomar 3.4 e 4.19 = " << somar_t(3.4, 4.19);
    cout << "\n\nVerificar maior 3.3 e 5.6 = " << verificar_maior(3.3, 5.6);
    cout << "\n\nVerificar maior 9 e 4 = " << verificar_maior(9, 4);
    
    
    Calculadora<double> calculadora_double;
    cout << "\n\nUtilizando calcD, 2 + 4 = " << calculadora_double.somar(2, 4);
    
    
    cout << "\n\n\n";
    return 0;
}