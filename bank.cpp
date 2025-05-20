#include <iostream>
using namespace std;

class RBI {
    
    public:
    virtual void interest_rate(){
        cout << "RBI gives loan at 5% interest rate to other banks";
    }

};

class SBI : public RBI {

    public:
    void interest_rate(){
        cout << "SBI gives loan at 8% interest rate to citizens.";
    }
};

class ICICI : public RBI {
    
    public:
    void interest_rate(){
        cout << "ICICI gives loan at 15% interest rate to its customers.";
    }
};

class Axis : public RBI {
    
    public:
    void interest_rate(){
        cout << "Axis gives loan at 10% interest rate to its customers.";
    }
};

int main(){
    
    SBI sbi;
    ICICI icici;
    Axis axis;
    RBI *ptr;

    cout << "1.SBI\t2.ICICI\t3.Axis\n";
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        ptr = &sbi;
        ptr -> interest_rate();
        break;
    case 2:
        ptr = &icici;
        ptr -> interest_rate();
        break;
    case 3:
        ptr = &axis;
        ptr -> interest_rate();
        break;
    default:
        cout << "Invalid choice";
        break;
    }

}