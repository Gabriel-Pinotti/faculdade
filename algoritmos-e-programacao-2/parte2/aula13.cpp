#include <iostream>
#include <vector>
#include <ctime>
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

void imprimir(int *vetor, int tam){
    for(int i = 0; i < tam; i++){
        cout << vetor[i] << " ";
    }
    cout << endl << endl;
}


int main(){
    srand(time(NULL));

    int tam = 8;
    int *vetor = (int*)malloc(tam*sizeof(int));

    for(int i =0; i < tam; i++){
        vetor[i] = rand() %100;
    }

    cout << "\nVetor antes do quicksort: " << endl;
    imprimir(vetor, tam);
    quicksort(vetor, 0, tam-1);
    cout << "\nVetor depois do quicksort: " << endl;
    imprimir(vetor, tam);



    cout << "\n\n";
    return 0;
}