#include <iostream>
using namespace std;

void printNumber(int *Numberptr){       //handles int*
    cout << *Numberptr << endl;
}

void printLetter(char *charptr){        //handles char*
    cout << *charptr << endl;
}


//handle different types of pointer
void print(void *ptr, char type){
    switch (type)
    {
    case 'i':   //handles int*
        cout << *((int*)ptr) << endl;           //CONVERSION OF VOID POINTER TO INTEGER
        break;
    case 'f':   //handles float*
        cout << *((float*)ptr) << endl;         //CONVERSION OF VOID POINTER TO FLOAT
        break;
    case 'c':   //handles char*
        cout << *((char*)ptr) << endl;          //CONVERSION OF VOID POINTER TO CHARACTER
        break;
    default:
        break;
    }
}


int main(){
    int n = 5;
    char ch = 'a';
    float f = 5.667;

    // printNumber(&n);
    // printLetter(&ch);

    print(&n, 'i');
    print(&ch, 'c');
    print(&f, 'f');

    return 0;
}