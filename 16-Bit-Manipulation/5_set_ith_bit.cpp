#include <iostream>
using namespace std;

// If bit 0 -> make it 1
// If bit 1 -> keep it 1
int setIthBit(int num, int i) {
    int bitmask = 1 << i;
    return (num | bitmask);
}

int main() {

    cout << setIthBit(6, 3) << endl;
    cout << setIthBit(9, 4) << endl;

    return 0;
}