#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  double valor;
  double vet[100];
  cin >> valor;
  vet[0] = valor;

  for(int i=1;i < 100;i++){
    vet[i] = vet[i-1]/2.0;
  }
  for(int i = 0; i < 100; i++) {  // Imprimir todos os valores
    cout << fixed << setprecision(4) << "N[" << i << "] = " << vet[i] << endl;
  }

  return 0;
  }