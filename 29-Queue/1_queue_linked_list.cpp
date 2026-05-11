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

class Queue {
    Node* front;
    Node* rear;

public:
    Queue() {
        front = NULL;
        rear = NULL;
    }

    void enqueue(int val) {
        Node* newNode = new Node(val);

        if(front == NULL) {
            front = rear = newNode;
            return;
        }

        rear->next = newNode;
        rear = newNode;
    }

    void dequeue() {
        if(front == NULL) {
            cout << "Emtpy Queue\n";
            return;
        }

        Node* temp = front;
        front = front->next;
        delete temp;

        if(front == NULL) {
            rear = NULL;
        }
    }

    int getFront() {
        if(front == NULL) {
            cout << "Emtpy Queue\n";
            return -1;
        }

        return front->data;
    }

    bool empty() {
        return front == NULL;
    }

    void display() {
        if(front == NULL) {
            cout << "Emtpy Queue\n";
            return;
        }

        Node* temp = front;
        while(temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};


int main() {

    Queue q;
    
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();
    cout << "After poping: \n";
    q.display();

    cout << "Front: " << q.getFront() << endl;

    return 0;
}