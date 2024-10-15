#include <iomanip>
#include <iostream>
#include <algorithm>

using namespace std;
struct veiculo{
  string modelo;
  float valor;
  int ano;
};
bool ordena(const veiculo &d1, const veiculo &d2){
  return(d1.valor > d2.valor) || (d1.valor == d2.valor && d1.ano > d2.ano) || (d1.valor == d2.valor && d1.ano == d2.ano && d1.modelo < d2.modelo);
}

int main(){
  int N;
  cin >> N ;

  veiculo vet[N];

  for(int i = 0; i<N; i++){
    cin >> vet[i].modelo >> vet[i].valor >> vet[i].ano;
  }
  sort(vet,vet+N,ordena);

  for(int i = 0; i<N; i++){
    cout << vet[i].modelo << " " << vet[i].valor << " " << vet[i].ano << endl;
  }


  return 0; 
}