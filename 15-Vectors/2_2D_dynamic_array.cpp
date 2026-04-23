#include <iostream>
using namespace std;


int main() {
    int rows, cols;
    cout << "Enter rows: ";
    cin >> rows;
    cout <<"Enter columns: ";
    cin >> cols;

    // step 1: array of pointers
    int** matrix = new int*[rows];  // a pointer that contains pointers of row size


    // step 2: allocating columns
    for(int i=0; i<rows; i++) {
        matrix[i] = new int[cols];  // allocating array (no. of cols) to each pointer
    }


    // step 3:  data store 
    int x = 1;
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            matrix[i][j] = x++;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // step 4: deallocate memory
    for(int i=0; i<rows; i++) {
        delete [] matrix[i];
        matrix[i] = nullptr;
    }

    delete [] matrix;
    matrix = nullptr;


    return 0;
}