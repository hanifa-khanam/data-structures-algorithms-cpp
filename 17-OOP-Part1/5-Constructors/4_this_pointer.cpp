#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student(string name, int age) {
        this->name = name;
        this->age = age;
        cout << "constructor called\n";
    }

    string getName() {
        return name;
    }

    void display() {
        cout << "Name: " << this->name << endl;  
        cout << "Age: " << this->age << endl;  
    }

};

int main() {

    Student s1("Hanifa", 21);
    cout << s1.getName() << endl;
    s1.display();

    return 0;
}