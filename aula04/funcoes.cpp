
int fatorial(int num){ // passagem por valor 
  int aux = 1;
  for(int i = 2; i<=num;i++){
    aux = i * aux ; // aux *=i ; mesma coisa 
  }
  return aux;
  
}

bool primos(int num){
  int cont = 0;
  for(int i = 1; i <= num;i++){
    if(num%i==0){
      cont ++;
    }
  }
  return cont == 2 ;
}

//* float converte(float temperatura, std::string de ,std::string para){
// if(de == "C" && para == "F"){
//    return 1.8 * temperatura + 32;
//  }
//  else if(de == "F" && para == "C"){/
//    return (temperatura - 32) / 1.8;
//  }
//}

//funcao imc com base no peso e altura do usuario 
float imc (float peso, float altura){
  float resultado = peso/(altura * altura);
  return resultado;


}
