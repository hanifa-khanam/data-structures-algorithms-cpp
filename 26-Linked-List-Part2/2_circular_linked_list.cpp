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

class CircularList {
public:
    Node* head;
    Node* tail;

    CircularList() {
        head = NULL;
        tail = NULL;
    }

    ~CircularList() {
        if(head == NULL) return;

        Node* curr = head->next;
        while(curr != NULL) {
            Node* next = curr->next;
            delete curr;
            curr = next;
        }
        delete head;
    }
    
    void push_front(int val) {
        Node* newNode = new Node(val);

        if(head == NULL) {
            head = tail = newNode;
            tail->next = head;
            return;
        }

        newNode->next = head;
        head = newNode;
        tail->next = head;
    }

    void push_back(int val) {
        Node* newNode = new Node(val);

        if(head == NULL) {
            head = tail = newNode;
            tail->next = head;
            return;
        }

        tail->next = newNode;
        tail = newNode;
        tail->next = head;
    }

    void pop_front() {
        if(head == NULL) {
            cout << "empty circular linked list\n";
            return;
        }

        if(head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }

        Node* temp = head;
        head = head->next;
        tail->next = head;

        delete temp;
    }

    void pop_back() {
        if(head == NULL) {
            cout << "empty circular linked list\n";
            return;
        }

        if(head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }

        Node* temp = head;
        while(temp->next != tail) {
            temp = temp->next;
        }

        delete tail;
        tail = temp;
        tail->next = head;
    }

    void insert(int val, int pos) {
        if(pos == 0) {
            push_front(val);
            return;
        }

        Node* newNode = new Node(val);
        
        Node* temp = head;
        for(int i=0; i<pos-1; i++) {
            if(temp == head) {
                cout << "invalid position\n";
                return;
            }
            temp = temp->next;
        }
        
        newNode->next = temp->next;
        temp->next = newNode;

        if(temp == tail) {
            tail = newNode;
            tail->next = head;
        }
    }

    void print() {
        if(head == NULL) {
            cout << "Empty circular linked list\n";
            return;
        }

        Node* temp = head;

        do {
            cout << temp->data << "->";
            temp = temp->next;
        } while(temp != head) ;

        cout << " (back to start) " << endl;
    }
};

int main() {

    CircularList cll;

    cll.push_front(5);
    cll.push_front(4);
    cll.push_front(3);
    cll.push_front(2);
    cll.push_front(1);

    cll.print(); 

    cll.pop_front();
    cout << "After pop_front:\n";
    cll.print();


    cll.insert(23, 2);
    cll.print();

    return 0;
}