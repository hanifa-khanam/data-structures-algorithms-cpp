#include <iostream>
using namespace std;

class Complex {
    int real;
    int imag;
public: 
    // constructor
    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    void showNum() {
        cout << real << " + " << imag << "i" << endl;
    }

        // operator overloading  +
    Complex operator + (Complex obj) {
        int resReal = this->real + obj.real;
        int resImag = this->imag + obj.imag;
        Complex c3(resReal, resImag);
        return c3;
    }

    // operator overloading for -
    Complex operator - (Complex &obj) {
        return Complex(real - obj.real, imag - obj.imag);
    }


};

int main() {

    Complex c1(2, 3);
    Complex c2(4, 1);

    c1.showNum();
    c2.showNum();

    Complex c3 = c1 + c2;  // operator overloading
    c3.showNum();

    Complex c4 = c1 - c2;
    c4.showNum();


    return 0;
}