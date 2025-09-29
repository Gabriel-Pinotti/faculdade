#include <iostream>
using namespace std;

struct Time {
    int id;
    string nome;
};

struct Partida {
    int idCasa;
    int idVisitante;
    int golsCasa;
    int golsVisitante;
};

Partida *historicoPartidas = (Partida*)malloc(2*sizeof(Partida));

int solicitacaoMenu(){
    system("clear");
    int tempResp;
    cout << "\nBem vindo(a)!\n\nSelecione uma opção:\n  1- Registrar partida"
    << "\n  2- Listar partidas\n  3- Gerar Tabela de Pontuação\n  4- Liberar memória e sair\n\nResposta: ";
    cin >> tempResp;
    system("clear");
    return tempResp;
}

void declararTimes(){
    Time Flamengo, Gremio, Vasco;
    Flamengo.id = 1;
    Flamengo.nome = "Flamengo";
    Gremio.id = 2;
    Gremio.nome = "Gremio";
    Vasco.id = 3;
    Vasco.nome = "Vasco";
}


int main(){
    declararTimes();

    switch (solicitacaoMenu()) {
        case 1: // registrar partida
            break;
        case 2: // listar partidas
            break;
        case 3: // gerar tabela de pontuação
            break;
        case 4: // liberar memória e sair
            break;
    }





    cout << "\n\n";
    return 0;
}