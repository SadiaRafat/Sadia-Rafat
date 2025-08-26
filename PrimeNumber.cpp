// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n, i, count = 0;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        cout << n << "  not a prime number.";
        return 0;
    }

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            count = 1; 
            break;
        }
    }

    if (count == 0){
    
        cout << n << " is a prime number.";
    }
    else{
    
        cout << n << " is not a prime number.";
    }

    return 0;
}


