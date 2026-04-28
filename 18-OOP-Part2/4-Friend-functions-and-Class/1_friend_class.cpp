#include <iostream>
using namespace std;

class Engine {
private:
    int power = 100;

    friend class Mechanic;
};

class Mechanic {
public:
    void check(Engine &e) {
        cout << "Engine Power: " << e.power << endl;
    }
};

int main() {

    Engine e;
    Mechanic m;

    m.check(e);


    return 0;
}