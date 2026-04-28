#include <iostream>
using namespace std;

int main() {

    int mark1[50] = {1, 2, 3};
    cout << mark1[0] << endl;
    cout << mark1[2] << endl;
    cout << mark1[49] << endl;


    int mark2[] = {1, 2, 3};
    cout << mark2[0] << endl;
    cout << mark2[1] << endl;
    cout << mark2[2] << endl;
    int n = sizeof(mark2) / sizeof(int);
    cout << "size of array: " << n << endl;


    return 0;

}