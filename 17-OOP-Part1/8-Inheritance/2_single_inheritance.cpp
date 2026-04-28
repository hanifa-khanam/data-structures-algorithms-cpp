#include <iostream>
using namespace std;

class Person {
public: 
    string name;

    void display() {
        cout << "Name: " << name << endl;
    }
};


class Student : public Person {
public: 
    int marks;

    void showMarks() {
        cout << "Marks: " << marks << endl;
    }
};

int main() {

    Student s;
    s.name = "Khanam";
    s.marks = 95;

    s.display();  // inherited from person
    s.showMarks(); // owne

    return 0;
}