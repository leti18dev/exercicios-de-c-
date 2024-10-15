// if e else

#include <iostream>
using namespace std;
int main(){
  int n;
  cout << "digite um valor inteiro: ";
  cin >> n;
  if (n < 0){ // os parentes são obrigatorios
    cout << "negativo"<< endl;
  }
  else if(n == 0){
    cout << "zero";
  }
  else{
    cout << "positivo";
  }
  return 0;
}