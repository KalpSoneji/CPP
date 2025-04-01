#include <iostream>
#include <string>
using namespace std;

class Student {

private:
    int rollno;
    string name;
    int std;

public:

    inline void scanData() {
        cout << "Enter roll number: ";
        cin >> rollno;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter standard: ";
        cin >> std;
    }

    void displayHeading() {
        cout << "RNo\tName\tStd" << endl;
    }

    inline void displayData() {
        cout << rollno << "\t" << name << "\t" << std << endl;
    }
};

int main() {

    Student s[3];
    int i;

    for(int i = 0; i < 3; i++) 
        s[i].scanData();
    
    s[i].displayHeading();

    for(int i = 0; i < 3; i++) 
        s[i].displayData();

}