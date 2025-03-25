#include <iostream>
using namespace std;

class Student{
    public:
        int rno;
        char name[30];
        int std;
};

int main(){

    Student s;

    cout << "Enter rno, name and std: ";
    cin >> s.rno >> s.name >> s.std;

    cout << s.rno << "\t" << s.name << "\t" << s.std << endl;

}