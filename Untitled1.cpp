#include <iostream>
#include<conio.h>
using namespace std;

int nthTermOfAP(int a1,int a2, int n){
  int nthTerm = a1, d= a2 - a1;
  for(int i =1; i<n; i++){
    nthTerm += d;
  }
  return nthTerm;
  }

int main() {
    int a1 = 2, a2 = 3;
    int n = 4;
    cout<< nthTermOfAP(a1,a2,n);
    return 0;

}
