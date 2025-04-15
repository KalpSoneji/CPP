#include <iostream>
using namespace std;

class Student {

    int rno, marks;
    string name;

public:

    Student(){

        cout << "Start of the constructor\n";
        rno = 73;
        marks = 90;
        name = "Kalp";
        cout << "Assigned the values, end of the constructor\n";

    }

    void displayData(){
        cout << rno << "\t" << name << "\t" << marks << endl;
    }

};

int main(){

    Student s1;
    
    s1.displayData();

}