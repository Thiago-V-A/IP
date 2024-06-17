#include <iostream>

using namespace std;

struct Nodo {
    int valor;
    Nodo* proximo;
    Nodo(int val) : valor(val), proximo(nullptr) {}
};

bool detectarCiclo(Nodo* cabeca) {
    if (cabeca == nullptr) {
        return false;
    }

    Nodo* tartaruga = cabeca;
    Nodo* lebre = cabeca;

    while (lebre != nullptr && lebre->proximo != nullptr) {
        tartaruga = tartaruga->proximo;
        lebre = lebre->proximo->proximo;

        if (tartaruga == lebre) {
            return true;
        }
    }

    return false;
}

int main() {
    Nodo* cabeca = new Nodo(1);
    cabeca->proximo = new Nodo(2);
    cabeca->proximo->proximo = new Nodo(3);
    cabeca->proximo->proximo->proximo = cabeca->proximo;

    if (detectarCiclo(cabeca)) {
        cout << "Encontrou um ciclo na lista encadeada." << endl;
    } else {
        cout << "Não encontrou um ciclo na lista encadeada." << endl;
    }

    delete cabeca->proximo->proximo;
    delete cabeca->proximo;
    delete cabeca;

    return 0;
}
