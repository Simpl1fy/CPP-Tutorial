#include <iostream>
using namespace std;

int main(){
    int a,number = 0;
    cout << "Enter a 3 didgit number: ";
    cin >> a;
    while(a > 0){
        int rem = a%10;
        number = number*10 + rem;
        a = a/10;
    }

    cout << "The reversed number is = " << number << endl;

    system("pause");
}