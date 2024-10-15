#include <iostream>
#include <iomanip>

using namespace std;


float menorConsumo(float vet[],int n){
  float menor = vet[0];
  for(int i=1; i<n; i++){
    if(menor > vet[i]){
      menor = vet[i];
    }
  }
  return menor;
}

//encontre o maior valor 
float maiorConsumo(float vet[], int n){
  float maior = vet[0];
  for(int i=1; i <n ; i++){
    if(vet[i] > maior){
      maior= vet[i];
    }
  }
  return maior;
}

float mediaFun(float soma, int n){
  return soma/n;
}

int main(){

  int N;//horas que a maq foi monitorada 
  cin >> N;
  float vet[N];
  
  for(int i=0; i<N; i++){// leitura dos dados
    cin >> vet[i];  
  }
  int baixo=0, moderado = 0, alto =0; 
  float soma=0;

  for(int i=0 ; i< N; i++){
    if(vet[i] < 1.0){//baixo
      baixo ++;
    }else if(vet[i] <= 2.5){
      moderado++;
    }else{
      alto++;
    }
    soma = soma + vet[i];
  }

  float media = mediaFun(soma,N);
  float menor = menorConsumo(vet,N);
  float maior = maiorConsumo(vet,N);

  cout << "horas de consumo baixo: " << baixo << endl;
  cout << "horas de consumo alto: " << alto << endl;
  cout << "horas de consumo moderado: " << moderado << endl;
  cout << "menor consumo " << menor << endl;
  cout << "maior consumo " << maior << endl;  
  cout << "media de consumo: " << fixed << setprecision(1) << media << endl;


  return 0;
}