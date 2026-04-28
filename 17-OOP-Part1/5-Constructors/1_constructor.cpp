#include <iostream>
using namespace std;

class Car {
private:
    string name;
    string color;

public:
    Car(string nameVal, string colorVal) {
        cout << "constructor is called. Object being created..\n";
        name = nameVal;
        color = colorVal;
    }

    void start() {
        cout << "Car has started...\n";
    }

    void stop() {
        cout << "Car has stopped\n";
    }

    // getter
    string getName() {
        return name;
    }
};

int main() {

    Car c1("maruti 800", "white");
    cout << "Car name: " << c1.getName() << endl;


    return 0;
}