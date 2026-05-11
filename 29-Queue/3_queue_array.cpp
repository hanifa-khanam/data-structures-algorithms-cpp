#include <iostream>
using namespace std;

class Queue {
    int* arr;
    int front;
    int rear;
    int size;

public:
    Queue(int s) {
        size = s;
        arr = new int[size];
        front = 0;
        rear = -1;
    }

    ~Queue() {
        delete[] arr;
    }

    bool isempty() {
        return rear < front;
    }

    bool isFull() {
        return rear == size -1;
    }

    void enqueue(int val) {
        if(isFull()) {
            cout << "Queue Overflow\n";
            return;
        }

        rear++;
        arr[rear] = val;
    }

    void dequeue() {
        if(isempty()) {
            cout << "Queue Underflow\n";
            return;
        }

        front++;
    }

    int getFront() {
        if(isempty()) {
            cout << "Queue Underflow\n";
            return -1;
        }

        return arr[front];
    }

    void display() {
        if(isempty()) {
            cout << "Queue Underflow\n";
            return;
        }
        
        for(int i=front; i<=rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};


int main() {

    Queue q(5);

    cout << "is empty: " << (q.isempty()? "yes" : "no") << endl;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();
    cout << "is Full: " << (q.isFull()? "yes" : "no") << endl;


    q.dequeue();

    cout << "After popping:\n";
    q.display();

    cout << "Front: " << q.getFront() << endl;
    return 0;
}