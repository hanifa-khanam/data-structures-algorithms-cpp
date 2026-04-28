#include <iostream>
#include <vector>
using namespace std;

// find if any pair in sorted vector has target sum.
// output : vector of indices (e.g; [0, 1])

vector<int> pairSum(vector<int> v, int target) {
    int start = 0, end = v.size()-1;
    vector<int> ans;

    while(start < end) {
        int currSum = v[start] + v[end];

        if(currSum == target) {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        else if (currSum > target) {
            end--;
        }
        else {
            start++;
        }
    }

    return ans;
}


int main() {
    vector<int> vec = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = pairSum(vec, target);
    
    if(ans.size() == 2) {
        cout << ans[0] << "," << ans[1] << endl;
    }
    else {
        cout << "No pair found" << endl;
    }

    return 0;
}