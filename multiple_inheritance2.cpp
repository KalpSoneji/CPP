#include <iostream>
using namespace std;

class Person {
protected:
    int age;
    string name;

public:
    void setData(int a, string n) {
        age = a;
        name = n;
    }
};

class Academic : virtual public Person {
protected:
    int perc;
    char grade;

public:
    void setResult(int p, char g) {
        perc = p;
        grade = g;
    }
};

class Student : public Academic {
public:
    void display() {
        cout << "Name: " << name;
        cout << "\nAge: " << age;
        cout << "\nPercentage: " << perc;
        cout << "\nGrade: " << grade << endl;
    }
};

int main() {
    Student s;
    s.setData(20, "Kalp Soneji");
    s.setResult(95, 'A');
    s.display();
    return 0;
}