#include <iostream>
#include <list>
#include <iterator> 
using namespace std;

//Iterators in C++ are objects that allow us to traverse through the elements of a container (like arrays, vectors, lists, etc.) in a sequential manner.

void printLL(list<int> ll) {
    list<int>:: iterator itr;
    for(itr = ll.begin(); itr != ll.end(); itr++) {
        cout << (*itr) << " -> ";
    }
    cout << "NULL" << endl;
}

int main() {

    list<int> ll;

    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(10);
    ll.push_back(20);

    cout << "After push operations: ";
    printLL(ll);


    ll.pop_front();
    ll.pop_back();

    cout << "After pop operations: ";
    printLL(ll);


    cout << "Front element: " << ll.front() << endl;
    cout << "Back element: " << ll.back() << endl;


    cout << "Size: " << ll.size() << endl;
    cout << "Is empty? " << (ll.empty() ? "Yes" : "No") << endl;


    // insert at position
    auto itr = ll.begin();
    advance(itr, 1);     // move iterator
    ll.insert(itr, 99);

    cout << "After insert: ";
    printLL(ll);

    // erase element
    itr = ll.begin();
    advance(itr, 1);
    ll.erase(itr);

    cout << "After erase: ";
    printLL(ll);

    // reverse
    ll.reverse();
    cout << "After reverse: ";
    printLL(ll);
    

    // sort
    ll.sort();
    cout << "After sort: ";
    printLL(ll);
    
    // remove specific value
    ll.remove(10);
    cout << "After removing 10: ";
    printLL(ll);

    // clear
    ll.clear();
    cout << "After clear, is empty? " << (ll.empty() ? "Yes" : "No") << endl;

    return 0;
}