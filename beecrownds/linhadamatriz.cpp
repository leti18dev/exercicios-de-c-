#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int L;
    char T;
    double M[12][12];

    // Ler o valor da linha e o tipo de operação
    cin >> L;
    cin >> T;

    // Ler os elementos da matriz
    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            cin >> M[i][j];
        }
    }

    // Calcular a soma dos elementos da linha L
    double soma = 0.0;
    for (int j = 0; j < 12; ++j) {
        soma += M[L][j];
    }

    // Realizar a operação solicitada
    if (T == 'S') {
        cout << fixed << setprecision(1) << soma << endl;
    } else if (T == 'M') {
        cout << fixed << setprecision(1) << soma / 12.0 << endl;
    }

    return 0;
}
