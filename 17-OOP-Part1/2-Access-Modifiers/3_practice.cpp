#include <iostream>
using namespace std;

class Car {
private:
    string color;

public:
    void setColor(string c) {
        color = c;
    }

    void showColor() {
        cout << color << endl;
    }
};

int main() {

    Car c1;
    c1.setColor("White");
    c1.showColor();

    return 0;
}