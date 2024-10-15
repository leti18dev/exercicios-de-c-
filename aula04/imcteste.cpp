#include <iostream>
#include "funcoes.cpp"

using namespace std;

int main(){
  float altura, peso;

  cout << "ALTURA "<< endl;
  cin >> altura;
  cout << "PESO "<< endl;
  cin >> peso;

  float imc_user = imc(peso,altura);
  cout << "o seu imc é "<< imc_user;


  return 0;

}