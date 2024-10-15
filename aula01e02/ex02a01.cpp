#include <iostream>

using namespace std;

int main(){
  string nome;
  cout << "digite o seu nome: " << endl;
  getline(cin,nome); // origem e variavel
  // cin >> nome;  entrada até o espaço em branco 
  cout << "meu nome eh: " << nome;

  return 0;
}