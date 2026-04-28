#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello";

    // length : Returns number of characters
    cout << s.length() << endl;

    // push_back : add at end
    s.push_back('!');
    cout << s << endl;

    // append : Adds string at end
    s.append(" World");
    cout << s << endl;

    // substr(start, length) : Extract part of string
    cout << s.substr(1, 3) << endl;

    // find : Returns index
    cout << s.find("lo") << endl;

    // erase : Removes characters
    s.erase(5, 1);
    cout << s << endl;

    // insert : Inserts at position
    s.insert(5, "_");
    cout << s << endl;

    // pop_back : remove last
    s.pop_back();
    cout << s << endl; 



    return 0;
}