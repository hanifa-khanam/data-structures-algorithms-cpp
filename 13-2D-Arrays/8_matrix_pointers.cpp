#include <iostream>
using namespace std;

int main() {

    int arr[4][4] = {{1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9, 10, 11, 12},
                    {13, 14, 15, 16}};
 
    cout << arr << " = " << &arr[0][0] << endl;   // first row
    cout << arr+1 << " = " << &arr[1][0] << endl;  // second row

    cout << *arr << endl; //  row value

    cout << *(*(arr+2)+2) << endl;     // ptr[i][j] == *(*(ptr+i)+j)

    return 0;
}