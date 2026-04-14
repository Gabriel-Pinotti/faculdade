#include <iostream>
using namespace std;

class Personagem {
    private: 
    string nome;
    int vida = 100;

    public:

    Personagem(string nome, int vida) { this->nome=nome; this->vida=vida; }

    virtual void imprime() {
        cout << nome << " | vida atual = " << vida;
    }
};

class Barbaro : public Personagem {
    private:
    int defesa;

    public:
    Barbaro(string nome, int vida, int defesa) : Personagem(nome,  vida) {
        this->defesa=defesa;
    }

    void imprime() { 
        Personagem::imprime();
        cout << " | defesa: " << defesa; 
    }
};



int main() {

    Personagem* p1 = new Personagem("Frodo", 50);
    Personagem* p2 = new Barbaro("Conan", 100, 10);

    p1->imprime();
    cout << "\n\n";
    p2->imprime();
    cout << "\n\n";

    return 0;
}