/* pilha estrutura tipo = lifo(last in firts out) = ultimo a entrar primeiro a sair 
 topo = -1 (lista vazia)
inserir:
int valor
pilha[++topo]=valor, topo da pilha ultimo elemento que inseri
push(inclusao na pilha)[++topo] = 14(valor)

tamanho: 
return topo + 1

consultar: 
return pilha[topo]

retirar: 
topo--

pop: Remove o elemento do topo da pilha
top ou peek: Acessa o elemento no topo da pilha, sem removê-lo.
empty: Verifica se a pilha está vazia.
size: Retorna o número de elementos na pilha.
#include <stack>

Stack Overflow:
 overflow (estouro) = alocaçao excessiva 

*/
#include <iostream>
#include <stack>

using namespace std;

int main() {
  //cria pilha de string, inicializa vazia 
  stack <string> pilha;
  cout << "tamanho: "<< pilha.size()<<endl;

//push inseri valores no topo da pilha na ordem colocada 
  pilha.push("patchon");
  pilha.push("uepa");
  pilha.push("patchonn");
  cout << "tamanho: "<< pilha.size()<<endl;
  cout << "topo: " << pilha.top()<< endl;

  //executaremos enquanto nossa pilha não for vazia 
  do{
    cout << "tamanho: " << pilha.size() << endl;
    cout << "valor do topo " << pilha.top() << endl;
    pilha.pop(); // remove o valor que esta no TOPO

  }while(!pilha.empty());
//(while(pilha.size() > 0 )

  /* pilha.empty()
    - true se estiver vazia 
    - false se tiver elementos 
  */

  return 0;
}

