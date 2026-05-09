#include <iostream>
#include <vector>
using namespace std;

class Stack {
    vector<int> vec;

public:
    void push(int val) {
        vec.push_back(val);
    }

    void pop() {
        if(isEmpty()) {
            cout << "Stack underflow.\n";
            return;
        }
        vec.pop_back();
    }

    int top() {
        if(isEmpty()) {
            cout << "Stack underflow.\n";
            return -1;
        }
        return vec.back();
    }

    bool isEmpty() {
        return vec.empty();
    }

    void display() {
        for(int i=vec.size()-1; i>=0; i--) {
            cout << vec[i] << " ";
        }
        cout << endl;
    }

    void pushAtBottom(int val) {
        
        // base case
        if(isEmpty()) {
            push(val);
            return;
        }

        // store top
        int temp = top();
        // remove top
        pop();
        // recursive call
        pushAtBottom(val);
        // restore element
        push(temp);
    }
};


int main() {

    Stack s;
    s.push(3);
    s.push(2);
    s.push(1);

    cout << "Top of Stack: " << s.top() << endl;

    cout << "Before pushAtBottom\n";
    s.display();

    s.pushAtBottom(4);

    cout << "After pushAtBottom\n";
    s.display();
    return 0;
}