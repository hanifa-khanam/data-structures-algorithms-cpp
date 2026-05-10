#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int size;
    int top;

public:
    Stack(int s) {
        size = s;
        arr = new int[size];
        top = -1;
    }

    ~Stack() {
        delete[] arr;
    }

    void push(int val) {
        if(top == size - 1) {
            cout << "Overflow\n";
            return;
        }

        top++;
        arr[top] = val;
    }

    void pop() {
        if(top == -1) {
            cout << "Underflow\n";
            return;
        }

        top--;
    }

    int peek() {
        if(top == -1) {
            cout << "Underflow\n";
            return -1;
        }

        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
       return top == size - 1;
    }

    void display() {
        for(int i=top; i>=0; i--) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

};

int main() {

    Stack s(3);

    cout << "is empty: " << (s.isEmpty() ? "yes" : "no") << endl;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();
    cout << "is full: " << (s.isFull() ? "yes" : "no") << endl;

    s.pop();
    cout << "after pop:\n";
    s.display();

    cout << "top: " << s.peek() << endl;

    

    return 0;
}