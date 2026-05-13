#include <iostream>
#include <string>
#include <stack>
using namespace std;

// Costly Enqueue

class Queue {
    stack<string> stack1;
    stack<string> stack2;

public:
    // O(N)
    void enqueue(string val) {
    
        while(!stack1.empty()) {
            stack2.push(stack1.top());
            stack1.pop();
        }

        stack1.push(val);

        while(!stack2.empty()) {
            stack1.push(stack2.top());
            stack2.pop();
        }
    }

    // O(1)
    void dequeue() {
        stack1.pop();
    }

    // O(1)
    string front() {
        return stack1.top();
    }

    bool isEmpty() {
        return stack1.empty();
    }

    void display() {

        stack<string> temp = stack1;
        while(!temp.empty()) {
            cout << temp.top() << " ";
            temp.pop();
        }
        cout << endl;
    }
};


int main() {

    
    Queue q1;

 
    q1.enqueue("Hanifa Khanam");
    q1.enqueue("Software Engineer");
    q1.enqueue("learning");
    q1.enqueue("DSA");

    q1.display();
    cout << "Front element: " << q1.front() << endl;
    q1.dequeue();
    cout << "Front element after dequeue: " << q1.front() << endl;




    return 0;
}