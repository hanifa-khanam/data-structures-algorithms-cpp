#include <iostream>
#include <stack>
using namespace std;

void pushAtBottom(stack<int> &s, int val) {
    if(s.empty()) {
        s.push(val);
        return;
    }

    int temp = s.top();
    s.pop();

    pushAtBottom(s, val);
    s.push(temp);
}

void reverseStack(stack<int> &s) {
    // base case
    if(s.empty()) {
        return;
    }

    int top_temp = s.top();
    s.pop();

    // recursively call
    reverseStack(s);


    pushAtBottom(s, top_temp);
}

void display(stack<int>s) {
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    cout << endl;
}

int main() {

    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);

    cout << "before pushAtBotttom: \n";
    display(s);

    pushAtBottom(s, 4);

    cout << "After pushAtBottom:\n";
    display(s);

    cout << "Before reverse stack:\n";
    display(s);

    reverseStack(s);
    cout << "After reverse stack:\n";
    display(s);

    return 0;
}