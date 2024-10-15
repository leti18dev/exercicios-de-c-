#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool valida(string expressao) {
    stack<char> pilha;

    for (char caractere : expressao) {
        if (caractere == '{' || caractere == '[' || caractere == '(') {
            // Se encontramos um abre-parênteses, empilhamos na pilha
            pilha.push(caractere);
        } else if (caractere == '}' || caractere == ']' || caractere == ')') {
            // Se encontramos um fecha-parênteses, verificamos se corresponde ao topo da pilha
            if (pilha.empty()) {
                return false; // Não há correspondência para o fecha-parênteses
            }

            char topo = pilha.top();
            pilha.pop();

            if ((caractere == '}' && topo != '{') ||
                (caractere == ']' && topo != '[') ||
                (caractere == ')' && topo != '(')) {
                return false; // Não corresponde ao abre-parênteses correspondente
            }
        }
    }

    // A expressão é válida se a pilha estiver vazia no final
    return pilha.empty();
}

int main() {
    string expressao = "{[()]()}";
    
    if (valida(expressao)) {
        cout << "A expressao eh valida." << endl;
    } else {
        cout << "A expressao nao eh valida." << endl;
    }

    return 0;
}
