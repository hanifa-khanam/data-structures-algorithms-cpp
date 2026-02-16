#include <iostream>
using namespace std;

int main() {
    
    int arr[5] = {10, 20, 30, 40, 50};

    int *ptr = arr;  // points to arr[0]

    cout << "Value at ptr: " << *ptr << endl;
    cout << "Value at ptr + 1: " << *(ptr + 1) << endl;
    cout << "Value at ptr + 2: " << *(ptr + 2) << endl;


    int arr2[3] = {100, 300, 500};
    int *ptr2 = arr2;

    cout << *ptr2 << endl; // 100
    ptr2++; // move to next element
    cout << *ptr2 << endl; // 300
    ptr2++;
    cout << *ptr2 << endl;  // 500

    
    return 0;
}