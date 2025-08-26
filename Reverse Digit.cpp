// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;//123--321

int reverseDigits(int n){
    string s = to_string(n);
    reverse(s.begin(),s.end());
    n = stoi(s);
    return n;
}
int main(){
 int n = 4562;
 cout<< reverseDigits(n);
 return 0;
}

