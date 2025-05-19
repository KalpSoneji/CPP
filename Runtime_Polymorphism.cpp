#include <iostream>
using namespace std;

class Person {

public:
    void getBehave(){
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
            s.getBehave();
            break;
        
        case 2:
            o.getBehave();
            break;
        
        case 3:
            p.getBehave();
            break;

        case 4:
            h.getBehave();
            break;

        default:
            cout << "Invalid Choice";
            break;
    }

}