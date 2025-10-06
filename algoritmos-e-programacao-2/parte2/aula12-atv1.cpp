#include <iostream>
using namespace std;

// int fibonacci(int n){
//     // futuramente será feita uma função aqui
// }




int main(){
    int fibonacci[50] = {1, 1};

    for (int i = 0; i < 15; i++){
        fibonacci[i+2] = fibonacci[i]+fibonacci[i+1];
    }

    for (int i = 0; i < 17; i++){
        cout << fibonacci[i] << " | ";
    }



    cout << "\n\n";
    return 0;
}