#include <iostream>
using namespace std;

class Contato{
    private:
    
    // atributos
    string nome;
    string telefone;
    string email;
    string corfav;
    
    public:
    
    // construtores
    Contato(string nome, string telefone, string email, string corfav){
        this->nome=nome;
        this->telefone=telefone;
        this->email=email;
        this->corfav=corfav;
    }
    Contato(string nome, string telefone, string email){
        this->nome=nome;
        this->telefone=telefone;
        this->email = email;
    }
    
    // métodos públicos
    void imprimir(){
        cout << "\n" << this->nome << " | " << this->telefone << " | " << this->email << " | " << this->corfav << "\n";
    }
    
    // enum → setContato()
    enum tipoAlteracao{
        EMAIL,
        CORFAV,
        TELEFONE
    };
    
    // void setContato(int telefone){ this->telefone = telefone; } // sobrecarga é suportada em classes
    void setContato(int alteracao, string novoValor){
        switch (alteracao){
            case tipoAlteracao::TELEFONE:
                this->telefone = novoValor;
                break;
            case tipoAlteracao::EMAIL:
                this->email = novoValor;
                break;
            case tipoAlteracao::CORFAV:
                this->corfav = novoValor;
                break;
            default:
                cerr << "\n\nERRO DE PASSAGEM DE PARÂMETROS EM L41: setContato()";
        }
    }
    
};

int main(){

    Contato c1 = Contato("Gabriel", "123123", "gabriel@email.com", "#6F49FA");
    c1.imprimir();
    c1.setContato(Contato::tipoAlteracao::TELEFONE, "789789");
    c1.imprimir();

    Contato c2 = Contato("Greice", "456456", "greice@email.com");
    c2.imprimir();
    c2.setContato(Contato::tipoAlteracao::CORFAV, "Azul");
    c2.imprimir();

    cout << "\n\n";
    return 0;
}