#include <iostream>
using namespace std;

class Car {
private:
    string color;

    void showColor() {
        cout << color << endl;
    }
};

int main() {

    Car c1;
    // c1.showColor(); // we will get error because it is declared as private

    return 0;
}