#include <iostream>
#include <cstring>
using namespace std;


// para registrarVenda() e mediaMovel()
double historicoDeVendas[100] = {};
int contadorDeVendas = 0;

// para autenticar()
string senhaRegistrada = "minhaSenha123";

double registrarVenda(double valor, bool reset=false){
    static double valorVendas = 0;
    if (reset){
        valorVendas = 0;
        contadorDeVendas = 0;
    };
    valorVendas+= valor;

    historicoDeVendas[contadorDeVendas++] = valor;

    
    return valorVendas;
};

double mediaMovel(int janela = 3){
    double tempsoma = 0;
    if (janela > contadorDeVendas){
        janela = contadorDeVendas;
    };
    for (int i = 0; i < janela; ++i){
        tempsoma += historicoDeVendas[i];
    }
    return tempsoma/janela;
}

void imprimirTitulo(string texto, int largura = 30, char moldura = '='){
    if(texto.length() > largura){
        cout << endl << texto << endl;
        return;
    }

    int caracteresDeMoldura = (largura - texto.length()) / 2;

    cout << endl;
    for (int i = 0; i < caracteresDeMoldura; ++i){
        cout << moldura;
    }
    cout << texto;
    for (int i = 0; i < caracteresDeMoldura; ++i){
        cout << moldura;
    }    
    cout << endl << endl;
};

bool autenticar(const string usuario, const string senhaDigitada, int tentativasMax = 3){
    static int tentativasAtuais = 0;
    if (tentativasMax <= tentativasAtuais){
        cout << endl << "Tentativas máximas atingidas" << endl;
        return false;
    };

    if (senhaDigitada == senhaRegistrada){
        tentativasAtuais = 0;
        cout << endl << "=-=-=-=-=-=\nUSUÁRIO AUTENTICADO: " << usuario << endl;
        return true;
    } else {
        ++tentativasAtuais;
        cout << endl << "=-=-=-=-=-=\nSENHA INCORRETA" << endl;
        if (tentativasMax-tentativasAtuais == 0){
            cout << "LIMITE DE TENTATIVAS ATINGIDO!" << endl;
            return false;
        }
        cout << "TENTATIVAS RESTANTES: " << tentativasMax-tentativasAtuais << endl;
        return false;
    }
};

long long fatorial(int n, bool resetContador = false){
    static long long numeroAtual = 0;
    if (resetContador){
        numeroAtual = 0;
    }
    numeroAtual += n;
    return numeroAtual;
}

int main(){
    double valortotallocal;
    double mediatemp;


    valortotallocal = registrarVenda(10);
    cout << endl << "\n---------\nTotal: " << valortotallocal << endl;
    mediatemp = mediaMovel(100);
    cout << endl << "Média: " << mediatemp << endl;

    valortotallocal = registrarVenda(20);
    cout << endl << "\n---------\nTotal: " << valortotallocal << endl;
    mediatemp = mediaMovel(100);
    cout << endl << "Média: " << mediatemp << endl;

    valortotallocal = registrarVenda(30);
    cout << endl << "\n---------\nTotal: " << valortotallocal << endl;
    mediatemp = mediaMovel(100);
    cout << endl << "Média: " << mediatemp << endl;

    valortotallocal = registrarVenda(20, true);
    cout << endl << "\n---------\nTotal: " << valortotallocal << endl;
    mediatemp = mediaMovel(100);
    cout << endl << "Média: " << mediatemp << endl;




    imprimirTitulo("Testando");
    imprimirTitulo("Teste", 15);
    imprimirTitulo("Teste Final", 20, '-');

    autenticar("gabriel", "senha");
    autenticar("gabriel", "minhaSenha123");
    autenticar("gabriel", "teste");
    autenticar("gabriel", "senha teste");
    autenticar("gabriel", "senha teste");
    autenticar("gabriel", "minhaSenha123");


    // EXERCÍCIO 5
    int selecaoCalc;
    cout << "Selecione uma operação\n  1- Soma\n  2- Subtração\n  3- Divisão\n  4- Multiplicação\n   Resposta: ";
    cin >> selecaoCalc;

    switch (selecaoCalc){
        case 1:
        {
            int num1;
            int num2;
            cout << "\nNúmero 1: ";
            cin >> num1;
            cout << "\nNúmero 2: ";
            cin >> num2;
            cout << "\nSoma: " << num1+num2 << endl;
        }
            break;
        case 2:
        {
            int num1;
            int num2;
            cout << "\nNúmero 1: ";
            cin >> num1;
            cout << "\nNúmero 2: ";
            cin >> num2;
            cout << "\nSubtração: " << num1-num2 << endl;
        }
            break;
        case 3:
        {
            int num1;
            int num2;
            cout << "\nNúmero 1: ";
            cin >> num1;
            cout << "\nNúmero 2: ";
            cin >> num2;
            cout << "\nDivisão: " << num1/num2 << endl;
        }
            break;            
        case 4:
        {
            int num1;
            int num2;
            cout << "\nNúmero 1: ";
            cin >> num1;
            cout << "\nNúmero 2: ";
            cin >> num2;
            cout << "\nMultiplicação: " << num1*num2 << endl;
        }
            break;  
        default:
            cout << "Inválido\n\n";
            return 0;
    }

    cout << "\n\n\n\n";
    cout << endl << fatorial(0);
    cout << endl << fatorial(5);
    cout << endl << fatorial(10);
    cout << endl << fatorial(20, true);
    cout << endl << fatorial(90, true);
    cout << endl << fatorial(10);
    cout << endl;

    

    return 0;
}