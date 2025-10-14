#ifndef FMENU
#define FMENU
#include <iostream>
#include "headermenu.h"
using namespace std;

int selecionarDificuldade()
{
    int tempSelecionarDif;
    system("clear");
    cout << "Selecione a dificuldade (padrao: facil)\n";
    cout << "1- Facil\n2- Medio\n3- Dificil\n\nResposta: ";
    cin >> tempSelecionarDif;
    if (tempSelecionarDif < 1 || tempSelecionarDif > 3){tempSelecionarDif = 1;}
    return tempSelecionarDif;
}

#endif