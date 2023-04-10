#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream Myfile;
    Myfile.open("Encrypted.txt", ios::out);
    if(Myfile.is_open()) {
        Myfile << "Hello World\n";
        Myfile << "Hello Gourab\n";
        Myfile.close();
    }

    
    return 0;
}