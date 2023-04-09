#include <iostream>
using namespace std;

int main(){
    int a , b, c;
    cout << "Enter three sides of triangle: ";
    cin >> a >> b >> c;
    if(a == b && b == c && c == a)
        cout << "Equilateral Triangle.\n";
    else{
        if(a==b || b == c || c == a)
            cout << "Isoceles Triangle.\n";
        else
            cout << "Scalence Triangle.\n";
    }

    system("pause>0");
}