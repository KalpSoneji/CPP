#include <iostream>
using namespace std;

class Calc{

    int num1, num2;

public:
    
    void setdata(int num1, int num2){
        this -> num1 = num1;
        this -> num2 = num2;
    }

    void displaydata(){

        cout << "\nNumber 1: " << num1 << "\tNumber 2: " << num2 << endl;

    }

    friend void swap (Calc &c);
    // friend void swap (Calc &obj); both works

};

void swap(Calc &obj){

    int temp;
    temp = obj.num1;
    obj.num1 = obj.num2;
    obj.num2 = temp;

}

int main(){

    Calc c;

    c.setdata(10, 20);
    c.displaydata();

    swap(c);
    c.displaydata();

}

// obj and c can be different names and yet it will work
// the friend fnc when called will have access to the private members of the class