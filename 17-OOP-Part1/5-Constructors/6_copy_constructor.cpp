#include <iostream>
using namespace std;

class Student {
public:
    string name;
    string id;

    // parameterized constructor
    Student(string name, string id) {
        this->name = name;
        this->id = id;
    }

    // custom copy constructor
    Student(Student &original) {
        cout << "copying..\n";
        name = original.name;
        id = original.id;
    }
};

int main () {
    Student s1("Hanifa", "120");

    Student s2(s1);
    cout << s2.name << endl;
    cout << s2.id << endl;

    return 0;
}