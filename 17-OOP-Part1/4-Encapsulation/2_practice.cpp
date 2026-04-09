#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;

public:

    // setter : updating balance
    void setBalance(int amount) {
        if (balance >= 0) {
            balance = amount;
        }
        else {
            cout << "Invalid balance amount..\n";
        }
        
    }

    // depositing amount in bank
    void deposit(int amount) {
        if (amount > 0) {
           balance += amount;
           cout << "Amount deposited successfully..\n";

        }
        else {
            cout << "Invalid deposit amount\n";
        }
    }

    // withdrawig amount from bank account
    void withdraw(int amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully...\n";
        } 
        else {
            cout << "Insufficient Amount...\n";
        }
        
    }
    
    // getter : checking balance
    int getBalance() {
        return balance;
    }
    
};

int main() {

    BankAccount u1;
    u1.setBalance(1000);
    u1.deposit(500);
    cout << u1.getBalance() << endl;
    
    u1.withdraw(1500);
    cout << u1.getBalance() << endl;


    return 0;
}