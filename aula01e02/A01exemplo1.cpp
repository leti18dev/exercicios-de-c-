// entrada de dados em c++
/* int = inteiro 
float = numero qubrado
*/
#include <iostream>

using namespace std;

int main() {
  int idade;
  float altura;

  cout << "digite a sua idade: "; //print
  cin >> idade; // input recebe o dado 
  cout << "digite a sua altura: "; //print
  cin >> altura; // input recebe o dado 

  cout << "eu tenho "<< idade << " anos e " << altura << " metros de altura"<< endl;

  return 0;
}
