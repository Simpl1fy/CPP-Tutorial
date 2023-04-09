#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "Size: ";
    cin >> size;
    int* arr = new int[size];       //Dynamic Memory Allocation using "new"

    for(int i=0; i<size; i++){
        cout << "Array [" << i << "] = ";
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << *(arr+i) << "  ";
    }

    delete[]arr;
    arr = NULL;
    
    return 0;
}