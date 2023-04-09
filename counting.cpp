#include <iostream>
using namespace std;

int main(){
    int a,c=0;
    cout << "Enter a number: ";
    cin >> a;
    while(a > 0){
        int rem = a%10;
        c++;
        a = a/10;
    }
 
    cout << "Total Digits = " << c << endl;

    system("pause");
}