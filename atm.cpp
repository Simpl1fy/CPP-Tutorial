#include <iostream>
using namespace std;

void menu(){
    cout << "***** Menu *****\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit Money.\n";
    cout << "3. Withdraw Money.\n";
    cout << "4. Exit.\n";
    cout << "****************\n";
} 

int main(){
    int choice;
    int depositAmount, withdrawAmount, balance = 0;
    
    

    while(1){
        
        menu();
        cout << "Enter choice: ";
        cin >> choice;
        system("cls");

        switch(choice){
            case 1:
                cout << "Total Balance: $" << balance << endl;
                break;
            case 2:
                cout << "Enter the amount to deposit:";
                cin >> depositAmount;
                balance = balance + depositAmount;
                cout << "Total Balance: $" << balance << endl;
                break;
            case 3:
                cout << "Enter the amount to withdraw: ";
                cin >> withdrawAmount;
                if(withdrawAmount > balance)
                    cout << "Not enough money in account.\n";
                else{
                    balance = balance - withdrawAmount;
                    cout << "Total Balance: $" << balance << endl;
                }
                break;
            case 4:
                exit(0);
            default:
                cout << "Wrong Choice.\n";
        }
    }
    system("pause");
}