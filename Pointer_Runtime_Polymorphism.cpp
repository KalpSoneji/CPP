#include <iostream>
using namespace std;

class Person {

public:
    virtual void getBehave(){
        cout << "class Person - getBehave()";
    }
};

class School : public Person {

public:
    void getBehave(){
        cout << "class School - getBehave()";
    }
};

class Org : public Person {
    
public:
    void getBehave(){
        cout << "class Org - getBehave()";
    }
};

class publicPlace : public Person {
    
    public:
        void getBehave(){
            cout << "class publicPlace - getBehave()";
        }
};

class Home : public Person {
    
    public:
        void getBehave(){
            cout << "class Home - getBehave()";
        }
};

int main(){

    Person *ptr;
    School s;
    Org o;
    publicPlace p;
    Home h;
    int choice;

    cout << "1. School\t2. Organisation\t3. PublicPlace\t4. Home";
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice){
        
        case 1:
            ptr = &s;
            ptr -> getBehave();
            break;
        
        case 2:
            ptr = &o;
            ptr -> getBehave();
            break;
        
        case 3:
            ptr = &p;
            ptr -> getBehave();
            break;

        case 4:
            ptr = &h;
            ptr -> getBehave();
            break;

        default:
            cout << "Invalid Choice";
            break;
    }

}