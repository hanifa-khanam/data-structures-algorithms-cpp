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

class Fish : public Animal {
public:
    int fins;

    Fish() {
        fins = 5;
    }

    void swim() {
        cout << "swims\n";
    }
};


int main() {

    Fish f;
    f.eat();        // inherited
    f.breathe();    // inherited

    cout << f.fins << endl;
    f.swim();


    return 0;
}