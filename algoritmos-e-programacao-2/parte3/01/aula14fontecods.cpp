#include "aula14header.h"
// agora, para implementar, utilize:
// g++ aula14fontecods.cpp -c              // para criar um arquivo aula14fontecods.o
// g++ aula14saida.cpp aula14fontecods.o   // para criar um a.out utilizando saida.cpp com fonte, header apenas como assinatura
//
// nesse caso, se tiver vários arquivos de biblioteca pode utilizar:
// g++ arquivoQueContemFuncaoMain.cpp biblioteca1.o biblioteca2.o biblioteca3.o   // incluindo todas as bibliotecas necessárias


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