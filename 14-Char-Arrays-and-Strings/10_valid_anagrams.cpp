#include <iostream>
#include <string>
using namespace std;

// Anagrams: same characters & same length (frequency), order doesn't matter

bool isAnagram(string s1, string s2) {
    if (s1.length() != s2.length()) {
        cout << "not valid anagrams\n";
        return false;
    }

    int count[26] = {0};
    for (int i=0; i<s1.length(); i++) {
        int idx = s1[i] - 'a';
        count[idx]++;
    }

    for(int i=0; i<s2.length(); i++) {
        int idx = s2[i] - 'a';
        if (count[idx] == 0) {
            cout << "not valid anagrams\n";
            return false;
        }
        count[idx]--;
    }
    
    cout << "valid anagrams\n";
    return true;
}

int main() {

    string str1 = "cat";
    string str2 = "dog";

    isAnagram(str1, str2);

    string str3 = "listen";
    string str4 = "silent";
    
    isAnagram(str3, str4);

    return 0;
}