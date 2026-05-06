#include <iostream>
#include <vector>
using namespace std;

class Stack {
    vector<int> vec;
public:
    // PUSH
    void push(int val) {
        vec.push_back(val);
    }

    // POP
    void pop() {
        if(isEmpty()) {
            cout << "stack is empty.\n";
            return;
        }
        vec.pop_back();
    }

    // TOP / PEEK
    int top() {
        if(isEmpty()) {
            cout << "stack is empty.\n";
            return -1; 
        }       
        // int lastIdx = vec.size()-1;
        // return vec[lastIdx];
        return vec.back();
    }

    // CHECK EMPTY
    bool isEmpty() {
        return vec.empty();
        // return vec.size() == 0;
    }

    void display() {
        for(int i=vec.size()-1; i>=0; i--) {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
};

int main() {

    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);

    s.display();

    s.pop();
    cout << "After poping:\n";
    cout << "Top: " << s.top() << endl;

    while(!s.isEmpty()) {
        cout << s.top() << " "; 
        s.pop();
    }

    return 0;
}