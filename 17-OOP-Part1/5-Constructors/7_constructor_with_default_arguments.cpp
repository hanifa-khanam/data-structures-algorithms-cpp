#include <iostream> 
using namespace std;

class Student {
public:
    int age;

    Student(int a=5) {
        age = a;
        cout << "Constructor with default Argument called\n";
    }

};

int main() {

    Student s1;     // uses default value
    Student s2(21);  // uses given value

    cout << s1.age << endl;
    cout << s2.age << endl;

    return 0;
}