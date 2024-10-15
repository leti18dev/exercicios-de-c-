//primeiro exemplo de struct 
#include <iomanip>
#include <iostream>
#include <algorithm>

using namespace std;

//criamos a nossa struct
struct aluno{
  int matricula;
  string nome;
  float nota;
};
//funcao de ordenacao que sera utilizada pela funcao sort
//nesta funcao definimos a variavel(eis) que utilizaremos na ordenacao 
bool ordena(const aluno &a1 ,const aluno &a2){
  return(a1.nota > a2.nota);
}

const int N=5; //numero de alunos na turma

int main(){
  aluno turma[N]={
    {909090, "fulano",10.0},
    {808080, "leticia",9.0},
    {709070, "lol",5.0},
    {404404, "not found",4.04},
    {309030, "beltrano",6.1},
  };
  sort(turma,turma+N,ordena);

//setw() - ESPACOS JUSTIFICADOS
//setfill() - DEFINE O QUE IRA CONTER QUANDO
  for(int i = 0; i<N; i++){
    cout << setw(8) << setfill('0') << turma[i].matricula << " " << setw(30) << setfill(' ')  << turma[i].nome << " "<< setw(4) << right << fixed << setprecision(2) << turma[i].nota << endl; 
  }

  return 0;
}