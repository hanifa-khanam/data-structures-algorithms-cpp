#include <iostream>
#include <vector>
using namespace std;


int main() {

    // declaration & intialization
    vector<int> v = {10, 20, 30};

    cout << "Initial Vector\n";
    for(int x: v) {
        cout << x << " ";
    }
    cout << endl;
     
    // push_back (add element at end)
    v.push_back(40);
    v.push_back(50);

    cout << "After push_back: \n";
    for(int x: v) {
        cout << x << " ";
    }
    cout << endl;

    // pop_back (remove last element) 
    v.pop_back();

    cout << "After pop_back:\n";
    for(int x: v) {
        cout << x << " ";
    }
    cout << endl;

    // size
    cout << "Size: " << v.size() << endl;

    // capacity
    cout << "Capacity: " << v.capacity() << endl;

    // access elements
    cout << "Element at index 1 (v[1]): " << v[1] << endl;
    cout << "Element at index 1 (at(1)): " << v.at(1) << endl;

    // insert (insert at position) 
    v.insert(v.begin()+1, 99);

    cout << "After insert at index 1:\n";
    for(int x: v) {
        cout << x << " ";
    }
    cout << endl;

    // erase (remove element at position)
    v.erase(v.begin()+2);

    cout << "After erase at index 2:\n";
    for(int x: v) cout << x << " ";
    cout << endl;

    // front() and back()
    cout << "Front element: " << v.front() << endl;
    cout << "Back element: " << v.back() << endl;

    // empty
    cout << "Is vector empty? " << (v.empty()? "yes" : "No") << endl;

    // clear
    v.clear();
    cout << "After clear, size: " << v.size() << " capacity: " << v.capacity() << endl;


    return 0;
}