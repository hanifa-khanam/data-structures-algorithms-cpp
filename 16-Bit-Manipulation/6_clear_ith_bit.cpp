#include <iostream>
using namespace std;

// if bit 1 -> make it 0
// if bit 0 -> keep it 0
int clearIthBit(int num, int i) {
    int bitMask = ~(1 << i);
    return (num & bitMask);
}

int main() {

    cout << clearIthBit(6, 1) << endl;

    return 0;
}