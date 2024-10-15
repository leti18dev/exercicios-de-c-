//cai na provaaaaaa 
#include <iostream>
#include <algorithm>


using namespace std;

bool cmp(double a,double b){
  return(a>b);
}


int main(){
  double v[6]{1.5,0.8,4.4,-1.4,6.6,1.02};

  std::sort(v,v+6,cmp);

  for(int i=0; i<6 ; i++){
    cout<< v[i] << endl;
  }
  return 0;
}