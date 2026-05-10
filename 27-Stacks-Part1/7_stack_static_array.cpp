#include <iostream>
using namespace std;

class Stack {
private:
    int arr[5];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int val) {
        if(top == 4) {
            cout << "Stack overflow\n";
            return;
        }

        top++;
        arr[top] = val;
    }

    void pop() {
        if(top == -1) {
            cout << "Stack underflow\n";
            return;
        }

        cout << "Removed: " << arr[top] << endl;
        top --;
    }

    int peek() {
        if(top == -1) {
            cout << "Stack underflow\n";
            return -1;
        }

        return arr[top];
    }

    void display() {
        for(int i=top; i>=0; i--) {
            cout << arr[i] << endl;
        }
    }
};


int main() {

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);


    s.display();

    s.pop();
    cout << "after poping: \n";
    s.display();

    cout << "top of stack: " << s.peek() << endl;;

    return 0;
}