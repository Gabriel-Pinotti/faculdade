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
    };

    T multiplicar(T a, T b){
        return a * b;
    };

    T dividir(T a, T b){
        return a / b;
    };

    T subtrair(T a, T b){
        return a - b;
    };

};



int main(){    
    Calculadora<double> calcD;
    cout << "\n\nUtilizando calcD, 2 + 4 = " << calcD.somar(2, 4);
    cout << "\n\nUtilizando calcD, 2.4 + 6.4 = " << calcD.somar(2.4, 6.4);

    cout << "\n\nUtilizando calcD, 2 - 4 = " << calcD.subtrair(2, 4);
    cout << "\n\nUtilizando calcD, 2.4 - 6.4 = " << calcD.subtrair(2.4, 6.4);

    cout << "\n\nUtilizando calcD, 2 * 4 = " << calcD.multiplicar(2, 4);
    cout << "\n\nUtilizando calcD, 2.4 * 6.4 = " << calcD.multiplicar(2.4, 6.4);

    cout << "\n\nUtilizando calcD, 2 / 4 = " << calcD.dividir(2, 4);
    cout << "\n\nUtilizando calcD, 2.4 / 6.4 = " << calcD.dividir(2.4, 6.4);
    
    cout << "\n\n\n";
    return 0;
}