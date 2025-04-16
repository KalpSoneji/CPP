#include <iostream>
using namespace std;

class Student{

    int rno, marks;
    string name;

public:

    void displayData(){
        cout << rno << "\t" << name << "\t" << marks << endl;
    }

    Student(){
        rno = 1;
        name = "Kalp";
        marks = 90;
    }

    Student (Student &s){
        rno = s.rno;
        name = s.name;
        marks = s.marks;
    }

};

int main(){

    Student s1;
    s1.displayData();
    
    Student s2(s1);
    s2.displayData();

}