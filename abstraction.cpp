#include <iostream>
using namespace std;

class Person {
    
    public:
    virtual void getbehave() = 0;

};

class School : public Person {

    public:
    void getbehave(){
        cout << "School behaviour - School getbehave()\n";
    }
};

class Org : public Person {

    public:
    void getbehave(){
        cout << "Organisation behaviour - Organisation getbehave()\n";
    }
};

class Publicplace : public Person {

    public:
    void getbehave(){
        cout << "Public place behaviour - Public place getbehave()\n";
    }
};

class Home : public Person {

    public:
    void getbehave(){
        cout << "Home behaviour - Home getbehave()\n";
    }
};

int main(){

    Person *ptr;
    School s;
    Org o;
    Publicplace p;
    Home h;

    cout << "1. School\t2. Organisation\t3. Public place\t4. Home\n";
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        ptr = &s;
        ptr -> getbehave();
        break;

    case 2:
        ptr = &o;
        ptr -> getbehave();
        break;

    case 3:
        ptr = &p;
        ptr -> getbehave();
        break;

    case 4:
        ptr = &h;
        ptr -> getbehave();
        break;
    
    default:
        cout << "Invalid choice\n";
        break;
    }

}
