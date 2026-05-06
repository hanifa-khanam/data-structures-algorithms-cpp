#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Node {
public:
    T data;
    Node<T>* next;

    Node(T val) {
        data = val;
        next = NULL;
    } 
};

template <typename T>
class Stack {
    Node<T>* top;
    
public:
    Stack() {
        top = NULL;
    }

    ~Stack() {
        while(top != NULL) {
            Node<T>* temp = top;
            top = top->next;
            delete temp;
        }
    }

    void push(T val) {
        Node<T>* newNode = new Node<T>(val);
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if(top == NULL) {
            cout << "Stack underflow.\n";
            return;
        }

        Node<T>* temp = top;
        top = top->next;
        delete temp;
    }

    T peek() {
        if(top == NULL) {
            throw runtime_error ("Stack underflow\n");
        }

        return top->data;
    }

    bool isEmpty() {
        return top == NULL;
    }

    void display() {
        Node<T>* temp = top;
        while(temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {

    Stack<int> intsl;
    intsl.push(5);
    intsl.push(4);
    intsl.push(3);
    intsl.push(2);
    intsl.push(1);
    intsl.display();
    intsl.pop();
    intsl.display();
    cout << "Top of Integer stack: " << intsl.peek() << endl;

    Stack<string> strsl;
    strsl.push("coding");
    strsl.push("C++");
    strsl.push("In");
    strsl.push("DSA");
    strsl.push("Learning");
    strsl.display();
    strsl.pop();
    strsl.display();
    cout << "Top of String stack: " << strsl.peek() << endl;

    return 0;
}