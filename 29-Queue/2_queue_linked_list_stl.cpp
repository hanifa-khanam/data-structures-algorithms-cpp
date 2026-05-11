#include <iostream>
#include <string>
#include <list>
using namespace std;

template <typename T>
class Queue {
    list<T> ll;

public:
    void enqueue(T val) {
        ll.push_back(val);
    }

    void dequeue() {
        if(ll.empty()) {
            cout << "Queue Underflow\n";
            return;
        }

        ll.pop_front();
    }

    T getFront() {
        if(ll.empty()) {
            throw runtime_error ("Queue Underflow\n");
        }

        return ll.front();
    }

    void display() {
        if(ll.empty()) {
            cout << "Queue Underflow\n";
            return;
        }

       for(T val: ll) {
        cout << val << " ";
       }
       cout << endl;
    }

};


int main() {

    Queue<char> q1;
    q1.enqueue('C');
    q1.enqueue('D');
    q1.enqueue('S');
    q1.enqueue('A');
    q1.display();
    q1.dequeue();
    cout << "After poping Front: " << q1.getFront() << endl;
    q1.display();


    Queue<string> q2;
    q2.enqueue("C++");
    q2.enqueue("DSA");
    q2.enqueue("AI/ML");
    q2.enqueue("fronted");
    q2.display();
    q2.dequeue();
    cout << "After poping Front: " << q2.getFront() << endl;
    q2.display();


    return 0;
}