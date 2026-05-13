#include <iostream>
#include <queue>
using namespace std;

// costly pop / lazy push

class Stack {
    queue<int> q1;
    queue<int> q2;

public:
    // O(1)
    void push(int val) {
        q1.push(val);
    }

     // Amortized O(n)
    void pop() {
        if(isEmpty()) {
            cout << "Stack underflow\n";
            return;
        }
        
        while(q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }

        q1.pop();
        swap(q1, q2);
    }

    // O(n)
    int top() {
        if(isEmpty()) {
            cout << "Stack underflow\n";
            return -1;
        }  

        while(q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }

        int topElement = q1.front();
        q2.push(topElement);

        q1.pop();
        
        swap(q1, q2);

        return topElement;
    }

    bool isEmpty() {
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