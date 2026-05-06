#include <iostream>
#include <list>
#include <string>
using namespace std;

template <typename T>
class Stack {
    list<T> ll;

public:
    void push(T val) {
        ll.push_front(val);
    }

    void pop() {
        ll.pop_front();
    }

    T peek() {
        return ll.front();
    }

    bool isEmpty() {
        return ll.size() == 0;
    }
};

int main() {

    Stack<int> s;
    
    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isEmpty()) {
        cout << s.peek() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}