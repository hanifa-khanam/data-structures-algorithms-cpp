#include <iostream>
using namespace std;


int tilingWays(int n) {
    // base case
    if(n == 0 || n == 1) {
        return 1;
    }

    // vertical placement
    int verticalWays = tilingWays(n - 1);
    
    // horizontal placement
    int horizontalWays = tilingWays(n - 2);


    // total ways
    return verticalWays + horizontalWays;
}

int main() {

    cout << tilingWays(1) << endl;
    cout << tilingWays(2) << endl;
    cout << tilingWays(3) << endl;
    cout << tilingWays(4) << endl;
    cout << tilingWays(5) << endl;
   

    return 0;
}