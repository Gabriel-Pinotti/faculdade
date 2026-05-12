#include <iostream>
using namespace std;

class Animal {
    private:
        string nome;

    public:
        // construtor
        Animal(string nome) {this->nome=nome;};

        virtual void comer() {
            cout << "\nAnimal comeu";
        };
};

class Mamifero : public Animal {
    public:
        // construtor
        Mamifero(string nome) : Animal(nome) {}

        void comer() {
            cout << "\nMamífero comeu";
        };
};

class Cachorro : public Mamifero {
    public:
        // construtor
        Cachorro(string nome) : Mamifero(nome) {}

        void comer() {
            cout << "\nCachorro comeu";
        };

};


int main()
{
    Animal *m = new Mamifero("Morcego"); 
    // imprime Animal comeu pois é um ponteiro pra animal (no caso de não ser virtual)
    // se for virtual em animal, imprime mamífero
    // se não for virtual em animal, imprime animal
    // se não existir em mamífero, mesmo sendo virtual em animal, imprime animal (pois busca na pai caso não exista na filho)
    m->comer();

    Animal *c = new Cachorro("Boris");
    c->comer();
    // imprime cachorro comeu pois Animal possui virtual em comer(), então busca na classe de mais baixa instância
    
    cout << "\n\n";
    return 0;
}