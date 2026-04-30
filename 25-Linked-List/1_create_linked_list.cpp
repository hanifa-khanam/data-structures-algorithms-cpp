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

    ~Node() {
        if(next != NULL) {
            delete next;
            next = NULL;
        }
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

    void push_back(int val) {
        Node* newNode = new Node(val); 

        if(head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
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

        if(head == NULL) {
            tail = NULL;
        }

    }

    void pop_back() {

        if(head == NULL) {
            cout << "Nothing to delete\n";
            return;
        }

        // if only one node 
        if(head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }

        // traverse to second last node
        Node* temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
    
        temp->next = NULL; 
        delete tail;
        tail = temp;
    }

    void insert(int val, int pos) {

        // insert at begining
        if(pos == 0) {
            push_front(val);
            return;
        }

        Node* newNode = new Node(val);
        Node* temp = head;

        // move to pos-1
        for(int i=0; i<pos-1; i++) {
            if(temp == NULL) {
                cout << "Invalid Position\n";
                return;
            }
            temp = temp->next;
        }

         // link nodes
        newNode->next = temp->next;
        temp->next = newNode;

         // update tail if needed
        if(newNode->next == NULL) {
            tail = newNode;
        }
    }

    int searchItr(int key) {
        Node* temp = head;
        int idx = 0;
         
        while(temp != NULL) {
            if(temp->data == key) {
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }

    void reverse() {
        Node* curr = head;
        Node* prev = NULL;

        while(curr != NULL) {
            Node* next = curr->next;
            curr->next = prev;

            // updations for next itr
            prev = curr;
            curr = next;
        }
        head = prev;
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

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.push_back(4);
    ll.push_back(5);

    ll.printList();

    ll.pop_front();
    ll.printList();

    ll.pop_back();
    ll.printList();

    ll.insert(100, 2);
    ll.printList();

    cout << ll.searchItr(3) << endl;

    ll.reverse();
    ll.printList();

    return 0;
} 