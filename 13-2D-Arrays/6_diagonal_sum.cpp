#include <iostream>
using namespace std;

// Brute Force : time complexity = O(n^2)
int digonalSum(int matrix[][4], int n) {
    int sum = 0;

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++){
            // primary diagonal
            if (i == j) {
                sum += matrix[i][j];
            }
            // secondary diagonal
            else if (j == n-i-1) {
                sum += matrix[i][j];
            }
        }
    }
    cout << "sum = " << sum << endl;
    return sum;
}

// Optimized : time complexity = O(n)
int optDiagonal(int arr[][4], int n) {
    int sum = 0;

    for (int i=0; i<n; i++) {
        // primary diagonal
        sum += arr[i][i];
        // secondary diagonal
        if (i != n-i-1) {
            sum += arr[i][n-i-1];
            }
    }
    cout << "Optimzed way sum: " << sum << endl;
    return sum;
}


int main() {
    int matrix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};

    digonalSum(matrix, 4);
    optDiagonal(matrix, 4);

    return 0;
}