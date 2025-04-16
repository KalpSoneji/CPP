#include <iostream>
using namespace std;

class Student{

    int rno;
    string name;

public:

    void displayData(){
        cout << rno << "\t" << name << endl;
    }

    Student(int rno, string name){
        this->rno = rno;
        this->name = name;
    }

    Student(){
        rno = 1;
        name = "Kalp";
    }

};

int main(){

    Student s1;
    Student s2(2, "Vidhi");

    s1.displayData();
    s2.displayData();

}

/*Features of constructor: 
    1. It is a special member function of a class.
    2. It has the same name as the class.
    3. It does not have any return type.
    4. It is called when an object of the class is created.
    5. It is used to initialize the data members of the class.
    6. It can be overloaded.
*/