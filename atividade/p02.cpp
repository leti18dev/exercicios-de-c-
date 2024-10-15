//Implementação de fila com STRUCT
#include <iostream>
#include <queue>
using namespace std;

struct pessoa{
    string nome;
    string email;
};
int main(){
    /* 
    Cria-se uma fila do tipo PESSOA, que é a struct 
    criada anteriormente
    */   
    queue<pessoa> fila;  
    pessoa aux; // variavel auxiliar

    //Etapa de inserção
    while(true){
        cout << "Digite o nome ou FIM para sair: ";
        getline(cin,aux.nome); //Lê o nome
        if(aux.nome == "FIM"){
            break;
        }
        cout << "E-mail: ";
        getline(cin,aux.email); //Lê o email
        fila.push(aux);

        cout << "Tamanho: " << fila.size() << endl;
    }

    //Remover da fila
    while(!fila.empty()){ // Enquanto a fila não estiver vazia
        cout << fila.front().nome 
             << " "
             << fila.front().email
             << endl;
        fila.pop();
    }
    return 0;
}