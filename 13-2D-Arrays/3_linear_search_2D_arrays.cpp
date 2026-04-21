#include <iostream>
using namespace std;

void linearSearch(int arr[][3], int rows, int cols, int key) {
    bool found = false;

    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            if (arr[i][j] == key) {
                cout << "Key found at Row: " << i+1 << " Column: " << j+1 << endl;
                found = true;
                return;
            }
        }
    }

    if (!found) {
        cout << "Key not found!\n";
    }
}

int main() {
    int arr[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}}; 
    int rows = 4;
    int cols = 3;

    linearSearch(arr, rows, cols, 10);

    return 0;
}