#include <iostream>
using namespace std;

class Student {

    int rno, marks;
    string name;

public:

    Student(int rno, string name, int marks){
        cout << "Constructor called" << endl;
        this->rno = rno;
        this->name = name;
        this->marks = marks;
        cout << "Assigning values finished\n";
    }

    void displayData(){
        cout << rno << "\t" << name << "\t" << marks << endl;
    }

};

int main(){

    Student s1(73, "Kalp", 99);
    Student s2(62, "Vidhi", 95);

    s2.displayData();
    s1.displayData();

}