///Exemplo 1 de matrizes
#include <iostream>

using namespace std;

int main(){

    float m[3][3]{
        {1.5, 0.4, 9.1},  //0
        {0.6, 1.4, 10.2}, //1
        {8.7, 1.7, 15.3}};//2
        //  0  1    2
        cout << "Antes: " <<  m[1][2] << endl; // 10.2
        m[1][2] = m[1][2] * 2;
        cout << "Depois: " << m[1][2] << endl;


    return 0;
}