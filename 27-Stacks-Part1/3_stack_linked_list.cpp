#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Stack {
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    ~Stack() {
        while(top != NULL) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    void push(int val) {
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if(top == NULL) {
            cout << "Stack underflow.\n";
            return;
        }

        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int peek() {
        if(top == NULL) {
           cout << "Stack underflow.\n";
           return -1;
        }

        return top->data;
    }

    bool isEmpty() {
        return top == NULL;
    }

    void display() {
        Node* temp = top;
        while(temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

};

int main() {

    Stack sll;

    sll.push(1);
    sll.push(2);
    sll.push(3);
    sll.push(4);
    sll.push(5);

     sll.display();

    sll.pop();

    sll.display();

    cout << "top val: " << sll.peek() << endl;

    cout << "is empty? : " << sll.isEmpty() << endl; 

    return 0;
}