#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        cout << "int a + b: ";
        return a + b;
    }

    int add(int a, int b, int c) {
        cout << "int a + b + c: ";
        return a + b + c;
    }

    double add(double a, double b) {
        cout << "double a + b: ";
        return a + b;
    }
};

int main() {

    Calculator c;

    cout << c.add(2, 3) << endl;
    cout << c.add(2, 3, 4) << endl;
    cout << c.add(2.1, 3.4);

    return 0;
}