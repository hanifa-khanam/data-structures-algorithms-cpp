#include <iostream>
#include <deque>
using namespace std;

class Queue {
    deque<int> dq;

public: 
    void enqueue(int val) {
        dq.push_back(val);
    }

    void dequeue() {
        if(dq.empty()) {
            cout << "Queue Underflow\n";
            return;
        }

        dq.pop_front();
    }

    int front() {
        if(dq.empty()) {
            cout << "Queue Underflow\n";
            return -1;
        }

        return dq.front();
    }
};

int main() {


    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front: " << q.front() << endl;

    q.dequeue();

    cout << "Front after dequeue: " << q.front() << endl;


    return 0;
}