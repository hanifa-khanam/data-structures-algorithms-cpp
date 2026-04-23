#include <iostream>
using namespace std;

void funInt() {

    int *ptr = new int;
    *ptr = 20;
    cout << "integer number: " << *ptr << endl;

    delete ptr;
    // we have to set ptr to null bcz memory is deleted but the ptr still exits and points to the memory address that is no longer valid  (dangling pointer)
    ptr = nullptr;  
}

void funArr() {

    int n;
    cout << "Enter size: ";
    cin >> n;

    if(n <= 0) {
        cout << "Invalid size!\n";
        return;
    }

    int *arr = new int[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << "Array\n";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    delete [] arr;
    arr = nullptr; 

}

int main() {
    funInt();  // dynamic allocation of integer
    funArr();   // dynamic allocation of array

    return 0;
}