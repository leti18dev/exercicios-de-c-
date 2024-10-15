//Exemplo de FILA
// FIFO - First In First Out
//-- Primeiro a entrar será o primeiro a sair
#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> fila;
    fila.push(100); // Adiciona o valor 100 ao final da fila
    fila.push(200);
    fila.push(300);
    //cout << "Tamanho da Fila: " << fila.size() << endl;

    while(!fila.empty()){ // fila.size()>0
        cout << "Size: " << fila.size() << endl;//Tamanho
        cout << "Front: " << fila.front() << endl;//1º elemento
        cout << "Back: " << fila.back()<< endl;//Ultimo elemento
        cout << endl;
        fila.pop(); // Remove o primeiro elemento da fila
    }

    return 0;
}