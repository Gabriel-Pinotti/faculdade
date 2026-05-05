#include <iostream>
using namespace std;

class Pessoa {
    private:
        string nome;
        int idade;
    public:
        Pessoa(string nome, int idade) {
            this->nome = nome;
            this->idade = idade;
        }
        virtual void dormir() { // virtual → acessa esse caso a classe filho não tenha a sua
            cout << "Pessoa está dormindo\n";
        }
};

class Latina : public Pessoa { // Latina herda de Pessoa
    public:
        Latina(string nome, int idade):Pessoa(nome, idade) {}
        void dormir() {
            cout << "Pessoa latina está dormindo\n";
        }
};


int main()
{
    Pessoa* p1 = new Pessoa("Gabriel", 19);
    Pessoa* p2 = new Latina("Gabriel", 19);
    p1->dormir();
    p2->dormir();

    
    cout << "\n\n";
    return 0;
}