#include <iostream>
#include <algorithm>
#include <string>
#include <limits>
#include <cmath>
#include <cctype>

using namespace std;

void limpaBuffer() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
};

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
    long funcao5_resultado = count(str.begin(), str.end(), ch);
    return funcao5_resultado;
};

void funcao6(){
    cout << endl << "   1- Jogar" << endl << "   2- Configurações" << endl << "   3- Sair" << endl << endl;
};

int funcao7(int numBase, int numPotencia = 2){
    int funcao7_resultado = pow(numBase, numPotencia);
    return funcao7_resultado;
};

char funcao8(char ch){
    if (isalpha(ch) != 0) {
        return tolower(ch);
    } else {
        return ch;
    }
};

void funcao9(string &str, char ch){
    for (int i = 0; i < str.size(); ++i){
        if (str[i] == '_'){
            str[i] = ch;
        };
    };
};

string funcao10(int num, char ch = '_'){
    string func10_resultado = "";
    for (int i = 0; i < num; ++i){
        func10_resultado += ch;
    };
    return func10_resultado;
}


void funcao11_lerNota(double &num){
    bool func11_respostaValidada = false;
    do {
        cout << endl << endl << "Insira um número: ";
        cin >> num;
        if (num <= 10 && num >= 0){
            func11_respostaValidada = true;
        } else {
            cout << endl << "Resposta inválida, deve estar entre 0 e 10" << endl;
        };
    } while (
        func11_respostaValidada == false
    );
    cout << endl << "Resposta validada" << endl;
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
    // cin >> selecaoDeFuncao;
    selecaoDeFuncao = 11; //VALOR PREDEFINIDO PARA MANUTENÇÃO DO CÓDIGO, EXCLUIR ESSA LINHA E DESCOMENTAR ANTERIOR DEPOIS

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
            limpaBuffer();
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
        case 8:
            char func8_ch;
            char func8_result;
            cout << endl << endl << "Informe um digito: ";
            cin >> func8_ch;
            func8_result = funcao8(func8_ch);
            cout << endl << "Resultado: " << func8_result << endl << endl;
            break;
        case 9:
        {
            string func9_str;
            char func9_char;
            cout << endl << endl << "Digite uma frase: ";
            limpaBuffer();
            getline(cin, func9_str);
            cout << endl << "Digite um caractere: ";
            cin >> func9_char;
            funcao9(func9_str, func9_char);
            cout << endl << "Resultado: " << func9_str << endl << endl;
        }
            break;
        case 10:
        {
            int func10_num;
            string func10_char;
            string func10_resultado;
            cout << endl << endl << "Digite um número: ";
            cin >> func10_num;
            cout << endl << "Digite um caractere: ";
            limpaBuffer();
            getline(cin, func10_char);
            if (!func10_char.empty()) {
                func10_resultado = funcao10(func10_num, func10_char[0]);
            } else {
                func10_resultado = funcao10(func10_num);   
            };
            cout << endl << "Resultado: " << func10_resultado << endl << endl;
        }
            break;
        case 11:
            double func11_num1;
            double func11_num2;
            double func11_num3;
            double func11_media;
            funcao11_lerNota(func11_num1);
            funcao11_lerNota(func11_num2);
            funcao11_lerNota(func11_num3);
            cout << endl << ((func11_num1 + func11_num2 + func11_num3) / 3) << endl;


            break;


    default:
        cout << "Função em manutenção ou inexistente, tente novamente mais tarde";
        return 0;
    };
    return 0;
} 