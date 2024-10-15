//Sort 
//bubblesort
#include <iostream>
#include <cassert>
#include "ordenacao.cpp"


using namespace std;

int main(){
  int va[5]{20,10,3,88,14};
  bubblesort(va,5);
  assert(va[0]==3 && va[1] == 10 && va[2] == 14 && va[3]==20 && va[4] == 88);
  cout << "\nOK\n";

  int vb[2]{-99,-1};
  bubblesort(vb,2);
  assert(vb[0]==-99 && vb[1] == -1);

  return 0;
}
