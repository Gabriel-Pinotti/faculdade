#include <iostream>
#include <cstdlib> // necesário para: malloc, calloc, free e realloc
using namespace std;

// void funcao_recursiva(int i = 0){ // essa função gera falha de segmentação
//     char arraygrande[100000];
//     cout << "Nova execução da função\n";
//     arraygrande[0] = 'a';
//     funcao_recursiva();
// } // os abaixo devem ser na main
//cout << "\nIniciando o programa\n";
//funcao_recursiva();
//cout << "\nExecutou até o final\n";
// um stack overflow ocorre quando um programa tenta utilizar mais espaços da memória
//      do que há disponíveis.


int main(){

    // endereçamento não necessariamente é sequencial, salvo por vetores, que busca um espaço
    //      na memória que possa armazenar todos os elementos sequencialmente.


    // estou reservando (sizeof(int)) espaços de memória para um int e apontando meu ponteiro novo para lá
    int *pt_int = (int*)malloc(sizeof(int)); // usando sizeof(int) pois diferentes arquiteturas
    //                                              de computador usam tamanhos diferentes.

    // atribuir o ponteiro à uma outra variável sem usar free(pt_int) antes irá gerar lixo de memória

    // -- Ponteiro de int simples com malloc
    *pt_int = 40;
    cout << "\nValor do ponteiro pt_int: " << *pt_int; // malloc para int
    cout << "\nEndereço do ponteiro pt_int: " << pt_int;


    // -- Ponteiro de array com malloc (cria lixo de memória nos 10 espaços)
    int *pt_array = (int*)malloc(10 * sizeof(int)); // array de int com 10 elementos
    if(pt_array == NULL){
        free(pt_array);
        cout << "\n[ERRO] Alocação de memória";
        return 1;
    }
    cout << endl << endl;


    // calloc para array de inteiro
    int *array_calloc = (int*)calloc(5, sizeof(int)); // calloc recebe tamanho da array e o tamanho dos dados em bytes
    // como exemplificado acima, malloc pode ser usado para criar arrays, assim como calloc pode receber tamanho 1
    // a diferença é apenas que calloc atribui o valor como zero, malloc deixa lixo de memória

    for(int i = 0; i < 5; i++){ // atribuir valores
        array_calloc[i] = i+2;
    }

    for(int i = 0; i < 5; i++){ // exibir valores
        cout << "\nValor: " << array_calloc[i] << " | Endereço: " << &array_calloc[i];
    }


    

    cout << "\n\n";
    return 0;
}