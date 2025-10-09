#include <iostream>
#include <vector>
using namespace std;

void quicksort(int *vetor, int inicio, int fim){
    int pivo = vetor[inicio];
    int esquerda = inicio;
    int direita = fim;

    while (esquerda <= direita){
        while (vetor[esquerda] < pivo)
            esquerda++;
        
        while (vetor[direita] > pivo)
            direita--;

        if (esquerda <= direita){
            int temp = vetor[esquerda];
            vetor[esquerda] = vetor[direita];
            vetor[direita] = temp;

            esquerda++;
            direita--;
        }
    }
    if (inicio < direita){
        quicksort(vetor, inicio, direita);
    }
    if (esquerda < fim){
        quicksort(vetor, esquerda, fim);
    }
}


int main(){



    cout << "\n\n";
    return 0;
}