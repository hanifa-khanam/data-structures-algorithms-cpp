#include <iostream>
using namespace std;

int getMaxSum(int arr[][3], int rows, int cols) {
    int maxColSum = INT_MIN;

    for (int j=0; j<cols; j++) {
        int colSum = 0;
        for (int i=0; i<rows; i++) {
            colSum += arr[i][j];
        }

        maxColSum = max(maxColSum, colSum);
    }

    return maxColSum;
}

int main() {
    int arr[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}}; 
    int rows = 4;
    int cols = 3;

    cout << getMaxSum(arr, rows, cols) << endl;
    return 0;
}