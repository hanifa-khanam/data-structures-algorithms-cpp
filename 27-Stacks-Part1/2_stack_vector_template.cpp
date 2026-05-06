#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <typename T>
class Stack {
    vector<T> vec;
public:
    void push(T val) {
        vec.push_back(val);
    }

    void pop() {
        if(isEmpty()) {
            cout << "Stack underflow.\n";
            return;
        }
        vec.pop_back();
    }

    T top() {
        if(isEmpty()){
            throw runtime_error("Stack is empty.\n");
        }
        return vec.back();    
    }

    bool isEmpty() {
        return vec.empty();
    }

    void display() {
        for(int i=vec.size()-1; i>=0; i--) {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
};

int main() {

    // integer stack 
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    cout << "Top of Integer Stack: " << intStack.top() << endl;
    cout << "Integer Stack: \n";
    intStack.display();


    // char stack
    Stack<char> charStack;
    charStack.push('A');
    charStack.push('B');
    charStack.push('C');
    cout << "Top of Char Stack: " << charStack.top() << endl;
    cout << "Char Stack: \n";
    charStack.display();   

    // string stack
    Stack<string> strStack;
    strStack.push("Coding");
    strStack.push("C++");
    strStack.push("Data structure & Algorithms");
    cout << "Top of String Stack: " << strStack.top() << endl;
    strStack.display();  
    
    return 0;
}