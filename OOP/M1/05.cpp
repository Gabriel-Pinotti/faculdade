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

        void imprime() {
            cout << "Altura: " << altura << "\nLargura: " << largura << "\n";
            cout << "\nÁrea: " << area;
        }
};
float Retangulo::area = 45;

int main(){

    Retangulo* r1 = new Retangulo(2, 3);
    Retangulo::area = r1->calculaarea();
    r1->imprime();


    cout << "\n\n";
    return 0;
}