#include <iostream>
using namespace std;

class Produto {
    int codigo;
    string nome;
    float preco;
};

class CatalogoProdutos {
    Produto produtos[10000];

    public:
    void listarProdutos() {
        // ...
    }
};

class Cliente {
    int codigo;
    string nome;
    string endereco;
    int cpf;
    
    public:
    void imprimirNome(){ // geralmente dentro da classe apenas a assinatura do método é listado e ela é definida fora
        cout << "Nome: " + this->nome;
    }
};

class ListaClientes {
    Cliente clientes[10000];

    public:
    void listarClientes(){
        // ...
    }
};


int main()
{
    
    cout << "\n\n";
    return 0;
}