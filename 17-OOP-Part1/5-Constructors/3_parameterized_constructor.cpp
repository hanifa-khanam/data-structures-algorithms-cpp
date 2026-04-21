#include <iostream>
using namespace std;

class Student {
public:
    int age;

    Student(int a) {
        age = a;
        cout << "Parameterized constructor called\n";
    }

};

int main() {

    Student s1(21);
    cout << s1.age << endl;
    
    return 0;
}