#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class DoublyList {
public:
    Node* head;
    Node* tail;

    DoublyList() {
        head = NULL;
        tail = NULL;
    }

    ~DoublyList() {
        Node* curr = head;
        while(curr != NULL) {
            Node* next = curr->next;
            delete curr;
            curr = next;
        }
    }

    void push_front(int val) {
        Node* newNode = new Node(val);

        if(head == NULL) {
            head = tail = newNode;
            return;
        }

        newNode->next = head;
        head->prev = newNode;
        newNode->prev = NULL;
        head = newNode;
    }

    void push_back(int val) {
        Node* newNode = new Node(val);

        if(head == NULL) {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        tail->next = NULL;
    }

    void pop_front() {
        if(head == NULL) {
            cout << "Nothing to delete. Empty Doubly Liked List.\n";
            return;
        }

        Node* temp = head;
        head = head->next;
        if(head != NULL) {
            head->prev = NULL;
        }
        
        temp->next = NULL;
        delete temp;

        if(head == NULL) {
            tail = NULL;
        }
    }

    void pop_back() {
        if(head == NULL) {
            cout << "Empty doubly linked list\n";
            return;
        }

        if(head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }

        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;    

        delete temp;
    }

    void insert(int val, int pos) {
        if(pos == 0) {
            push_front(val);
            return;
        }

        Node* newNode = new Node(val);

        Node* temp = head;
        for(int i=0; i<pos-1; i++) {
            if(temp->next == NULL) {
                cout << "Invalid position\n";
                return;
            }
            temp = temp->next;
        }

        newNode->next = temp->next;
        newNode->prev = temp;
        if(temp->next != NULL) {
            temp->next->prev = newNode;
        }
        temp->next = newNode;
        if(newNode->next == NULL) {
            tail = newNode;
            tail->next = NULL;
        }
    }

    void reverse() {
        Node* curr = head;

        while(curr != NULL) {
            swap(curr->next, curr->prev);
            curr = curr->prev;
        }
        swap(head, tail);
    }

    void printLL() {
        Node* temp = head;

        while(temp != NULL) {
            cout << temp->data << " <=> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {

    DoublyList dbll;

    dbll.push_front(4);
    dbll.push_front(3);
    dbll.push_front(2);
    dbll.push_front(1);

    dbll.push_back(5);

    dbll.printLL();

    dbll.pop_front();
    cout << "After pop_front: \n"; 
    dbll.printLL();

    dbll.pop_back();
    cout << "After pop_back: \n"; 
    dbll.printLL();

    dbll.insert(10, 1);
    cout << "After inserting: \n";
    dbll.printLL();

    dbll.reverse();
    cout << "After reversing: \n";
    dbll.printLL();

    return 0;
}
