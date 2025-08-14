#include <iostream>
using namespace std;

int funcao1(int num1, int num2) {
    return (num1 + num2);
};

void funcao2(int &num){
    num *=2;
};



int main() {

    // declaração de variáveis
    int selecaoDeFuncao = 0;

    cout << "======== MENU ========" << endl << endl << "1) Soma de dois numeros" << endl << "2) Dobrar valor" << endl;
    cout << "3) Verificar se e par" << endl << "4) Maior valor entre dois numeros" << endl << "5) Contar ocorrencia de caractere" << endl;
    cout << "6) Exibir menu" << endl << "7) Potencia (padrao 2)" << endl << "8) Converter para minusculo" << endl;
    cout << "9) Substituir caractere" << endl << "10) Criar mascara de caracteres" << endl << "11) Media com validacao" << endl;
    cout << "12) Normalizar texto" << endl << "13) Contar vogais e consoantes" << endl << "14) Maior frequencia de caractere" << endl;
    cout << "15) Remover duplicatas" << endl << "16) Estatisticas de vetor" << endl << "17) Busca linear modular" << endl;
    cout << "18) Verificar palindromo" << endl << "19) Mini calculadora" << endl << "20) Senha forte" << endl << endl;
    cout << "Resposta:  ";
    cin >> selecaoDeFuncao;


    switch (selecaoDeFuncao){
        case 1:
            int func1_num1;
            int func1_num2;
            int func1_final;
            cout << endl << endl << "Digite o primeiro número: ";
            cin >> func1_num1;
            cout << endl << "Digite o segundo número: ";
            cin >> func1_num2;
            func1_final = funcao1(func1_num1, func1_num2);
            cout << endl << "Resultado: " << func1_final << endl << endl;
            break;
        case 2:
            int func2_num;
            cout << endl << endl << "Digite o número: ";
            cin >> func2_num;
            funcao2(func2_num);
            cout << endl << "Resultado: " << func2_num << endl << endl;
            break;









    default:
        return 0;
    };
    return 0;
}