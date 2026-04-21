#include <iostream>
using namespace std;


int main() {
    int rows, cols;
    cout << "Enter no. of rows: ";
    cin >> rows;
    cout << "Enter no. of columns: ";
    cin >> cols;

    int arr[rows][cols];

    cout << "Enter elements:\n";
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Row-wise Traversal:\n";
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Column-wise Traversal:\n";
    for(int j=0; j<cols; j++) {
        for(int i=0; i<rows; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}