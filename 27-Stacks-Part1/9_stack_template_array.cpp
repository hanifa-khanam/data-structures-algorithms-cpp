#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Stack {
    T* arr;
    int size;
    int top;

public: 
    Stack(int s) {
        size = s;
        arr = new T[size];
        top = -1;
    }

    ~Stack() {
        delete[] arr;
    }

    void push(T val) {
        if(top == size-1) {
            cout << "Stack Overflow\n";
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

        top--;
    }

    T peek() {
        if(top == -1) {
            throw runtime_error("Stack is empty\n");
        }

        return arr[top];
    }

    void display() {
        for(int i=top; i>=0; i--){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};


int main() {

    Stack<int> s1(5);
    s1.push(10);
    s1.push(20);
    cout << "Integer Top: " << s1.peek() << endl;


    Stack<char> s2(5);
    s2.push('A');
    s2.push('B');
    cout << "Character Top: " << s2.peek() << endl;

    Stack<string> s3(5);
    s3.push("Hanifa");
    s3.push("AI");
    cout << "String Top: " << s3.peek() << endl;
    cout << "String : \n";
    s3.display();



    return 0;
}