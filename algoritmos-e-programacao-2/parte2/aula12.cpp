#include <iostream>
using namespace std;

int fatorialrecursivo(int n){
    if(n <= 1){
        cout << "\n---Resultado---\n\n";
        return 1;
    }
    cout << "\nmais um loop, n = " << n << endl;
    return n * fatorialrecursivo(n-1);
}


int main(){

    // wellington explicando função recursiva depois de cobrar isso na prova
    
    cout << "---fatorial de 5---\n" << fatorialrecursivo(5);

    cout << "\n\n";
    return 0;
}