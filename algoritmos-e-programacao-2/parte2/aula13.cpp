#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

template <typename T>
void quicksort(T *vetor, int inicio, int fim){
    T pivo = vetor[inicio];
    int esquerda = inicio;
    int direita = fim;

    while (esquerda <= direita){
        while (vetor[esquerda] < pivo)
            esquerda++;
        
        while (vetor[direita] > pivo)
            direita--;

        if (esquerda <= direita){
            T temp = vetor[esquerda];
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

template <typename T>
int buscabinaria(T *lista, T alvo, int inicio, int fim){
    if (inicio > fim){
        return -1;
    }
    int meio;
    if ((fim - inicio) % 2 == 0){
        meio = (fim+inicio)/2;
    } else {
        meio = (fim+inicio+1)/2;
    }
    if (lista[meio] < alvo){
        return buscabinaria(lista, alvo, meio+1, fim);
    }
    if (lista[meio] > alvo){
        return buscabinaria(lista, alvo, inicio, meio-1);
    }
    return meio;

}


int main(){
    srand(time(NULL));

    int tam = 10;
    int *vetor = (int*)malloc(tam*sizeof(int));

    for(int i =0; i < tam; i++){
        vetor[i] = rand() %20;
    }

    cout << "\n------Quick Sort------\n[Vetor antes do quicksort]" << endl;
    imprimir(vetor, tam);
    quicksort<int>(vetor, 0, tam-1);
    cout << "\n[Vetor depois do quicksort]" << endl;
    imprimir(vetor, tam);

    int alvo = (rand()%20);

    cout << "\n------Busca Binaria------\nProcurando por: " << alvo << endl;
    int localizacao = buscabinaria(vetor, alvo, 0, tam-1);
    if (localizacao != -1){
        cout << "\nEncontrado no índice " << localizacao;
    } else {
        cout << "\nNão encontrado"; 
    }



    cout << "\n\n";
    return 0;
}