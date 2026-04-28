#include <iostream>
using namespace std;

// arrays are passed by reference
void modify(int marks[]) {
    marks[0] = 99;
}

void printArr(int lst[], int n) {
    for(int i=0; i<n; i++) {
        cout << lst[i] << " ";
    }
    cout << endl;
}


int main() {
    int arr[3] = {1, 3, 5};
    modify(arr);  // passing array name is equivalent to passing pointer
    cout << arr[0] << endl;

    int lst[] = {2, 5, 6, 4};
    int n = sizeof(lst) / sizeof(int);
    printArr(lst, n);

    return 0;
} 