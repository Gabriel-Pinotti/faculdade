#include <iostream>
using namespace std;

// para ter algo totalmente não implementável na superclasse:

class MinhaSuperclasse {
    virtual void imprime() = 0;
}

// também pode herdar com class sub : public super1, public super2,...
class MinhaSubClasse : public MinhaSuperClasse {
    // herdou atributos

}

// herança múltipla seria MinhaSubClasse ter mais de 1 super classe

int main()
{
    
    cout << "\n\n";
    return 0;
}