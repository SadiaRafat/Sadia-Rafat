// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;//123--321

int main() {
   int n,temp,sum=0,r;
  
   cout<<"Enter Number:"<<endl;
   cin>>n;
   temp=n;
   while(temp!=0){
       r = temp % 10;
       sum = sum*10 + r;
       temp = temp/10;
      
   }
   cout<<"Reversed Number:"<<sum<<endl;

    return 0;
}