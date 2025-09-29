#include <iostream>
#include <cstdlib>
using namespace std;


int main(){

    // crie um programa que:
    //  1. pergunte ao usuário quantas notas ele deseja inserir
    //  2. use alocação dinâmica para criar um array de floats (float*) com o tamanho especificado
    //  3. preencha esse array com as notas digitadas pelo usuário
    //  4. calcule e imprima a média das notas
    //  5. desaloque a memória alocada antes de o programa terminar

    // etapa 1
    int qttnotas;
    cout << "\nQuantidade de notas que deseja inserir: ";
    cin >> qttnotas;

    // etapa 2
    float *array_notas = (float*)calloc(qttnotas, sizeof(float));
    if (array_notas == NULL){
        cout << "\nErro na alocação de memória\n";
        return 1;
    }

    
    cout << endl << endl;
    // etapa 3
    for(int i = 0; i < qttnotas; i++){
        cout << "\nDigite uma nota: ";
        cin >> array_notas[i];
    }

    cout << endl <<  "---------------------" << endl;
    // exibir as notas inseridas (por questão de debug)

    // etapa 4
    float soma_notas;
    for(int i = 0; i < qttnotas; i++){
        soma_notas+=array_notas[i];
    }
    float media_final = soma_notas/qttnotas;

    cout << "\nA média das notas é: " << media_final << endl;


    // etapa 5
    free(array_notas);

    cout << "\n\n";
    return 0;
}