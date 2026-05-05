#include <iostream>
using namespace std;
// atributos e métodos estáticos em classe
// vive na classe, é compartilhado entre todas as instâncias

class Retangulo {
    private:
        float altura = 1;
        float largura = 1;
    public:
        static float area;
        Retangulo();
        Retangulo(float altura, float largura) {
            this->altura = altura;
            this->largura = largura;
        }
        
        float calculaarea() {
            return altura * largura;
        }

        void imprime(string varname) {
            cout << "--" << varname << "--\n\n";
            cout << "Altura: " << altura << " | Largura: " << largura << "\n";
            cout << "Área: " << area << "\n\n";
        }
};
float Retangulo::area = 45;

int main(){

    Retangulo* r1 = new Retangulo(2, 3);
    Retangulo* r2 = new Retangulo(4, 5);

    Retangulo::area = r1->calculaarea();

    r1->imprime("r1"); // área se torna 6 pra r1 e r2

    Retangulo::area = r2->calculaarea(); // área se torna 20 pra r1 e r2
    r2->imprime("r2");
    r1->imprime("r3");


    cout << "\n\n";
    return 0;
}