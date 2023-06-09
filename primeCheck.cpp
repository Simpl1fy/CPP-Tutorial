#include <iostream>
using namespace std;

bool primeCheck(int n){
    for(int i=2; i<=n/2; i++){
        if(n%i == 0)
            return false;
    }
    return true;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(primeCheck(n))
        cout << n << " is a prime number.\n";
    else 
        cout << n << " is not a prime number\n";

    system("pause");
}