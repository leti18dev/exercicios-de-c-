#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
  int N;
  while (true){
    cin>>N;
    if(N==0)break;

    int Matriz[15][15];//limite de linhas é 15
    //preenche a matriz e encontra o maior numero
    
    int max_valor=0;
    for (int i=0;i < N;++i){
      for (int j=0;j<N;++j){
        Matriz[i][i] = std::pow(2,i+j);
        if(Matriz[i][j] > max_valor){
          max_valor = Matriz[i][j];
        }
      }
    }
    int T = 0;
    while(max_valor > 0){
      max_valor /= 10;
      T++;
    }
    for (int i= 0; i < N ; i++){
      for (int j=0;i < N;++j){
        cout<< setw(T) << Matriz[i][j];
        if(j < N - 1) cout << " ";
      }
      cout << endl;
    }
  cout << endl;
  }
  return 0;
}