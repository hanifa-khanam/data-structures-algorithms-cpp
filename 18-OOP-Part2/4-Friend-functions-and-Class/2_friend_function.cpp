#include <iostream>
using namespace std;

class Bank {
private:
    int balance;

public:
    Bank(int b) {
        balance = b;
    }

    friend void showBalance(Bank &obj);
};

// Not a member of class
void showBalance(Bank &obj) {
    cout << "Balance: " << obj.balance << endl;
}

int main() {

    Bank b1(5000);
    showBalance(b1);

    return 0;
}