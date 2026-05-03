#include <iostream>
#include <vector>
using namespace std;

int lastOccur(vector<int> vec, int target, int i) {
    if(i == vec.size()) {
        return -1;
    }

    int idx = lastOccur(vec, target, i+1);

    if(idx == -1 && vec[i] == target) {
        return i;
    }

    return idx;
}

int main() {
    vector<int> vec = {1, 2, 3, 3, 3, 4};

    cout << lastOccur(vec, 3, 0) << endl;
    cout << lastOccur(vec, 4, 0) << endl;

    return 0;
}