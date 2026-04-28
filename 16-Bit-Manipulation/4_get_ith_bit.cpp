#include <iostream>
using namespace std;

int getIthBit(int num, int i) {
    int bitmask = 1 << i;

    if (num & bitmask) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {

    cout << getIthBit(6, 2) << endl;
    cout << getIthBit(24, 5) << endl;


    return 0;
}