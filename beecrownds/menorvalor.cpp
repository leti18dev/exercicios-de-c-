#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> X(N);  // Criando o vetor com tamanho N

    // Lendo os valores do vetor
    for (int i = 0; i < N; ++i) {
        cin >> X[i];
    }

    // Inicializando o menor valor e sua posição
    int menor_valor = X[0];
    int posicao = 0;

    // Encontrando o menor valor e sua posição
    for (int i = 1; i < N; ++i) {
        if (X[i] < menor_valor) {
            menor_valor = X[i];
            posicao = i;
        }
    }

    // Imprimindo o menor valor e sua posição
    cout << "Menor valor: " << menor_valor << endl;
    cout << "Posicao: " << posicao << endl;

    return 0;
}
