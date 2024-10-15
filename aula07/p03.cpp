#include <iomanip>
#include <iostream>
#include <algorithm>

using namespace std;

struct Data{
  int dia;
  int mes;
  int ano;
};
bool ordena(const Data &d1 , const Data &d2){
  return(d1.ano < d2.ano) || (d1.ano == d2.ano && d1.mes < d2.mes) || (d1.ano == d2.ano && d1.mes == d2.mes && d1.dia < d2.dia);
}

int main(){
  int n; //QUANTIDADE DE DATAS 
  cin >> n;
  Data vet[n];
  cout << "informe " << n << " datas (dd mm aaaa)\n";

  for(int i = 0; i<n; i++){
    cin >> vet[i].dia >> vet[i].mes >> vet[i].ano;
  }
  sort(vet,vet+n,ordena);
  for(int i = 0; i<n; i++){
    cout << vet[i].dia << "/" << vet[i].mes << "/" << vet[i].ano << endl;
  }
  return 0;
}

//dia
//mes
//ano
// 16 09 2024
// 17 09 2024
//15 09 2024
//16 09 2023
//15 08 2023 