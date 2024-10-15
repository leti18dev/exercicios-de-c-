#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float vet[]{10.133,3.125,4.551,6.353,7.030};
    float soma = 0;
    for(int i=0; i<5;i++){
        soma += vet[i]; 
        // soma=soma+vet[i]
    }
    cout << "Soma total = " 
         << fixed 
         << setprecision(4) 
         << soma
         << endl;

    return 0;
}