#include <iostream>
using namespace std;

class Student{

    int rno, std;
    string name;

public:

    void setdata(int rno, string name, int std);

    void display();

};

inline void Student :: setdata(int rno, string name, int std){
    this->rno = rno;
    this->name = name;
    this->std = std;
}

inline void Student :: display(){
    cout << rno << "\t" << name << "\t" << std << endl;
}

int main(){

    Student s1, s2, s3;

    s3.setdata(1, "Kalp", 12);
    s1.setdata(2, "Vidhi", 11);
    s2.setdata(3, "Jenil", 10);
    
    s3.display();
    s1.display();
    s2.display();

}