#include <iostream>
using namespace std;


template <typename TYPE>
struct nomestruct {
    TYPE i;
    TYPE j;
    void calcular(){
        cout << "\ni * j = " << i*j;
    }
};


template <typename T>
T somar(T a, T b){
    return a + b;
}



int main(){
    nomestruct<int> varDeStruct;

    varDeStruct.i = 2;
    varDeStruct.j = 7;
    cout << "\ni = " << varDeStruct.i;
    cout << "\nj = " << varDeStruct.j;
    varDeStruct.calcular();

    cout << "\n\n";

    cout << somar<int>(2, 3) << endl;
    cout << somar<float>(2.3, 3.2) << endl;




    cout << "\n\n";
    return 0;
}