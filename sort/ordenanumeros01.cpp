#include <iostream>
#include "vetor.cpp"
#include <algorithm>

using namespace std;

const int N = 10000;

int main(){
  //3 parametros (estrutura, estrutura+tamanho)
  std::sort(vet,vet+N);

  //SAIDA
  for(int i=0; i<N; i++){
    cout << vet[i]<<endl;
  }

  return 0;
}