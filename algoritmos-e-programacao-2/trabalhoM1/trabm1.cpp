#include <iostream>
#include <vector>
#include <string> 
#include <cstdlib> 
#include <ctime> 
using namespace std;
    
// variaveis globais
int qtdBombas = 3;
int pontos = 0;
int dificuldade = 0;

vector<string> mapa = { // mapa com vetor pq sim <3 facilitando a vida
     "####################",
     "##   ####          #",
     "#  #      ######   #",
     "#        ###     ###",
     "#####   #     ######",
     "###        ###     #",
     "#####              #",
     "###      #######   #",
     "####################",
  } ;   

int selecionarDificuldade(){
    int tempSelecionarDif;
    system("clear");
    cout << "Selecione a dificuldade (padrao: facil)\n";
    cout << "1- Facil\n2- Medio\n3- Dificil\n\nResposta: ";
    cin >> tempSelecionarDif;
    if (tempSelecionarDif < 1 || tempSelecionarDif > 3){tempSelecionarDif = 1;}
    return tempSelecionarDif;
}



bool espacoLivre (int l, int c) { 
    return mapa [l][c] != '#'; // impede que o jogadro saia das paredes
}
     
struct posicao {int l, c;};
posicao jogador = {2,1};

vector <posicao> pilulas;
void pospilulas() {
    pilulas.clear();
    vector<posicao> todos = {
        {1,2}, {6,15}, {1,10}, {2,18}, {7,16}, {7, 17}, {5,5}, {4, 12}, {7, 4}, {7, 7}
    };
    int quantidade = 0;
    if (dificuldade == 1) quantidade = 10;
    else if (dificuldade == 2) quantidade = 8;
    else if (dificuldade == 3) quantidade = 5;
    for (int i = 0; i < quantidade; i++) {
        pilulas.push_back(todos[i]);
    }
}

vector <posicao> fantasma;
void posfantasma() {
    fantasma.clear();
    vector<posicao> todos = {
        {2,7}, {6,10}, {1,12}, {2,17}, {7,18}, {6,5}
    };
    int quantidade = 0;
    if (dificuldade == 1) quantidade = 3;
    else if (dificuldade == 2) quantidade = 5;
    else if (dificuldade == 3) quantidade = 6;
    // adiciona as posiçoes correspondentes
    for (int i = 0; i < quantidade; i++) {
        fantasma.push_back(todos[i]);
    }
}

struct structbomba {int l, c; int contador;};
vector <structbomba> bombas;
void posicBomba(){
    if (qtdBombas == 0) return;
    bombas.push_back({jogador.l, jogador.c, 4});
    qtdBombas--;
}

template <typename T>
bool temElemento(const vector<T>& v, int l, int c){
    for (auto &e : v) {
        if (e.l == l && e.c == c) return true;
    }
    return false;
}

bool temBomba (int l, int c) {
    return temElemento(bombas, l, c); 
};

bool temPilula (int l, int c) {
    return temElemento(pilulas, l, c); 
};

bool temFantasma (int l, int c){
    return temElemento(fantasma, l, c);
}

void movjog (char cmd = '-') { 
    posicao prox = jogador; //pega a posicao inicial do jogador
    if (cmd == 'w') prox.l--; //cima vrau, pega a linha e coluna e substrai ou soma a posicao
    if (cmd == 's') prox.l++; //baixo
    if (cmd == 'a') prox.c--; //esquerda
    if (cmd == 'd') prox.c++; //direta
    if (cmd == '-') prox = jogador;
    if (cmd == 'b') {
        posicBomba();
    };
    
    if (espacoLivre(prox.l, prox.c) && temBomba(prox.l, prox.c) == false) {
        jogador = prox; // pro jogador nao sair do lugar se for espacoLivre
    }
}

void movfantasma () {
    for (auto &f : fantasma) {
        int dir = rand() %4; // da um valor aleatorio no intervalo da %
        posicao prox = f;
        if (dir == 0) prox.l--; // cima
        if (dir == 1) prox.l++; // baixo
        if (dir == 2) prox.c--; // esquerda
        if (dir == 3) prox.c++; // direita

        if (espacoLivre(prox.l, prox.c) && !temBomba(prox.l, prox.c) && !temPilula(prox.l, prox.c) && !temFantasma(prox.l, prox.c)) {
            f = prox; // mover fantasma
        }       
    }
}

void desenhar() {
    system("clear"); 
    cout << "\nPontuacao: " << pontos;
    cout << "\nBombas disponiveis: " << qtdBombas << "\n\n";
    vector<string> img = mapa;

    for (auto &f : fantasma) { //desenhando fantasma
        img[f.l][f.c] = 'G';
    }
    for (auto &p : pilulas){ // pilulas
        img[p.l][p.c] = '%';
    }
    for (auto &b : bombas){ // bombas
        img[b.l][b.c] = 'b';
    }
    img[jogador.l][jogador.c] = 'P'; // jogador
    

    for (auto &line : img) cout << line << "\n";
}

void telaDeVitoria(){
    system("clear");
    cout << "Voce venceu!!\nPontuacao: " << pontos << "\n\n"; // TODO bonus de tempo (jogadas restantes)
    return;
}


int main (){ 
    dificuldade = selecionarDificuldade();
    posfantasma();
    pospilulas();
    srand (time(0));
      
    while (true) {  
        
        desenhar();
        cout << "\n---Use WASD para mover o jogador, B para posicionar uma bomba e Q para sair\n**Legenda**\n-#: Parede";
        cout << "\n-G: Fantasma\n-P: Jogador\n-%: Pilula\n-b: Bomba";
        cout << "\n\n  Input: " ;
        string linha;
        getline(cin, linha);
        char cmd = (linha.empty() ? '\0' : linha[0]); // se estiver vazia, default = '\0'

        if (cmd == 'q') {
            break;
        }

        movjog(cmd);
        movfantasma();


        for (int i = 0; i < bombas.size(); i++) {
            bombas[i].contador--;       //diminui o contador
            if (bombas[i].contador <= 0) {
                for (int j = 0; j < fantasma.size(); j++) {
                    int dl = abs(fantasma[j].l - bombas[i].l);
                    int dc = abs(fantasma[j].c - bombas[i].c);
                    if (dl <= 1 && dc <= 1) { // diferença de ate 1 em linha e coluna
                        fantasma.erase(fantasma.begin() + j); // mata o fantasma
                        pontos += 200;
                        j--;
                    }
                }
                bombas.erase(bombas.begin() + i); // explode e some do mapa
                i--;
                
                if (fantasma.empty()){
                    telaDeVitoria();
                    return 0;
                }
            }
        }
        
        for (auto& f : fantasma) { //colisao dos fantasmas
            if (f.l == jogador.l && f.c == jogador.c) {
                system("clear");
                cout << "Voce foi pego por um fantasma! Game Over.\n";
                cout << "Pontos: " << pontos << "\n\n";
                return 0; 
            }
        }

        for (int i = 0; i < pilulas.size(); i++) {
            if (pilulas[i].l == jogador.l && pilulas[i].c == jogador.c) {
                qtdBombas++;
                pilulas.erase(pilulas.begin() + i); // remove a pilula do vetor
                break; // sai do loop, pq nao precisa checar mais
            }
        }

    }



      return 0;
 }