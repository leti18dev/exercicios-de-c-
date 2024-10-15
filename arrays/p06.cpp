//Exemplo 2 de Matrizes
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    const int NL=4, NC=3;
    float mat[NL][NC]{
        {1.5, 0.4, 9.1},
        {6.6, 0.1, 8.2},
        {3.9, 1.6, 5.5},
        {6.8, 3.0, 0.5}};

    for(int i=0; i<NL;i++){
        for(int j=0; j<NC;j++){
            cout
                << fixed
                << setprecision(1)
                << mat[i][j] << "\t";
        }
        cout << endl;
    }

    


    return 0;
}