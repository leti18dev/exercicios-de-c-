//primeiro exemplo de struct 

#include <iostream>
#include <algorithm>

using namespace std;

//criamos a nossa struct
struct aluno{
  int matricula;
  string nome;
  float nota;
};


int main(){
  aluno a,b; //declaramos nossa variavel do tipo aluno

  //inserir dados na struct
  a.matricula = 199212;
  a.nome = "leticia";
  a.nota = 8.3;


  //exibir dados 
  cout << "matricula: "<< a.matricula <<endl;
  cout << "nome: "<< a.nome <<endl;
  cout << "nota: "<< a.nota <<endl;

  //atrelar os valores diretamente 
  b = {808080, "alessandra", 10.0};
  aluno c= {707070, "taylor" , 8.5};
  


  return 0;
}