#include <iostream>
using namespace std;

class User {
private:
    int id;
    string password;

public:
    string username;

    User(int id) {
        this->id = id;
    }

    // Setter 
    void setPassword(string password) {
        this->password = password;
    }

    // Getter 
    string getPassword() {
        return password;
    }
};

int main() {

    User u1(101); 
    u1.setPassword("250hani");
    cout << u1.getPassword() << endl;


    return 0;
}