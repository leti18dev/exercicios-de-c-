//Como definir e percorrer um array Unidimensional
#include <iostream>
using namespace std;

int main(){
    int vet[6]; //Define um vetor de 6 elementos inteiro
    cout << "Digite 6 valores\n";
    for(int i=0;i<6;i++){
        cin >> vet[i];
    }
    cout << "Valores: " << endl;
    //Exibir somente dos valores
    for(int i=0;i<6;i++){
        cout << vet[i] << endl;
    }

    //Exibir os valores e os indices em ordem normal
    for(int i=0;i<6;i++){
        cout << "Vetor[" << i <<"]= " << vet[i] << endl;
    }
    cout << "Valor específico: " << vet[3] << endl;

    //Exibir o vetor em ordem reversa
    for(int i=5;i>=0;i--){
        cout << "Vetor[" << i <<"]= " << vet[i] << endl;
    }


    return 0;
}