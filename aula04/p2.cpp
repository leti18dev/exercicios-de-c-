//exemplo de passagem de valores 
#include <iostream>
using namespace std;
/*passagem de valor por pareametro (float a)
--float adiciona (float a,float b)
neste caso cria uma copia da variavel float adicona 
a= a+b */

/*passagem de valor por referencia (float &a) & antes da variavel 
--float adiciona (float &a, float &b){
neste caso o computador cria uma referencia para a variavel original 
sendo possivel alterar o conteudo da variavel original modificando o valor da que esta apontando
}*/

float adiciona(float a , float b){
  a+=b;
  cout << "na funcao adiciona: " << a << endl;
}

int main() {
  float x = 10,y=0.5;
  adiciona(x,y);
  cout << "na main " << x << endl;
  return 0;
}