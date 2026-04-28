#include <iostream>
#include <string>
using namespace std;


int main() {
    string str;
    cout << "Enter name: ";
    getline(cin, str);
    cout << str << endl;

    // for loop (indexed based)
    for(int i=0; i<str.length(); i++) {
        cout << str[i] << "-";
    }
    cout << endl;

    string s = "ApnaCollege";
    // for each loop (each character one by one)
    for (char ch: s) {
        cout << ch << "-";
    }

    return 0;
}