#include <iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;

int main(){

    int size=0;
    fstream Myfile;
    Myfile.open("Encrypted.txt", ios::in);
    if(Myfile.is_open())    {
        string line;
        while(getline(Myfile, line))    {
            size++;
        }
        Myfile.close();
    }

    string lineArr[size];
    int i = 0;

    Myfile.open("Encrypted.txt", ios::in);
    if(Myfile.is_open())    {
        string line;
        while(getline(Myfile, line))    {
            lineArr[i] = line;
            i++;
        }
        Myfile.close();
    }

    string word;

    Myfile.open("Decrypted.txt", ios::out);
    if(Myfile.is_open())    {
        for(i=0; i<size; i++)   {
            stringstream iss(lineArr[i]);
            while(iss >> word)  {
                int x;
                stringstream ss(word);
                ss >> x;
                Myfile << (char)x;
            }
        Myfile << endl;
        }
    }




    return 0;
}