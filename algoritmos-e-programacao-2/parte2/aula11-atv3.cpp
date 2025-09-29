#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;

// str copy

// etapa 1 (nos parâmetros)
char* concatenar_string(const char* str1, const char* str2){
    cout << "\nstr1: " << str1;
    cout << "\nstr2: " << str2;


    // etapa 2
    int tamanho_necessario = strlen(str1) + strlen(str2) + 1;

    // etapa 3
    char *str_nova = (char*)malloc(tamanho_necessario * sizeof(char));

    // etapa 4
    strcpy(str_nova, str1);
    strcat(str_nova, str2);
    
    return str_nova;
}



int main(){
    
    // crie uma função chamada char* concatenar_strings(const char* str1, const char* str2) que:
    //  1. receba duas strings como parâmetros
    //  2. calcule o tamanho total necessário para a nova string (tamanho de str1 + tamanho de str 2 + 1 para o terminador nulo \0)
    //  3. use malloc para alocar memória necessária para a nova string
    //  4. copie o conteúdo de str 1 e, em seguida, o conteúdo de str2 para a memória recém-alocada
    //  5. retorne o ponteiro para a nova string e no main(), chame a função, imprima a string resultante.
    //  6. libere a memória do ponteiro retornado
    
    string str1, str2;
    cout << "Digite a primeira frase: ";
    getline(cin, str1);
    
    cout << "\nDigite a segunda frase: ";
    getline(cin, str2);
    
    char *temp_pont1 = &str1[0];
    char *temp_pont2 = &str2[0];
    
    
    char *ponteirosaida = concatenar_string(temp_pont1, temp_pont2);
    
    cout << "\nConcatenado: " << ponteirosaida << endl;
    
    
    free(ponteirosaida);
    cout << "\n\n";
    return 0;
}