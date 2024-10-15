// funcoes 
#include <iostream>

using namespace std;
int adiciona(int x,int y){
  int t = x + y;
  return t;
}

int main() {
  int r = 500;//variaveis locais 
  int x = 10,y = 2;

  int soma = adiciona(x,y);
  cout << "soma " << soma << endl;


  return 0;
}