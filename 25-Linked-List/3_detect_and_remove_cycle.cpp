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

class List {
public:
    Node* head;
    Node* tail;

    List() {
        head = NULL;
        tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);

        if(head == NULL) {
            head = tail = newNode;
            return;
        }

        newNode->next = head;
        head = newNode;
    }

    void pop_front() {
        if(head == NULL) {
            cout << "Nothing to delete\n";
            return;
        }

        Node* temp = head;
        head = head->next;

        temp->next = NULL;
        delete temp;
    }

    void printLL() {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    bool isCycle(Node* head) {
        Node* slow = head;
        Node* fast = head;

        while(fast != NULL && fast->next != NULL) {
            slow = slow->next; // +1
            fast = fast->next->next; // +2

            if(slow == fast) {
                cout << "cycle exists\n";
                return true;
            }
        }
        cout << "cycles doesn't exist\n";
        return false;
    }

    void removeCycle(Node* head) {
        Node* slow = head;
        Node* fast = head;
        
        //  detect cycle
        bool cycle = false;
        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {
                cycle = true;
                break;
            }
        }

        if(!cycle) {
            cout << "NO cycle found\n";
            return;
        }

        // find start of cycle
        slow = head;
        // special case : cycle starts at head (tail -> head)
        if(slow == fast) { 
            while(fast->next != slow) {
                fast = fast->next;
            }
            fast->next = NULL; // remove cycle
            return;
        }
       
        // Normal case
        Node* prev = fast;
        while(slow != fast) {
            slow = slow->next;
            prev = fast;
            fast = fast->next;
        }
        //  break cycle
        prev->next = NULL;
    
    }

};

int main() {

    List ll;

    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.tail->next = ll.head;
 
    ll.isCycle(ll.head);

    ll.removeCycle(ll.head);

    ll.printLL();

    return 0;
}