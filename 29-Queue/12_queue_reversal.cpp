#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reversedQueue(queue<int> &Q) {
    stack<int> S;

    while(!Q.empty()) {
        S.push(Q.front());
        Q.pop();
    }

    while(!S.empty()) {
        Q.push(S.top());
        S.pop();
    }
}

int main() {

    queue<int> Q;
    for(int i=1; i<=5; i++) {
        Q.push(i);
    }


    reversedQueue(Q);

    for(int i=1; i<=5; i++) {
        cout << Q.front() << " ";
        Q.pop();
    }
    cout << endl;

    return 0;
}