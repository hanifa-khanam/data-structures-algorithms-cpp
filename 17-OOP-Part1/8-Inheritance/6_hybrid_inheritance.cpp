#include <iostream>
using namespace std;

class Person {
public: 
    string name;

    void showName() {
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

class Teacher : public Person {
public:
    int salary;

    void showSalary() {
        cout << "Salary: " << salary << endl;
    }
};

class TeachingAssistant : public Student, public Teacher {
public:
    void display() {
        // Ambiguity: which Name?
        cout << "Student Name: " << Student::name << endl;
        cout << "Marks: " << marks << endl;

        cout << "Teacher Name: " << Teacher::name << endl;
        cout << "Salary: " << salary << endl;
    }
};


int main() {

    TeachingAssistant ta;

    ta.Student::name = "Hanifa";
    ta.Teacher::name = "Hanifa Khanam";

    ta.marks = 92;
    ta.salary = 30000;

    ta.display();

    return 0;
}