#include <iostream>
using namespace std;


int fibonacci_recursivo(int n){
    if (n<2)
        return 1;
    else
        return fibonacci_recursivo(n-1) + fibonacci_recursivo(n-2);
}

int fatorial(int n){
    if(n == 1){
        return 1;
    }
    return n * fatorial(n-1);
}


int main(){
    // int fibonacci[50] = {1, 1};

    // for (int i = 0; i < 15; i++){
    //     fibonacci[i+2] = fibonacci[i]+fibonacci[i+1];
    // }

    // for (int i = 0; i < 17; i++){
    //     cout << fibonacci[i] << " | ";
    // }
    int n = 10;

    cout << "Sendo n = " << n << "\n -Sequência de Fibonacci até n\n\n";

    for (int i = 0; i < n; i++){
        cout << fibonacci_recursivo(i) << "  ";
    }


    cout << "\n\n";
    return 0;
}