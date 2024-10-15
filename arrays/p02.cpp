//Definimos uma constante que irá definir
// o tamanho do nosso vetor

#include <iostream>
using namespace std;

int main(){
    const int N = 5; //CONSTANTE
    int vet[N];

    cout << "Digite " << N << " valores\n";
    for(int i=0;i<N;i++){
        cin >> vet[i];
    }

    cout << "Valores do vetor: " << endl;
    for(int i=0;i<N;i++){
        cout << vet[i] << endl;
    }

    cout << "Em órdem reversa: " << endl;
    for(int i=N-1;i>=0;i--){
        cout << "Vetor[" << i <<"]= " << vet[i] << endl;
    }


    return 0;
}