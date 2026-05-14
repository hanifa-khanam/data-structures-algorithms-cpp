#include <iostream>
#include <string>
using namespace std;

// iterative approach
string removeDuplicates(string str) {
    char freq[26] = {0};
    string ans = "";

    for(int i=0; i<str.size(); i++) {
        char ch = str[i];
        if(freq[ch - 'a'] == 0) {
            ans += ch;
        }
        freq[ch - 'a']++;
    }
    return ans;
}

// recursion
void removeDuplicates(string str, string ans, int i, int map[26]) {
    if(i == str.size()) {
        cout << "ans: " << ans << endl;
        return;
    }

    char ch = str[i];
    int mapIdx = (int) (ch - 'a');

    if(map[mapIdx] == true) { // duplicate
        removeDuplicates(str, ans, i+1, map); 
    } 
    else {  // not duplicate
        map[mapIdx] = true;
        removeDuplicates(str, ans+str[i], i+1, map);
    }

}

int main() {
    
    string str = "aaabbbcccddd";
    string ans = "";
    int map[26] = {false};

    removeDuplicates(str, ans, 0, map);
    
    return 0;
}