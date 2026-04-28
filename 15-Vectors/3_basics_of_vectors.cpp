#include <iostream>
#include <vector>
using namespace std;


int main() {

    vector<int> v1;  // empty vector
    vector<int> v2 = {1, 2, 3, 4, 5};  // intialized
    vector<int> v3(5, -1);  // 5 elemens, all -1

    cout << "v1 size: " << v1.size() << endl;
    cout << "v2 size: " << v2.size()<< endl;
    cout << "v3 size: " << v3.size() << endl;

    cout << "Elements of v2: ";
    for(int i=0; i<v2.size(); i++) {
        cout << v2[i] << " ";
    }
    cout << endl;


    cout << "Elements of v3: ";
    for(int i=0; i<v3.size(); i++) {
        cout << v3[i] << " ";
    }
    cout << endl;


    // vector implementaion in memory
    vector<int> vec = {1, 2, 3, 4};

    cout << "size vec: " << vec.size() << endl;
    cout << "capacity vec: " << vec.capacity() << endl;

    vec.push_back(5);  // add 5 at the end
    cout << "size after adding new element: " << vec.size() << endl;
    cout << "capacity after adding new element: " << vec.capacity() << endl;

    return 0;
}