#include <iostream>
#include <algorithm>
#include <string>
#include <limits>
#include <cmath>

using namespace std;

int funcao1(int num1, int num2) {
    return (num1 + num2);
};

void funcao2(int &num){
    num *=2;
};

int funcao3(int num){ // 0 = par | 1 = ímpar
    if (num % 2 == 1){
        return 0    ;
    } else {
        return 1;
    };
};

int funcao4(int num1, int num2){
    if (num1 - num2 >= 0) {
        return num1;
    } else {
        return num2;
    }
};

int funcao5(string str, char ch){
    long result = count(str.begin(), str.end(), ch);
    return result;
};

void funcao6(){
    cout << endl << "   1- Jogar" << endl << "   2- Configurações" << endl << "   3- Sair" << endl << endl;
};

int funcao7(int numBase, int numPotencia = 2){
    int resultado = pow(numBase, numPotencia);
    return resultado;
};


int main() {

    // declaração de variáveis
    int selecaoDeFuncao = 0;

    cout << "======== MENU ========" << endl << endl << "1) Soma de dois números" << endl << "2) Dobrar valor" << endl;
    cout << "3) Verificar se é par" << endl << "4) Maior valor entre dois números" << endl << "5) Contar ocorrencia de caractere" << endl;
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
        case 3:
            int func3_num;
            int func3_resultado;
            cout << endl << endl << "Digite o número: ";
            cin >> func3_num;
            func3_resultado = funcao3(func3_num);
            if (func3_resultado == 1) {
                cout << endl << "É par" << endl << endl;
                break;
            } else {
                cout << endl << "É ímpar" << endl << endl;
                break;
            };
        case 4:
            int func4_num1;
            int func4_num2;
            int func4_resultado;
            cout << endl << endl << "Digite o primeiro número: ";
            cin >> func4_num1;
            cout << endl << "Digite o segundo número: ";
            cin >> func4_num2;
            func4_resultado = funcao4(func4_num1, func4_num2);
            cout << endl << "Maior: " << func4_resultado << endl << endl;
            break;
        case 5:
        {
            string func5_string;
            char func5_char;
            int func5_resultado;
            cout << endl << endl << "Digite a frase: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            getline(cin, func5_string);
            cout << endl << "Digite o caractere: ";
            cin >> func5_char;
            func5_resultado = funcao5(func5_string, func5_char);
            cout << endl << "Quantidade de vezes que apareceu: " << func5_resultado << endl << endl;
        }
            break;
        case 6:
            funcao6();
            break;
        case 7:
            int func7_numBase;
            int func7_numPotencia;
            int func7_resultado;
            cout << endl << endl << "Digite o número base: ";
            cin >> func7_numBase;
            cout << endl << "Digite a potência: ";
            cin >> func7_numPotencia;
            if (func7_numPotencia < 1) {
                func7_resultado = funcao7(func7_numBase);
            } else {
                func7_resultado = funcao7(func7_numBase, func7_numPotencia);
            }; 
            cout << endl << "Resultado: " << func7_resultado << endl << endl;
            break;



    default:
        cout << "Função em manutenção ou inexistente, tente novamente mais tarde";
        return 0;
    };
    return 0;
}