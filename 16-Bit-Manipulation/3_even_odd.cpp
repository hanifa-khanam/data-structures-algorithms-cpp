#include <iostream>
using namespace std;

void oddOrEven(int n) {
    if (n & 1) {               // taking bitwise & with 1
        cout << "Odd\n";
    }
    else {
        cout << "Even\n";
    }
}

int main() {

    oddOrEven(45);
    oddOrEven(34);

    return 0;
}