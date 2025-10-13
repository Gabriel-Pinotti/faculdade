#include "aula14header.h"
// agora, para implementar, utilize:
// g++ aula14saida.cpp aula14fontecods.cpp // para criar um .out utilizando auça14saida.cpp com fonte aula14fontecods.cpp, header apenas de assinatura
//
// nesse caso, se tiver vários arquivos de biblioteca pode utilizar:
// g++ arquivoQueContemFuncaoMain.cpp biblioteca1.cpp biblioteca2.cpp biblioteca3.cpp   // incluindo todas as bibliotecas necessárias


int somar(int numA, int numB){
    return numA+numB;
}

int subtrair(int numA, int numB){
    return numA-numB;
}

int multiplicar(int numA, int numB){
    return numA*numB;
}

int dividir(int numA, int numB){
    return (double)numA/(double)numB;
}