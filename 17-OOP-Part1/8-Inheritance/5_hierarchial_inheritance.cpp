#include <iostream>
using namespace std;

class Person {
public:
    string name;
    
    void showName() {
        cout << "Name: " << name << endl;
    }
};

class Student: public Person {
public:
    int marks;

    void showMarks() {
        cout << "Marks: " << marks << endl;
    }
};

class Teacher: public Person {
public:
    int salary;

    void showSalary() {
        cout << "Salary: " << salary << endl;
    }
};

int main() {

    Student s;
    s.name = "Hanifa";
    s.marks = 90;

    Teacher t;
    t.name = "Khanam";
    t.salary = 50000;

    s.showName();
    s.showMarks();

    t.showName();
    t.showSalary();

    return 0;
}