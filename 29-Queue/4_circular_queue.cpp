#include <iostream>
using namespace std;

class CircularQueue {
    int* arr;
    int front;
    int rear;
    int size;

public:
    CircularQueue(int size) {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % size == front;
    }

    void enqueue(int val) {
        if(isFull()) {
            cout << "Queue overflowz\n";
            return;
        }

        // first element
        if(front == -1) {
            front = rear = 0;
        }
        else {
            rear = (rear + 1) % size;
        }

        arr[rear] = val;
    }

    void dequeue() {
        if(isEmpty()) {
            cout << "Queue underflow\n";
            return;
        }

        // single element case
        if(front == rear) {
            front = rear = -1;
        }
        else {
            front = (front + 1) % size;
        }
    }

    int getFront() {
        if(isEmpty()) return -1;
        return arr[front];
    }

    void display() {
        if(isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }

        int i = front;
        while(true) {
            cout << arr[i] << " ";
            if(i == rear)
                break;
            i = (i + 1) % size;
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();

    q.dequeue();
    q.dequeue();

    cout << "After two dequeue operations:\n";
    q.display();

    q.enqueue(60);
    q.enqueue(70);

    cout << "After two enqueue operations:\n";
    q.display();

    return 0;   
}