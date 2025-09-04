#include <iostream>
using namespace std;


struct Calculadora {
    double triangulo(double base, double altura){
        return (base*altura)/2;
    };

    double retangulo(double base, double altura){
        return base*altura;
    };
    double circulo(double raio){
        return raio*raio*3.14;
    }
};



int main(){

    Calculadora calc;
    cout << "\nTriangulo = " << calc.triangulo(5.7, 2);
    cout << "\nRetangulo = " << calc.retangulo(8, 9);
    cout << "\nCirculo = " << calc.circulo(2);


    cout << "\n\n";
    return 0;
}