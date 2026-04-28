#include <iostream>
using namespace std;

int main() {
    int arr[5] = {7, 5, 2, 1, 3};
    int len = sizeof(arr) / sizeof(int);
    for(int i=0; i<len; i++){
        cout << arr[i] << " ";
    } 
    cout << endl;
    cout << "\n* * * * * * * *" <<  endl;
    cout << endl;

    // statically allocated memory i.e at compile time the memory is allocated
    int arr_static[5];
    int n = sizeof(arr_static) / sizeof(int);
    for(int i=0; i<n; i++) {
        cout << "Enter number: "; 
        cin >> arr_static[i];
    }
    for(int i=0; i<n; i++) {
        cout << arr_static[i] << " ";
    }
    cout << endl;
    cout << "\n* * * * * * * *" <<  endl;
    cout << endl;

    // Dynamically allocated memory at runtime i.e taking the size of array from the user at run time and allocating the size at runtime
    int len_of_arr;
    cout << "Enter size of array: ";
    cin >> len_of_arr;
    int marks[len_of_arr];
    for(int i=0; i<len_of_arr; i++) {
        cout << "Enter " << i << " number: ";
        cin >> marks[i];
    }
    for(int i=0; i<len_of_arr; i++) {
        cout << marks[i] << " ";
    }
    cout << endl;
    cout << "\n* * * * * * *\n";
    cout << endl;
    return 0;
}