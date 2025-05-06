#include <iostream>
using namespace std;

class Person{

protected:
    string name;

};

class Student : Person {

private: 
    int rno;
    int std;
    int marks;

public:
    void scandata(){
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Student Roll No: ";
        cin >> rno;
        cout << "Enter Student Standard: ";
        cin >> std;
        cout << "Enter Student Marks: ";
        cin >> marks;
    }

    void dispdata(){
        cout << "Student Name: " << name << endl;
        cout << "Student Roll No: " << rno << endl;
        cout << "Student Standard: " << std << endl;
        cout << "Student Marks: " << marks << endl;
    }
};

int main(){

    Student s;
    s.scandata();
    s.dispdata();

}