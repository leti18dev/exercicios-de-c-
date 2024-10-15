#include <iostream>
#include <algorithm>

using namespace std;
struct xadrez{
  string nome;
  string pais;
  int vitoria;
  int derrota;
  int saldo;
};
bool cmp(const xadrez &a,const xadrez &b){
  return (a.saldo > b.saldo) || (a.saldo == b.saldo && a.nome < b.nome);
}
int main(){
  int x;//participantes
  cin >> x;
  xadrez jogadores[x];
  
  for(int i=0; i<x; i++){
    cin >> jogadores[i].nome >> jogadores[i].pais>> jogadores[i].vitoria >> jogadores[i].derrota ;
    jogadores[i].saldo = jogadores[i].vitoria - jogadores[i].derrota;

  }
  sort(jogadores, jogadores+x, cmp);
  for(int i=0; i < x; i++){
    cout << jogadores[i].nome << " " << jogadores[i].pais<<endl;

  }

  return 0;
}