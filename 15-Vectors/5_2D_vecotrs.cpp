#include <iostream>
#include <vector>
using namespace std;

int main() {

    // declaration & intialization
    vector<vector<int>> v = {{1, 2, 3},
                            {4, 5},
                            {6, 7, 8, 9}};


    // traversel of 2D vector for loop
    cout << "Initial 2D vector (for loop):\n";
    for(int i=0; i<v.size(); i++) {
        for(int j=0; j<v[i].size(); j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }


    // push_back (add new row)
    v.push_back({10, 11, 12});


    
    // traversal of 2D vector (for each loop)
    cout << "2D vector after push_back (for each loop):\n";
    for(vector<int> row: v) {
        for(int x: row) {
            cout << x << " ";
        }
        cout << endl;
    }
    
    return 0;
}