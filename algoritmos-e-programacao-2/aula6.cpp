// bubble sort ordenar vetor

// compara o elemento atual com o próximo, se o atual for maior inverte os dois, se não passa a verificação adiante

#include <iostream>
using namespace std;

void imprimirArray(int vetor[], int tamanho){
    cout << "\n\nVetor = ";
    for (int i = 0; i < tamanho; ++i){
        cout << vetor[i] << " ";   
    }
    cout << "\n\n";
};



void bubblesort(int vetor[], int tamanho){
    int temp;
    bool trocou = false;
    do {
        for (int i = 0; i < tamanho-1; ++i){
            if (vetor[i] > vetor [i+1]){
                temp = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = temp;
                trocou = true;
                goto repetir;
            } else {
                trocou = false;
            }
        }
        repetir: ;
    } while (trocou);
};



int main(){

    int vetorbase[5] = {2, 5, 8, 3, 1};
    int tamanhoarray = (sizeof(vetorbase) / sizeof(vetorbase[0]));

    imprimirArray(vetorbase, tamanhoarray);

    cout << "[ORGANIZANDO]";
    bubblesort(vetorbase, tamanhoarray);

    imprimirArray(vetorbase, tamanhoarray);
    



    cout << "\n\n";
    return 0;
}

