#include <iostream>
#include <queue>
using namespace std;

int main() {

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    cout << "Front Element: "
         << q.front() << endl;

    cout << "Rear Element: "
         << q.back() << endl;

    // Remove element
    q.pop();

    cout << "\nAfter pop:\n";

    cout << "Front Element: " << q.front() << endl;

    cout << "Queue Size: " << q.size() << endl;

    // Check empty
    if(q.empty()) {
        cout << "Queue is empty\n";
    }
    else {
        cout << "Queue is not empty\n";
    }

    while(!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }


    return 0;
}