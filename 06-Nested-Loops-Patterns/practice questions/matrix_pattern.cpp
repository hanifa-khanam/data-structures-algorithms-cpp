#include <iostream>
using namespace std;

void squarePattern(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void rightTriangle(int n) {
    for (int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void invertedTrianlge(int n) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<(n-i); j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void diagonalPattern(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i==j) {
                cout << "* ";
            }
            else {
                cout << ". ";
            }
        }
        cout << endl;
    }
}

void antiDiagonal(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i + j == n - 1) {
                cout << "* ";
            }
            else {
                cout << ". ";
            }
        }
        cout << endl;
    }
}

void numberMatrix(int n) {
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) {
            cout << j+1 << " ";
        }
        cout << endl;
    }
}

void rowNumber(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << i+1 << " ";
        }
        cout << endl;
    }
}

int main() {

    cout << "Square Pattern:\n";
    squarePattern(3);

    cout << "Right Triangle:\n";
    rightTriangle(3);

    cout << "Inverted Triangle:\n";
    invertedTrianlge(3);

    cout << "Diagonal Pattern:\n";
    diagonalPattern(3);

    cout << "Anti-Diagonal Pattern:\n";
    antiDiagonal(3);

    cout << "Number Matrix:\n";
    numberMatrix(3);

    cout << "Row Number:\n";
    rowNumber(3);

    return 0;
}