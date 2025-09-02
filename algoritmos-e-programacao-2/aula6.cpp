#include <iostream>
using namespace std;

void imprimirArray(int array[], int tamanho){
    cout << "\n\nArrray = ";
    for (int i = 0; i < tamanho; ++i){
        cout << array[i] << " ";   
    }
    cout << "\n\n";
};

void bubblesort(int array[], int tamanho){
    int temp;
    bool trocou = false;
    do {
        for (int i = 0; i < tamanho-1; ++i){
            if (array[i] > array [i+1]){
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                trocou = true;
                goto repetir;
            } else {
                trocou = false;
            }
        }
        repetir:;
    } while (trocou);
};

int main(){
    int arraybase[] = {2, 5, 8, 3, 1, 6, 4, 0, 7, 9};
    int tamanhoarray = (sizeof(arraybase) / sizeof(arraybase[0]));

    imprimirArray(arraybase, tamanhoarray);

    cout << "[ORGANIZANDO]";
    bubblesort(arraybase, tamanhoarray);

    imprimirArray(arraybase, tamanhoarray);

    cout << "\n\n";
    return 0;
}