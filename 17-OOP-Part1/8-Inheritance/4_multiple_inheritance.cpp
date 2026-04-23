#include <iostream>
using namespace std;

class Student {
public:
    void study() {
        cout << "Studying..\n";
    }
};

class Teacher {
public:
    void teach() {
        cout << "Teaching...\n";
    }
};

class TeachingAssistant : public Student, public Teacher {
public:
    void assist() {
        cout << "Assisting...\n";
    }
};

int main() {

    TeachingAssistant ta;
    ta.study();
    ta.teach();
    ta.assist();

    return 0;
}