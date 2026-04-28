#include <iostream>
using namespace std;

class Student {
    string name;
    float cgpa;

public:
    void getPercentage() {
        cout << (cgpa * 10) << "% \n";
    }

    // setters
    void setName(string nameVal) {
        name = nameVal;
    }

    void setCgpa(float cgpaVal) {
        cgpa = cgpaVal;
    }

    // Getters 
    string getName() {
        return name;
    }

    float getCgpa() {
        return cgpa;
    }
};

int main() {
    Student s1;
    s1.setName("Hanifa");
    s1.setCgpa(3.25);

    cout << s1.getName() << endl;
    cout << s1.getCgpa() << endl;


    return 0;
}