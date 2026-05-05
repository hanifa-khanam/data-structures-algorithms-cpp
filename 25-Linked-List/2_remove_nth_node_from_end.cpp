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
    Node* head;
    Node* tail;

public:
    List() {
        head = NULL;
        tail = NULL;
    }

    ~List() {
        if(head != NULL) {
            delete head;
            head = NULL;
        }
    }

    void push_front(int val) {
        Node* newNode = new Node(val);
        
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    int getSize() {
        Node* temp = head;
        int sz = 0;

        while(temp != NULL) {
            temp = temp->next;
            sz++;
        }

        return sz;
    }

    void removeNth(int n) {
        int size = getSize();

        if(n > size || n <= 0) {
            cout << "Invalid n\n";
            return;
        }

        // delete head
        if(n == size) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* prev = head;
        for(int i=0; i<(size-n-1); i++) {
            prev = prev->next;
        }

        Node* toDel = prev->next;
        cout << "going to delete: " << toDel->data << endl;

        prev->next = toDel->next;
        delete toDel;
    }

        void printList() {
        Node* temp = head;

        while(temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

};

int main() {

    List ll;

    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.printList();

    int n;
    cout << "Enter number of node: ";
    cin >> n;
    ll.removeNth(n);
    cout << "After removing " << n << " node: \n";
    ll.printList();

    return 0;
} 