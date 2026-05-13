#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    // Insert at rear
    dq.push_back(10);
    dq.push_back(20);

    // Insert at front
    dq.push_front(5);

    dq.push_back(30);

    cout << "Deque Elements: \n";

    for(int val: dq) {
        cout << val << " ";
    }
    cout << endl;

    // Front & back
    cout << "Front element: " << dq.front() << endl;
    cout << "Rear element: " << dq.back() << endl;

    // remove from front
    dq.pop_front();

    // remove from rear
    dq.pop_back();

    cout << "\nAfter deletion:\n";
    for(int val: dq) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}