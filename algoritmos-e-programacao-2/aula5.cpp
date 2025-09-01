// templates e structures

#include <iostream>
using namespace std;

double somar(double num1, double num2){
return num1+num2;
}

double subtrair(double num1, double num2){
return num1-num2;
}

double multiplicar(double num1, double num2){
    return num1*num2;
}

double dividir(double num1, double num2){
    return num1/num2;
}

int main(){

    cout << "\n\ntestando\n\n" << "2 e 4 sempre\n";

    cout << "\n\nSomar= " << somar(2, 4);
    cout << "\n\nSubtrair= " << subtrair(2, 4);
    cout << "\n\nMultiplicar= " << multiplicar(2, 4);
    cout << "\n\nDividir= " << dividir(2, 4);
    cout << "\n\n\n";



    return 0;
}