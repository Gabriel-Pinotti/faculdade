#include <iostream>
using namespace std;

class Carro {
    private:

    int ano;
    string cor;
    string placa;

    public:

    Carro(int ano, string cor, string placa){ // construtor não é tipado
        this->ano = ano; // this acessa atributos e métodos da classe
        this->cor = cor; // this-> cor é o atributo declarado acima, cor (sem o this) é o parâmetro recebido
        this->placa = placa;
    }

    void exibirAtributos(){
        cout << "\n --Carro-- \n->Ano: " << this->ano << "\n->Cor: " << this->cor << "\n->Placa: " << this->placa;
    };
};


int main()
{

    cout << "\nGerando carro...\n";
    Carro c = Carro(1990, "vermelho", "ABC-1234");

    // cout << "\n --Carro-- \n->Ano: " << c.ano << "\n->Cor: " << c.cor << "\n->Placa: " << c.placa;
    // A função gera erro pois os atributos estão privados

    c.exibirAtributos();

    cout << "\n\n";
    return 0;
}