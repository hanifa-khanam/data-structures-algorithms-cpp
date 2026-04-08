#include <iostream>
using namespace std;

class Student {
public:
    // attributes(properties)
    string name;
    float cgpa;

    //Methods(function)
    void getPercentage() {
        cout << "Percentage: " << (cgpa * 10) << "%\n";
    }
};

int main() {

    // object
    Student s1;
    s1.name = "Hanifa";
    s1.cgpa = 3.25;
    s1.getPercentage();

    return 0;
}