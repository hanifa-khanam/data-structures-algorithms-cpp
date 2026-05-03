#include <iostream>
#include <vector>
using namespace std;

int firstOccur(vector<int> vec,  int target, int i) {
    if(i == vec.size()) {
        return -1;
    }

    if(vec[i] == target) {
        return i;
    }

    return firstOccur(vec, target, i+1);
}

int main() {
    vector<int> vec = {1, 2, 3, 3, 3, 4};

    cout << firstOccur(vec, 3, 0) << endl; 
    cout << firstOccur(vec, 4, 0) << endl;

    return 0;
}