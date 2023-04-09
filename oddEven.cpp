#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter a number: ";
    cin >> a;
    if(a % 2 == 0)
        cout << a << " is a even number.\n";
    else   
        cout << a << " is a odd number.\n";

    return 0;
}