#include <iostream>
#include "funcoes.cpp"
#include <cassert>
using namespace std;

int main(){
  assert(primos(10)==false);
  assert(primos(89)==true);
  assert(converte(10,"C","F")==50.0);
  return 0;

}   

