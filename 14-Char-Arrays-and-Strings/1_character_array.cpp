#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char arr[5] = {'a', 'b', 'c', 'd', '\0'};
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr << endl;

    cout << "Enter Sentence: ";
    char sentence[50];
    cin.getline(sentence, 50);

    cout << "Sentence: " << sentence << endl;
    cout << "Length: " << strlen(sentence) << endl;
    

    return 0;
}