#include <iostream>
using namespace std;

class Car {
public:
    string color;
    int model;

    void drive() {
        cout << "Car is driving\n";
    }
};

int main() {

    Car c1;
    c1.color = "Black";
    c1.model = 2025;
    c1.drive();

    return 0;
}