#include <iostream>
using namespace std;

int main(){
    int realPin = 1234, errorCount = 0, pin;
    do{
        cout << "Enter PIN:";
        cin >> pin;

        if(pin != realPin)
            errorCount++;
        else
            break;
    }while(errorCount<=5);

    if(errorCount <= 5)
        cout << "You have acces to your account.\n";
    else
        cout << "Your account has been blocked.\n";

    system("pause");
}