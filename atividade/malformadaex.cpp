#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isWellFormed(const string& expression) {
    stack<char> symbols;
    for (char c : expression) {
        if (c == '(' || c == '[' || c == '{') {
            symbols.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (symbols.empty() || ((c == ')' && symbols.top() != '(') || 
                (c == ']' && symbols.top() != '[') || (c == '}' && symbols.top() != '{'))) {
                return false;
            }
            symbols.pop();
        }
    }
    return symbols.empty();
}

int main() {
    string expression;
    getline(cin, expression);

    if (isWellFormed(expression)) {
        cout << "Bem formada" << endl;
    } else {
        cout << "Mal formada" << endl;
    }

    return 0;
}
