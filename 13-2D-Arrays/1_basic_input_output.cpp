#include <iostream>
using namespace std;

int main() {
    int students[3][3] = { {100, 100, 100}, 
                            {85, 74, 89},
                            {63, 83, 90} };


    cout << students[1][2] << endl;

    int arr [3][4];

    for (int i=0; i<3; i++) {
        for (int j=0; j<4; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i=0; i<3; i++) {
        for (int j=0; j<4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}