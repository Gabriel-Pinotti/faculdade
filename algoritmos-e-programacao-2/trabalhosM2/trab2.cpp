#include <iostream>
#include <cstdlib>
using namespace std;

struct Torre {
    int* discos;
    int topo;
    int capacidade;
    char nome;
};

void inicializarTorre(Torre &t, int capacidade, char nome) {
    t.discos = (int*) malloc(capacidade * sizeof(int));
    t.capacidade = capacidade;
    t.topo = -1;
    t.nome = nome;
}

void push(Torre &t, int disco) {
    t.discos[++t.topo] = disco;
}

int pop(Torre &t) {
    return t.discos[t.topo--];
}

void mostrarTorres(Torre A, Torre B, Torre C, int n) {
    cout << "\n";
    for (int i = n - 1; i >= 0; --i) {
        
        if (i <= A.topo) { //a
            int tam = A.discos[i];
            cout << string(n - tam, ' ');
            cout << string(tam, '*') << "|" << string(tam, '*');
            cout << string(n - tam, ' ');
        } else cout << string(n, ' ') << "|" << string(n, ' ');

        cout << "   ";

        
        if (i <= B.topo) { //b
            int tam = B.discos[i];
            cout << string(n - tam, ' ');
            cout << string(tam, '*') << "|" << string(tam, '*');
            cout << string(n - tam, ' ');
        } else cout << string(n, ' ') << "|" << string(n, ' ');

        cout << "   ";

        
        if (i <= C.topo) { //c
            int tam = C.discos[i];
            cout << string(n - tam, ' ');
            cout << string(tam, '*') << "|" << string(tam, '*');
            cout << string(n - tam, ' ');
        } else cout << string(n, ' ') << "|" << string(n, ' ');

        cout << "\n";
    }

    // linha dos nomes
    int larguraTorre = n * 2 + 1;
    cout << string(larguraTorre / 2, ' ') << "A"
         << string(larguraTorre / 2 + 3, ' ')
         << string(larguraTorre / 2, ' ') << "B"
         << string(larguraTorre / 2 + 3, ' ')
         << string(larguraTorre / 2, ' ') << "C"
         << "\n";
}


void moverDiscos(int n, Torre &origem, Torre &destino, Torre &aux, int total,
                 Torre &A, Torre &B, Torre &C, long long &contador) {
    if (n == 1) {
        int disco = pop(origem);
        push(destino, disco);
        contador++;
        mostrarTorres(A, B, C, total);
        return;
    }
    moverDiscos(n - 1, origem, aux, destino, total, A, B, C, contador);
    int disco = pop(origem);
    push(destino, disco);
    contador++;
    mostrarTorres(A, B, C, total);
    moverDiscos(n - 1, aux, destino, origem, total, A, B, C, contador);
}

int main() {
    int n;
    cout << "Digite o numero de discos: ";
    cin >> n;

    Torre A, B, C;
    inicializarTorre(A, n, 'A');
    inicializarTorre(B, n, 'B');
    inicializarTorre(C, n, 'C');

    
    for (int i = n; i >= 1; --i) {
        push(A, i);
    }

    cout << "\nEstado inicial:\n";
    mostrarTorres(A, B, C, n);

    long long contador = 0;

    moverDiscos(n, A, C, B, n, A, B, C, contador);

    cout << "\nResolvido em " << contador << " passos.\n";

    free(A.discos);
    free(B.discos);
    free(C.discos);

    cout << "\n\n";
    return 0;
}
