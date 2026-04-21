#include <iostream>
using namespace std;

int getMaxSum(int arr[][3], int rows, int cols) {
    int maxRowSum = INT_MIN;

    for (int i=0; i<rows; i++) {
        int rowSumI = 0;
        for (int j=0; j<cols; j++) {
            rowSumI += arr[i][j];
        }

        maxRowSum = max(maxRowSum, rowSumI);
    }

    return maxRowSum;
}


int main() {
    int arr[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}}; 
    int rows = 4;
    int cols = 3;   

    cout << getMaxSum(arr, rows, cols) << endl;

    return 0;  
}