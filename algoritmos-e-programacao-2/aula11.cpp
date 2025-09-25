#include <iostream>
#include <cstdlib> // necesário para: malloc, 
using namespace std;


// void funcao_recursiva(int i = 0){ // essa função gera falha de segmentação
//     char arraygrande[100000];

//     cout << "Nova execução da função\n";
//     arraygrande[0] = 'a';

//     funcao_recursiva();
// }


int main(){

    // endereçamento não necessariamente é sequencial, salvo por vetores, que busca um espaço
    //      na memória que possa armazenar todos os elementos sequencialmente.

    // um stack overflow ocorre quando um programa tenta utilizar mais espaços da memória
    //      do que há disponíveis.

    cout << "\nIniciando o programa\n";
    
    //funcao_recursiva();


    cout << "\nExecutou até o final\n";
    return 0;
}