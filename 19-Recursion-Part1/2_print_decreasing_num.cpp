#include <iostream>
using namespace std;


void printDecreasing(int n) {
    // base case
    if(n == 0) {
        return;
    }

    // work
    cout << n << " ";
    
    // recursive call
    printDecreasing(n-1);
}

int main() {

    int n = 8;
    printDecreasing(n);
    
    return 0;
}