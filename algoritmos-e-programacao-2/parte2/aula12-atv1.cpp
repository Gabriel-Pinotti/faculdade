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
    // int n = 10;

    // cout << "Sendo n = " << n << "\n -Sequência de Fibonacci até n\n\n";

    // for (int i = 0; i < n; i++){
    //     cout << fibonacci_recursivo(i) << "  ";
    // }


    cout << "Fatorial de 5 = " << fatorial(5);


    cout << "\n\n";
    return 0;
}