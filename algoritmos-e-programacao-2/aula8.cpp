#include <iostream>
using namespace std;

struct nomestruct {
    int i;
    float j;
    void calcular(){
        cout << "\ni * j = " << i*j;
    }
};

int main(){
    nomestruct varDeStruct;

    varDeStruct.i = 2;
    varDeStruct.j = 2.6;
    cout << "\ni = " << varDeStruct.i;
    cout << "\nj = " << varDeStruct.j;
    varDeStruct.calcular();



    cout << "\n\n";
    return 0;
}