#include <iostream>
#include <deque>
using namespace std;

class Stack {
    deque<int> dq;

public:
    void push(int val) {
        dq.push_back(val);
    }

    void pop() {
        if(dq.empty()) {
            cout << "Stack underflow\n";
            return;
        }

        dq.pop_back();
    }

    int top() {
        if(dq.empty()) {
            cout << "Stack underflow\n";
            return -1;
        }

        return dq.back();
    }
};

int main() {

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top: " << s.top() << endl;

    s.pop();

    cout << "Top after pop: " << s.top() << endl;

    return 0;

}