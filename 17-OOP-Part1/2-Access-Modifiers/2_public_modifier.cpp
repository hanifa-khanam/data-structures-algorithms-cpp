#include <iostream>
using namespace std;

class Car {
public:
    string color;

    void drive() {
        cout << "Driving...\n";
    }
};

int main() {

    Car c1;
    c1.color = "Black";
    cout << "Car color is " << c1.color << endl;
    c1.drive();
    
    return 0;
}