#include <iostream>
#include <vector>
#include <string> 
#include <cstdlib> 
#include <ctime> 
using namespace std;
    
// variaveis globais
int qtdBombas = 3;



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
     
struct posicao {int l, c;};
posicao jogador = {2,1}; // guardar dados do jogador
     
     
bool espacoLivre (int l, int c) { 
    return mapa [l][c] != '#'; // impede que o jogadro saia das paredes
}



void movjog (char cmd) { 
    posicao prox = jogador; //pega a posicao inicial do jogador
    if (cmd == 'w') prox.l--; //cima vrau, pega a linha e coluna e substrai ou soma a posicao
    if (cmd == 's') prox.l++; //baixo
    if (cmd == 'a') prox.c--; //esquerda
    if (cmd == 'd') prox.c++; //direta
    
    if (espacoLivre(prox.l, prox.c)) {
        jogador = prox; // pro jogador nao sair do lugar se for espacoLivre
       

    }
}

vector <posicao> pilulas;
void pospilulas() {
    pilulas.clear();
    pilulas.push_back({1, 4});
};


 
vector <posicao> fantasma;
void posfantasma () { // TODO criar um desse para cada nível de dificuldade
    fantasma.clear(); // limpando o vetor
    fantasma.push_back ({2,7});//push_back adiciona algo no vetor e as coordenadas dizem onde
    fantasma.push_back ({6,10});
    
}

void movfantasma () {
    for (auto &f : fantasma) {// to com preguica de por srand
        int dir = rand() %4; // da um valor aleatorio no intervalo da %
        posicao prox = f;
        if (dir == 0) prox.l--; // cima
        if (dir == 1) prox.l++; // baixo
        if (dir == 2) prox.c--; // esquerda
        if (dir == 3) prox.c++; // direita

        if (espacoLivre(prox.l, prox.c)) {
            f = prox; // mover fantasma
        }       
    }
}
void desenhar() {
    system("clear"); 
    cout << "\nBombas disponiveis: " << qtdBombas << "\n\n";
    vector<string> img = mapa;

    for (auto &f : fantasma) { //desenhando fantasma
        img[f.l][f.c] = 'G';
    }
    for (auto &p : pilulas){
        img[p.l][p.c] = '%';
    }
    img[jogador.l][jogador.c] = 'P'; // desenhando jogador
    

    for (auto &line : img) cout << line << "\n";
}


 int main (){ 
  posfantasma();
  pospilulas();
  srand (time(0));
      
      while (true) {  
        
        desenhar();
        cout << "\n---Use WASD para mover o jogador e Q para sair\n**Legenda**\n-#: Parede\n-G: Fantasma\n-P: Jogador\n-%: Pilula\n-b: Bomba";
        cout << "\n\n  Input: " ;
        char cmd;
        cin >> cmd;

        if (cmd == 'q') {
            break;
        }

        movjog(cmd);
        movfantasma(); 

        
        for (auto& f : fantasma) { //colisao dos fantasmas
            if (f.l == jogador.l && f.c == jogador.c) {
                system("clear");
                cout << "Voce foi pego por um fantasma! Game Over.\n\n";
                // cout << "Pontos: " << pontos << "\n";
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


        // if (fantasmasRestantes == 0) { 
        //     system("clear");
        //     cout << "Parabens!\n";
        //     cout << "Pontuacao final: " << pontos << "\n";
        //     return 0; // Termina o jogo
        // }
    }



      return 0;
 }