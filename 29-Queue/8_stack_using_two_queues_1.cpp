#include <iostream>
#include <queue>
using namespace std;

// costly push

class Stack {
    queue<int> q1;
    queue<int> q2;

public:

    // O(N)
    void push(int val) {

        while(!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
 
        q1.push(val);
        
        while(!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
    }

    // O(1)
    void pop() {
        if(empty()) {
            cout << "Stack Underflow\n";
            return;
        }

        q1.pop();
    }

    // O(1)
   int top() {
        if (empty()) {
            cout << "Stack is empty\n";
            return -1;
        }

        return q1.front();
    }

    bool empty() {
        return q1.empty();
    }
};

int main() {

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "\nTop Element: " << s.top() << endl;

    s.pop();

    cout << "Top Element: " << s.top() << endl;

    return 0;
}