#include <iostream>
using namespace std;

int sumRecursion(int m, int n){
    if(m == n)
        return m;
    return m + sumRecursion(m+1, n);
}

int main(){
    int m,n;
    cout << "Enter 2 numbers: ";
    cin >> m >> n;
    cout << "Sum is = " << sumRecursion(m,n);

    return 0;
}