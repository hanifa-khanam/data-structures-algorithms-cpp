#include <iostream>
using namespace std;

class Animal {
public:
    string color;

    void eat() {
        cout << "eats\n";
    }

    void breathe() {
        cout << "breathes\n";
    }
};

class Mammal : public Animal {
public:
    string bloodType;

    Mammal() {
        bloodType = "warm";
    }
};

class Dog : public Mammal {
public:

    void bark() {
        cout << "dog is barking\n";
    }
};


int main() {

    Dog d1;

    d1.color = "Brown";  // inherit from Animal
    cout << d1.color << endl;

    d1.eat();        // From Animal
    d1.breathe();    // From Animal

    cout << d1.bloodType << endl;  // From Mammal

    d1.bark();  // From Dog

    return 0;
}