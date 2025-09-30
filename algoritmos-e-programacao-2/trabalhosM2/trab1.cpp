#include <iostream>
#include <string>
#include <limits>
using namespace std;

struct Time {
    string nome;
    int id, pontos, partidasJogadas, golsPro, golsContra, saldoGols;
};

struct Partida {
    int idCasa;
    int idVisitante;
    int golsCasa;
    int golsVisitante;
};

int quantidadeRegistros = 0;
int capacidadeRegistros = 2;
Partida *historicoPartidas = (Partida*)malloc(2*sizeof(Partida));

Time Flamengo, Gremio, Vasco;
void declararTimes(){
    Flamengo.id = 1;
    Flamengo.nome = "Flamengo";
    Gremio.id = 2;
    Gremio.nome = "Gremio";
    Vasco.id = 3;
    Vasco.nome = "Vasco";

}

int solicitacaoMenu(){
    system("clear"); // TODO substituir para windows
    int tempResp;
    cout << "\nMENU\n\nSelecione uma opção:\n  1- Registrar partida"
    << "\n  2- Listar partidas\n  3- Gerar Tabela de Pontuação\n  4- Liberar memória e sair\n\nResposta: ";
    cin >> tempResp;
    system("clear"); // TODO substituir para windows
    return tempResp;
}

string buscarTime(int id){
    if (Flamengo.id == id){
        return "Flamengo";
    };
    if (Vasco.id == id){
        return "Vasco";
    };
    if (Gremio.id == id){
        return "Gremio";
    };
    return "Erro";
}


Time& buscaPorId(int id){
    if (id == Flamengo.id) return Flamengo;
    if (id == Gremio.id) return Gremio;
    if (id == Vasco.id) return Vasco;

    throw invalid_argument("Time nao encontrado");
}


// --- Funções de escolha do usuário

void registrarPartida(){
    // declaração de variáveis
    int idcasa, idvisitante, golscasa, golsvisitante;
    cout << "\nID do time da casa: ";
    cin >> idcasa;
    if(idcasa > 3 || idcasa < 1){
    cout << "\n\nErro de digitação";
        return;
    }
    cout << "\nID do time visitante: ";
    cin >> idvisitante;
    if(idvisitante > 3 || idvisitante < 1){
        cout << "\n\nErro de digitação";
        return;
    }
    cout << "\nGols do time da casa: ";
    cin >> golscasa;
    cout << "\nGols do time visitante: ";
    cin >> golsvisitante;
    // registro dinâmico
    if (capacidadeRegistros == quantidadeRegistros){
        capacidadeRegistros*=2;
        historicoPartidas = (Partida*)realloc(historicoPartidas, capacidadeRegistros*sizeof(Partida));
    }
    // coloca no ponteiro geral
    historicoPartidas[quantidadeRegistros].idCasa = idcasa;
    historicoPartidas[quantidadeRegistros].idVisitante = idvisitante;
    historicoPartidas[quantidadeRegistros].golsCasa = golscasa;
    historicoPartidas[quantidadeRegistros].golsVisitante = golsvisitante;
    quantidadeRegistros+=1;

    // armazena pontos, partidas jogadas, gol pro, gol contra e saldo de gols
    buscaPorId(idcasa).partidasJogadas+=1;
    buscaPorId(idvisitante).partidasJogadas+=1;
    buscaPorId(idcasa).golsPro+=golscasa;
    buscaPorId(idcasa).golsContra+=golsvisitante;
    buscaPorId(idcasa).saldoGols-=golsvisitante;
    buscaPorId(idcasa).saldoGols+=golscasa;
    buscaPorId(idvisitante).golsPro+=golsvisitante;
    buscaPorId(idvisitante).golsContra+=golscasa;
    buscaPorId(idvisitante).saldoGols-=golscasa;
    buscaPorId(idvisitante).saldoGols+=golsvisitante;
    if(golscasa > golsvisitante){ // casa ganhou
        buscaPorId(idcasa).pontos+=3;
    } else if (golscasa < golsvisitante){ // visitantes ganharam
        buscaPorId(idvisitante).pontos+=3;
    } else { // empate
        buscaPorId(idvisitante).pontos+=1;
        buscaPorId(idcasa).pontos+=1;
    }

    // saída
    cout << "\n\nRegistro realizado com sucesso, pressione enter para prosseguir\n";
    string tempenter;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, tempenter);
}

void listarPartidas(){
    //system("clear"); // TODO substituir para windows
    for(int i = 0; i < quantidadeRegistros; i++){
        cout << "\n[" << buscarTime(historicoPartidas[i].idCasa) << " " << historicoPartidas[i].golsCasa << " X "
        << historicoPartidas[i].golsVisitante << " " << buscarTime(historicoPartidas[i].idVisitante) << "]";
    };
    cout << "\n\nPressione enter para prosseguir\n";
    string tempenter;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, tempenter);
}

void gerarTabela(){
    system("clear");






}



int main(){
    declararTimes();

    while(true){
        switch (solicitacaoMenu()) {
            case 1: // registrar partida
                registrarPartida();
                break;
            case 2: // listar partidas
                listarPartidas();
                break;
            case 3: // gerar tabela de pontuação
                gerarTabela();
                break;
            case 4: // liberar memória e sair
                free(historicoPartidas);
                return 0;
        }
    }

    cout << "\n\n";
    return 0;
}