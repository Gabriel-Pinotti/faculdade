#include <iostream>
using namespace std;


double triangulo(double base, double altura){ // considerando altura
    return (base*altura)/2;
};
double triangulo(double lado){ // considerando apenas lado (equilatero)
    return (lado*lado)*(1.73/4);
}
double retangulo(double base, double altura){
    return base*altura;
};
double circulo(double raio){
    return raio*raio*3.14;
}




int main(){

    cout << "\nTriangulo com altura = " << triangulo(5.7, 2);
    cout << "\nTriangulo sem altura = " << triangulo(2);
    cout << "\nRetangulo = " << retangulo(8, 9);
    cout << "\nCirculo = " << circulo(2);


    cout << "\n\n";
    return 0;
}