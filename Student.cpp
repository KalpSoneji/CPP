#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollno;
    string name;
    int std;

public:

    void scanData() {
        cout << "Enter roll number: ";
        cin >> rollno;
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter standard: ";
        cin >> std;
    }

    void displayData() {
        cout << "Roll Number: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Standard: " << std << endl;
    }
};

int main() {

    Student s1, s2, s3;

    s1.scanData();
    s2.scanData();
    s3.scanData();

    s1.displayData();
    s2.displayData();
    s3.displayData();

}