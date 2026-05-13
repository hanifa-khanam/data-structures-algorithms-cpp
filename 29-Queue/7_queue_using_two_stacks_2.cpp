#include <iostream>
#include <stack>
using namespace std;

// Costly Dequeue

class Queue {
    stack<int> stack1;
    stack<int> stack2;

public:

    // O(1)
    void enqueue(int val) {
        stack1.push(val);
    }

    // Amortize O(1)
    void dequeue() {
        if(isEmpty()) {
            cout << "Queue underflow\n";
            return;
        }
    
        // transfer only when stack2 is empty
        if(stack2.empty()) {

            while(!(stack1.empty())) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }

        stack2.pop();
    }

    // Amortized O(1)
    int front() {
        if(isEmpty()) {
            cout << "Queue underflow\n";
            return -1;
        }
        
        if(stack2.empty()) {
            while(!(stack1.empty())) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }

        return stack2.top();
    }

    bool isEmpty() {
        return stack1.empty() && stack2.empty();
    }

};

int main() {

    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front: " << q.front() << endl;

    q.dequeue();

    cout << "Front after dequeue: " << q.front() << endl;

    return 0;
}