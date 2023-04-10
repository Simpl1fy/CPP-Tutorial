#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    int i=0,j,size=0;
    fstream Myfile;
    


    Myfile.open("Encrypted.txt", ios::in);
    if(Myfile.is_open())    {
        string line;
        while(getline(Myfile, line)) {
            size++;
        }
        Myfile.close();
    }

    string lineArr[size];

    Myfile.open("Encrypted.txt", ios::in);
    if(Myfile.is_open()) {
        string line;
        while(getline(Myfile, line)) {
            lineArr[i] = line;
            i++;
        }
        Myfile.close();
    }

    Myfile.open("Encrypted.txt", ios::out);
    if(Myfile.is_open()) {
        for(i=0; i<size; i++) {
            string line = lineArr[i];
            for(j=0; j<line.length(); j++)  {
                Myfile << (int)line[j] << " ";
            }
            Myfile << endl;
        }

    }

    return 0;
}