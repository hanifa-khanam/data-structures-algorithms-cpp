#include <iostream>
using namespace std;

/*
Encapsulation rule:
    Data should be stored inside object, and functions should use that internal data — not external input again
*/

class Rectangle {
private:
    float length;
    float width;

public:
    void setValues(float l, float w) {
        length = l;
        width = w;
    }

    void calculateArea() {
        cout << "Area of rectangle: " << (length * width) << endl;
    }

};

int main() {

    Rectangle r1;
    r1.setValues(2.5, 4.5);
    r1.calculateArea();
   
   
    return 0;
}