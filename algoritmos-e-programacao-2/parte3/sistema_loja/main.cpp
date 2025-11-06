#include <iostream>
#include <fstream>
#include <sstream>
#include <limits>
#include <iomanip>
using namespace std;

// salvar em 2 arquivos .txt: registrovendas.txt e registroprodutos.txt
// usar separador ";" entre itens e pulo de linha entre registros

// [CODIGO];[NOME];[PRECO];[ESTOQUE]
void cadastrarproduto(){
    int prod_codigo, prod_estoque;
    string prod_nome;
    float prod_preco;
    cout<<"\n\n --Registro de produto--\n Codigo: ";
    cin >> prod_codigo;
    cout<<" Nome: ";
    cin >> prod_nome;
    cout<<" Preco: ";
    cin >> prod_preco;
    cout<<" Estoque: ";
    cin >> prod_estoque;

    ofstream registroprodutos("registroprodutos.txt", ios::app);
    registroprodutos << prod_codigo << ";" << prod_nome << ";" << prod_preco << ";" << prod_estoque << endl;
    registroprodutos.close();
}

void listarprodutos(){
    cout << "\n\n";
    cout << "\n\n";
    ifstream registroprodutos("registroprodutos.txt");
    string linha_completa, campo;
    cout << fixed << setprecision(2);
    
    cout << "--- Lista de Produtos ---" << endl;
    cout << left 
         << setw(10)  << "CODIGO"
         << setw(20)    << "NOME"
         << right
         << setw(10)   << "PRECO"
         << setw(10) << "ESTOQUE"
         << endl;
         
    cout << setfill('-') << setw(10 + 20 + 10 + 10) << "" << endl;
    cout << setfill(' ');

    while(getline(registroprodutos, linha_completa)){
        stringstream ss(linha_completa);
        string prod_codigo, prod_nome, prod_preco, prod_estoque;
        if (getline(ss, prod_codigo, ';')) {
            if (getline(ss, prod_nome, ';')) {
                if (getline(ss, prod_preco, ';')) {
                    getline(ss, prod_estoque);
                    cout << left 
                         << setw(10)  << prod_codigo
                         << setw(20)    << prod_nome
                         << right 
                         << setw(10)   << prod_preco
                         << setw(10) << prod_estoque
                         << endl;
                }
            }
        }
    };
    registroprodutos.close();
    cout << "\n\nPressione enter para prosseguir\n";
    string tempenter;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, tempenter);
}

void registrarvenda(){
    cout << "\n\n";
    
}

void exibirmenu(){
    while (true){
        int escolhanavegacaomenu;
        cout<<"\n\n";
        cout << "---MENU---\n 1- Cadastrar produto\n 2- Listar produtos";
        cout << "\n 3- Registrar venda\n 4- Listar vendas\n 0- Sair\n\n -> ";
        cin >> escolhanavegacaomenu;

        switch (escolhanavegacaomenu){
            case 1:
                cadastrarproduto();
                break;
            case 2:
                listarprodutos();
                break;
            case 3:
                //registrarvenda();
                break;
            case 4:
                //listarvendas();
                break;
            case 0:
                return;
        }
    }
}

int main(){

    exibirmenu();
    cout << "\n\n";
    return 0;
}