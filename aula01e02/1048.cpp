#include <iostream>
using namespace std;

int main(){
  float salario;
  int percentual;
  float reajuste;

  cin >> salario;
  if(salario <= 400.00){
    percentual = 15%;

  }else if (salario >= 400.01)
  {
    percentual = 12%;
  }
  else if (salario >= 800.00)
  {
    percentual = 10%;
  }
  else if (salario >= 2000.00){
    percentual = 7%;
  }else if (salario > 2000.01){
    percentual = 4%;

  }
  

  return 0;
}